-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Logging = {}
function Logging:xmlWarning(v1, ...)
  local v3 = type(self)
  if v3 == "number" then
    local v4 = getXMLFilename(self)
  elseif v3 == "table" then
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L31
    v4 = self:isa(XMLFile)
    -- if not v4 then goto L31 end
    v4 = self:getFilename()
  else
  end
  v4 = string.format(...)
  printWarning(...)
end
function Logging:xmlError(v1, ...)
  local v3 = type(self)
  if v3 == "number" then
    local v4 = getXMLFilename(self)
  elseif v3 == "table" then
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L31
    v4 = self:isa(XMLFile)
    -- if not v4 then goto L31 end
    v4 = self:getFilename()
  else
  end
  v4 = string.format(...)
  printError(...)
end
function Logging:xmlInfo(v1, ...)
  local v3 = type(self)
  if v3 == "number" then
    local v4 = getXMLFilename(self)
  elseif v3 == "table" then
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L31
    v4 = self:isa(XMLFile)
    -- if not v4 then goto L31 end
    v4 = self:getFilename()
  else
  end
  v4 = string.format(...)
  print(...)
end
function Logging:xmlDevWarning(v1, ...)
  if g_isDevelopmentVersion then
    local v3 = type(self)
    if v3 == "number" then
      local v4 = getXMLFilename(self)
    elseif v3 == "table" then
      -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L34
      v4 = self:isa(XMLFile)
      -- if not v4 then goto L34 end
      v4 = self:getFilename()
    else
    end
    v4 = string.format(...)
    printWarning(...)
  end
end
function Logging:xmlDevError(v1, ...)
  if g_isDevelopmentVersion then
    local v3 = type(self)
    if v3 == "number" then
      local v4 = getXMLFilename(self)
    elseif v3 == "table" then
      -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L34
      v4 = self:isa(XMLFile)
      -- if not v4 then goto L34 end
      v4 = self:getFilename()
    else
    end
    v4 = string.format(...)
    printError(...)
  end
end
function Logging:xmlDevInfo(v1, ...)
  if g_showDevelopmentWarnings then
    local v3 = type(self)
    if v3 == "number" then
      local v4 = getXMLFilename(self)
    elseif v3 == "table" then
      -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x0 -> L34
      v4 = self:isa(XMLFile)
      -- if not v4 then goto L34 end
      v4 = self:getFilename()
    else
    end
    v4 = string.format(...)
    print(...)
  end
end
function Logging.warning(warningMessage, ...)
  local v2 = string.format(...)
  printWarning(...)
end
function Logging.error(errorMessage, ...)
  local v2 = string.format(...)
  printError(...)
end
function Logging.info(infoMessage, ...)
  local v2 = string.format(...)
  print(...)
end
function Logging.fatal(fatalMessage, ...)
  local v1 = string.format(...)
  printCallstack()
  requestExit()
  error(v1)
end
function Logging.devWarning(warningMessage, ...)
  if g_showDevelopmentWarnings then
    local v2 = string.format(...)
    printWarning(...)
  end
end
function Logging.devError(errorMessage, ...)
  if g_showDevelopmentWarnings then
    local v2 = string.format(...)
    printError(...)
  end
end
function Logging.devInfo(infoMessage, ...)
  if g_showDevelopmentWarnings then
    local v2 = string.format(...)
    print(...)
  end
end
