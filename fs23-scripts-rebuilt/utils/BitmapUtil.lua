-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BitmapUtil = {FORMAT = {}}
BitmapUtil.FORMAT.BITMAP = 0
BitmapUtil.FORMAT.GREYMAP = 1
BitmapUtil.FORMAT.PIXELMAP = 2
{}[BitmapUtil.FORMAT.BITMAP] = {extension = "pbm", getHeader = function(v0, v1, v2)
  return string.format("P4\n%d %d\n", v0, v1)
end, getPixel = function(self)
  return string.format("%c", self[1])
end}
{}[BitmapUtil.FORMAT.GREYMAP] = {extension = "pgm", getHeader = function(v0, v1, v2)
  return string.format("P5\n%d %d\n%d\n", v0, v1, v2)
end, getPixel = function(self)
  return string.format("%c", self[1])
end}
{}[BitmapUtil.FORMAT.PIXELMAP] = {extension = "ppm", getHeader = function(v0, v1, v2)
  return string.format("P6\n%d %d\n%d\n", v0, v1, v2)
end, getPixel = function(self)
  return string.format("%c%c%c", self[1], self[2], self[3])
end}
BitmapUtil.FORMAT_TO_PNM = {}
function BitmapUtil:writeBitmapToFile(v1, v2, v3, v4)
  if BitmapUtil.FORMAT_TO_PNM[v4] == nil then
    Logging.error("Invalid image format '%s'. Use one of BitmapUtil.FORMAT", v4)
    return false
  end
  local v6 = string.format("%s.%s", v3, v5.extension or "pnm")
  v6 = createFile(v6, FileAccess.WRITE)
  if v6 == 0 then
    Logging.error("BitmapUtil.writeBitmapToFile(): Unable to create file '%s'", v6)
    return false
  end
  local v9 = v5.getHeader(v1, v2, 255)
  fileWrite(...)
  -- TODO: structure LOP_FORNPREP (pc 57, target 79)
  local v14 = v5.getPixel(self[1])
  {}[#{} + 1] = v14
  if 1 % 1025 == 0 then
    local v15 = table.concat({})
    fileWrite(...)
    table.clear({})
  end
  -- TODO: structure LOP_FORNLOOP (pc 78, target 58)
  if 0 < #v7 then
    local v12 = v8(v7)
    fileWrite(...)
  end
  delete(v6)
  Logging.info("Wrote bitmap (width=%d, height=%d) to '%s'", v1, v2, v3)
  return true
end
function BitmapUtil.writeBitmapToFileFromIterator(iterator, width, height, filepath, imageFormat)
  if BitmapUtil.FORMAT_TO_PNM[imageFormat] == nil then
    Logging.error("Invalid image format '%s'. Use one of BitmapUtil.FORMAT", imageFormat)
    return false
  end
  local v6 = string.format("%s.%s", filepath, v5.extension or "pnm")
  v6 = createFile(v6, FileAccess.WRITE)
  if v6 == 0 then
    Logging.error("BitmapUtil.writeBitmapToFileFromIterator(): Unable to create file '%s'", v6)
    return false
  end
  local v9 = v5.getHeader(width, height, 255)
  fileWrite(...)
  for v14 in iterator() do
    local v17 = v5.getPixel(v14)
    v7[#v7 + 1] = v17
    if v8 % 1025 == 0 then
      local v18 = v9(v7)
      fileWrite(...)
      v10(v7)
    end
  end
  if 0 < #v7 then
    v13 = v9(v7)
    fileWrite(...)
  end
  delete(v6)
  Logging.info("Wrote bitmap (width=%d, height=%d) to '%s'", width, height, filepath)
  return true
end
