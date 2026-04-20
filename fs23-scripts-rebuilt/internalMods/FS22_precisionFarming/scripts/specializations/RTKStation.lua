-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

RTKStation = {}
function RTKStation.prerequisitesPresent(v0)
  return true
end
function RTKStation.registerFunctions(v0)
end
function RTKStation.registerOverwrittenFunctions(v0)
end
function RTKStation.registerEventListeners(v0)
  SpecializationUtil.registerEventListener(v0, "onFinalizePlacement", RTKStation)
  SpecializationUtil.registerEventListener(v0, "onDelete", RTKStation)
end
function RTKStation.registerXMLPaths(v0, v1)
end
function RTKStation.onFinalizePlacement(v0, v1)
  if g_precisionFarming ~= nil then
    v2:registerRTKStation(v0)
  end
end
function RTKStation.onDelete(v0)
  if g_precisionFarming ~= nil then
    v1:unregisterRTKStation(v0)
  end
end
