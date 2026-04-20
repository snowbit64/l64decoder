-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

I18N = {}
local I18N_mt = Class(I18N)
I18N.MONEY_MAX_DISPLAY_VALUE = 999999999
I18N.MONEY_MIN_DISPLAY_VALUE = -999999999
function I18N.new()
  setmetatable({}, u0)
  if g_addTestCommands then
    addConsoleCommand("gsI18nVerify", "Checks all localization files for empty or 'TODO' texts, warns if placeholders mismatch between languages", "consoleCommandVerifyAll", {texts = {}, modEnvironments = {}})
  end
  local v1 = StartParams.getIsSet("debugI18N")
  v0.debugActive = v1
  if v0.debugActive then
    print("debugI18N active")
    v0.usedTexts = {}
    v0.printedWarnings = {}
    v0:loadUsedKeysFromXML()
    addConsoleCommand("gsI18nSaveUsedKeysXml", "", "saveUsedKeysToXML", v0)
    v1:subscribe(MessageType.GUI_INGAME_OPEN, v0.saveUsedKeysToXML, v0)
    v1:subscribe(MessageType.GUI_MAIN_SCREEN_OPEN, v0.saveUsedKeysToXML, v0)
  end
  return v0
end
function I18N:load()
  self.texts = {}
  if not g_isDevelopmentVersion and g_languageShort ~= "en" then
    local v2 = loadXMLFile("l10n_en", "dataS/l10n_en.xml")
  end
  v2 = loadXMLFile("l10n" .. g_languageSuffix, "dataS/l10n" .. g_languageSuffix .. ".xml")
  self:loadEntriesFromXML(v2, v1, "l10n.elements.e(%d)", self.texts, true)
  if v1 ~= nil then
    delete(v1)
  end
  local v4 = getXMLFloat(v2, "l10n.fluid#factor")
  local v3 = Utils.getNoNil(v4, 1)
  self.fluidFactor = v3
  v4 = getXMLFloat(v2, "l10n.power#factor")
  v3 = Utils.getNoNil(v4, 1)
  self.powerFactorHP = v3
  self.powerFactorKW = 0.735499
  self.moneyUnit = GS_MONEY_EURO
  self.useMiles = false
  self.useFahrenheit = false
  self.useAcre = false
  v3 = self:getText("unit_digitGroupingSymbol")
  self.thousandsGroupingChar = v3
  if self.thousandsGroupingChar ~= " " and self.thousandsGroupingChar ~= "." and self.thousandsGroupingChar ~= "," then
    self.thousandsGroupingChar = " "
  end
  v4 = self:getText("unit_decimalSymbol")
  v3 = Utils.getNoNil(v4, ".")
  self.decimalSeparator = v3
  if g_gameSettings ~= nil then
    v3 = v3:getValue(GameSettings.SETTING.MONEY_UNIT)
    self.moneyUnit = v3
    v3 = v3:getValue(GameSettings.SETTING.USE_MILES)
    self.useMiles = v3
    v3 = v3:getValue(GameSettings.SETTING.USE_FAHRENHEIT)
    self.useFahrenheit = v3
    v3 = v3:getValue(GameSettings.SETTING.USE_ACRE)
    self.useAcre = v3
  end
  v3:subscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.MONEY_UNIT], self.setMoneyUnit, self)
  v3:subscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.USE_MILES], self.setUseMiles, self)
  v3:subscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.USE_ACRE], self.setUseAcre, self)
  v3:subscribe(MessageType.SETTING_CHANGED[GameSettings.SETTING.USE_FAHRENHEIT], self.setUseFahrenheit, self)
  delete(v2)
end
function I18N.delete(v0)
  v1:unsubscribeAll(v0)
end
function I18N.loadEntriesFromXML(v0, v1, v2, v3, v4, v5)
  if v2 ~= nil then
    while true do
      v7 = string.format(v3, v6)
      v8 = hasXMLProperty(v2, v7)
      if not v8 then
        break
      end
      v8 = getXMLString(v2, v7 .. "#k")
      v9 = getXMLString(v2, v7 .. "#v")
      if v8 ~= nil and v9 ~= nil then
        v10 = v9:gsub("\r\n", "\n")
        v4[v8] = v10
      end
    end
  end
  while true do
    v7 = string.format(v3, v6)
    v8 = hasXMLProperty(v1, v7)
    if not v8 then
      break
    end
    v8 = getXMLString(v1, v7 .. "#k")
    v9 = getXMLString(v1, v7 .. "#v")
    if v8 ~= nil and v9 ~= nil then
      if v2 ~= nil then
        -- cmp-jump LOP_JUMPXEQKS R9 aux=0xd -> L80
      end
      v10 = v9:gsub("\r\n", "\n")
      v4[v8] = v10
    end
  end
  for v10, v11 in pairs(v4) do
    if GS_PLATFORM_PLAYSTATION then
      if GS_PLATFORM_ID == PlatformId.PS4 and v4[v10 .. "_ps4"] ~= nil then
        v4[v10] = v4[v10 .. "_ps4"]
        -- goto L244  (LOP_JUMP +136)
      end
      if GS_PLATFORM_ID == PlatformId.PS5 and v4[v10 .. "_ps5"] ~= nil then
        v4[v10] = v4[v10 .. "_ps5"]
        -- goto L244  (LOP_JUMP +118)
      end
      -- if not v4[v10 .. "_ps"] then goto L244 end
      v4[v10] = v4[v10 .. "_ps"]
    elseif GS_PLATFORM_XBOX then
      if GS_PLATFORM_ID == PlatformId.XBOX_ONE and v4[v10 .. "_xboxone"] ~= nil then
        v4[v10] = v4[v10 .. "_xboxone"]
        -- goto L244  (LOP_JUMP +86)
      end
      if GS_PLATFORM_ID == PlatformId.XBOX_SERIES and v4[v10 .. "_xboxseries"] ~= nil then
        v4[v10] = v4[v10 .. "_xboxseries"]
        -- goto L244  (LOP_JUMP +68)
      end
      -- cmp-jump LOP_JUMPXEQKNIL R12 aux=0x0 -> L244
      v4[v10] = v4[v10 .. "_xbox"]
    else
      if GS_PLATFORM_GGP then
        -- cmp-jump LOP_JUMPXEQKNIL R12 aux=0x0 -> L244
        v4[v10] = v4[v10 .. "_ggp"]
      elseif GS_PLATFORM_SWITCH then
        if v4[v10 .. "_switch"] ~= nil then
          v4[v10] = v4[v10 .. "_switch"]
          -- goto L244  (LOP_JUMP +26)
        end
        -- cmp-jump LOP_JUMPXEQKNIL R12 aux=0x0 -> L244
        v4[v10] = v4[v10 .. "_mobile"]
      else
        if GS_IS_MOBILE_VERSION and v4[v10 .. "_mobile"] ~= nil then
          v4[v10] = v4[v10 .. "_mobile"]
        end
      end
    end
    if not (v4[v10] ~= v11) then
      continue
    end
    Logging.devInfo("I18N platform specific text %s: '%s'", v10, v4[v10])
  end
end
function I18N:saveUsedKeysToXML()
  local v4 = getUserProfileAppPath()
  local v2 = createXMLFile("l10n_usedKeys", v4 .. "l10n_usedKeys.xml", "l10n")
  for v7 in pairs(self.usedTexts) do
    local v11 = string.format("l10n.used(%d)#k", v3)
    setXMLString(v2, v11, v7)
  end
  saveXMLFile(v2)
  delete(v2)
  v4 = table.size(self.texts)
  v7 = string.format("I18N debug: saved '%s': %i unused, %i used, %i total keys ", v1, v4 - v3, v3, v4)
  print(...)
end
function I18N:loadUsedKeysFromXML()
  local v4 = getUserProfileAppPath()
  local v2 = XMLFile.loadIfExists("l10n_usedKeys", v4 .. "l10n_usedKeys.xml")
  if v2 then
    v2:iterate("l10n.used", function(self, v1)
      local v3 = v3:getString(v1 .. "#k")
      u0.usedTexts[v3] = true
    end)
    local v7 = table.size(self.usedTexts)
    v4 = string.format(...)
    print(...)
    v2:delete()
    return
  end
  Logging.xmlDevWarning("I18N debug: Unable to load used loca keys file %s", v1)
end
function I18N:addModI18N(modName)
  setmetatable({texts = {}}, {__index = self})
  setmetatable({texts = {}}.texts, {__index = self.texts})
  self.modEnvironments[modName] = {texts = {}}
  return {texts = {}, setText = function(self, modName, v2)
    self.texts[modName] = v2
  end, hasModText = function(self, modName)
    if self.texts[modName] == nil then
    end
    return true
  end, setGlobalText = function(self, modName, v2)
    if u1.texts[u0 .. "." .. modName] == nil then
      u1.texts[u0 .. "." .. modName] = v2
    end
  end}
end
function I18N:getText(name, customEnv)
  if customEnv ~= nil and self.modEnvironments[customEnv] ~= nil then
  end
  if v3 == nil and self.texts[name] == nil then
    local v4 = string.format("Missing '%s' in l10n%s.xml", name, g_languageSuffix)
    if g_showDevelopmentWarnings then
      Logging.devWarning(v4)
    end
  end
  if self.debugActive then
    self.usedTexts[name] = true
  end
  v4 = v3:upper()
  v4 = v4:trim()
  if v4 == "TODO" then
    if self.debugActive and self.printedWarnings[name] == nil then
      Logging.devWarning("TODO:" .. name)
      self.printedWarnings[name] = true
    end
    return "TODO:" .. name
  end
  return v3
end
function I18N:hasText(name, customEnv)
  if name == nil then
    return false
  end
  if customEnv ~= nil and self.modEnvironments[customEnv] ~= nil then
  end
  if v3 == nil then
  end
  if v3 == nil then
  end
  return true
end
function I18N:setText(name, value)
  self.texts[name] = value
end
function I18N:setMoneyUnit(unit)
  self.moneyUnit = unit
end
function I18N:setUseMiles(useMiles)
  self.useMiles = useMiles
end
function I18N:setUseFahrenheit(useFahrenheit)
  self.useFahrenheit = useFahrenheit
end
function I18N:setUseAcre(useAcre)
  self.useAcre = useAcre
end
function I18N:getCurrency(currency)
  local v3 = self:getCurrencyFactor()
  return currency * v3
end
function I18N:getCurrencyFactor()
  if self.moneyUnit == GS_MONEY_EURO then
    return 1
  end
  if self.moneyUnit == GS_MONEY_POUND then
    return 0.79
  end
  return 1.34
end
function I18N:getMeasuringUnit(useLongName)
  if useLongName then
  end
  if self.useMiles then
    return self.texts["unit_miles" .. v2]
  end
  return self.texts["unit_km" .. v2]
end
function I18N:getVolumeUnit(useLongName)
  if not useLongName then
  else
  end
  return self.texts["unit_liter" .. v2]
end
function I18N.getVolume(v0, v1)
  return v1
end
function I18N:getSpeedMeasuringUnit()
  if self.useMiles then
    return self.texts.unit_mph
  end
  return self.texts.unit_kmh
end
function I18N:getSpeed(speed)
  if self.useMiles then
    return speed * 0.62137
  end
  return speed
end
function I18N:getTemperature(temperature)
  if self.useFahrenheit then
    return temperature * 1.8 + 32
  end
  return temperature
end
function I18N:formatTemperature(temperatureCelsius, precision, useLongName)
  local temperature = self:getTemperature(temperatureCelsius)
  local str = self:getTemperatureUnit(useLongName)
  return string.format("%1." .. (precision or 0) .. "f%s", temperature, str)
end
function I18N:getTemperatureUnit(useLongName)
  if useLongName then
  end
  if self.useFahrenheit then
    return self.texts["unit_fahrenheit" .. v2]
  end
  return self.texts["unit_celsius" .. v2]
end
function I18N:getAreaUnit(useLongName)
  if useLongName then
  end
  if self.useAcre then
    return self.texts["unit_acre" .. v2]
  end
  return self.texts["unit_ha" .. v2]
end
function I18N:getArea(ha)
  if self.useAcre then
    return ha * 2.4711
  end
  return ha
end
function I18N:formatArea(areaInHa, precision, useLongName)
  local area = self:getArea(areaInHa)
  local str = self:getAreaUnit(useLongName)
  local v10 = MathUtil.round(area, precision)
  return tostring(v10 .. str)
end
function I18N:getDistance(distance)
  if self.useMiles then
    return distance * 0.62137
  end
  return distance
end
function I18N:getFluid(fluid)
  return fluid * self.fluidFactor
end
function I18N:formatFluid(liters)
  local v6 = self:getFluid(liters)
  local v4 = self:formatNumber(...)
  local v5 = v5:getText("unit_literShort")
  return string.format(...)
end
function I18N:formatVolume(liters, precision, unit)
  local v8 = self:getVolume(liters)
  local v6 = self:formatNumber(v8, precision)
  if not unit then
    local v7 = self:getVolumeUnit()
  end
  return v4(v5, v6, v7)
end
function I18N:formatMass(mass, maxMass, showKg)
  if showKg ~= false then
    if mass < 1 then
      if maxMass ~= nil then
        -- cmp-jump LOP_JUMPXEQKN R2 aux=0x80000001 -> L15
      end
    elseif mass < 1 and maxMass ~= nil and maxMass ~= 0 then
    end
  end
  if maxMass ~= nil and maxMass ~= 0 then
    local v10 = MathUtil.round(mass, v5)
    local v8 = self:formatNumber(v10, v5)
    local v11 = MathUtil.round(maxMass, v5)
    local v9 = self:formatNumber(v11, v5)
    v10 = v10:getText(v4)
    return string.format(...)
  end
  v10 = MathUtil.round(mass, v5)
  v8 = self:formatNumber(v10, v5)
  v9 = v9:getText(v4)
  currencyString = string.format(...)
  return currencyString
end
function I18N:getPower(power)
  return power * self.powerFactorHP, power * self.powerFactorKW
end
function I18N:formatNumber(number, precision, forcePrecision)
  if (precision or 0) == 0 then
    if number == nil then
      printCallstack()
    end
    if number < 0 then
      local v4 = math.ceil(number)
    else
      v4 = math.floor(number)
    end
  end
  local v5 = MathUtil.round(number, precision)
  v4 = tostring(...)
  local v5, currencyString, v7 = string.match(v4, "^([^%d]*%d)(%d*)[.]?(%d*)")
  local v10 = currencyString:reverse()
  v10 = v10:gsub("(%d%d%d)", "%1" .. self.thousandsGroupingChar)
  v10 = v10:reverse()
  if 0 < precision then
    local v9 = v7:len()
    if 0 < v9 then
      v10 = string.rep("0", v9)
      if v7 == v10 then
        -- if not v3 then goto L79 end
      end
      local v12 = v7:sub(1, precision)
    end
  end
  return v8
end
function I18N:formatMoney(number, precision, addCurrency, prefixCurrencySymbol)
  local clampedDisplayMoney = MathUtil.clamp(number, I18N.MONEY_MIN_DISPLAY_VALUE, I18N.MONEY_MAX_DISPLAY_VALUE)
  local currencyString = self:formatNumber(clampedDisplayMoney, precision)
  if addCurrency ~= nil then
    -- if not v3 then goto L39 end
  end
  if prefixCurrencySymbol ~= nil then
    -- if v4 then goto L31 end
  end
  local v9 = self:getCurrencySymbol(true)
  return currencyString .. " " .. v9
  local v10 = self:getCurrencySymbol(true)
  return v10 .. " " .. currencyString .. " " .. v9
end
function I18N:getCurrencySymbol(useShort)
  if useShort then
  end
  if self.moneyUnit == GS_MONEY_EURO then
    return self:getText("unit_euro" .. maxMass)
  end
  if self.moneyUnit == GS_MONEY_POUND then
    showKg = self:getText("unit_pound" .. maxMass)
    return showKg
  end
  showKg = self:getText("unit_dollar" .. maxMass)
  return showKg
end
function I18N.convertText(v0, mass, maxMass)
  if mass == nil then
    Logging.warning("Text to convert is nil")
    printCallstack()
    return nil
  end
  local showKg = mass:sub(1, 6)
  if showKg == "$l10n_" then
    local v5 = mass:sub(7)
    showKg = showKg:getText(v5, maxMass)
  end
  return mass
end
function I18N.getCurrentDate(v0)
  if g_languageShort == "en" then
    return getDate("%Y-%m-%d")
  end
  if g_languageShort == "de" then
    maxMass = getDate("%d.%m.%Y")
    return maxMass
  end
  if g_languageShort == "jp" then
    maxMass = getDate("%Y/%m/%d")
    return maxMass
  end
  maxMass = getDate("%d/%m/%Y")
  return maxMass
end
function I18N:consoleCommandVerifyAll(ignoreTodos, l10nDir, l10nFilePrefix)
  local v4 = Utils.stringToBoolean(ignoreTodos)
  print("Verifying i18n files:")
  setFileLogPrefixTimestamp(false)
  if v4 then
    print("Warning: Ignoring 'TODO' and '' texts")
  end
  print("loading lang files")
  local numL = getNumOfLanguages()
  -- TODO: structure LOP_FORNPREP (pc 36, target 107)
  local v12 = getLanguageCode(0)
  if v12 == "en" then
  end
  local v15 = fileExists(l10nDir .. v13)
  if v15 then
    v15 = loadXMLFile(v13, l10nDir .. v13)
    self:loadEntriesFromXML(v15, nil, "l10n.elements.e(%d)", {})
    v5[v13] = {}
    for v20, v21 in pairs({}) do
      currencyString[v20] = true
    end
    v20 = table.size(v16)
    v18 = string.format("loaded %d entries from %s", v20, v14)
    print(...)
    delete(v15)
  else
    local v16 = string.format("Warning: unable to find xml file %s for langIndex %d", l10nDir .. v13, v11)
    print(...)
  end
  -- TODO: structure LOP_FORNLOOP (pc 106, target 37)
  local v9 = next(v5)
  if v9 == nil then
    return "Error: no l10n entries were loaded"
  end
  for v12, v13 in pairs(currencyString) do
    for v17, v18 in pairs(v5) do
      if v18[v12] == nil then
        v21 = string.format("Warning: Missing text for %s in %s", v12, v17)
        print(...)
      else
        if not not ignoreTodos then
          continue
        end
        v20 = v18[v12]:trim()
        if v20 ~= "" then
          v20 = v18[v12]:find("TODO")
          if not v20 then
            continue
          end
        end
        v21 = string.format("Warning: Empty or todo text for %s in %s", v12, v17)
        print(...)
      end
    end
  end
  for v13, v14 in pairs(v5[v7]) do
    for v21, v22 in v14:gmatch("%%%d?%.?%d*%a") do
    end
    if v17 == "" then
    else
      v18, v19 = v14:gsub("%%", "")
      -- goto L193  (LOP_JUMP +0)
    end
    if not (v15 ~= nil) then
      continue
    end
    v9[v13] = {v15, v16}
  end
  for v13, v14 in pairs(v5) do
    if not (v13 ~= v7) then
      continue
    end
    print(v13)
    for v18, v19 in pairs(v14) do
      getTextHeight(1, v19)
      for v26, v27 in v19:gmatch("%%%d?%.?%d*%a") do
      end
      if v22 == "" then
      else
        v23, v24 = v19:gsub("%%", "")
        -- goto L249  (LOP_JUMP +0)
      end
      if v9[v18] then
      end
      if v9[v18] then
      end
      if not v20 then
        continue
      end
      v24 = v19:upper()
      if v24 ~= "TODO" then
        if v20 ~= v22 then
          v26 = string.format("Error: Mismatching format strings for key '%s' in %s: '%s' <-> '%s'", v18, v13, v22 or "no placeholder", v20 or "no placeholder")
          print(...)
          v26 = string.format("    %s: %s", v7, v5[v7][v18])
          print(...)
          v26 = string.format("    %s: %s", v13, v19)
          print(...)
        end
        if v21 ~= v23 then
          v26 = string.format("Error: Mismatching '%%' characters (possible unescaped '%%') for key '%s' in %s", v18, v13)
          print(...)
          v26 = string.format("    %s: %s", v7, v24)
          print(...)
          v26 = string.format("    %s: %s", v13, v19)
          print(...)
        end
      end
      if not v9[v18] then
        continue
      end
      v25 = pcall(function()
        string.format(u0, 1, 2, 3, 4, 5, 6, 7, 8, 9)
      end)
      if not not v25 then
        continue
      end
      v27 = string.format("Error: String format cannot be applied on string '%s' in %s:\n    en: '%s'\n<->\n    %s: '%s'", v18, v13, v5[v7][v18], v13, v19)
      print(...)
    end
  end
  setFileLogPrefixTimestamp(g_logFilePrefixTimestamp)
  return "Verified all i18n files"
end
function I18N:formatMinutes(minutes)
  if minutes ~= nil then
    local hours = math.floor(minutes / 60)
    local v5 = self:getText("ui_hours")
    return string.format(v5, hours, minutes - hours * 60)
  end
  hours = self:getText("ui_hours_none")
  return hours
end
function I18N:formatPeriod(period, useShort)
  if g_currentMission ~= nil and g_currentMission.environment ~= nil then
    if g_currentMission.environment.daylight.latitude >= 0 then
    end
    if period == nil then
    end
  end
  if period == nil then
    return nil
  end
  if showKg then
  end
  if useShort then
  else
  end
  return self:getText(v8 .. v9 .. v10)
end
function I18N:formatDayInPeriod(dayInPeriod, period, useShort)
  if g_currentMission ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R4 aux=0x80000000 -> L10
  end
  return nil
  if dayInPeriod == nil then
  end
  if period == nil then
  end
  local v4 = self:formatPeriod(period, useShort)
  if g_currentMission.environment.daysPerPeriod == 1 then
    return v4
  end
  return string.format("%s %d", v4, dayInPeriod)
end
function I18N:formatNumMonth(numMonth)
  if 1 < numMonth then
  end
  local currencyString = self:getText(maxMass)
  return string.format(...)
end
function I18N:formatNumDay(numDay)
  if 1 < numDay then
  end
  local currencyString = self:getText(maxMass)
  return string.format(...)
end
