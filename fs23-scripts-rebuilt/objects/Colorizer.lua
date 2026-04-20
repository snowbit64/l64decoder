-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Colorizer = {}
local Colorizer_mt = Class(Colorizer)
function Colorizer.onCreate(v0, v1)
  local v4 = Colorizer.new(v1)
  v2:addNonUpdateable(...)
  print("function Colorizer:onCreate(id)")
end
function Colorizer.new(name)
  setmetatable({}, u0)
  local v4 = getUserAttribute(name, "xmlFile")
  local v3 = Utils.getNoNil(v4, "")
  v4 = Utils.getFilename(v3, g_currentMission.loadingMapBaseDirectory)
  if v4 ~= "" then
    v4 = loadXMLFile("colors.xml", v4)
    while true do
      v6 = string.format("colors.color(%d)", v5)
      v7 = getXMLString(v4, v6 .. "#colorName")
      v8 = getXMLString(v4, v6 .. "#color")
      if not (v8 ~= nil) then
        break
      end
      v9, v10, v11 = v8:getVector()
      if v9 ~= nil and v10 ~= nil and v11 ~= nil then
        table.insert(v2, {r = v9, g = v10, b = v11, colorName = v7})
      end
    end
    delete(v4)
    v6 = getNumOfChildren(name)
    -- TODO: structure LOP_FORNPREP (pc 93, target 124)
    v10 = getChildAt(name, 1 - 1)
    local v13 = table.getn(v2)
    v11 = math.random(...)
    setShaderParameter(v10, "colorTint", v2[v11].r, v2[v11].g, v2[v11].b, 1, false)
    -- TODO: structure LOP_FORNLOOP (pc 123, target 94)
  end
  return v1
end
function Colorizer.delete(v0)
end
