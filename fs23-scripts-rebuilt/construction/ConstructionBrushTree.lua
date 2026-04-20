-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ConstructionBrushTree = {}
local ConstructionBrushTree_mt = Class(ConstructionBrushTree, ConstructionBrush)
ConstructionBrushTree.ERROR = {NOT_ENOUGH_MONEY = 200, TOO_MANY_TREES = 201}
{}[ConstructionBrushTree.ERROR.NOT_ENOUGH_MONEY] = "ui_construction_notEnoughMoney"
{}[ConstructionBrushTree.ERROR.TOO_MANY_TREES] = "ui_construction_tooManyTrees"
ConstructionBrushTree.ERROR_MESSAGES = {}
function ConstructionBrushTree.new(subclass_mt, cursor)
  local v3 = v3:superClass()
  if not subclass_mt then
  end
  local v2 = v2(v3, cursor)
  v2.supportsPrimaryButton = true
  v2.supportsTertiaryButton = true
  v2.requiredPermission = Farm.PERMISSION.LANDSCAPING
  return v2
end
function ConstructionBrushTree.delete(v0)
  local v2 = v2:superClass()
  v2.delete(v0)
end
function ConstructionBrushTree:activate()
  local v2 = v2:superClass()
  v2.activate(self)
  v1:setRotationEnabled(true)
  v1:setShape(GuiTopDownCursor.SHAPES.CIRCLE)
  v1:setShapeSize(1)
  v1:setColorMode(GuiTopDownCursor.SHAPES_COLORS.SUCCESS)
  v1:setTerrainOnly(true)
  self:loadTree()
  self:randomlyRotateCursor()
end
function ConstructionBrushTree:deactivate()
  self:unloadTree()
  v1:setTerrainOnly(false)
  local v2 = v2:superClass()
  v2.deactivate(self)
end
function ConstructionBrushTree:setTree(type, stage)
  if not self.isActive then
    self.treeType = type
    self.treeStage = stage
  end
end
function ConstructionBrushTree:setParameters(treeType, treeStage)
  local v6 = tonumber(treeStage)
  self:setTree(...)
end
function ConstructionBrushTree:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  self:updateTreePosition()
end
function ConstructionBrushTree:updateTreePosition()
  if self.tree ~= nil then
    local v1, v2, v3 = v1:getHitTerrainPosition()
    if self.cursor.isVisible then
      if v1 ~= nil then
        local v4 = v4:getRotation()
        setWorldTranslation(self.tree, v1, v2, v3)
        setRotation(self.tree, 0, v4, 0)
        local v5 = self:verifyPlacement(v1, v2, v3)
        if v5 ~= nil then
          if not ConstructionBrushTree.ERROR_MESSAGES[v5] then
          end
          local v6 = v6:getText(v8)
          v7:setErrorMessage(v6)
          -- goto L94  (LOP_JUMP +28)
        end
        local v10 = self:getPrice()
        local v8 = v8:formatMoney(v10, 0, true, true)
        v6:setMessage(...)
      else
        v6 = v6:getText("ui_construction_spaceAlreadyOccupied")
        v4:setErrorMessage(...)
      end
    end
    setVisibility(self.tree, self.cursor.isVisible)
  end
end
function ConstructionBrushTree:verifyPlacement(x, y, z)
  local err = self:verifyAccess(x, y, z)
  if err ~= nil then
    return err
  end
  local v6 = v6:getMoney()
  local v7 = self:getPrice()
  if v7 > v6 then
  end
  if not true then
    return ConstructionBrushTree.ERROR.NOT_ENOUGH_MONEY
  end
  v6 = v6:canPlantTree()
  if not v6 then
    return ConstructionBrushTree.ERROR.TOO_MANY_TREES
  end
  return nil
end
function ConstructionBrushTree:getPrice()
  return v1:getBuyPrice(self.storeItem)
end
function ConstructionBrushTree:randomlyRotateCursor()
  local v5 = math.random()
  v1:setRotation(v5 * 2 * math.pi)
end
function ConstructionBrushTree:loadTree()
  if self.treeType ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R1 aux=0x80000000 -> L13
  end
  Logging.error("Tree brush has no tree type or stage set")
  return
  local v1 = v1:getTreeTypeDescFromName(self.treeType)
  if v1 == nil then
    Logging.error("Tree type %s does not exist", self.treeType)
    return
  end
  self.treeFilename = v1.treeFilenames[self.treeStage]
  if self.treeFilename == nil then
    Logging.error("Tree type %s does not have stage %d", self.treeType, self.treeStage)
    return
  end
  self.treeGrowth = self.treeStage / #v1.treeFilenames
  self.treeTypeIndex = v1.index
  setSplitShapesLoadingFileId(-1)
  setSplitShapesNextFileId(true)
  local v2, v3, v4 = v2:loadSharedI3DFile(self.treeFilename, false, false)
  self.sharedLoadRequestId = v3
  self:onTreeLoaded(v2, v4)
end
function ConstructionBrushTree:onTreeLoaded(node, failedReason)
  if node ~= nil then
    -- cmp-jump LOP_JUMPXEQKN R1 aux=0x80000000 -> L9
  end
  Logging.warning("Failed to load tree")
  return
  if not self.isActive then
    if self.sharedLoadRequestId ~= nil then
      v3:releaseSharedI3DFile(self.sharedLoadRequestId)
      self.sharedLoadRequestId = nil
    end
    delete(node)
    return
  end
  local v4 = getRootNode()
  link(v4, node)
  I3DUtil.setShaderParameterRec(node, "windSnowLeafScale", 0, 0, 1, 80)
  self.tree = node
end
function ConstructionBrushTree:unloadTree()
  if self.tree ~= nil then
    delete(self.tree)
    self.tree = nil
    if self.sharedLoadRequestId ~= nil then
      v1:releaseSharedI3DFile(self.sharedLoadRequestId)
      self.sharedLoadRequestId = nil
    end
    self.treeFilename = nil
  end
end
function ConstructionBrushTree:onButtonPrimary()
  if self.tree == nil then
    return
  end
  local v1, v2, v3 = v1:getHitTerrainPosition()
  if v1 ~= nil then
    local v4 = self:verifyPlacement(v1, v2, v3)
    if v4 == nil then
      local v7 = v7:getRotation()
      if g_server ~= nil then
        v7:plantTree(self.treeTypeIndex, v1, v2, v3, 0, v7, 0, self.treeGrowth, nil, false)
        local v10 = self:getPrice()
        v7:addMoney(-v10, g_currentMission.player.farmId, MoneyType.SHOP_PROPERTY_BUY, true)
      else
        v7 = v7:getServerConnection()
        local v20 = self:getPrice()
        local v9 = TreePlantEvent.new(self.treeTypeIndex, v1, v2, v3, 0, v7, 0, self.treeGrowth, nil, false, v20, g_currentMission.player.farmId)
        v7:sendEvent(...)
      end
      self:playSound(ConstructionSound.ID.TREE, 1 - self.treeGrowth)
      self:randomlyRotateCursor()
    end
  end
end
function ConstructionBrushTree:onButtonTertiary()
  self:randomlyRotateCursor()
end
function ConstructionBrushTree.getButtonPrimaryText(v0)
  return "$l10n_input_CONSTRUCTION_PLACE"
end
function ConstructionBrushTree.getButtonTertiaryText(v0)
  return "$l10n_input_CONSTRUCTION_RANDOM_ROTATE"
end
