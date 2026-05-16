CameraPath = {}
local CameraPath_mt = Class(CameraPath)

function CameraPath.new(posAnimCurve, rotAnimCurve, speedAnimCurve, speedScale, camera, maxTime, finishedCallback)
	local self = setmetatable({}, CameraPath_mt)
	self.posAnimCurve = posAnimCurve
	self.rotAnimCurve = rotAnimCurve
	self.speedAnimCurve = speedAnimCurve
	self.speedScale = speedScale
	self.time = 0
	self.camera = camera
	self.overriddenCamera = nil
	self.maxTime = maxTime
	self.finishedCallback = finishedCallback
	return self
end

function CameraPath:delete()
	if self.camera ~= nil then
		delete(self.camera)
		self.camera = nil
	end
end

function CameraPath.createFromI3D(filename, speedScale, camera)
	local i3dNode = loadI3DFile(filename, false, false)
	if i3dNode == 0 then
		print("Error: failed to load camera path: " .. filename)
		return nil
	end

	local positionsNode = getChild(i3dNode, "positions")
	if positionsNode == 0 then
		print("Error: failed to load camera path: " .. filename .. ". No positions found.")
		delete(i3dNode)
		return nil
	end

	local posAnimCurve = AnimCurve.new(catmullRomInterpolator3, 3)
	local rotAnimCurve = AnimCurve.new(quaternionInterpolator2, 3)
	local speedAnimCurve = AnimCurve.new(catmullRomInterpolator1, 3)

	local numChildren = getNumOfChildren(positionsNode)
	local totalTime = 0
	local lastX, lastY, lastZ

	for i = 0, numChildren - 1 do
		local child = getChildAt(positionsNode, i)
		local x, y, z = getTranslation(child)
		local rx, ry, rz = getRotation(child)
		local sx, sy, sz = getScale(child)

		if i > 0 then
			totalTime = totalTime + MathUtil.vector3Length(x - lastX, y - lastY, z - lastZ)
		end

		posAnimCurve:addKeyframe({time = totalTime, x = x, y = y, z = z})
		local qx, qy, qz, qw = mathEulerToQuaternion(rx, ry, rz)
		rotAnimCurve:addKeyframe({time = totalTime, x = qx, y = qy, z = qz, w = qw})
		speedAnimCurve:addKeyframe({time = totalTime, v = sx})

		lastX, lastY, lastZ = x, y, z
	end

	-- Re-calculating times based on segment lengths for smoother interpolation (FS23 logic)
	local numKeyframes = #posAnimCurve.keyframes
	local segmentTimes = {}
	local numTimesPerKeyframe = 32
	local currentTime = 0

	for i = 1, numKeyframes - 1 do
		local first = posAnimCurve.keyframes[i]
		local second = posAnimCurve.keyframes[i + 1]
		local lastX, lastY, lastZ = posAnimCurve:getFromKeyframes(first, second, i, i + 1, 0)
		
		segmentTimes[(i - 1) * (numTimesPerKeyframe + 1) + 1] = 0
		local segmentLength = 0

		for j = 1, numTimesPerKeyframe do
			local x, y, z = posAnimCurve:getFromKeyframes(first, second, i, i + 1, j / numTimesPerKeyframe)
			segmentLength = segmentLength + MathUtil.vector3Length(x - lastX, y - lastY, z - lastZ)
			segmentTimes[(i - 1) * (numTimesPerKeyframe + 1) + j + 1] = segmentLength
			lastX, lastY, lastZ = x, y, z
		end

		currentTime = currentTime + segmentLength
		posAnimCurve.keyframes[i + 1].time = currentTime
		rotAnimCurve.keyframes[i + 1].time = currentTime
		speedAnimCurve.keyframes[i + 1].time = currentTime
	end

	posAnimCurve.segmentTimes = segmentTimes
	posAnimCurve.numTimesPerKeyframe = numTimesPerKeyframe
	rotAnimCurve.segmentTimes = segmentTimes
	rotAnimCurve.numTimesPerKeyframe = numTimesPerKeyframe
	speedAnimCurve.segmentTimes = segmentTimes
	speedAnimCurve.numTimesPerKeyframe = numTimesPerKeyframe

	posAnimCurve.maxTime = currentTime
	rotAnimCurve.maxTime = currentTime
	speedAnimCurve.maxTime = currentTime

	delete(i3dNode)

	return CameraPath.new(posAnimCurve, rotAnimCurve, speedAnimCurve, speedScale, camera, currentTime)
end

function CameraPath:update(dt)
	local speedScale = self.speedScale
	if self.speedAnimCurve ~= nil then
		speedScale = speedScale * self.speedAnimCurve:get(self.time)
	end

	self.time = self.time + dt * speedScale
	self:placeCamera()

	local currentCamera = getCamera()
	if currentCamera ~= self.camera then
		self.overriddenCamera = currentCamera
		setCamera(self.camera)
	end

	if self.finishedCallback ~= nil and self.maxTime < self.time then
		self.finishedCallback()
	end
end

function CameraPath:placeCamera()
	local x, y, z = self.posAnimCurve:get(self.time)
	local qx, qy, qz, qw = self.rotAnimCurve:get(self.time)
	setTranslation(self.camera, x, y, z)
	setQuaternion(self.camera, qx, qy, qz, qw)
end

function CameraPath:activate()
	self:placeCamera()
	self.overriddenCamera = getCamera()
	setCamera(self.camera)
end

function CameraPath:deactivate()
	self.time = 0
	if self.overriddenCamera ~= nil then
		setCamera(self.overriddenCamera)
	end
	g_currentMission:removeUpdateable(self)
end
