-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

function translate(name, dx, dy, dz)
  local v4, v5, v6 = getTranslation(name)
  setTranslation(name, v4 + dx, v5 + dy, v6 + dz)
end
function rotate(name, dx, dy, dz)
  local v4, v5, v6 = getRotation(name)
  setRotation(name, (v4 + dx) % 2 * math.pi, (v5 + dy) % 2 * math.pi, (v6 + dz) % 2 * math.pi)
end
function toggleVisibility(name)
  local state = getVisibility(name)
  setVisibility(name, not state)
end
function printScenegraph(node, visibleOnly)
  printScenegraphRec(node, 0, visibleOnly)
end
function printScenegraphRec(node, level, visibleOnly)
  -- TODO: structure LOP_FORNPREP (pc 4, target 9)
  -- TODO: structure LOP_FORNLOOP (pc 8, target 5)
  if visibleOnly ~= nil and visibleOnly then
    -- if not v2 then goto L56 end
    local v4 = getVisibility(node)
    -- if not v4 then goto L56 end
  end
  local v8 = getName(node)
  local v11 = getVisibility(node)
  local v10 = tostring(...)
  local v5 = string.format(...)
  print(...)
  v4 = getNumOfChildren(node)
  -- TODO: structure LOP_FORNPREP (pc 45, target 56)
  local v9 = getChildAt(node, 0)
  printScenegraphRec(v9, level + 1)
  -- TODO: structure LOP_FORNLOOP (pc 55, target 46)
end
function printFullPath(node, str)
  local v6 = getName(node)
  local v8 = getVisibility(node)
  if v8 then
  else
  end
  local v4 = v4(v5, v6, v7)
  local v2 = getParent(node)
  if v2 ~= 0 then
    local v3 = getParent(node)
    printFullPath(v3, v4 .. (str or ""))
    return
  end
  print(str)
end
function getNodeFullPath(v0, v1)
  local v5 = getName(v0)
  local v2 = getParent(v0)
  if v2 ~= 0 then
    return getNodeFullPath(v2, "|" .. v5 .. (v1 or ""))
  end
  return v1
end
function exportScenegraphToGraphviz(node, filename)
  if node ~= nil and node ~= 0 then
    if filename == nil then
      local v4 = getName(node)
      local v2 = string.format(...)
    end
    v2 = createFile(filename, FileAccess.WRITE)
    local v7 = getName(node)
    v4 = string.format("%s// Start Node is '%s_(%d)'\n", "// LSIM2019 Scenegraph export for Graphviz\n", v7, node)
    v4 = string.format("%sdigraph G {\n", v4)
    v7 = getName(node)
    v4 = string.format("%s%s_%d  [shape=box,color=red,style=filled]\n", v4, v7, node)
    v4 = exportScenegraphToGraphvizRec(node, v4)
    v4 = string.format("%s\n}", v4)
    fileWrite(v2, v4)
    delete(v2)
  end
end
function exportScenegraphToGraphvizRec(node, result)
  local num = getNumOfChildren(node)
  -- TODO: structure LOP_FORNPREP (pc 7, target 50)
  local v6 = getChildAt(node, 0)
  local v11 = getName(node)
  local v10 = string.gsub(v11, "[%(%)]", "_")
  local v13 = getName(v6)
  local v12 = string.gsub(v13, "[%(%)]", "_")
  local v7 = string.format("%s %s_%d -> %s_%d\n", result, v10, node, v12, v6)
  local v8 = getChildAt(node, 0)
  v7 = exportScenegraphToGraphvizRec(v8, v7)
  -- TODO: structure LOP_FORNLOOP (pc 49, target 8)
  return v7
end
