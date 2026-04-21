SplitShapeUtil = {}

function SplitShapeUtil.getTreeOffsetPosition(shape, worldX, worldY, worldZ, size, minExtent)
	local localX, localY, localZ = worldToLocal(shape, worldX, worldY, worldZ)
	local startX, startY, startZ = localToWorld(shape, localX - size * 0.5, localY, localZ - size * 0.5)
	local upX, upY, upZ = localDirectionToWorld(shape, 0, 1, 0)
	local dirX, dirY, dirZ = localDirectionToWorld(shape, 0, 0, 1)
	local minY, maxY, minX, maxX = testSplitShape(shape, startX, startY, startZ, upX, upY, upZ, dirX, dirY, dirZ, size, size)

	if minY ~= nil then
		if minExtent ~= nil then
			local extentX, extentY = getSplitShapePlaneExtents(shape, startX, startY, startZ, upX, upY, upZ)

			if extentX ~= nil and extentX < minExtent then
				return nil
			end

			if extentY ~= nil and extentY < minExtent then
				return nil
			end
		end

		local x, y, z = localToWorld(shape, localX - size * 0.5 + (minX + maxX) * 0.5, localY, localZ - size * 0.5 + (minY + maxY) * 0.5)
		local radius = math.max(maxY - minY, maxX - minX)

		return x, y, z, upX, upY, upZ, radius * 0.5
	end

	return nil
end

function SplitShapeUtil:createTreeBelt(shape, startX, startY, startZ, endX, endY, endZ, upX, upY, upZ, offset, debugMode, width)
	local dirX, dirY, dirZ = MathUtil.vector3Normalize(endX - startX, endY - startY, endZ - startZ)

	if debugMode then
	end

	local rootNode = createTransformGroup("rootNode")
	local worldRoot = getRootNode()

	link(worldRoot, rootNode)
	setTranslation(rootNode, startX, startY, startZ)
	setDirection(rootNode, dirX, dirY, dirZ, upX, upY, upZ)

	local startNode = createTransformGroup("startNode")

	link(rootNode, startNode)
	setTranslation(startNode, -(width or 0.0025) * 0.5, 0, offset)
	setRotation(startNode, -math.pi * 0.5, 0, -math.pi * 0.5)

	local endNode = createTransformGroup("endNode")

	link(startNode, endNode)
	setTranslation(endNode, 0, 0, width or 0.0025)
	setRotation(endNode, 0, 0, 0)

	local linkNode = createTransformGroup("linkNode")

	link(startNode, linkNode)
	setTranslation(linkNode, 0, 0, (width or 0.0025) * 0.5)
	setRotation(linkNode, 0, 0, 0)

	local geometry = TensionBeltGeometryConstructor.new()

	geometry:setWidth(self.width)
	geometry:setMaterial(self.material.materialId)
	geometry:setUVscale(self.material.uvScale)
	geometry:setMaxEdgeLength(0.1)
	geometry:setFixedPoints(startNode, endNode)
	geometry:setGeometryBias(0.005)
	geometry:setLinkNode(linkNode)
	geometry:addShape(shape, -100, 100, -100, 100)

	local beltNode = geometry:finalize()
	local wtx, wty, wtz = getWorldTranslation(beltNode)
	local wrx, wry, wrz = getWorldRotation(beltNode)
	local root = getRootNode()

	link(root, beltNode)
	setWorldTranslation(beltNode, wtx, wty, wtz)
	setWorldRotation(beltNode, wrx, wry, wrz)
	delete(rootNode)

	return beltNode
end

function SplitShapeUtil.getSplitShapeId(node)
	local isSplitShape = getHasClassId(node, ClassIds.MESH_SPLIT_SHAPE)

	if isSplitShape then
		return node
	end

	local numChildren = getNumOfChildren(node)

	for i = 0, numChildren - 1 do
		local child = getChildAt(node, i)
		local result = SplitShapeUtil.getSplitShapeId(child)

		if result ~= nil then
			return result
		end
	end

	return nil
end
