-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Files = {}
local Files_mt = Class(Files)
function Files.new(path)
  local v1 = setmetatable({}, u0)
  v1.files = {}
  getFiles(path, "fileCallbackFunction", v1)
  return v1
end
function Files:fileCallbackFunction(filename, isDirectory)
  table.insert(self.files, {filename = filename, isDirectory = isDirectory})
end
