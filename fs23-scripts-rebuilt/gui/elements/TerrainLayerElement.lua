-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TerrainLayerElement = {}
local TerrainLayerElement_mt = Class(TerrainLayerElement, GuiElement)
function TerrainLayerElement.new(target, custom_mt)
  local v3 = v3:superClass()
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2.terrainLayerTextureOverlay = nil
  return v2
end
function TerrainLayerElement:delete()
  self:destroyOverlay(self.terrainRootNode)
  local v2 = v2:superClass()
  v2.delete(self)
end
function TerrainLayerElement:copyAttributes(src)
  local v3 = v3:superClass()
  v3.copyAttributes(self, src)
  self:setTerrainLayer(src.terrainRootNode, src.layer)
end
function TerrainLayerElement:setTerrainLayer(terrainRootNode, layer)
  if layer ~= nil then
    if self.terrainLayerTextureOverlay == nil then
      self:createOverlay(terrainRootNode)
    end
    local displayLayer = getTerrainLayerSubLayer(terrainRootNode, layer, 0)
    setOverlayLayer(self.terrainLayerTextureOverlay, displayLayer)
    self.layer = layer
  end
end
function TerrainLayerElement:createOverlay(terrainRootNode)
  self.terrainRootNode = terrainRootNode
  local terrainLayerTexture = createTerrainLayerTexture(g_currentMission.terrainRootNode)
  local v3 = createImageOverlayWithTexture(terrainLayerTexture)
  self.terrainLayerTextureOverlay = v3
  delete(terrainLayerTexture)
end
function TerrainLayerElement:destroyOverlay(terrainRootNode)
  if self.terrainRootNode ~= nil and self.terrainRootNode == terrainRootNode then
    if self.terrainLayerTextureOverlay ~= nil then
      delete(self.terrainLayerTextureOverlay)
      self.terrainLayerTextureOverlay = nil
    end
    self.terrainRootNode = nil
  end
end
function TerrainLayerElement:draw(clipX1, clipY1, clipX2, clipY2)
  if clipX1 ~= nil then
    local v23 = math.max(self.absPosition[1], clipX1)
    v23 = math.max(self.absPosition[2], clipY1)
    local v25 = math.min(self.absPosition[1] + self.size[1], clipX2)
    v23 = math.max(v25 - v23, 0)
    v25 = math.min(self.absPosition[2] + self.size[2], clipY2)
    v23 = math.max(v25 - v23, 0)
  end
  if v9 ~= v13 and v10 ~= v12 then
    setOverlayUVs(self.terrainLayerTextureOverlay, v9, v10, v11, v12, v13, v14, v15, v16)
    renderOverlay(self.terrainLayerTextureOverlay, v5, v6, v7, v8)
  end
  local v18 = v18:superClass()
  v18.draw(self, clipX1, clipY1, clipX2, clipY2)
end
function TerrainLayerElement:canReceiveFocus()
  if self.visible then
    -- if #v0.elements >= 1 then goto L11 end
  end
  return false
  for v4, v5 in ipairs(self.elements) do
    local v6 = v5:canReceiveFocus()
    if not not v6 then
      continue
    end
    return false
  end
  return true
end
function TerrainLayerElement:getFocusTarget()
  if 0 < #self.elements then
    local v1, v2 = next(self.elements)
    if v2 then
      return v2
    end
  end
  return self
end
function TerrainLayerElement:reset()
  self:destroyOverlay(self.terrainRootNode)
end
