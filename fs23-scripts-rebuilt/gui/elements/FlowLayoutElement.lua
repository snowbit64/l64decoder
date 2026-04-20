-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FlowLayoutElement = {}
local FlowLayoutElement_mt = Class(FlowLayoutElement, BoxLayoutElement)
function FlowLayoutElement.new(target, custom_mt)
  local v3 = v3:superClass()
  if not custom_mt then
  end
  local v2 = v2(v3, v4)
  v2.alignmentX = BoxLayoutElement.ALIGN_LEFT
  v2.alignmentY = BoxLayoutElement.ALIGN_BOTTOM
  v2.elementSpacing = 0
  return v2
end
function FlowLayoutElement:loadProfile(v1, v2)
  local v4 = v4:superClass()
  v4.loadProfile(self, v1, v2)
  local v5 = v1:getValue("elementSpacing", "0px")
  v4 = GuiUtils.getNormalizedValues(v5, self.outputSize, {self.elementSpacing})
  self.elementSpacing = v4[1]
end
function FlowLayoutElement:copyAttributes(v1)
  local v3 = v3:superClass()
  v3.copyAttributes(self, v1)
  self.elementSpacing = v1.elementSpacing
end
function FlowLayoutElement:invalidateLayout(v1, v2)
  if not v2 then
    self:updateLayoutCells(v1)
    self:updateLayoutSizes()
  end
  for v8, v9 in pairs(self.elements) do
    local v10 = self:getIsElementIncluded(v9, v1)
    if not v10 then
      continue
    end
    v10 = math.max(v4, v9.absSize[2] + v9.margin[2] + v9.margin[4])
  end
  for v11, v12 in ipairs(self.elements) do
    local v13 = self:getIsElementIncluded(v12, v1)
    if v13 then
      v12.line = v6
      if 0.0001 < v5 + v12.margin[1] + v12.absSize[1] - self.absSize[1] then
        -- TODO: structure LOP_FORNPREP (pc 81, target 97)
        if self.elements[v11].line == nil then
          -- if v11 ~= v11 then goto L96 end
        end
        if not v18.disallowFlowCut then
        else
          -- TODO: structure LOP_FORNLOOP (pc 96, target 82)
        end
        local v18 = math.max(v11 - 1, 1)
        -- TODO: structure LOP_FORNPREP (pc 107, target 137)
        if self.elements[v14].line ~= nil then
          if v14 ~= v14 then
          end
          v18:setPosition(v13, nil)
          v18.line = v6
        end
        -- TODO: structure LOP_FORNLOOP (pc 136, target 108)
        v12.line = v6
        if v14 ~= v11 then
        end
      end
      if v7[v6] ~= nil and 0 < v7[v6] then
      end
      v12:setPosition(v13, nil)
      v7[v6] = v13 + v12.absSize[1] + v12.margin[3]
    else
      v12.line = nil
    end
  end
  if self.alignmentY == FlowLayoutElement.ALIGN_MIDDLE then
  elseif self.alignmentY == FlowLayoutElement.ALIGN_TOP then
  end
  for v14, v15 in pairs(self.elements) do
    if not (v15.line ~= nil) then
      continue
    end
    if self.alignmentY == FlowLayoutElement.ALIGN_MIDDLE then
      local v17 = math.max(0, (v4 - v15.absSize[2]) * 0.5)
    elseif self.alignmentY == FlowLayoutElement.ALIGN_TOP then
      v17 = math.max(0, v4 - v15.absSize[2])
    end
    v15:setPosition(nil, v16)
  end
  if self.alignmentX ~= BoxLayoutElement.ALIGN_CENTER then
    -- if v0.alignmentX ~= BoxLayoutElement.ALIGN_RIGHT then goto L327 end
  end
  for v14, v15 in pairs(self.elements) do
    if not (v7[v15.line] ~= nil) then
      continue
    end
    if self.alignmentX == BoxLayoutElement.ALIGN_CENTER then
    elseif self.alignmentX == BoxLayoutElement.ALIGN_RIGHT then
    end
    v15:setPosition(v15.position[1] + v17, nil)
  end
end
function FlowLayoutElement:updateAbsolutePosition()
  local v2 = v2:superClass()
  v2.updateAbsolutePosition(self)
  self:invalidateLayout(false, true)
end
