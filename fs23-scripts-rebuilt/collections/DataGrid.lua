-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DataGrid = {}
local DataGrid_mt = Class(DataGrid)
function DataGrid.new(numRows, numColumns, customMt)
  if not customMt then
  end
  v4(v5, v6)
  v3.grid = {}
  v3.numRows = numRows
  v3.numColumns = numColumns
  -- TODO: structure LOP_FORNPREP (pc 20, target 31)
  table.insert(v3.grid, {})
  -- TODO: structure LOP_FORNLOOP (pc 30, target 21)
  return v3
end
function DataGrid:delete()
  self.grid = nil
end
function DataGrid:getValue(rowIndex, colIndex)
  if rowIndex >= 1 then
    -- if v0.numRows >= v1 then goto L16 end
  end
  Logging.error("rowIndex out of bounds!")
  printCallstack()
  return nil
  if colIndex >= 1 then
    -- if v0.numColumns >= v2 then goto L32 end
  end
  Logging.error("colIndex out of bounds!")
  printCallstack()
  return nil
  return self.grid[rowIndex][colIndex]
end
function DataGrid:setValue(rowIndex, colIndex, value)
  if rowIndex >= 1 then
    -- if v0.numRows >= v1 then goto L16 end
  end
  Logging.error("rowIndex out of bounds!")
  printCallstack()
  return false
  if colIndex >= 1 then
    -- if v0.numColumns >= v2 then goto L32 end
  end
  Logging.error("colIndex out of bounds!")
  printCallstack()
  return false
  self.grid[rowIndex][colIndex] = value
  return true
end
