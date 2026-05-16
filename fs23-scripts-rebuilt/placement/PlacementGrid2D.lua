PlacementGrid2D = {
	MODE_SIDES = 0,
	MODE_FILL = 1,
	EPSILON = 0.01
}
local PlacementGrid2D_mt = Class(PlacementGrid2D)

function PlacementGrid2D.new(node, width, length, spacing, placementMode)
	local self = setmetatable({}, PlacementGrid2D_mt)
	self.node = node
	self.width = width
	self.length = length
	self.spacing = spacing
	self.placementMode = placementMode or PlacementGrid2D.MODE_SIDES
	self.blockedAreas = {}
	self.lowerPos = {x = 0, z = 0, isValid = false}
	self.upperPos = {x = 0, z = 0, isValid = false}

	return self
end

function PlacementGrid2D:delete()
end

function PlacementGrid2D:reset()
	self.blockedAreas = {}
end

function PlacementGrid2D:getFreePosition(width, length)
	self.lowerPos.isValid = false
	self.upperPos.isValid = false

	local resultX = nil
	local resultZ = nil

	for z = 0, math.floor(self.length / self.spacing), 1 do
		local area = self.blockedAreas[z]
		local zWorld = z * self.spacing
		local minX = self.width
		local maxX = 0
		local openWidth = self.width

		if area ~= nil then
			minX = area.minX
			maxX = area.maxX
			openWidth = self.width - area.maxX
		end

		if not self.lowerPos.isValid then
			if width - minX < PlacementGrid2D.EPSILON then
				self.lowerPos.isValid = true
				self.lowerPos.z = zWorld

				if self.placementMode == PlacementGrid2D.MODE_SIDES then
					self.lowerPos.x = 0
				else
					self.lowerPos.x = minX - width
				end
			end
		elseif width - openWidth < PlacementGrid2D.EPSILON then
			if self.placementMode == PlacementGrid2D.MODE_FILL then
				self.lowerPos.x = math.min(self.lowerPos.x, minX - width)
			end

			if length <= zWorld + self.spacing - self.lowerPos.z then
				resultX = self.lowerPos.x
				resultZ = self.lowerPos.z

				break
			end
		else
			self.lowerPos.isValid = false
		end

		if not self.upperPos.isValid then
			if width - openWidth < PlacementGrid2D.EPSILON then
				self.upperPos.isValid = true
				self.upperPos.z = zWorld

				if self.placementMode == PlacementGrid2D.MODE_SIDES then
					self.upperPos.x = self.width - width
				else
					self.upperPos.x = maxX
				end
			end
		elseif width - openWidth < PlacementGrid2D.EPSILON then
			if self.placementMode == PlacementGrid2D.MODE_FILL then
				self.upperPos.x = math.max(self.upperPos.x, maxX)
			end

			if length <= zWorld + self.spacing - self.upperPos.z then
				resultX = self.upperPos.x
				resultZ = self.upperPos.z

				break
			end
		else
			self.upperPos.isValid = false
		end
	end

	if resultX ~= nil then
		return resultX, resultZ
	end

	return nil, nil
end

function PlacementGrid2D:blockAreaLocal(x, z, width, length)
	self:updateBlockedArea(x, x + width, z, z + length)
end

function PlacementGrid2D:blockAreaByBoundingBox(a, b, c, d, e, f, g, h, i, halfX, halfY, halfZ)
	local x1, y1, z1 = worldToLocal(self.node, MathUtil.transform(a, b, c, d, e, f, g, h, i, -halfX, -halfY, -halfZ))
	local x2, y2, z2 = worldToLocal(self.node, MathUtil.transform(a, b, c, d, e, f, g, h, i, halfX, -halfY, -halfZ))
	local x3, y3, z3 = worldToLocal(self.node, MathUtil.transform(a, b, c, d, e, f, g, h, i, halfX, -halfY, halfZ))
	local x4, y4, z4 = worldToLocal(self.node, MathUtil.transform(a, b, c, d, e, f, g, h, i, -halfX, -halfY, halfZ))
	local x5, y5, z5 = worldToLocal(self.node, MathUtil.transform(a, b, c, d, e, f, g, h, i, -halfX, halfY, -halfZ))
	local x6, y6, z6 = worldToLocal(self.node, MathUtil.transform(a, b, c, d, e, f, g, h, i, halfX, halfY, -halfZ))
	local x7, y7, z7 = worldToLocal(self.node, MathUtil.transform(a, b, c, d, e, f, g, h, i, halfX, halfY, halfZ))
	local x8, y8, z8 = worldToLocal(self.node, MathUtil.transform(a, b, c, d, e, f, g, h, i, -halfX, halfY, halfZ))
	local minX = math.max(0, math.min(x1, x2, x3, x4, x5, x6, x7, x8))
	local maxX = math.min(self.width, math.max(x1, x2, x3, x4, x5, x6, x7, x8))
	local minZ = math.max(0, math.min(z1, z2, z3, z4, z5, z6, z7, z8))
	local maxZ = math.min(self.length, math.max(z1, z2, z3, z4, z5, z6, z7, z8))

	self:updateBlockedArea(minX, maxX, minZ, maxZ)
end

function PlacementGrid2D:updateBlockedArea(xMin, xMax, zMin, zMax)
	local zStart = math.max(1, math.ceil(zMin / self.spacing))
	local zEnd = math.max(0, math.ceil(zMax / self.spacing))

	for z = zStart, zEnd, 1 do
		local area = self.blockedAreas[z]

		if area == nil then
			local zWorldStart = (z - 1) * self.spacing
			local zWorldEnd = z * self.spacing

			area = {
				minX = self.width,
				maxX = 0,
				zStart = zWorldStart,
				zEnd = zWorldEnd,
				offsetZ = (zWorldStart + zWorldEnd) * 0.5
			}
			self.blockedAreas[z] = area
		end

		area.minX = math.min(area.minX, xMin)
		area.maxX = math.max(area.maxX, xMax)
	end
end

function PlacementGrid2D:drawDebug()
	local x1, y1, z1 = localToWorld(self.node, 0, 0, 0)
	local x2, y2, z2 = localToWorld(self.node, self.width, 0, 0)
	local x3, y3, z3 = localToWorld(self.node, self.width, 0, self.length)
	local x4, y4, z4 = localToWorld(self.node, 0, 0, self.length)

	drawDebugLine(x1, y1, z1, 1, 1, 1, x2, y2, z2, 1, 1, 1)
	drawDebugLine(x2, y2, z2, 1, 1, 1, x3, y3, z3, 1, 1, 1)
	drawDebugLine(x3, y3, z3, 1, 1, 1, x4, y4, z4, 1, 1, 1)
	drawDebugLine(x4, y4, z4, 1, 1, 1, x1, y1, z1, 1, 1, 1)

	for _, area in pairs(self.blockedAreas) do
		local minWX, minWY, minWZ = localToWorld(self.node, area.minX, 0, area.offsetZ)
		local maxWX, maxWY, maxWZ = localToWorld(self.node, area.maxX, 0, area.offsetZ)

		if not (area.minX < area.maxX) then
			continue
		end

		local startMinX, startMinY, startMinZ = localToWorld(self.node, area.minX, 0, area.zStart)
		local startMaxX, startMaxY, startMaxZ = localToWorld(self.node, area.maxX, 0, area.zStart)

		drawDebugLine(startMinX, startMinY, startMinZ, 1, 1, 1, startMaxX, startMaxY, startMaxZ, 1, 1, 1)

		local endMinX, endMinY, endMinZ = localToWorld(self.node, area.minX, 0, area.zEnd)
		local endMaxX, endMaxY, endMaxZ = localToWorld(self.node, area.maxX, 0, area.zEnd)

		drawDebugLine(endMinX, endMinY, endMinZ, 1, 1, 1, endMaxX, endMaxY, endMaxZ, 1, 1, 1)
		drawDebugLine(minWX, minWY, minWZ, 1, 0, 0, maxWX, maxWY, maxWZ, 1, 0, 0)
	end
end
