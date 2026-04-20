-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ImeSimulator = {IS_INITIALIZED = false, IS_ACTIVE = false, LAST_STRING = "", IS_CLOSED = false, IS_CANCELED = false, MAX_CHARS = 0}
local v2 = getPlatformId()
if v2 ~= PlatformId.SWITCH then
end
v0.BLOCKS_MAIN_THREAD = true
function ImeSimulator.init()
  if ImeSimulator.IS_INITIALIZED then
    return
  end
  function imeIsSupported()
    Logging.devInfo("Reporting IME as available")
    return true
  end
  function imeAbort()
    Logging.devInfo("IME aborted")
    ImeSimulator.cancel()
  end
  function imeOpen(text, title, description, placeholder, keyboardType, maxCharacters)
    ImeSimulator.TITLE = title
    ImeSimulator.DESCRIPTION = description
    ImeSimulator.PLACEHOLDER = placeholder
    ImeSimulator.LAST_STRING = text
    ImeSimulator.MAX_CHARS = maxCharacters
    ImeSimulator.IS_ACTIVE = true
    return true
  end
  function imeIsComplete()
    return ImeSimulator.IS_CLOSED, ImeSimulator.IS_CANCELED
  end
  function imeGetLastString()
    return ImeSimulator.LAST_STRING
  end
  function update(dt)
    if ImeSimulator.IS_ACTIVE then
    end
    if not v1 then
      u0(dt)
    end
    ImeSimulator.IS_CLOSED = false
    ImeSimulator.IS_CANCELED = false
  end
  function draw()
    u0()
    if ImeSimulator.IS_ACTIVE then
      new2DLayer()
      drawFilledRect(0, 0, 1, 1, 0, 0, 0, 1)
      drawFilledRect(0.2, 0.2, 0.6, 0.6, 0.2, 0.2, 0.2, 0.9)
      setTextAlignment(RenderText.ALIGN_CENTER)
      renderText(0.5, 0.76, 0.025, "IME Simulator")
      renderText(0.5, 0.7, 0.025, "Title: " .. ImeSimulator.TITLE)
      renderText(0.5, 0.67, 0.025, "Desc: " .. ImeSimulator.DESCRIPTION)
      renderText(0.5, 0.64, 0.025, "Placeholder: " .. ImeSimulator.PLACEHOLDER)
      renderText(0.5, 0.58, 0.025, "Text: " .. ImeSimulator.LAST_STRING)
      setTextAlignment(RenderText.ALIGN_LEFT)
    end
  end
  function keyEvent(unicode, sym, modifier, isDown)
    if ImeSimulator.IS_ACTIVE then
      -- if not v3 then goto L91 end
      local len = utf8Strlen(ImeSimulator.LAST_STRING)
      if sym == Input.KEY_return then
        ImeSimulator.close()
        return
      end
      if sym == Input.KEY_esc then
        ImeSimulator.cancel()
        return
      end
      if sym == Input.KEY_backspace then
        if 0 < len then
          local v6 = utf8Substr(ImeSimulator.LAST_STRING, 0, len - 1)
          ImeSimulator.LAST_STRING = v6
        end
        return
      end
      local v5 = getCanRenderUnicode(unicode)
      -- if not v5 then goto L91 end
      if ImeSimulator.MAX_CHARS ~= 0 then
        -- if v4 >= ImeSimulator.MAX_CHARS then goto L91 end
      end
      local v8 = unicodeToUtf8(unicode)
      ImeSimulator.LAST_STRING = ImeSimulator.LAST_STRING .. v8
      return
    end
    u0(unicode, sym, modifier, isDown)
  end
  ImeSimulator.IS_INITIALIZED = true
  print("\n\n  ##################   Warning: IME Simulator active!   ##################\n\n")
end
function ImeSimulator.close()
  ImeSimulator.IS_CLOSED = true
  ImeSimulator.IS_CANCELED = false
  ImeSimulator.IS_ACTIVE = false
end
function ImeSimulator.cancel()
  ImeSimulator.IS_CLOSED = true
  ImeSimulator.IS_CANCELED = true
  ImeSimulator.IS_ACTIVE = false
end
