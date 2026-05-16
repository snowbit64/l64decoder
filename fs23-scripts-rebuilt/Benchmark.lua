Benchmark = {}
local Benchmark_mt = Class(Benchmark)

function Benchmark.new(customMt)
	local self = setmetatable({}, customMt or Benchmark_mt)
	self.isRunning = false
	self.currentCamPath = nil
	self.hasFinished = false
	self.time = 0
	self.delayToAiVehicle = {}
	self.fields = {}
	self.camPaths = {}
	self.idToVehicle = {}
	self.benchmarkCam = nil

	if g_isDevelopmentVersion then
		addConsoleCommand("gsBenchmark", "Starts a benchmark sequence with camera flight and working vehicles", "consoleCommandBenchmark", self)
	end

	return self
end

function Benchmark:delete()
	removeConsoleCommand("gsBenchmark")
	if self.benchmarkCam ~= nil then
		delete(self.benchmarkCam)
		self.benchmarkCam = nil
	end
end

function Benchmark:load()
	local mapXML = loadXMLFile("MapXML", g_currentMission.missionInfo.mapXMLFilename)
	local benchmarkFilename = getXMLString(mapXML, "map.benchmark#filename")
	delete(mapXML)

	self.idToVehicle = {}
	self.delayToAiVehicle = {}
	self.fields = {}
	self.camPaths = {}

	if benchmarkFilename ~= nil then
		local benchmarkXmlFilepath = Utils.getFilename(benchmarkFilename, g_currentMission.baseDirectory)
		local xmlFile = XMLFile.load("benchmarkXml", benchmarkXmlFilepath)
		if xmlFile == nil then
			Logging.error("Could not load benchmark xml %s", benchmarkXmlFilepath)
			return false
		end

		log("Loading benchmark config")
		local fov = xmlFile:getFloat("benchmark.camera#fieldOfView") or 70
		log("camera field of view", fov)

		if self.benchmarkCam ~= nil then
			delete(self.benchmarkCam)
		end
		self.benchmarkCam = createCamera("benchmarkCam", math.rad(fov), 1, 10000)
		link(getRootNode(), self.benchmarkCam)

		local vehiclesFilename = xmlFile:getString("benchmark.vehicles#xmlFilename")
		self.benmarkVehiclesXmlFilepath = Utils.getFilename(vehiclesFilename, g_currentMission.baseDirectory)

		xmlFile:iterate("benchmark.aiStarts.aiStart", function(_, key)
			local vehicleId = xmlFile:getInt(key .. "#vehicleId")
			local startDelay = xmlFile:getFloat(key .. "#startDelay")
			local delayMs = startDelay * 1000
			if self.delayToAiVehicle[delayMs] == nil then
				self.delayToAiVehicle[delayMs] = {}
			end
			table.insert(self.delayToAiVehicle[delayMs], vehicleId)
		end)

		xmlFile:iterate("benchmark.fields.field", function(_, key)
			local number = xmlFile:getInt(key .. "#number")
			local fruitType = xmlFile:getString(key .. "#fruitType")
			local growthState = xmlFile:getInt(key .. "#growthState")
			table.insert(self.fields, {number, fruitType, growthState})
		end)

		xmlFile:iterate("benchmark.cameraPaths.cameraPath", function(_, key)
			local i3dFilename = xmlFile:getString(key .. "#i3dFilename")
			local fullI3dFilename = Utils.getFilename(i3dFilename, g_currentMission.baseDirectory)
			local speedScale = xmlFile:getFloat(key .. "#speedScale") or 1
			local camPath = CameraPath.createFromI3D(fullI3dFilename, speedScale, self.benchmarkCam)
			table.insert(self.camPaths, camPath)
		end)

		if #self.camPaths == 0 then
			Logging.error("At least one camera path has to be defined in %s", benchmarkXmlFilepath)
		end

		xmlFile:delete()
	else
		Logging.error("No benchmark xml defined (map.benchmark#filename) in %s", g_currentMission.missionInfo.mapXMLFilename)
		return false
	end

	return true
end

function Benchmark:startBenchmark()
	g_currentMission.player.walkingIsLocked = true
	g_currentMission.hud:setIsVisible(false)
	self:setupFields()
	self:setupVehicles()
end

function Benchmark:setupFields()
	log("Setting up fields with fruits")
	g_farmlandManager:consoleCommandBuyAllFarmlands()
	for _, fieldData in ipairs(self.fields) do
		local number, fruitType, growthState = unpack(fieldData)
		g_fieldManager:consoleCommandSetFieldFruit(number, fruitType, growthState, true)
	end
end

function Benchmark:setupVehicles()
	g_currentMission:consoleCommandVehicleRemoveAll()
	log("deleted all vehicles")
	log("loading vehicles from", self.benmarkVehiclesXmlFilepath)
	VehicleLoadingUtil.loadVehiclesFromSavegame(self.benmarkVehiclesXmlFilepath, false, g_currentMission.missionInfo, g_currentMission.missionDynamicInfo, self.loadingVehiclesFinished, self, {self.benmarkVehiclesXmlFilepath, false})
end

function Benchmark:loadingVehiclesFinished(asyncCallbackArguments, vehiclesById)
	log("vehicle loading finished")
	self.idToVehicle = vehiclesById
	for _, vehicle in pairs(vehiclesById) do
		log("started motor for", vehicle:getFullName())
		if vehicle.startMotor ~= nil then
			vehicle:startMotor()
		end
		if vehicle.setBeaconLightsVisibility ~= nil then
			vehicle:setBeaconLightsVisibility(true, true)
		end
		if vehicle.setTurnLightState ~= nil then
			vehicle:setTurnLightState(Lights.TURNLIGHT_HAZARD, true)
		end
		if vehicle.setLightsTypesMask ~= nil then
			vehicle:setLightsTypesMask(Lights.LIGHT_TYPE_HIGHBEAM + Lights.LIGHT_TYPE_WORK_FRONT + Lights.LIGHT_TYPE_WORK_BACK, true)
		end
	end
	self.time = 0
	self.isRunning = true
end

function Benchmark:finishBenchmark()
	if self.currentCamPath then
		self.currentCamPath:deactivate()
		self.currentCamPath = nil
	end
	if self.benchmarkCam ~= nil then
		delete(self.benchmarkCam)
		self.benchmarkCam = nil
	end
	for _, vehicle in pairs(self.idToVehicle) do
		if vehicle.stopCurrentAIJob ~= nil then
			vehicle:stopCurrentAIJob(AIMessageSuccessStoppedByUser.new())
		end
	end
	log("Finished benchmark")
	self.isRunning = false
	self.hasFinished = true
	self.time = 0
	g_currentMission.player.walkingIsLocked = false
	g_currentMission.hud:setIsVisible(true)
end

function Benchmark:update(dt)
	if self.isRunning then
		self.time = self.time + dt
		for delay, vehicleIds in pairs(self.delayToAiVehicle) do
			if delay < self.time then
				for _, id in ipairs(vehicleIds) do
					local vehicle = self.idToVehicle[id]
					if vehicle ~= nil then
						log("starting AI for", vehicle:getFullName())
						vehicle:startAIVehicle(nil, nil, vehicle.ownerFarmId)
					else
						log("unknown vehicle id", id)
					end
				end
				self.delayToAiVehicle[delay] = nil
			end
		end

		if self.currentCamPath == nil then
			self.currentCamPath = table.remove(self.camPaths, 1)
			if self.currentCamPath ~= nil then
				log(string.format("starting next cam path, duration %.3fs", self.currentCamPath.maxTime / self.currentCamPath.speedScale / 1000))
				self.currentCamPath:activate()
				return
			end
			log("no more camera paths")
			self:finishBenchmark()
			return
		end

		self.currentCamPath:update(dt)
		if self.currentCamPath.time >= self.currentCamPath.maxTime then
			log("finished camera path")
			self.currentCamPath:deactivate()
			self.currentCamPath = nil
		end
	end
end

function Benchmark:consoleCommandBenchmark()
	if g_currentMission == nil then
		return "Error: Cannot run benchmark, load a map first"
	end
	if g_currentMission.missionDynamicInfo.isMultiplayer then
		return "Error: No available in Multiplayer"
	end
	if self.isRunning then
		self:finishBenchmark()
	end
	if self:load() then
		self:startBenchmark()
		return "Started benchmark"
	end
	return "Error: Cannot run benchmark, errors in config"
end
