AnimCurve = {}

function linearInterpolator1(first, second, alpha)
	return first[1] * (1 - alpha) + second[1] * alpha
end

function linearInterpolator2(first, second, alpha)
	return first[1] * (1 - alpha) + second[1] * alpha, first[2] * (1 - alpha) + second[2] * alpha
end

function linearInterpolator3(first, second, alpha)
	return first[1] * (1 - alpha) + second[1] * alpha, first[2] * (1 - alpha) + second[2] * alpha, first[3] * (1 - alpha) + second[3] * alpha
end

function linearInterpolator4(first, second, alpha)
	return first[1] * (1 - alpha) + second[1] * alpha, first[2] * (1 - alpha) + second[2] * alpha, first[3] * (1 - alpha) + second[3] * alpha, first[4] * (1 - alpha) + second[4] * alpha
end

function linearInterpolatorN(first, second, alpha)
	local values = {}
	for i, v in ipairs(first) do
		table.insert(values, v * (1 - alpha) + second[i] * alpha)
	end
	return values
end

function linearInterpolatorTransRot(first, second, alpha)
	return first.x * (1 - alpha) + second.x * alpha, first.y * (1 - alpha) + second.y * alpha, first.z * (1 - alpha) + second.z * alpha, first.rx * (1 - alpha) + second.rx * alpha, first.ry * (1 - alpha) + second.ry * alpha, first.rz * (1 - alpha) + second.rz * alpha
end

function linearInterpolatorTransRotScale(first, second, alpha)
	return first.x * (1 - alpha) + second.x * alpha, first.y * (1 - alpha) + second.y * alpha, first.z * (1 - alpha) + second.z * alpha, first.rx * (1 - alpha) + second.rx * alpha, first.ry * (1 - alpha) + second.ry * alpha, first.rz * (1 - alpha) + second.rz * alpha, first.sx * (1 - alpha) + second.sx * alpha, first.sy * (1 - alpha) + second.sy * alpha, first.sz * (1 - alpha) + second.sz * alpha
end

function catmullRomInterpolator1(p1, p2, p0, p3, t)
	local v0 = p0 ~= nil and p0[1] or p1[1] - (p2[1] - p1[1])
	local v1 = p1[1]
	local v2 = p2[1]
	local v3 = p3 ~= nil and p3[1] or p2[1] + (p2[1] - p1[1])

	local t2 = t * t
	local t3 = t2 * t

	return 0.5 * (2 * v1 + (-v0 + v2) * t + (2 * v0 - 5 * v1 + 4 * v2 - v3) * t2 + (-v0 + 3 * v1 - 3 * v2 + v3) * t3)
end

function catmullRomInterpolator3(p1, p2, p0, p3, t)
	local v0x = p0 ~= nil and p0.x or p1.x - (p2.x - p1.x)
	local v0y = p0 ~= nil and p0.y or p1.y - (p2.y - p1.y)
	local v0z = p0 ~= nil and p0.z or p1.z - (p2.z - p1.z)

	local v1x, v1y, v1z = p1.x, p1.y, p1.z
	local v2x, v2y, v2z = p2.x, p2.y, p2.z

	local v3x = p3 ~= nil and p3.x or p2.x + (p2.x - p1.x)
	local v3y = p3 ~= nil and p3.y or p2.y + (p2.y - p1.y)
	local v3z = p3 ~= nil and p3.z or p2.z + (p2.z - p1.z)

	local t2 = t * t
	local t3 = t2 * t

	local resX = 0.5 * (2 * v1x + (-v0x + v2x) * t + (2 * v0x - 5 * v1x + 4 * v2x - v3x) * t2 + (-v0x + 3 * v1x - 3 * v2x + v3x) * t3)
	local resY = 0.5 * (2 * v1y + (-v0y + v2y) * t + (2 * v0y - 5 * v1y + 4 * v2y - v3y) * t2 + (-v0y + 3 * v1y - 3 * v2y + v3y) * t3)
	local resZ = 0.5 * (2 * v1z + (-v0z + v2z) * t + (2 * v0z - 5 * v1z + 4 * v2z - v3z) * t2 + (-v0z + 3 * v1z - 3 * v2z + v3z) * t3)

	return resX, resY, resZ
end

function quaternionInterpolator(p1, p2, t)
	return MathUtil.nlerpQuaternionShortestPath(p1.x, p1.y, p1.z, p1.w, p2.x, p2.y, p2.z, p2.w, t)
end

function quaternionInterpolator2(p1, p2, p0, p3, t)
	local v0x, v0y, v0z, v0w = p0.x, p0.y, p0.z, p0.w
	local v1x, v1y, v1z, v1w = p1.x, p1.y, p1.z, p1.w
	local v2x, v2y, v2z, v2w = p2.x, p2.y, p2.z, p2.w
	local v3x, v3y, v3z, v3w = p3.x, p3.y, p3.z, p3.w

	local t2 = t * t
	local t3 = t2 * t

	local v5 = 0.5 * t
	local v6 = 0.5 * t2

	local rx, ry, rz, rw = MathUtil.quaternionMadShortestPath(v0x * v5, v0y * v5, v0z * v5, v0w * v5, v1x, v1y, v1z, v1w, 1 - t + v6)
	rx, ry, rz, rw = MathUtil.quaternionMadShortestPath(rx, ry, rz, rw, v2x, v2y, v2z, v2w, t + v5)
	rx, ry, rz, rw = MathUtil.quaternionMadShortestPath(rx, ry, rz, rw, v3x, v3y, v3z, v3w, v6)

	return MathUtil.quaternionNormalized(rx, ry, rz, rw)
end

local AnimCurve_mt = Class(AnimCurve)

function AnimCurve.new(interpolator, interpolatorDegree)
	local self = setmetatable({}, AnimCurve_mt)
	self.keyframes = {}
	self.interpolator = interpolator
	self.interpolatorDegree = Utils.getNoNil(interpolatorDegree, 2)
	self.currentTime = 0
	self.maxTime = 0
	self.numKeyframes = 0
	return self
end

function AnimCurve:delete()
end

function AnimCurve:reset()
	self.keyframes = {}
	self.numKeyframes = 0
	self.currentTime = 0
	self.maxTime = 0
end

function AnimCurve:addKeyframe(keyframe, xmlFile, key)
	if self.numKeyframes > 0 and keyframe.time < self.keyframes[self.numKeyframes].time then
		if xmlFile ~= nil then
			Logging.xmlError(xmlFile, "keyframes not strictly monotonic increasing at %s", key or "unknown")
		else
			print("Error: keyframes not strictly monotonic increasing")
		end
	end

	table.insert(self.keyframes, keyframe)
	self.maxTime = keyframe.time
	self.numKeyframes = self.numKeyframes + 1
end

function AnimCurve:removeKeyframe(index)
	if index ~= nil and index >= 1 and index <= #self.keyframes then
		table.remove(self.keyframes, index)
		self.numKeyframes = self.numKeyframes - 1
		if self.numKeyframes > 0 then
			self.maxTime = self.keyframes[self.numKeyframes].time
		else
			self.maxTime = 0
		end
	end
end

function AnimCurve:getMaximum()
	if #self.keyframes == 0 then
		return 0, 0
	end

	if #self.keyframes == 1 then
		local value = self:getFromKeyframes(self.keyframes[1], self.keyframes[1], 1, 1, 0)
		return value, self.keyframes[1].time
	end

	local maxValue = self:getFromKeyframes(self.keyframes[1], self.keyframes[2], 1, 2, 0)
	local maxTime = self.keyframes[1].time

	for i = 1, #self.keyframes - 1 do
		local value = self:getFromKeyframes(self.keyframes[i], self.keyframes[i + 1], i, i + 1, 1)
		if maxValue < value then
			maxValue = value
			maxTime = self.keyframes[i + 1].time
		end
	end

	return maxValue, maxTime
end

function AnimCurve:get(time)
	if self.numKeyframes == 0 then
		return nil
	end

	local first, second, firstI, secondI
	local alpha = 0

	if self.numKeyframes >= 2 then
		if time <= self.keyframes[1].time then
			first = self.keyframes[1]
			second = self.keyframes[2]
			firstI = 1
			secondI = 2
			alpha = 0
		elseif time >= self.maxTime then
			first = self.keyframes[self.numKeyframes - 1]
			second = self.keyframes[self.numKeyframes]
			firstI = self.numKeyframes - 1
			secondI = self.numKeyframes
			alpha = 1
		else
			for i = 1, self.numKeyframes - 1 do
				if time <= self.keyframes[i + 1].time then
					first = self.keyframes[i]
					second = self.keyframes[i + 1]
					firstI = i
					secondI = i + 1
					alpha = (time - first.time) / (second.time - first.time)
					break
				end
			end
		end
	else
		first = self.keyframes[1]
		second = self.keyframes[1]
		firstI = 1
		secondI = 1
		alpha = 0
	end

	if self.segmentTimes ~= nil and firstI < self.numKeyframes then
		local segmentStart = (firstI - 1) * (self.numTimesPerKeyframe + 1) + 1
		local i1, i2 = AnimCurve.getInterval(time - first.time, self.segmentTimes, segmentStart, self.numTimesPerKeyframe + 1)
		local t1 = self.segmentTimes[i1 + segmentStart]
		local t2 = self.segmentTimes[i2 + segmentStart]
		if t2 - t1 > 0 then
			alpha = (i1 + (time - first.time - t1) / (t2 - t1)) / (self.numTimesPerKeyframe + 1)
		end
	end

	return self:getFromKeyframes(first, second, firstI, secondI, alpha)
end

function AnimCurve:getFromKeyframes(first, second, firstI, secondI, alpha)
	if self.interpolatorDegree == 2 then
		return self.interpolator(first, second, alpha)
	elseif self.interpolatorDegree == 3 then
		local v0 = self.keyframes[math.max(firstI - 1, 1)]
		local v3 = self.keyframes[math.min(secondI + 1, self.numKeyframes)]
		return self.interpolator(first, second, v0, v3, alpha)
	end
end

function AnimCurve.getInterval(time, times, start, count)
	local i1 = 0
	local i2 = count - 1
	while i2 - i1 > 1 do
		local i3 = math.floor((i1 + i2) / 2)
		if time < times[i3 + start] then
			i2 = i3
		else
			i1 = i3
		end
	end
	return i1, i2
end

function AnimCurve:loadCurveFromXML(xmlFile, baseKey, loadFunc)
	local i = 0
	while true do
		local key = string.format("%s.key(%d)", baseKey, i)
		if not hasXMLProperty(xmlFile, key) then
			break
		end
		local keyframe = loadFunc(xmlFile, key)
		if keyframe ~= nil then
			self:addKeyframe(keyframe)
		end
		i = i + 1
	end
end

function loadInterpolator1Curve(xmlFile, key)
	local time = getXMLString(xmlFile, key .. "#time")
	local value = getXMLString(xmlFile, key .. "#value")
	if value ~= nil then
		return {
			tonumber(value),
			time = tonumber(time)
		}
	end
	return nil
end

function loadInterpolator2Curve(xmlFile, key)
	local time = getXMLString(xmlFile, key .. "#time")
	local valuesStr = getXMLString(xmlFile, key .. "#values")
	if valuesStr ~= nil then
		local values = string.split(valuesStr, " ")
		return {
			tonumber(values[1]),
			tonumber(values[2]),
			time = tonumber(time)
		}
	end
	return nil
end

function loadInterpolator3Curve(xmlFile, key)
	local time = getXMLString(xmlFile, key .. "#time")
	local valuesStr = getXMLString(xmlFile, key .. "#values")
	if valuesStr ~= nil then
		local values = string.split(valuesStr, " ")
		return {
			tonumber(values[1]),
			tonumber(values[2]),
			tonumber(values[3]),
			time = tonumber(time)
		}
	end
	return nil
end

function loadInterpolator4Curve(xmlFile, key)
	local time = getXMLString(xmlFile, key .. "#time")
	local valuesStr = getXMLString(xmlFile, key .. "#values")
	if valuesStr ~= nil then
		local values = string.split(valuesStr, " ")
		return {
			tonumber(values[1]),
			tonumber(values[2]),
			tonumber(values[3]),
			tonumber(values[4]),
			time = tonumber(time)
		}
	end
	return nil
end

function getLoadNamedInterpolatorCurve(names)
	return function(xmlFile, key)
		local time = getXMLString(xmlFile, key .. "#time")
		local keyframe = {}
		for i, name in ipairs(names) do
			local value = getXMLString(xmlFile, key .. "#" .. name)
			if value == nil then
				return nil
			end
			table.insert(keyframe, tonumber(value))
		end
		keyframe.time = tonumber(time)
		return keyframe
	end
end
