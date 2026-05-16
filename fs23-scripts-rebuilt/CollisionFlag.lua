CollisionFlag = {}

local usedBits = {}
local flagsByFlag = {}
local flagsList = {}
local activeMask = 0
local allMask = 0

function CollisionFlag.registerFlag(bit, name, description, isActive)
	if usedBits[bit] ~= nil then
		Logging.error("CollisionFlag.registerFlag: Given bit '%d' is already in use.", bit)
		return nil
	end

	local upperName = name:upper()
	if CollisionFlag[upperName] ~= nil then
		Logging.error("CollisionFlag.registerFlag: Given name '%s' is already in use", upperName)
		return nil
	end

	local flag = 2 ^ bit
	local entry = {
		bit = bit,
		flag = flag,
		name = upperName,
		description = description,
		isActive = isActive,
		isDeprecated = not isActive and bit >= 8
	}

	if entry.isActive then
		activeMask = bitOR(activeMask, flag)
	end
	allMask = bitOR(allMask, flag)

	usedBits[bit] = true
	CollisionFlag[upperName] = flag
	flagsByFlag[flag] = entry
	table.insert(flagsList, entry)

	return flag
end

-- FS23 Specific Flags (based on decompiled output)
CollisionFlag.DEFAULT = CollisionFlag.registerFlag(0, "DEFAULT", "The default bit", true)
CollisionFlag.STATIC_WORLD = CollisionFlag.registerFlag(1, "STATIC_WORLD", "Collision with terrain, terrainHeight and static objects", true)
CollisionFlag.STATIC_WORLD_WITHOUT_DELTA = CollisionFlag.registerFlag(2, "STATIC_WORLD_WITHOUT_DELTA", "Deprecated in FS22: Do not use it anymore!", false)
CollisionFlag.STATIC_OBJECTS = CollisionFlag.registerFlag(3, "STATIC_OBJECTS", "Collision with static objects", true)
CollisionFlag.STATIC_OBJECT = CollisionFlag.registerFlag(4, "STATIC_OBJECT", "A static object", true)
CollisionFlag.AI_BLOCKING = CollisionFlag.registerFlag(5, "AI_BLOCKING", "Blocks the AI", true)
CollisionFlag.TRACTOR = CollisionFlag.registerFlag(6, "TRACTOR", "Deprecated in FS22: Do not use it anymore!", false)
CollisionFlag.COMBINE = CollisionFlag.registerFlag(7, "COMBINE", "Deprecated in FS22: Do not use it anymore!", false)
CollisionFlag.TERRAIN = CollisionFlag.registerFlag(8, "TERRAIN", "Collision with terrain", true)
CollisionFlag.TERRAIN_DELTA = CollisionFlag.registerFlag(9, "TERRAIN_DELTA", "Collision with terrain delta", true)
CollisionFlag.CAMERA_BLOCKING = CollisionFlag.registerFlag(10, "CAMERA_BLOCKING", "Blocks outdoor vehicle camera", true)
CollisionFlag.TREE = CollisionFlag.registerFlag(11, "TREE", "A tree", true)
CollisionFlag.DYNAMIC_OBJECT = CollisionFlag.registerFlag(12, "DYNAMIC_OBJECT", "A dynamic object", true)
CollisionFlag.VEHICLE = CollisionFlag.registerFlag(13, "VEHICLE", "A vehicle", true)
CollisionFlag.PLAYER = CollisionFlag.registerFlag(14, "PLAYER", "A player", true)
CollisionFlag.BLOCKED_BY_PLAYER = CollisionFlag.registerFlag(15, "BLOCKED_BY_PLAYER", "Object that's blocked by a player", true)
CollisionFlag.ANIMAL = CollisionFlag.registerFlag(16, "ANIMAL", "An animal", true)
CollisionFlag.ANIMAL_POSITIONING = CollisionFlag.registerFlag(17, "ANIMAL_POSITIONING", "An object where animals can walk on", true)
CollisionFlag.AI_DRIVABLE = CollisionFlag.registerFlag(18, "AI_DRIVABLE", "AI can drive over this node", true)
CollisionFlag.GROUND_TIP_BLOCKING = CollisionFlag.registerFlag(19, "GROUND_TIP_BLOCKING", "Bit to block the ground tipping at this position", true)
CollisionFlag.TRIGGER_PLAYER = CollisionFlag.registerFlag(20, "TRIGGER_PLAYER", "A trigger for players", true)
CollisionFlag.TRIGGER_VEHICLE = CollisionFlag.registerFlag(21, "TRIGGER_VEHICLE", "A trigger for vehicles!", true)
CollisionFlag.TRIGGER_COMBINE = CollisionFlag.registerFlag(22, "TRIGGER_COMBINE", "Deprecated in FS22: Do not use it anymore!", false)
CollisionFlag.TRIGGER_FILLABLE = CollisionFlag.registerFlag(23, "TRIGGER_FILLABLE", "Deprecated in FS22: Do not use it anymore!", false)
CollisionFlag.TRIGGER_WATER = CollisionFlag.registerFlag(24, "TRIGGER_WATER", "Water triggers", true)
CollisionFlag.TRIGGER_CROP = CollisionFlag.registerFlag(25, "TRIGGER_CROP", "Crop triggers", true)
CollisionFlag.TRIGGER_CUTTER = CollisionFlag.registerFlag(26, "TRIGGER_CUTTER", "Deprecated in FS22: Do not use it anymore!", false)
CollisionFlag.TRIGGER_AI_BLOCKING = CollisionFlag.registerFlag(27, "TRIGGER_AI_BLOCKING", "AI blocking triggers", true)
CollisionFlag.TRIGGER_PLACEMENT_BLOCKING = CollisionFlag.registerFlag(28, "TRIGGER_PLACEMENT_BLOCKING", "Placement blocking triggers", true)
CollisionFlag.CLOTH = CollisionFlag.registerFlag(29, "CLOTH", "Cloth collision", true)
CollisionFlag.TERRAIN_DEFORMATION = CollisionFlag.registerFlag(30, "TERRAIN_DEFORMATION", "Terrain deformation collision", true)
CollisionFlag.WATER = CollisionFlag.registerFlag(31, "WATER", "Collision of the water plane", true)

function CollisionFlag.getHasFlagSet(node, flag)
	local collisionMask = getCollisionMask(node)
	return bitAND(collisionMask, flag) ~= 0
end

function CollisionFlag.setFlag(node, flag)
	local collisionMask = getCollisionMask(node)
	setCollisionMask(node, bitOR(collisionMask, flag))
end

function CollisionFlag.getBit(flag)
	local entry = flagsByFlag[flag]
	if entry == nil then
		printCallstack()
	end
	return entry.bit
end

function CollisionFlag.checkCollisionMask(node)
	if getHasClassId(node, ClassIds.SHAPE) then
		local mask = getCollisionMask(node)
		if mask > 0 and mask ~= 255 then
			local undefinedBits = bitAND(mask, bitNOT(allMask))
			if undefinedBits ~= 0 then
				local bitsStr = MathUtil.numberToSetBitsStr(undefinedBits)
				print(string.format("    CollisionFlag-Check: Node '%s' uses undefined bits '%s'!", I3DUtil.getNodePath(node), bitsStr))
			end

			local deprecatedBits = bitAND(mask, bitNOT(activeMask))
			if deprecatedBits ~= 0 then
				local bitsStr = MathUtil.numberToSetBitsStr(deprecatedBits)
				print(string.format("    CollisionFlag-Check: Node '%s' uses deprecated bits '%s'!", I3DUtil.getNodePath(node), bitsStr))
			end
		end
	end
end

function CollisionFlag.checkCollisionMaskRec(node)
	if node ~= nil and node ~= 0 then
		CollisionFlag.checkCollisionMask(node)
		local numChildren = getNumOfChildren(node)
		for i = 0, numChildren - 1 do
			CollisionFlag.checkCollisionMaskRec(getChildAt(node, i))
		end
	end
end

function CollisionFlag.consoleCommandShowAll()
	local sortedFlags = {}
	for _, flag in ipairs(flagsList) do
		table.insert(sortedFlags, flag)
	end

	table.sort(sortedFlags, function(a, b)
		if a.isDeprecated ~= b.isDeprecated then
			return not a.isDeprecated
		end
		return a.bit < b.bit
	end)

	print("Defined collision flags:")
	local lastDeprecated = false
	for _, flag in ipairs(sortedFlags) do
		if flag.isDeprecated and not lastDeprecated then
			print("\nDeprecated:")
			lastDeprecated = true
		end
		print(string.format("Bit %02d: %s - %s", flag.bit, flag.name, flag.description))
	end

	print("\n\nPredefined collision masks:")
	if CollisionMask ~= nil then
		for name, mask in pairs(CollisionMask) do
			print(string.format("Mask %010d: %s", mask, name))
		end
	end
end

addConsoleCommand("gsCollisionFlagShowAll", "Shows all available collision flags", "consoleCommandShowAll", CollisionFlag)

I3DManager.addDebugLoadingCheck("Collision-Flag check", function(i3dNode, filename)
	return CollisionFlag.checkCollisionMaskRec(i3dNode)
end)
