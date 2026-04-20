-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TensionBeltManager = {}
local TensionBeltManager_mt = Class(TensionBeltManager)
function TensionBeltManager.new(customMt)
  if customMt == nil then
  end
  setmetatable({}, customMt)
  {}:initDataStructures()
  return {}
end
function TensionBeltManager:initDataStructures()
  self.belts = {}
  self.defaultBeltData = nil
end
function TensionBeltManager:unloadMapData()
  self:initDataStructures()
end
function TensionBeltManager.onCreateTensionBelt(_, id)
  local v4 = getUserAttribute(id, "name")
  local v3 = Utils.getNoNil(v4, "default")
  local v5 = getUserAttribute(id, "width")
  v4 = Utils.getNoNil(v5, 0.15)
  v5 = g_tensionBeltManager:getType(v3)
  if g_tensionBeltManager.belts[v5] ~= nil then
    print("Warning: Tension belt type '" .. v3 .. "' already exists!")
    return
  end
  local v10 = getNumOfChildren(id)
  -- TODO: structure LOP_FORNPREP (pc 48, target 174)
  v10 = getChildAt(id, 0)
  local v11 = getUserAttribute(v10, "isMaterial")
  if v11 then
    local v12 = getMaterial(v10, 0)
    local v13 = getUserAttribute(v10, "uvScale")
    v12 = Utils.getNoNil(v13, 0.1)
  else
    v11 = getUserAttribute(v10, "isDummyMaterial")
    if v11 then
      v12 = getMaterial(v10, 0)
      v13 = getUserAttribute(v10, "uvScale")
      v12 = Utils.getNoNil(v13, 0.1)
    else
      v11 = getUserAttribute(v10, "isHook")
      if v11 then
        if {width = v4}.hook ~= nil then
          v12 = getChildAt(v10, 0)
          v11, v12, v13 = getTranslation(...)
          -- goto L173  (LOP_JUMP +37)
        end
        v12 = getChildAt(v10, 0)
        v11, v12, v13 = getTranslation(...)
        v6.hook = {node = v10, sizeRatio = v13}
      else
        v11 = getUserAttribute(v10, "isRatchet")
        if v11 then
          v12 = getChildAt(v10, 0)
          v11, v12, v13 = getTranslation(...)
        end
      end
    end
  end
  -- TODO: structure LOP_FORNLOOP (pc 173, target 49)
  if v6.material == nil then
    print("Warning: No material defined for tension belt type '" .. v3 .. "'!")
    return
  end
  if v6.dummyMaterial == nil then
    print("Warning: No material defined for tension belt type '" .. v3 .. "'!")
    return
  end
  v2.belts[v5] = v6
  if v2.defaultBeltData == nil then
    v2.defaultBeltData = v6
  end
end
function TensionBeltManager.getType(v0, v1)
  local v4 = string.upper(v1)
  return "BELT_TYPE_" .. v4
end
function TensionBeltManager:getBeltData(beltName)
  if beltName == nil then
    return self.defaultBeltData
  end
  local beltType = self:getType(beltName)
  if self.belts[beltType] == nil then
    return self.defaultBeltData
  end
  return v3
end
local v1 = TensionBeltManager.new()
g_tensionBeltManager = v1
