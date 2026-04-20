-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

for v5 in pairs(_G) do
  if not (v0[v5] ~= true) then
    continue
  end
  v1[#v1 + 1] = v5
end
table.sort(v1)
print(#v1 .. " globals found")
print("saving to " .. "exportedGlobals.txt")
v2 = fileExists("exportedGlobals.txt")
if v2 then
  deleteFile("exportedGlobals.txt")
end
v2 = fileExists("exportedGlobalsStrings.txt")
if v2 then
  deleteFile("exportedGlobalsStrings.txt")
end
v2 = createFile("exportedGlobals.txt", FileAccess.WRITE)
v3 = createFile("exportedGlobalsStrings.txt", FileAccess.WRITE)
for v8, v9 in ipairs(v1) do
  local v10 = v4:len()
  if 180 < v10 then
    fileWrite(v3, v4 .. "\n")
  end
  local v11 = string.format("\"%s\", ", v9)
  fileWrite(v2, v9 .. "\n")
end
fileWrite(v3, v4 .. "\n")
delete(v2)
delete(v3)
print("saved raw globals to " .. "exportedGlobals.txt")
print("saved globals to " .. "exportedGlobalsStrings.txt")
print("exiting")
requestExit()
