-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ValueMap = {MOD_NAME = g_currentModName}
local ValueMap_mt = Class(ValueMap)
function ValueMap.new(pfModule, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.pfModule = pfModule
  v2.filename = "valueMap.grle"
  v2.name = "valueMap"
  v2.id = "VALUE_MAP"
  v2.label = "unknown"
  v2.requireMinimapDisplay = false
  v2.minimapSourceObject = nil
  v2.minimapSourceObjectSelected = false
  v2.requireMinimapUpdate = false
  v2.minimapMissionState = false
  v2.minimapAdditionalElementRealSize = {-1, -1}
  v2.minimapAdditionalElementLinkNode = nil
  v2.minimapGradientUVs = nil
  v2.minimapGradientColorBlindUVs = nil
  v2.minimapLabelName = nil
  v2.minimapLabelNameMission = nil
  v2.minimapGradientLabelName = nil
  v2.bitVectorMapsToSync = {}
  v2.bitVectorMapsToSave = {}
  v2.bitVectorMapsToDelete = {}
  return v2
end
function ValueMap:initialize()
  self.bitVectorMapsToSync = {}
  self.bitVectorMapsToSave = {}
  self.bitVectorMapsToDelete = {}
  self.requireMinimapDisplay = false
  self.minimapSourceObject = nil
  self.minimapSourceObjectSelected = false
  self.requireMinimapUpdate = false
  self.minimapMissionState = false
end
function ValueMap.loadFromXML(v0, v1, v2, v3, v4, v5)
  return true
end
function ValueMap.postLoad(v0, v1, v2, v3, v4, v5)
  return true
end
function ValueMap.loadSavedBitVectorMap(v0, v1, v2, v3, v4)
  if g_currentMission.missionInfo.savegameDirectory ~= nil then
    local v7 = fileExists(g_currentMission.missionInfo.savegameDirectory .. "/" .. v2)
    if not v7 then
    end
  end
  v7 = createBitVectorMap(v1)
  if v6 ~= nil then
    local v8 = loadBitVectorMapFromFile(v7, v6, v3)
    if not v8 then
      Logging.error("Error while loading bit vector map '%s'", v6)
    end
  end
  if v6 == nil then
    delete(v7)
    local v9 = createBitVectorMap(v1)
    loadBitVectorMapNew(v9, v4, v4, v3, false)
  end
  return v7, v8
end
function ValueMap:addBitVectorMapToSync(bitVectorMap)
  if bitVectorMap ~= nil then
    table.insert(self.bitVectorMapsToSync, {bitVectorMap = bitVectorMap})
  end
end
function ValueMap:addBitVectorMapToSave(bitVectorMap, filename)
  if bitVectorMap ~= nil then
    table.insert(self.bitVectorMapsToSave, {bitVectorMap = bitVectorMap, filename = filename})
  end
end
function ValueMap:addBitVectorMapToDelete(bitVectorMap)
  if bitVectorMap ~= nil then
    table.insert(self.bitVectorMapsToDelete, {bitVectorMap = bitVectorMap})
  end
end
function ValueMap:initTerrain(mission, terrainId, filename)
  if mission.densityMapSyncer ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 9, target 21)
    v7:addDensityMap(self.bitVectorMapsToSync[1].bitVectorMap)
    -- TODO: structure LOP_FORNLOOP (pc 20, target 10)
  end
end
function ValueMap:delete()
  -- TODO: structure LOP_FORNPREP (pc 5, target 15)
  delete(self.bitVectorMapsToDelete[1].bitVectorMap)
  -- TODO: structure LOP_FORNLOOP (pc 14, target 6)
  self.bitVectorMapsToDelete = {}
end
function ValueMap.loadFromItemsXML(v0, v1, v2)
end
function ValueMap.saveToXMLFile(v0, v1, v2, v3)
end
function ValueMap.update(v0, v1)
end
function ValueMap.buildOverlay(v0, v1, v2, v3)
end
function ValueMap.getDisplayValues(v0)
  return {}
end
function ValueMap.getValueFilter(v0)
  return {}
end
function ValueMap:getMinimapValueFilter()
  return self:getValueFilter()
end
function ValueMap:getOverviewLabel()
  return v1:getText(self.label, ValueMap.MOD_NAME)
end
function ValueMap:getId()
  return self.id
end
function ValueMap.getShowInMenu(v0)
  return true
end
function ValueMap.getAllowCoverage(v0)
  return false
end
function ValueMap:setRequireMinimapDisplay(state, sourceObject, isSelected)
  if self.minimapSourceObject ~= nil then
    -- if v0.minimapSourceObject ~= v2 then goto L22 end
  end
  self.requireMinimapDisplay = state
  if state then
    self.minimapSourceObject = sourceObject
    self.minimapSourceObjectSelected = isSelected
    return
  end
  self.minimapSourceObject = nil
  self.minimapSourceObjectSelected = false
end
function ValueMap:getRequireMinimapDisplay()
  return self.requireMinimapDisplay, self.minimapSourceObjectSelected
end
function ValueMap:setMinimapRequiresUpdate(state)
  self.requireMinimapUpdate = state
end
function ValueMap:setMinimapMissionState(state)
  if state ~= self.minimapMissionState then
    self.minimapMissionState = state
    self:setMinimapRequiresUpdate(true)
  end
end
function ValueMap:getMinimapUpdateTimeLimit()
  if self.minimapMissionState then
    return 1
  end
  return 0.25
end
function ValueMap:getMinimapRequiresUpdate()
  return self.requireMinimapUpdate
end
function ValueMap.getMinimapAdditionalElement(v0)
  return nil
end
function ValueMap:setMinimapAdditionalElementRealSize(x, y)
  self.minimapAdditionalElementRealSize[1] = x
  self.minimapAdditionalElementRealSize[2] = y
end
function ValueMap:getMinimapAdditionalElementRealSize()
  return self.minimapAdditionalElementRealSize[1], self.minimapAdditionalElementRealSize[2]
end
function ValueMap:setMinimapAdditionalElementLinkNode(linkNode)
  self.minimapAdditionalElementLinkNode = linkNode
end
function ValueMap:getMinimapAdditionalElementLinkNode()
  return self.minimapAdditionalElementLinkNode
end
function ValueMap:getMinimapLabel()
  if self.minimapMissionState then
    if not self.minimapLabelNameMission then
    end
    return v1
  end
  return self.minimapLabelName
end
function ValueMap:getMinimapGradientLabel()
  if not self.minimapMissionState then
    return self.minimapGradientLabelName
  end
end
function ValueMap:getMinimapGradientUVs(isColorBlindMode)
  if isColorBlindMode then
    -- if v0.minimapGradientColorBlindUVs then goto L6 end
  end
  return self.minimapGradientUVs
end
function ValueMap.getMinimapZoomFactor(v0)
  return 3
end
function ValueMap.collectFieldInfos(v0, v1)
end
function ValueMap.getHelpLinePage(v0)
  return 0
end
function ValueMap.getRequiresAdditionalActionButton(v0, v1)
  return false
end
function ValueMap.getAdditionalActionButtonText(v0)
  return ""
end
function ValueMap.onAdditionalActionButtonPressed(v0)
end
function ValueMap.overwriteGameFunctions(v0, v1)
  v1:overwriteGameFunction(DensityMapHeightManager, "saveCollisionMap", function(v0, v1, v2)
    -- TODO: structure LOP_FORNPREP (pc 6, target 22)
    saveBitVectorMapToFile(u0.bitVectorMapsToSave[1].bitVectorMap, v2 .. "/" .. u0.bitVectorMapsToSave[1].filename)
    -- TODO: structure LOP_FORNLOOP (pc 21, target 7)
    v0(v1, v2)
  end)
  v1:overwriteGameFunction(DensityMapHeightManager, "prepareSaveCollisionMap", function(v0, v1, v2)
    -- TODO: structure LOP_FORNPREP (pc 6, target 22)
    prepareSaveBitVectorMapToFile(u0.bitVectorMapsToSave[1].bitVectorMap, v2 .. "/" .. u0.bitVectorMapsToSave[1].filename)
    -- TODO: structure LOP_FORNLOOP (pc 21, target 7)
    v0(v1, v2)
  end)
  v1:overwriteGameFunction(DensityMapHeightManager, "savePreparedCollisionMap", function(v0, v1, v2, v3)
    if 1 <= #u0.bitVectorMapsToSave then
      {saveBitVectorMap = function(v0)
        savePreparedBitVectorMapToFile(u0.bitVectorMapsToSave[v0].bitVectorMap, "tempCallback", {tempCallback = function()
          if u1 < #u0.bitVectorMapsToSave then
            u2.saveBitVectorMap(u1 + 1)
            return
          end
          u3(u4, u5, u6)
        end})
      end}.saveBitVectorMap(1)
      return
    end
    v0(v1, v2, v3)
  end)
end
