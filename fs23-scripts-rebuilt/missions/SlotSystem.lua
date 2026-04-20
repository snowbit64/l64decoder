-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SlotSystem = {}
{}[PlatformId.WIN] = math.huge
{}[PlatformId.MAC] = math.huge
{}[PlatformId.PS4] = 2600
{}[PlatformId.PS5] = 4400
{}[PlatformId.XBOX_ONE] = 2600
{}[PlatformId.XBOX_SERIES] = 4400
{}[PlatformId.IOS] = 640
{}[PlatformId.ANDROID] = 640
{}[PlatformId.SWITCH] = 640
{}[PlatformId.GGP] = 2600
SlotSystem.TOTAL_VRAM_MEGABYTES = {}
{}[PlatformId.WIN] = 1
{}[PlatformId.MAC] = 1
{}[PlatformId.PS4] = 1
{}[PlatformId.PS5] = 1
{}[PlatformId.XBOX_ONE] = 1
{}[PlatformId.XBOX_SERIES] = 1
{}[PlatformId.IOS] = 0.5
{}[PlatformId.ANDROID] = 0.5
{}[PlatformId.SWITCH] = 0.5
{}[PlatformId.GGP] = 1
SlotSystem.VRAM_MEGABYTES_PER_SLOT = {}
SlotSystem.VISIBILITY_THRESHOLD = 10000
SlotSystem.CRITICAL_FACTOR = 0.9
SlotSystem.TOTAL_NUM_GARAGE_SLOTS = {}
for v3, v4 in pairs(SlotSystem.TOTAL_VRAM_MEGABYTES) do
  local v6 = math.floor(v4 / SlotSystem.VRAM_MEGABYTES_PER_SLOT[v3])
  SlotSystem.TOTAL_NUM_GARAGE_SLOTS[v3] = v6
end
SlotSystem.LIMITED_OBJECT_BALE = 1
SlotSystem.LIMITED_OBJECT_PALLET = 2
{}[PlatformId.WIN] = math.huge
{}[PlatformId.MAC] = math.huge
{}[PlatformId.PS4] = 200
{}[PlatformId.PS5] = 200
{}[PlatformId.XBOX_ONE] = 200
{}[PlatformId.XBOX_SERIES] = 200
{}[PlatformId.IOS] = 100
{}[PlatformId.ANDROID] = 100
{}[PlatformId.SWITCH] = 100
{}[PlatformId.GGP] = 200
{}[SlotSystem.LIMITED_OBJECT_BALE] = {}
{}[PlatformId.WIN] = 300
{}[PlatformId.MAC] = 300
{}[PlatformId.PS4] = 75
{}[PlatformId.PS5] = 150
{}[PlatformId.XBOX_ONE] = 75
{}[PlatformId.XBOX_SERIES] = 150
{}[PlatformId.IOS] = 50
{}[PlatformId.ANDROID] = 50
{}[PlatformId.SWITCH] = 50
{}[PlatformId.GGP] = 50
{}[SlotSystem.LIMITED_OBJECT_PALLET] = {}
SlotSystem.NUM_OBJECT_LIMITS = {}
v0 = Class(SlotSystem)
function SlotSystem.new(mission, isServer, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5)
  v3.mission = mission
  v3.isServer = isServer
  v3.slotUsage = 0
  local v6 = getPlatformId()
  v3.slotLimit = SlotSystem.TOTAL_NUM_GARAGE_SLOTS[v6]
  local v8 = getPlatformId()
  v3.vramPerSlot = SlotSystem.VRAM_MEGABYTES_PER_SLOT[v8] * 1024 * 1024
  if isServer then
    v3.objectLimits = {}
    for v7, v8 in pairs(SlotSystem.NUM_OBJECT_LIMITS) do
      local v12 = getPlatformId()
      v3.objectLimits[v7] = {objects = {}, limit = v8[v12]}
    end
  end
  return v3
end
function SlotSystem.delete(v0)
end
function SlotSystem:loadMapData(xmlFile, missionInfo)
  self:updateSlotLimit()
  return true
end
function SlotSystem:saveToXMLFile(xmlFile, key)
  setXMLInt(xmlFile, key .. "#slotUsage", self.slotUsage)
end
function SlotSystem.getIsCountableObject(v0, v1)
  local v2 = v1:isa(Vehicle)
  if not v2 then
    v2 = v1:isa(Placeable)
  end
  return v2
end
function SlotSystem:updateSlotUsage()
  local v2 = math.ceil((self.mission.vertexBufferMemoryUsage + self.mission.indexBufferMemoryUsage + self.mission.textureMemoryUsage) / self.vramPerSlot)
  self.slotUsage = v2
  for v5, v6 in pairs(self.mission.ownedItems) do
    if not (0 < v6.numItems) then
      continue
    end
    if not not v5.ignoreVramUsage then
      continue
    end
    local v7 = self:getStoreItemSlotUsage(v5, true)
    local v9 = self:getStoreItemSlotUsage(v5, false)
    self.slotUsage = self.slotUsage + v7 + v9 * (v6.numItems - 1)
  end
  for v5, v6 in pairs(self.mission.leasedVehicles) do
    if not (0 < v6.numItems) then
      continue
    end
    if not not v5.ignoreVramUsage then
      continue
    end
    local v10 = self:getStoreItemSlotUsage(v5, true)
    v10 = self:getStoreItemSlotUsage(v5, false)
    self.slotUsage = self.slotUsage + v10 + v10 * (v6.numItems - 1)
  end
  v2:onSlotUsageChanged(self.slotUsage, self.slotLimit)
  v2:publish(MessageType.SLOT_USAGE_CHANGED, self.slotUsage, self.slotLimit)
end
function SlotSystem:updateSlotLimit()
  local v3 = getPlatformId()
  v3 = v3:getUsers()
  for v5, v6 in ipairs(...) do
    local v9 = v6:getPlatformId()
    if not (SlotSystem.TOTAL_NUM_GARAGE_SLOTS[v9] ~= nil) then
      continue
    end
    local v8 = math.min(v1, SlotSystem.TOTAL_NUM_GARAGE_SLOTS[v9])
  end
  self:setSlotLimit(v1)
end
function SlotSystem:setSlotLimit(slotLimit)
  if slotLimit ~= self.slotLimit then
    local v3 = v3:getText("ingameNotification_crossPlaySlotLimitInactive")
    if slotLimit < math.huge then
      local v6 = v6:getText("ingameNotification_crossPlayNewSlotLimit")
      local v5 = string.format(v6, slotLimit)
    end
    v5:addIngameNotification(v4, v3)
    self.slotLimit = slotLimit
    if g_server ~= nil then
      local v7 = SlotSystemUpdateEvent.new(slotLimit)
      v5:broadcastEvent(...)
    end
  end
  v3:onSlotUsageChanged(self.slotUsage, slotLimit)
  v3:publish(MessageType.SLOT_USAGE_CHANGED, self.slotUsage, self.slotLimit)
  return v2
end
function SlotSystem:hasEnoughSlots(storeItem)
  if storeItem.ignoreVramUsage then
    return true
  end
  local v6 = v6:getNumOfItems(storeItem)
  if v6 ~= 0 then
  end
  local v2 = self:getStoreItemSlotUsage(v4, true)
  if self.slotUsage + v2 > self.slotLimit then
  end
  return true
end
function SlotSystem:getAreSlotsVisible()
  if self.slotLimit < SlotSystem.VISIBILITY_THRESHOLD then
    return true
  end
  if self.slotLimit * SlotSystem.CRITICAL_FACTOR <= self.slotUsage then
    return true
  end
  return false
end
function SlotSystem:getStoreItemSlotUsage(storeItem, includeShared)
  if storeItem ~= nil then
    local v3 = StoreItemUtil.getIsAnimal(storeItem)
    if not v3 then
      v3 = StoreItemUtil.getIsObject(storeItem)
      -- if not v3 then goto L14 end
    end
  end
  return 0
  if includeShared then
  else
    local v4 = math.max(storeItem.perInstanceVramUsage, storeItem.sharedVramUsage * 0.05)
  end
  local v5 = math.ceil(v3 / self.vramPerSlot)
  v4 = math.max(v5, 1)
  return v4
end
function SlotSystem:getCanConnect(uniqueUserId, platformId)
  if SlotSystem.TOTAL_NUM_GARAGE_SLOTS[platformId] ~= nil and self.slotUsage > SlotSystem.TOTAL_NUM_GARAGE_SLOTS[platformId] then
  end
  return v4
end
function SlotSystem:addLimitedObject(objectType, object)
  if not self.isServer then
    return
  end
  if self.objectLimits[objectType] == nil then
    return
  end
  table.addElement(v3.objects, object)
end
function SlotSystem:removeLimitedObject(objectType, object)
  if not self.isServer then
    return
  end
  if self.objectLimits[objectType] == nil then
    return
  end
  table.removeElement(v3.objects, object)
end
function SlotSystem:getCanAddLimitedObjects(objectType, numObjects)
  if not self.isServer then
    return true
  end
  if self.objectLimits[objectType] == nil then
    return false
  end
  if #v3.objects + (numObjects or 1) > v3.limit then
  end
  return true
end
