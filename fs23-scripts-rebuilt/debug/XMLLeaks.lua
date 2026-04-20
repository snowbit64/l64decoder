-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

openXMLFiles = {}
function loadXMLFile(name, filename, ...)
  print("loadXMLFile " .. filename)
  local v2 = u0(...)
  openXMLFiles[v2] = {filename = filename}
  return v2
end
function loadXMLFileFromMemory(...)
  local v0 = u0(...)
  openXMLFiles[v0] = {filename = "From Memory"}
  return v0
end
function delete(id, ...)
  u0(...)
  openXMLFiles[id] = nil
end
function doExit()
  log("Open XML-Files")
  for v3, v4 in pairs(openXMLFiles) do
    log(v3, v4.filename)
    log(v4.trace)
  end
  u0()
end
