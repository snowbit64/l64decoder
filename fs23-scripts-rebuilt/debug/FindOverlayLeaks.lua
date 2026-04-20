-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

FindOverlayLeaks = {overlays = {}, guiElements = {}}
function FindOverlayLeaks.init()
  function createImageOverlay(filename, ...)
    local v1 = u0(...)
    if v1 ~= 0 then
      local v4 = debug.traceback()
      FindOverlayLeaks.overlays[v1] = {trace = v4, filename = filename}
    end
    return v1
  end
  GuiElement.new = function(...)
    local v0 = u0(...)
    local v3 = debug.traceback()
    v3 = ClassUtil.getClassNameByObject(v0)
    FindOverlayLeaks.guiElements[v0] = {trace = v3, className = v3}
    return v0
  end
  GuiElement.delete = function(v0, ...)
    FindOverlayLeaks.guiElements[v0] = nil
    u0(...)
  end
  function delete(id)
    u0(id)
    FindOverlayLeaks.overlays[id] = nil
  end
end
function FindOverlayLeaks.printUndeletedOverlays()
  local v0 = next(FindOverlayLeaks.overlays)
  if v0 ~= nil then
    log("FindOverlayLeaks: Undeleted overlays\n\n")
    for v3, v4 in pairs(FindOverlayLeaks.overlays) do
      log(v3, v4.filename)
      log(v4.trace)
      log("\n\n")
    end
  end
  v0 = next(FindOverlayLeaks.guiElements)
  if v0 ~= nil then
    log("FindOverlayLeaks: Undeleted gui elements\n\n")
    for v3, v4 in pairs(FindOverlayLeaks.guiElements) do
      log(v3, v4.className)
      log(v4.trace)
      log("\n\n")
    end
  end
end
