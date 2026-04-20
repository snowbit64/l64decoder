-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FindDeletedObjectReferences = {references = {}, currentReferences = nil}
function FindDeletedObjectReferences.init()
  addConsoleCommand("findDeletedObjectReferences", "", "findReferences", FindDeletedObjectReferences)
end
function FindDeletedObjectReferences:addReference(v1)
  local v2 = StartParams.getIsSet("findDeletedReferences")
  if v2 then
    local v8 = tostring(self)
    v8 = tostring(v1)
    local v6 = tostring(self)
    v6 = ClassUtil.getClassNameByObject(self)
    local v5 = tostring(...)
    v6 = StartParams.getValue("autoCheckReferences")
    v5 = tonumber(...)
    v8 = tostring(self)
    table.insert(FindDeletedObjectReferences.references, {autoDeleteTime = g_time + (v5 or 600000), ref = self, refName = v8, refNameFull = v6 .. v5, text = v8 .. " " .. v8 .. " " .. (self.configFileName or "")})
  end
end
function FindDeletedObjectReferences.clear()
  FindDeletedObjectReferences.references = {}
end
function FindDeletedObjectReferences.findReferences()
  if FindDeletedObjectReferences.currentReferences ~= nil then
    return "There's already a check running. Please wait..."
  end
  FindDeletedObjectReferences.currentReferences = FindDeletedObjectReferences.references
  FindDeletedObjectReferences.currentRefIndex = 1
  FindDeletedObjectReferences.references = {}
  return "Starting references lookup...(total: " .. #FindDeletedObjectReferences.currentReferences .. ")"
end
function FindDeletedObjectReferences.update(dt)
  if FindDeletedObjectReferences.currentReferences ~= nil then
    FindDeletedObjectReferences.currentRefIndex = FindDeletedObjectReferences.currentRefIndex + 1
    if FindDeletedObjectReferences.currentReferences[FindDeletedObjectReferences.currentRefIndex] ~= nil then
      print(FindDeletedObjectReferences.currentRefIndex .. "/" .. #FindDeletedObjectReferences.currentReferences .. ": Find references for " .. FindDeletedObjectReferences.currentReferences[FindDeletedObjectReferences.currentRefIndex].text)
      FindDeletedObjectReferences.findReference(FindDeletedObjectReferences.currentReferences[FindDeletedObjectReferences.currentRefIndex].ref, nil, nil, _G, {}, {_G = true}, 1)
    else
      print("Finished references lookup!")
      FindDeletedObjectReferences.currentReferences = nil
    end
  end
  if FindDeletedObjectReferences.currentReferences == nil then
    local v1 = StartParams.getIsSet("autoCheckReferences")
    if v1 and FindDeletedObjectReferences.references[1] ~= nil and FindDeletedObjectReferences.references[1].autoDeleteTime < g_time then
      table.remove(FindDeletedObjectReferences.references, 1)
      print("Find references for " .. FindDeletedObjectReferences.references[1].text)
      FindDeletedObjectReferences.findReference(FindDeletedObjectReferences.references[1].ref, nil, nil, _G, {}, {_G = true}, 1)
    end
  end
end
function FindDeletedObjectReferences.findReference(ref, parent, key, value, path, checked, depth)
  local v7 = type(value)
  if v7 ~= "table" then
    return 1
  end
  if value == FindDeletedObjectReferences then
    return 1
  end
  if checked[value] ~= nil then
    return 1
  end
  if ref ~= value then
    checked[value] = true
  end
  path[depth] = {parent = parent, key = key, value = value}
  if value == ref then
    for v11, v12 in ipairs(path) do
      if not (v12.key ~= nil) then
        continue
      end
      local v14 = type(v12.parent)
      if v14 == "table" then
        v14 = ClassUtil.getClassNameByObject(v12.parent)
        if v14 then
          local v18 = tostring(v14)
          -- if v18 .. "." then goto L69 end
        end
      end
      v18 = tostring(v12.key)
      table.insert(v7, v13 .. v18)
    end
    v11 = table.concat(v7, " | ")
    print("   Ref: " .. v11)
    return 1
  end
  for v11, v12 in pairs(value) do
    local v13 = FindDeletedObjectReferences.findReference(ref, value, v12, v11, path, checked, depth + 1)
    v13 = FindDeletedObjectReferences.findReference(ref, value, v11, v12, path, checked, depth + 1)
  end
  path[depth] = nil
  return v7
end
function FindDeletedObjectReferences.draw()
  local v0 = StartParams.getIsSet("findDeletedReferences")
  if v0 then
    local v4 = string.format("Deleted Objects %d", #FindDeletedObjectReferences.references)
    renderText(...)
  end
end
