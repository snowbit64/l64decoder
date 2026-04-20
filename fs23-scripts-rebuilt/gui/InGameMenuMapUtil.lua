-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InGameMenuMapUtil = {CONTEXT_BOX_ORIENTATION = {TOP_RIGHT = "topRight", BOTTOM_RIGHT = "bottomRight", BOTTOM_LEFT = "bottomLeft", TOP_LEFT = "topLeft"}}
{}[InGameMenuMapUtil.CONTEXT_BOX_ORIENTATION.TOP_RIGHT] = "ingameMenuMapContextCornerTopRight"
{}[InGameMenuMapUtil.CONTEXT_BOX_ORIENTATION.BOTTOM_RIGHT] = "ingameMenuMapContextCornerBottomRight"
{}[InGameMenuMapUtil.CONTEXT_BOX_ORIENTATION.BOTTOM_LEFT] = "ingameMenuMapContextCornerBottomLeft"
{}[InGameMenuMapUtil.CONTEXT_BOX_ORIENTATION.TOP_LEFT] = "ingameMenuMapContextCornerTopLeft"
InGameMenuMapUtil.CONTEXT_BOX_CORNER_PROFILE = {}
function InGameMenuMapUtil:getContextBoxPositionAndOrientation(v1)
  local v2, v3, v4 = self:getLastScreenPositionCenter()
  if 1 >= v2 + v1.size[1] then
  end
  if v2 - v1.size[1] >= 0 then
  end
  if 1 >= v3 + v1.size[2] then
  end
  if v5 then
    if true then
      -- goto L89  (LOP_JUMP +41)
    end
  elseif v6 then
    if true then
      -- goto L89  (LOP_JUMP +18)
    end
  else
    if true then
    end
  end
  return v2, v3, v8, v9
end
function InGameMenuMapUtil:updateContextBoxPosition(v1)
  if self ~= nil then
    local v2 = self:getIsVisible()
    if v2 and v1 ~= nil then
      local v2, v3, v4, v5 = InGameMenuMapUtil.getContextBoxPositionAndOrientation(v1, self)
      if v4 ~= InGameMenuMapUtil.CONTEXT_BOX_ORIENTATION.TOP_LEFT and v4 ~= InGameMenuMapUtil.CONTEXT_BOX_ORIENTATION.BOTTOM_LEFT then
      end
      if v4 ~= InGameMenuMapUtil.CONTEXT_BOX_ORIENTATION.BOTTOM_LEFT and v4 ~= InGameMenuMapUtil.CONTEXT_BOX_ORIENTATION.BOTTOM_RIGHT then
      end
      if v6 then
      end
      if v7 then
        self:applyProfile(InGameMenuMapUtil.CONTEXT_BOX_TOP_FRAME_PROFILE)
      else
        self:applyProfile(InGameMenuMapUtil.CONTEXT_BOX_BOTTOM_FRAME_PROFILE)
      end
      self:setAbsolutePosition(v2, v3)
      local v9 = self:getDescendantByName("corner")
      v9:applyProfile(InGameMenuMapUtil.CONTEXT_BOX_CORNER_PROFILE[v4])
    end
  end
end
function InGameMenuMapUtil:showContextBox(v1, v2, v3, v4, v5)
  if self ~= nil then
    self:setVisible(true)
    local v6, v7 = InGameMenuMapUtil.getContextBoxPositionAndOrientation(v1, self)
    self:setAbsolutePosition(v6, v7)
    self:applyProfile("ingameMenuMapContextBoxSmall")
    if v3 ~= nil then
      local v9 = string.find(v3, "data/store/store_empty")
      if v9 ~= nil then
      end
    end
    v9 = self:getDescendantByName("image")
    v9:setVisible(v8)
    if v8 then
      self:applyProfile("ingameMenuMapContextBox")
      v9:setImageFilename(v3)
      local v13 = unpack(v4)
      v9:setImageUVs(...)
    end
    local v10 = self:getDescendantByName("text")
    v10:setText(v2)
    local v11 = self:getDescendantByName("farm")
    if v5 ~= nil and g_currentMission.missionDynamicInfo.isMultiplayer then
      local v12 = v12:getFarmById(v5)
      -- cmp-jump LOP_JUMPXEQKNIL R12 aux=0x0 -> L106
      v11:setText(v12.name)
      local v16 = v12:getColor()
      local v15 = unpack(...)
      v11:setTextColor(...)
      return
    end
    v11:setText("")
  end
end
function InGameMenuMapUtil:hideContextBox()
  if self ~= nil then
    self:setVisible(false)
  end
end
function InGameMenuMapUtil:getHotspotVehicle()
  if self ~= nil and self.getVehicle ~= nil then
    return self:getVehicle()
  end
  return nil
end
