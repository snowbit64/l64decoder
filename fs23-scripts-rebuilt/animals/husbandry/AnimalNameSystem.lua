-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

AnimalNameSystem = {}
local AnimalNameSystem_mt = Class(AnimalNameSystem)
function AnimalNameSystem.new(mission, customMt)
  if not customMt then
  end
  local v2 = v2(v3, v4)
  v2.mission = mission
  v2.names = {}
  return v2
end
function AnimalNameSystem.delete(v0)
end
function AnimalNameSystem:loadMapData(xmlFile, missionInfo)
  local v3 = getXMLString(xmlFile, "map.animals.names#filename")
  if v3 ~= nil then
    -- cmp-jump LOP_JUMPXEQKS R3 aux=0x80000003 -> L16
  end
  Logging.xmlInfo(xmlFile, "No animals names xml given at 'map.animals.names#filename'")
  return false
  local v4 = Utils.getFilename(v3, self.mission.baseDirectory)
  v4 = XMLFile.load("animalNames", v4)
  if v4 ~= nil then
    v4:iterate("animalNames.name", function(self, xmlFile)
      local missionInfo = missionInfo:getString(xmlFile .. "#value")
      if missionInfo == nil then
        Logging.xmlError(u0, "Missing name for '%s'", xmlFile)
        return false
      end
      local v3 = v3:convertText(missionInfo, u1.customEnvironment)
      table.insert(u2.names, v3)
    end)
    v4:delete()
    if 0 >= #self.names then
    end
    return true
  end
  return false
end
function AnimalNameSystem:getRandomName()
  if #self.names == 0 then
    return ""
  end
  local v2 = math.random(1, v1)
  return self.names[v2]
end
