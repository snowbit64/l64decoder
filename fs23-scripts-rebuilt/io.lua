-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

io = {}
local io_mt = Class(io)
function io.open(filename, options)
  if options ~= "w" then
    print("Warning: io.open, only write mode ('w') is allowed")
  end
  local v2 = createFile(filename, FileAccess.WRITE)
  if v2 ~= 0 then
    setmetatable({}, u0)
    return {fileId = v2}
  end
end
function io:close()
  delete(self.fileId)
  self.fileId = 0
end
function io:write(...)
  for v4, v5 in ipairs({}) do
    local v8 = tostring(v5)
    fileWrite(...)
  end
end
function io.flush(v0)
end
