-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

TestI3DManager = {}
function TestI3DManager.init()
  TestI3DManager.file = "data/vehicles/fendt/vario900/vario900.i3d"
  TestI3DManager.sharedLoadRequestIds = {}
end
function TestI3DManager.update(v0)
  v2:update(v0)
end
function TestI3DManager.draw()
end
function TestI3DManager.mouseEvent(v0, v1, v2, v3, v4)
end
function TestI3DManager.keyEvent(v0, v1, v2, v3)
  if not v3 then
    if v1 == Input.KEY_m then
      local v5 = v5:loadSharedI3DFileAsync(TestI3DManager.file, false, false, TestI3DManager.finishedLoading, TestI3DManager, {file = TestI3DManager.file}, 1000)
      table.insert(TestI3DManager.sharedLoadRequestIds, v5)
      return
    end
    if v1 == Input.KEY_n then
      v5 = table.remove(v4.sharedLoadRequestIds, 1)
      -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L63
      v6:releaseSharedI3DFile(v5)
      return
    end
    if v1 == Input.KEY_q then
      restartApplication(false, "")
    end
  end
end
function TestI3DManager.finishedLoading(v0, v1, v2, v3)
  local v7 = getName(v1)
  log(...)
  delete(v1)
end
