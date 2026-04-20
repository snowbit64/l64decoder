-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Dashboard = {DEFAULT_MAX_UPDATE_DISTANCE = 7.5, DEFAULT_MAX_UPDATE_DISTANCE_CRITICAL = 20, GROUP_XML_KEY = "vehicle.dashboard.groups.group(?)", TYPES = {}}
Dashboard.TYPES.EMITTER = 0
Dashboard.TYPES.NUMBER = 1
Dashboard.TYPES.ANIMATION = 2
Dashboard.TYPES.ROT = 3
Dashboard.TYPES.VISIBILITY = 4
Dashboard.TYPES.TEXT = 5
Dashboard.TYPES.SLIDER = 6
Dashboard.TYPES.MULTI_STATE = 7
Dashboard.COLORS = {GREY = {0.3, 0.3, 0.3, 1}, DARK_GREY = {0.15, 0.15, 0.15, 1}, BLACK = {0.05, 0.05, 0.05, 1}, LIGHT_GREEN = {0.05, 0.15, 0.05, 1}, RED = {1, 0, 0, 1}, GREEN = {0, 1, 0, 1}, BLUE = {0, 0, 1, 1}, YELLOW = {1, 1, 0, 1}, ORANGE = {1, 0.5, 0, 1}}
function Dashboard.prerequisitesPresent(specializations)
  return true
end
function Dashboard.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("Dashboard")
  Dashboard.registerDashboardXMLPaths(Vehicle.xmlSchema, "vehicle.dashboard.default")
  Vehicle.xmlSchema:register(XMLValueType.STRING, Dashboard.GROUP_XML_KEY .. "#name", "Dashboard group name")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.dashboard#maxUpdateDistance", "Max. distance to vehicle root to update connection hoses", Dashboard.DEFAULT_MAX_UPDATE_DISTANCE)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.dashboard#maxUpdateDistanceCritical", "Max. distance to vehicle root to update critical connection hoses (All with type 'ROT')", Dashboard.DEFAULT_MAX_UPDATE_DISTANCE_CRITICAL)
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function Dashboard.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "updateDashboards", Dashboard.updateDashboards)
  SpecializationUtil.registerFunction(vehicleType, "loadDashboardGroupFromXML", Dashboard.loadDashboardGroupFromXML)
  SpecializationUtil.registerFunction(vehicleType, "getIsDashboardGroupActive", Dashboard.getIsDashboardGroupActive)
  SpecializationUtil.registerFunction(vehicleType, "getDashboardGroupByName", Dashboard.getDashboardGroupByName)
  SpecializationUtil.registerFunction(vehicleType, "loadDashboardsFromXML", Dashboard.loadDashboardsFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadDashboardFromXML", Dashboard.loadDashboardFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadEmitterDashboardFromXML", Dashboard.loadEmitterDashboardFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadNumberDashboardFromXML", Dashboard.loadNumberDashboardFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadTextDashboardFromXML", Dashboard.loadTextDashboardFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadAnimationDashboardFromXML", Dashboard.loadAnimationDashboardFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadRotationDashboardFromXML", Dashboard.loadRotationDashboardFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadVisibilityDashboardFromXML", Dashboard.loadVisibilityDashboardFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadSliderDashboardFromXML", Dashboard.loadSliderDashboardFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadMultiStateDashboardFromXML", Dashboard.loadMultiStateDashboardFromXML)
  SpecializationUtil.registerFunction(vehicleType, "setDashboardsDirty", Dashboard.setDashboardsDirty)
  SpecializationUtil.registerFunction(vehicleType, "getDashboardValue", Dashboard.getDashboardValue)
  SpecializationUtil.registerFunction(vehicleType, "getDashboardColor", Dashboard.getDashboardColor)
end
function Dashboard.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", Dashboard)
  SpecializationUtil.registerEventListener(vehicleType, "onPostLoad", Dashboard)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", Dashboard)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateTick", Dashboard)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdateEnd", Dashboard)
end
function Dashboard:onLoad(savegame)
  self.spec_dashboard.dashboards = {}
  self.spec_dashboard.criticalDashboards = {}
  self.spec_dashboard.groups = {}
  self.spec_dashboard.sortedGroups = {}
  self.spec_dashboard.groupUpdateIndex = 1
  self.spec_dashboard.hasGroups = false
  while true do
    v4 = string.format("%s.groups.group(%d)", "vehicle.dashboard", v3)
    v5 = v5:hasProperty(v4)
    if not v5 then
      break
    end
    v6 = self:loadDashboardGroupFromXML(self.xmlFile, v4, {})
    if v6 then
      v2.groups[{}.name] = {}
      table.insert(v2.sortedGroups, {})
      v2.hasGroups = true
    end
  end
  v2.isDirty = false
  v2.isDirtyTick = false
  self:loadDashboardsFromXML(self.xmlFile, "vehicle.dashboard.default", {})
  v4 = v4:getValue("vehicle.dashboard#maxUpdateDistance", Dashboard.DEFAULT_MAX_UPDATE_DISTANCE)
  v2.maxUpdateDistance = v4
  v4 = v4:getValue("vehicle.dashboard#maxUpdateDistanceCritical", Dashboard.DEFAULT_MAX_UPDATE_DISTANCE_CRITICAL)
  v2.maxUpdateDistanceCritical = v4
end
function Dashboard:onPostLoad(savegame)
  if self.isClient then
    -- cmp-jump LOP_JUMPXEQKN R3 aux=0x80000003 -> L29
    -- cmp-jump LOP_JUMPXEQKN R3 aux=0x80000003 -> L29
  end
  SpecializationUtil.removeEventListener(self, "onUpdate", Dashboard)
  SpecializationUtil.removeEventListener(self, "onUpdateTick", Dashboard)
end
function Dashboard:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isClient then
    if self.spec_dashboard.hasGroups then
      local v7 = self:getIsDashboardGroupActive(self.spec_dashboard.sortedGroups[self.spec_dashboard.groupUpdateIndex])
      if v7 ~= self.spec_dashboard.sortedGroups[self.spec_dashboard.groupUpdateIndex].isActive then
        self.spec_dashboard.sortedGroups[self.spec_dashboard.groupUpdateIndex].isActive = not self.spec_dashboard.sortedGroups[self.spec_dashboard.groupUpdateIndex].isActive
        self:updateDashboards(self.spec_dashboard.dashboards, dt, true)
        self:updateDashboards(self.spec_dashboard.criticalDashboards, dt, true)
      end
      v5.groupUpdateIndex = v5.groupUpdateIndex + 1
      if #v5.sortedGroups < v5.groupUpdateIndex then
        v5.groupUpdateIndex = 1
      end
    end
    if self.currentUpdateDistance >= v5.maxUpdateDistanceCritical then
      -- if not v5.isDirty then goto L73 end
    end
    self:updateDashboards(v5.criticalDashboards, dt)
    v5.isDirty = false
    if v5.isDirtyTick then
      self:raiseActive()
    end
  end
end
function Dashboard:onUpdateTick(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isClient then
    if self.currentUpdateDistance >= self.spec_dashboard.maxUpdateDistance then
      -- if not v0.spec_dashboard.isDirtyTick then goto L23 end
    end
    self:updateDashboards(v5.dashboards, dt)
    v5.isDirtyTick = false
  end
end
function Dashboard:onUpdateEnd(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.isClient then
    self:updateDashboards(self.spec_dashboard.dashboards, dt, true)
    self:updateDashboards(self.spec_dashboard.criticalDashboards, dt, true)
  end
end
function Dashboard:updateDashboards(dashboards, dt, force)
  -- TODO: structure LOP_FORNPREP (pc 3, target 239)
  -- TODO: structure LOP_FORNPREP (pc 11, target 21)
  if not dashboards[1].groups[1].isActive then
  else
    -- TODO: structure LOP_FORNLOOP (pc 20, target 12)
  end
  if v7.valueObject ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R9 aux=0x0 -> L228
    local v9 = self:getDashboardValue(v7.valueObject, v7.valueFunc, v7)
    if v7.valueFactor ~= nil then
      local v10 = type(v9)
      if v10 == "number" then
      end
    end
    if not v8 then
    end
    if v7.doInterpolation then
      v10 = type(v9)
      if v10 == "number" and v9 ~= v7.lastInterpolationValue then
        v10 = MathUtil.sign(v9 - v7.lastInterpolationValue)
        if v10 < 0 then
        end
        local v12 = v11(v7.lastInterpolationValue + v7.interpolationSpeed * v10 * dt, v9)
        v7.lastInterpolationValue = v12
      end
    end
    if v9 == v7.lastValue then
      -- if not v3 then goto L238 end
    end
    v7.lastValue = v9
    v12 = type(v9)
    if v12 == "number" then
      v12 = self:getDashboardValue(v7.valueObject, v7.minFunc, v7)
      if v12 ~= nil and v8 then
        v12 = math.max(v12, v9)
      end
      v12 = self:getDashboardValue(v7.valueObject, v7.maxFunc, v7)
      if v12 ~= nil and v8 then
        v12 = math.min(v12, v9)
      end
      v12 = self:getDashboardValue(v7.valueObject, v7.centerFunc, v7)
      if v12 ~= nil then
        local v14 = math.abs(v10)
        local v15 = math.abs(v11)
        local v13 = math.max(...)
        if v9 < v12 then
        elseif v12 < v9 then
        end
      end
    end
    if v7.valueCompare ~= nil then
      v12 = type(v7.valueCompare)
      if v12 == "table" then
        for v16, v17 in ipairs(v7.valueCompare) do
          if not (v12 == v17) then
            continue
          end
        end
      elseif v9 ~= v7.valueCompare then
      end
    end
    v7.stateFunc(self, v7, v9, v10, v11, v8)
  elseif force then
    v7.stateFunc(self, v7, true, nil, nil, v8)
  end
  -- TODO: structure LOP_FORNLOOP (pc 238, target 4)
end
function Dashboard:loadDashboardGroupFromXML(xmlFile, key, group)
  local v4 = xmlFile:getValue(key .. "#name")
  group.name = v4
  if group.name == nil then
    Logging.xmlWarning(self.xmlFile, "Missing name for dashboard group '%s'", key)
    return false
  end
  v4 = self:getDashboardGroupByName(group.name)
  if v4 ~= nil then
    Logging.xmlWarning(self.xmlFile, "Duplicated dashboard group name '%s' for group '%s'", group.name, key)
    return false
  end
  group.isActive = false
  return true
end
function Dashboard.getIsDashboardGroupActive(v0, dashboards)
  return true
end
function Dashboard:getDashboardGroupByName(name)
  return self.spec_dashboard.groups[name]
end
function Dashboard:loadDashboardsFromXML(xmlFile, key, dashboardData)
  if self.isClient then
    while true do
      v6 = string.format("%s.dashboard(%d)", key, v5)
      v7 = xmlFile:hasProperty(v6)
      if not v7 then
        break
      end
      v8 = self:loadDashboardFromXML(xmlFile, v6, {}, dashboardData)
      if v8 then
        if {}.displayTypeIndex ~= Dashboard.TYPES.ROT then
          table.insert(v4.dashboards, {})
        else
          table.insert(v4.criticalDashboards, {})
        end
      end
    end
  end
  return true
end
function Dashboard:loadDashboardFromXML(xmlFile, key, dashboard, dashboardData)
  local v5 = xmlFile:getValue(key .. "#valueType")
  if v5 ~= nil then
    -- if v5 == v4.valueTypeToLoad then goto L28 end
    return false
  elseif dashboardData.valueTypeToLoad ~= nil then
    Logging.xmlWarning(self.xmlFile, "Missing valueType for dashboard '%s'", key)
    return false
  end
  local v6 = xmlFile:getValue(key .. "#displayType")
  if v6 ~= nil then
    local v9 = v6:upper()
    if Dashboard.TYPES[v9] ~= nil then
      dashboard.displayTypeIndex = Dashboard.TYPES[v9]
      -- goto L69  (LOP_JUMP +20)
    end
    Logging.xmlWarning(self.xmlFile, "Unknown displayType '%s' for dashboard '%s'", v6, key)
    return false
  else
    Logging.xmlWarning(self.xmlFile, "Missing displayType for dashboard '%s'", key)
    return false
  end
  local v7 = xmlFile:getValue(key .. "#doInterpolation", false)
  dashboard.doInterpolation = v7
  v7 = xmlFile:getValue(key .. "#interpolationSpeed", 0.005)
  dashboard.interpolationSpeed = v7
  v7 = xmlFile:getValue(key .. "#idleValue", dashboardData.idleValue or 0)
  dashboard.idleValue = v7
  dashboard.lastInterpolationValue = dashboard.idleValue
  dashboard.groups = {}
  v7 = xmlFile:getValue(key .. "#groups")
  local v8 = string.split(v7, " ")
  for v12, v13 in ipairs(v8) do
    local v14 = self:getDashboardGroupByName(v13)
    if v14 ~= nil then
      table.insert(dashboard.groups, v14)
    else
      Logging.xmlWarning(self.xmlFile, "Unable to find dashboard group '%s' for dashboard '%s'", v13, key)
    end
  end
  if dashboard.displayTypeIndex == Dashboard.TYPES.EMITTER then
    v9 = self:loadEmitterDashboardFromXML(xmlFile, key, dashboard)
    -- if v9 then goto L306 end
    return false
  elseif dashboard.displayTypeIndex == Dashboard.TYPES.NUMBER then
    v9 = self:loadNumberDashboardFromXML(xmlFile, key, dashboard)
    -- if v9 then goto L306 end
    return false
  else
    if dashboard.displayTypeIndex == Dashboard.TYPES.ANIMATION then
      v9 = self:loadAnimationDashboardFromXML(xmlFile, key, dashboard)
      -- if v9 then goto L306 end
      return false
    elseif dashboard.displayTypeIndex == Dashboard.TYPES.ROT then
      v9 = self:loadRotationDashboardFromXML(xmlFile, key, dashboard)
      -- if v9 then goto L306 end
      return false
    else
      if dashboard.displayTypeIndex == Dashboard.TYPES.VISIBILITY then
        v9 = self:loadVisibilityDashboardFromXML(xmlFile, key, dashboard)
        -- if v9 then goto L306 end
        return false
      elseif dashboard.displayTypeIndex == Dashboard.TYPES.TEXT then
        v9 = self:loadTextDashboardFromXML(xmlFile, key, dashboard)
        -- if v9 then goto L306 end
        return false
      else
        if dashboard.displayTypeIndex == Dashboard.TYPES.SLIDER then
          v9 = self:loadSliderDashboardFromXML(xmlFile, key, dashboard)
          -- if v9 then goto L306 end
          return false
        elseif dashboard.displayTypeIndex == Dashboard.TYPES.MULTI_STATE then
          v9 = self:loadMultiStateDashboardFromXML(xmlFile, key, dashboard)
          if not v9 then
            return false
          end
        end
      end
    end
  end
  if dashboardData.additionalAttributesFunc ~= nil then
    v9 = dashboardData.additionalAttributesFunc(self, xmlFile, key, dashboard)
    if not v9 then
      return false
    end
  end
  dashboard.valueObject = dashboardData.valueObject
  dashboard.valueFunc = dashboardData.valueFunc
  dashboard.valueCompare = dashboardData.valueCompare
  dashboard.valueFactor = dashboardData.valueFactor
  dashboard.minFunc = dashboardData.minFunc
  dashboard.maxFunc = dashboardData.maxFunc
  dashboard.centerFunc = dashboardData.centerFunc
  if not dashboardData.stateFunc then
  end
  dashboard.stateFunc = v9
  dashboard.lastValue = dashboard.idleValue
  return true
end
function Dashboard:loadEmitterDashboardFromXML(xmlFile, key, dashboard)
  local dashboardData = xmlFile:getValue(key .. "#node", nil, self.components, self.i3dMappings)
  if dashboardData ~= nil then
    local v5 = getHasClassId(dashboardData, ClassIds.SHAPE)
    if v5 then
      dashboard.node = dashboardData
      local v8 = xmlFile:getValue(key .. "#baseColor")
      v5 = self:getDashboardColor(...)
      dashboard.baseColor = v5
      if dashboard.baseColor ~= nil then
        setShaderParameter(dashboard.node, "baseColor", dashboard.baseColor[1], dashboard.baseColor[2], dashboard.baseColor[3], 1, false)
      end
      v8 = xmlFile:getValue(key .. "#emitColor")
      v5 = self:getDashboardColor(...)
      dashboard.emitColor = v5
      if dashboard.emitColor ~= nil then
        setShaderParameter(dashboard.node, "emitColor", dashboard.emitColor[1], dashboard.emitColor[2], dashboard.emitColor[3], 1, false)
      end
      v5 = xmlFile:getValue(key .. "#intensity", 1)
      dashboard.intensity = v5
      setShaderParameter(dashboard.node, "lightControl", dashboard.idleValue, 0, 0, 0, false)
      -- goto L133  (LOP_JUMP +23)
    end
    v8 = getName(dashboardData)
    Logging.xmlWarning(self.xmlFile, "Emitter Dashboard node is not a shape! '%s' in '%s'", v8, key)
    return false
  else
    Logging.xmlWarning(self.xmlFile, "Missing node for emitter dashboard '%s'", key)
    return false
  end
  return true
end
function Dashboard:loadNumberDashboardFromXML(xmlFile, key, dashboard)
  local dashboardData = xmlFile:getValue(key .. "#numbers", nil, self.components, self.i3dMappings)
  dashboard.numbers = dashboardData
  local v7 = xmlFile:getValue(key .. "#numberColor")
  dashboardData = self:getDashboardColor(...)
  dashboard.numberColor = dashboardData
  if dashboard.numberColor == nil then
    dashboard.numberColor = {0.9, 0.9, 0.9, 1}
  end
  if dashboard.numbers ~= nil then
    dashboardData = xmlFile:getValue(key .. "#precision", 1)
    dashboard.precision = dashboardData
    dashboardData = getNumOfChildren(dashboard.numbers)
    dashboard.numChilds = dashboardData
    dashboardData = xmlFile:getValue(key .. "#font", "DIGIT")
    dashboard.fontMaterialName = dashboardData
    dashboardData = xmlFile:getValue(key .. "#hasNormalMap", false)
    dashboard.hasNormalMap = dashboardData
    dashboardData = xmlFile:getValue(key .. "#emissiveScale", 0.2)
    dashboard.emissiveScale = dashboardData
    XMLUtil.checkDeprecatedXMLElements(xmlFile, self.configFileName, key .. "#hiddenAlpha")
    dashboardData = dashboardData:getFontMaterial(dashboard.fontMaterialName, self.customEnvironment)
    dashboard.fontMaterial = dashboardData
    if dashboard.fontMaterial ~= nil then
      dashboard.numberNodes = {}
      if dashboard.numChilds - dashboard.precision <= 0 then
        Logging.xmlWarning(self.xmlFile, "Not enough number meshes for vehicle hud '%s'", key)
        return false
      end
      -- TODO: structure LOP_FORNPREP (pc 135, target 200)
      v7 = getChildAt(dashboard.numbers, 1 - 1)
      if v7 ~= nil then
        v8:assignFontMaterialToNode(v7, dashboard.hasNormalMap)
        if dashboard.numberColor ~= nil then
          v8:setFontCharacterColor(v7, dashboard.numberColor[1], dashboard.numberColor[2], dashboard.numberColor[3], 1, dashboard.emissiveScale)
        end
        setVisibility(v7, false)
        table.insert(dashboard.numberNodes, v7)
      end
      -- TODO: structure LOP_FORNLOOP (pc 187, target 136)
    else
      Logging.xmlWarning(self.xmlFile, "Unknown font '%s' in '%s'", dashboard.fontMaterialName, key)
      return false
    end
    dashboard.maxValue = 10 ^ dashboard.numChilds - 1 / 10 ^ dashboard.precision
  else
    Logging.xmlWarning(self.xmlFile, "Missing numbers node for dashboard '%s'", key)
    return false
  end
  return true
end
function Dashboard:loadTextDashboardFromXML(xmlFile, key, dashboard)
  local dashboardData = xmlFile:getValue(key .. "#node", nil, self.components, self.i3dMappings)
  dashboard.node = dashboardData
  local v7 = xmlFile:getValue(key .. "#textColor")
  dashboardData = self:getDashboardColor(...)
  dashboard.textColor = dashboardData
  if dashboard.textColor == nil then
    dashboard.textColor = {0.9, 0.9, 0.9, 1}
  end
  v7 = xmlFile:getValue(key .. "#hiddenColor")
  dashboardData = self:getDashboardColor(...)
  dashboard.hiddenColor = dashboardData
  if dashboard.node ~= nil then
    dashboardData = xmlFile:getValue(key .. "#textAlignment", "RIGHT")
    local v9 = dashboardData:upper()
    if not RenderText["ALIGN_" .. v9] then
    end
    dashboard.textAlignment = v5
    local v5 = xmlFile:getValue(key .. "#textSize", 0.03)
    dashboard.textSize = v5
    v5 = xmlFile:getValue(key .. "#textScaleX", 1)
    dashboard.textScaleX = v5
    v5 = xmlFile:getValue(key .. "#textScaleY", 1)
    dashboard.textScaleY = v5
    v5 = xmlFile:getValue(key .. "#textMask", "00.0")
    dashboard.textMask = v5
    local v5, v6 = string.maskToFormat(dashboard.textMask)
    dashboard.textFormatStr = v5
    dashboard.textFormatPrecision = v6
    v5 = xmlFile:getValue(key .. "#font", "DIGIT")
    v5 = v5:upper()
    dashboard.fontName = v5
    v5 = xmlFile:getValue(key .. "#fontThickness", 1)
    dashboard.fontThickness = v5
    v5 = xmlFile:getValue(key .. "#emissiveScale", 0.2)
    dashboard.emissiveScale = v5
    v5 = v5:getFontMaterial(dashboard.fontName, self.customEnvironment)
    dashboard.fontMaterial = v5
    if dashboard.fontMaterial ~= nil then
      local v8 = v8:len()
      v5 = v5:createCharacterLine(dashboard.node, v8, dashboard.textSize, dashboard.textColor, dashboard.hiddenColor, dashboard.emissiveScale, dashboard.textScaleX, dashboard.textScaleY, dashboard.textAlignment, nil, dashboard.fontThickness)
      dashboard.characterLine = v5
      v5:updateCharacterLine(dashboard.characterLine, dashboard.textMask)
    else
      Logging.xmlWarning(self.xmlFile, "Unknown font '%s' in '%s'", dashboard.fontName, key)
      return false
    end
    setVisibility(dashboard.node, false)
  else
    Logging.xmlWarning(self.xmlFile, "Missing node for dashboard '%s'", key)
    return false
  end
  return true
end
function Dashboard:loadAnimationDashboardFromXML(xmlFile, key, dashboard)
  local dashboardData = xmlFile:getValue(key .. "#animName")
  dashboard.animName = dashboardData
  if dashboard.animName ~= nil then
    dashboardData = xmlFile:getValue(key .. "#minValueAnim")
    dashboard.minValueAnim = dashboardData
    dashboardData = xmlFile:getValue(key .. "#maxValueAnim")
    dashboard.maxValueAnim = dashboardData
  else
    Logging.xmlWarning(self.xmlFile, "Missing animation for dashboard '%s'", key)
    return false
  end
  return true
end
function Dashboard:loadRotationDashboardFromXML(xmlFile, key, dashboard)
  local dashboardData = xmlFile:getValue(key .. "#node", nil, self.components, self.i3dMappings)
  dashboard.node = dashboardData
  if dashboard.node == nil then
    Logging.xmlWarning(self.xmlFile, "Missing 'node' for dashboard '%s'", key)
    return false
  end
  dashboardData = xmlFile:getValue(key .. "#rotAxis")
  dashboard.rotAxis = dashboardData
  dashboardData = xmlFile:getValue(key .. "#minRot")
  if dashboardData ~= nil then
    if dashboard.rotAxis ~= nil then
      local v6 = tonumber(dashboardData)
      local v5 = math.rad(...)
      dashboard.minRot = v5
      -- goto L73  (LOP_JUMP +16)
    end
    v5 = dashboardData:getRadians(3)
    dashboard.minRot = v5
  else
    Logging.xmlWarning(self.xmlFile, "Missing 'minRot' attribute for dashboard '%s'", key)
    return false
  end
  v5 = xmlFile:getValue(key .. "#maxRot")
  if v5 ~= nil then
    if dashboard.rotAxis ~= nil then
      local v7 = tonumber(v5)
      v6 = math.rad(...)
      dashboard.maxRot = v6
      -- goto L112  (LOP_JUMP +16)
    end
    v6 = v5:getRadians(3)
    dashboard.maxRot = v6
  else
    Logging.xmlWarning(self.xmlFile, "Missing 'maxRot' attribute for dashboard '%s'", key)
    return false
  end
  v6 = xmlFile:getValue(key .. "#minValueRot")
  dashboard.minValueRot = v6
  v6 = xmlFile:getValue(key .. "#maxValueRot")
  dashboard.maxValueRot = v6
  return true
end
function Dashboard:loadVisibilityDashboardFromXML(xmlFile, key, dashboard)
  local dashboardData = xmlFile:getValue(key .. "#node", nil, self.components, self.i3dMappings)
  dashboard.node = dashboardData
  if dashboard.node == nil then
    Logging.xmlWarning(self.xmlFile, "Missing 'node' for dashboard '%s'", key)
    return false
  end
  setVisibility(dashboard.node, false)
  return true
end
function Dashboard:loadSliderDashboardFromXML(xmlFile, key, dashboard)
  local dashboardData = xmlFile:getValue(key .. "#node", nil, self.components, self.i3dMappings)
  dashboard.node = dashboardData
  if dashboard.node == nil then
    Logging.xmlWarning(self.xmlFile, "Missing 'node' for dashboard '%s'", key)
    return false
  end
  dashboardData = getHasClassId(dashboard.node, ClassIds.SHAPE)
  if not dashboardData then
    local v7 = getName(dashboard.node)
    Logging.xmlWarning(self.xmlFile, "Slider Dashboard node is not a shape! '%s' in '%s'", v7, key)
    return false
  end
  dashboardData = getHasShaderParameter(dashboard.node, "sliderPos")
  if dashboardData then
    setShaderParameter(dashboard.node, "sliderPos", 0, 0, 0, 0, false)
    dashboardData = xmlFile:getValue(key .. "#minValueSlider")
    dashboard.minValueSlider = dashboardData
    dashboardData = xmlFile:getValue(key .. "#maxValueSlider")
    dashboard.maxValueSlider = dashboardData
  else
    v7 = getName(dashboard.node)
    Logging.xmlWarning(self.xmlFile, "Node '%s' does not have a 'sliderPos' shader parameter for dashboard '%s'", v7, key)
    return false
  end
  return true
end
function Dashboard:loadMultiStateDashboardFromXML(xmlFile, key, dashboard)
  local dashboardData = xmlFile:getValue(key .. "#node", nil, self.components, self.i3dMappings)
  dashboard.node = dashboardData
  if dashboard.node == nil then
    Logging.xmlWarning(self.xmlFile, "Missing 'node' for dashboard '%s'", key)
    return false
  end
  dashboard.states = {}
  dashboardData:iterate(key .. ".state", function(self, xmlFile)
    local dashboard = dashboard:getValue(xmlFile .. "#value", nil, true)
    if {values = dashboard}.values ~= nil and 0 < #{values = dashboard}.values then
      dashboard = dashboard:getValue(xmlFile .. "#rotation", nil, true)
      dashboard = dashboard:getValue(xmlFile .. "#translation", nil, true)
      dashboard = dashboard:getValue(xmlFile .. "#scale", nil, true)
      dashboard = dashboard:getValue(xmlFile .. "#visibility")
      table.insert(u1.states, {values = dashboard, rotation = dashboard, translation = dashboard, scale = dashboard, visibility = dashboard})
    end
  end)
  if #dashboard.states == 0 then
    Logging.xmlWarning(self.xmlFile, "No states defined for dashboard '%s'", key)
    return false
  end
  dashboard.multiStateInterpolationTime = 1 / dashboard.interpolationSpeed
  dashboard.interpolationSpeed = 99999
  dashboard.lastState = nil
  dashboard.get = function()
    local self, xmlFile, key = getTranslation(u0.node)
    local dashboard, dashboardData, v5 = getRotation(u0.node)
    local v6, v7, v8 = getScale(u0.node)
    local v10 = getVisibility(u0.node)
    if v10 then
      return self, xmlFile, key, dashboard, dashboardData, v5, v6, v7, v8, 1
    end
    return self, xmlFile, key, dashboard, dashboardData, v5, v6, v7, v8, 0
  end
  dashboard.set = function(self, xmlFile, key, dashboard, dashboardData, v5, v6, v7, v8, v9)
    setTranslation(u0.node, self, xmlFile, key)
    setRotation(u0.node, dashboard, dashboardData, v5)
    setScale(u0.node, v6, v7, v8)
    if 0.5 > v9 then
    end
    v10(v11, true)
    if u1.setCharacterTargetNodeStateDirty ~= nil then
      v10:setCharacterTargetNodeStateDirty(u0.node)
    end
    if u1.setMovingToolDirty ~= nil then
      v10:setMovingToolDirty(u0.node)
    end
  end
  local v5 = getRotation(dashboard.node)
  dashboard.defaultRotation = {}
  v5 = getTranslation(dashboard.node)
  dashboard.defaultTranslation = {}
  v5 = getScale(dashboard.node)
  dashboard.defaultScale = {}
  dashboardData = getVisibility(dashboard.node)
  dashboard.defaultVisibility = dashboardData
  return true
end
function Dashboard.defaultDashboardStateFunc(v0, xmlFile, key, dashboard, dashboardData, v5)
  if xmlFile.displayTypeIndex == Dashboard.TYPES.EMITTER then
    Dashboard.defaultEmitterDashboardStateFunc(v0, xmlFile, key, dashboard, dashboardData, v5)
    return
  end
  if xmlFile.displayTypeIndex == Dashboard.TYPES.NUMBER then
    Dashboard.defaultNumberDashboardStateFunc(v0, xmlFile, key, dashboard, dashboardData, v5)
    return
  end
  if xmlFile.displayTypeIndex == Dashboard.TYPES.ANIMATION then
    Dashboard.defaultAnimationDashboardStateFunc(v0, xmlFile, key, dashboard, dashboardData, v5)
    return
  end
  if xmlFile.displayTypeIndex == Dashboard.TYPES.ROT then
    Dashboard.defaultRotationDashboardStateFunc(v0, xmlFile, key, dashboard, dashboardData, v5)
    return
  end
  if xmlFile.displayTypeIndex == Dashboard.TYPES.VISIBILITY then
    Dashboard.defaultVisibilityDashboardStateFunc(v0, xmlFile, key, dashboard, dashboardData, v5)
    return
  end
  if xmlFile.displayTypeIndex == Dashboard.TYPES.TEXT then
    Dashboard.defaultTextDashboardStateFunc(v0, xmlFile, key, dashboard, dashboardData, v5)
    return
  end
  if xmlFile.displayTypeIndex == Dashboard.TYPES.SLIDER then
    Dashboard.defaultSliderDashboardStateFunc(v0, xmlFile, key, dashboard, dashboardData, v5)
    return
  end
  if xmlFile.displayTypeIndex == Dashboard.TYPES.MULTI_STATE then
    Dashboard.defaultMultiStateDashboardStateFunc(v0, xmlFile, key, dashboard, dashboardData, v5)
  end
end
function Dashboard.defaultEmitterDashboardStateFunc(v0, xmlFile, key, dashboard, dashboardData, v5)
  local v6 = type(key)
  if v6 == "number" then
    if 0.5 < key then
    else
    end
  end
  if key == nil then
  else
  end
  if key then
    -- if v1.intensity then goto L30 end
  end
  v6(v7, v8, xmlFile.idleValue, 0, 0, 0, false)
end
function Dashboard.defaultNumberDashboardStateFunc(v0, xmlFile, key, dashboard, dashboardData, v5)
  local v6 = type(key)
  if v6 == "number" then
    local v7 = string.format("%." .. xmlFile.precision .. "f", key)
    v6 = tonumber(...)
    v7 = math.floor(v6 * 10 ^ xmlFile.precision)
    -- TODO: structure LOP_FORNPREP (pc 34, target 127)
    if 0 < v7 then
      local v13 = math.floor(v7 / 10)
      local v15 = v15:format(v7 - v13 * 10)
      v12:setFontCharacter(...)
      setVisibility(xmlFile.numberNodes[1], true)
    else
      v11:setFontCharacter(xmlFile.numberNodes[1], "0")
      if v5 then
        -- if 1 - 1 <= v1.precision then goto L85 end
      end
      setVisibility(v10, false)
    end
    -- TODO: structure LOP_FORNLOOP (pc 85, target 35)
    return
  end
  v6 = type(key)
  if v6 == "string" then
    v6 = key:len()
    -- TODO: structure LOP_FORNPREP (pc 102, target 127)
    if 1 <= v6 then
      v15 = key:sub(v6 - 1 - 1, v6 - 1 - 1)
      v12:setFontCharacter(...)
    end
    setVisibility(v10, v5)
    -- TODO: structure LOP_FORNLOOP (pc 126, target 103)
  end
end
function Dashboard.defaultTextDashboardStateFunc(v0, xmlFile, key, dashboard, dashboardData, v5)
  local v6 = type(key)
  if v6 == "number" then
    local v6, v7 = math.modf(key)
    local v12 = math.floor((v7 + 0.000001) * 10 ^ xmlFile.textFormatPrecision)
    local v11 = math.abs(...)
    local v8 = string.format(...)
    v9:updateCharacterLine(xmlFile.characterLine, v8)
  else
    v6 = type(key)
    if v6 == "string" then
      v6:updateCharacterLine(xmlFile.characterLine, key)
    end
  end
  setVisibility(xmlFile.node, v5)
end
function Dashboard:defaultAnimationDashboardStateFunc(dashboard, newValue, minValue, maxValue, isActive)
  if dashboard.animName ~= nil then
    local v6 = self:getAnimationExists(dashboard.animName)
    if v6 then
      if dashboard.minValueAnim ~= nil then
        -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x0 -> L43
        local v7 = MathUtil.clamp(newValue, dashboard.minValueAnim, dashboard.maxValueAnim)
        v7 = MathUtil.round((v7 - dashboard.minValueAnim) / (dashboard.maxValueAnim - dashboard.minValueAnim), 3)
      else
        v7 = MathUtil.round((newValue - (minValue or 0)) / ((maxValue or 1) - (minValue or 0)), 3)
      end
      self:setAnimationTime(dashboard.animName, v6, true)
      return
    end
    Logging.xmlWarning(self.xmlFile, "Unknown animation name '%s' for dashboard!", dashboard.animName)
    dashboard.animName = nil
  end
end
function Dashboard:defaultRotationDashboardStateFunc(dashboard, newValue, minValue, maxValue, isActive)
  local v7 = type(newValue)
  if v7 == "boolean" then
    if newValue then
    else
    end
  elseif dashboard.minValueRot ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x0 -> L46
    v7 = MathUtil.clamp(newValue, dashboard.minValueRot, dashboard.maxValueRot)
    v7 = MathUtil.round((v7 - dashboard.minValueRot) / (dashboard.maxValueRot - dashboard.minValueRot), 3)
  else
  end
  if dashboard.rotAxis ~= nil then
    local v7, v8, v9 = getRotation(dashboard.node)
    local v10 = MathUtil.lerp(dashboard.minRot, dashboard.maxRot, v6)
    if dashboard.rotAxis == 1 then
    elseif dashboard.rotAxis == 2 then
    else
    end
    setRotation(dashboard.node, v7, v8, v9)
    if self.setCharacterTargetNodeStateDirty ~= nil then
      self:setCharacterTargetNodeStateDirty(dashboard.node)
    end
    -- cmp-jump LOP_JUMPXEQKNIL R11 aux=0x0 -> L142
    self:setMovingToolDirty(dashboard.node)
    return
  end
  v7, v8, v9 = MathUtil.vector3ArrayLerp(dashboard.minRot, dashboard.maxRot, v6)
  setRotation(dashboard.node, v7, v8, v9)
  if self.setCharacterTargetNodeStateDirty ~= nil then
    self:setCharacterTargetNodeStateDirty(dashboard.node)
  end
  if self.setMovingToolDirty ~= nil then
    self:setMovingToolDirty(dashboard.node)
  end
end
function Dashboard.defaultVisibilityDashboardStateFunc(v0, dashboard, newValue, minValue, maxValue, isActive)
  if newValue == nil then
  else
  end
  setVisibility(dashboard.node, newValue)
end
function Dashboard.defaultSliderDashboardStateFunc(v0, dashboard, newValue, minValue, maxValue, isActive)
  if dashboard.node ~= nil then
    if dashboard.minValueSlider ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R7 aux=0x0 -> L37
      local v7 = MathUtil.clamp(newValue, dashboard.minValueSlider, dashboard.maxValueSlider)
      v7 = MathUtil.round((v7 - dashboard.minValueSlider) / (dashboard.maxValueSlider - dashboard.minValueSlider), 3)
    else
      v7 = MathUtil.round((newValue - (minValue or 0)) / ((maxValue or 1) - (minValue or 0)), 3)
    end
    setShaderParameter(dashboard.node, "sliderPos", v6, 0, 0, 0, false)
  end
end
function Dashboard:defaultMultiStateDashboardStateFunc(dashboard, newValue, minValue, maxValue, isActive)
  if dashboard.node ~= nil then
    if isActive then
      -- TODO: structure LOP_FORNPREP (pc 11, target 62)
      local v11 = type(newValue)
      if v11 == "table" then
        -- TODO: structure LOP_FORNPREP (pc 27, target 61)
        if newValue[dashboard.states[1].values[1]] == true then
        end
        -- TODO: structure LOP_FORNLOOP (pc 35, target 28)
      else
        v11 = type(newValue)
        if v11 == "number" then
          -- TODO: structure LOP_FORNPREP (pc 49, target 61)
          local v15 = MathUtil.round(newValue)
          if dashboard.states[1].values[1] == v15 then
          end
          -- TODO: structure LOP_FORNLOOP (pc 60, target 50)
        end
      end
      -- TODO: structure LOP_FORNLOOP (pc 61, target 12)
    end
    if v6 ~= dashboard.lastState then
      if v6 ~= nil and v6.visibility ~= nil then
      end
      if dashboard.doInterpolation then
        if dashboard.interpolator ~= nil then
          v11:update(9999999)
        end
        if v10 then
        else
        end
        v11 = v11(v12, v13, v14, {v16, v17, v18, v19, v20, v21, v22, v23, v24, v25}, dashboard.multiStateInterpolationTime)
        -- cmp-jump LOP_JUMPXEQKNIL R11 aux=0x0 -> L200
        dashboard.interpolator = v11
        v12:setDeleteListenerObject(self)
        v12:setFinishedFunc(function(self)
          self.interpolator = nil
        end, dashboard)
      else
        setRotation(dashboard.node, v7[1], v7[2], v7[3])
        setTranslation(dashboard.node, v8[1], v8[2], v8[3])
        setScale(dashboard.node, v9[1], v9[2], v9[3])
        setVisibility(dashboard.node, v10)
        if self.setCharacterTargetNodeStateDirty ~= nil then
          self:setCharacterTargetNodeStateDirty(dashboard.node)
        end
        if self.setMovingToolDirty ~= nil then
          self:setMovingToolDirty(dashboard.node)
        end
      end
      dashboard.lastState = v6
    end
  end
end
function Dashboard.warningAttributes(v0, dashboard, newValue, minValue, maxValue)
  local isActive = dashboard:getValue(newValue .. "#warningThresholdMin", -math.huge)
  minValue.warningThresholdMin = isActive
  isActive = dashboard:getValue(newValue .. "#warningThresholdMax", math.huge)
  minValue.warningThresholdMax = isActive
  return true
end
function Dashboard.warningState(v0, dashboard, newValue, minValue, maxValue, isActive)
  if dashboard.warningThresholdMin < newValue and newValue >= dashboard.warningThresholdMax then
  end
  v6(v7, v8, v9, minValue, maxValue, isActive)
end
function Dashboard:setDashboardsDirty()
  self.spec_dashboard.isDirty = true
  self.spec_dashboard.isDirtyTick = true
  self:raiseActive()
end
function Dashboard.getDashboardValue(v0, dashboard, newValue, minValue)
  local maxValue = type(newValue)
  if maxValue ~= "number" then
    maxValue = type(newValue)
    -- cmp-jump LOP_JUMPXEQKS R4 aux=0x80000003 -> L15
  end
  return newValue
  maxValue = type(newValue)
  if maxValue == "function" then
    maxValue = newValue(dashboard, minValue)
    return maxValue
  end
  local isActive = type(dashboard[newValue])
  if isActive == "function" then
    isActive = dashboard[newValue](dashboard, minValue)
    return isActive
  end
  isActive = type(maxValue)
  if isActive ~= "number" then
    isActive = type(maxValue)
    -- cmp-jump LOP_JUMPXEQKS R5 aux=0x80000003 -> L55
  end
  return maxValue
  return nil
end
function Dashboard.getDashboardColor(v0, dashboard, newValue)
  if newValue == nil then
    return nil
  end
  local isActive = newValue:upper()
  if Dashboard.COLORS[isActive] ~= nil then
    isActive = newValue:upper()
    return Dashboard.COLORS[isActive]
  end
  local minValue = minValue:getBrandColorByName(newValue)
  if minValue ~= nil then
    return minValue
  end
  local maxValue = string.getVectorN(newValue)
  if maxValue ~= nil and 3 <= #maxValue then
    if #maxValue == 3 then
      maxValue[4] = 1
    end
    return maxValue
  end
  Logging.xmlWarning(dashboard, "Unable to resolve color '%s'", newValue)
  return nil
end
function Dashboard:registerDashboardXMLPaths(dashboard, newValue)
  local v7 = string.format("Value type name (Available: %s)", newValue or "no valueTypes available here")
  self:register(...)
  self:register(XMLValueType.STRING, dashboard .. ".dashboard(?)#displayType", "Display type name")
  self:register(XMLValueType.BOOL, dashboard .. ".dashboard(?)#doInterpolation", "Do interpolation", false)
  self:register(XMLValueType.FLOAT, dashboard .. ".dashboard(?)#interpolationSpeed", "Interpolation speed", 0.005)
  self:register(XMLValueType.FLOAT, dashboard .. ".dashboard(?)#idleValue", "Idle value", 0)
  self:register(XMLValueType.STRING, dashboard .. ".dashboard(?)#groups", "List of groups")
  self:register(XMLValueType.NODE_INDEX, dashboard .. ".dashboard(?)#node", "(EMITTER | ROT | VISIBILITY) Node")
  self:register(XMLValueType.STRING, dashboard .. ".dashboard(?)#baseColor", "(EMITTER) Base color (DashboardColor OR BrandColor OR r g b a)")
  self:register(XMLValueType.STRING, dashboard .. ".dashboard(?)#emitColor", "(EMITTER) Emit color (DashboardColor OR BrandColor OR r g b a)")
  self:register(XMLValueType.FLOAT, dashboard .. ".dashboard(?)#intensity", "(EMITTER) Intensity", 1)
  self:register(XMLValueType.NODE_INDEX, dashboard .. ".dashboard(?)#numbers", "(NUMBER) Numbers node")
  self:register(XMLValueType.STRING, dashboard .. ".dashboard(?)#numberColor", "(NUMBER) Numbers color (DashboardColor OR BrandColor OR r g b a)")
  self:register(XMLValueType.INT, dashboard .. ".dashboard(?)#precision", "(NUMBER) Precision", 1)
  self:register(XMLValueType.STRING, dashboard .. ".dashboard(?)#font", "(NUMBER) Name of font to apply to mesh", "DIGIT")
  self:register(XMLValueType.BOOL, dashboard .. ".dashboard(?)#hasNormalMap", "(NUMBER) Normal map will be applied to number decals", false)
  self:register(XMLValueType.FLOAT, dashboard .. ".dashboard(?)#emissiveScale", "(NUMBER) Scale of emissive map", 0.2)
  self:register(XMLValueType.STRING, dashboard .. ".dashboard(?)#textColor", "(TEXT) Font color (DashboardColor OR BrandColor OR r g b a)")
  self:register(XMLValueType.STRING, dashboard .. ".dashboard(?)#hiddenColor", "(TEXT) Color of hidden character (if defined a '0' in this color is display instead of nothing)")
  self:register(XMLValueType.STRING, dashboard .. ".dashboard(?)#textAlignment", "(TEXT) Alignment of text (LEFT | RIGHT | CENTER)", "RIGHT")
  self:register(XMLValueType.FLOAT, dashboard .. ".dashboard(?)#textSize", "(TEXT) Size of font in meter", 0.03)
  self:register(XMLValueType.FLOAT, dashboard .. ".dashboard(?)#fontThickness", "(TEXT) Thickness factor for font characters", 1)
  self:register(XMLValueType.FLOAT, dashboard .. ".dashboard(?)#textScaleX", "(TEXT) Global X scale of text", 1)
  self:register(XMLValueType.FLOAT, dashboard .. ".dashboard(?)#textScaleY", "(TEXT) Global Y scale of text", 1)
  self:register(XMLValueType.STRING, dashboard .. ".dashboard(?)#textMask", "(TEXT) Font Mask", "00.0")
  self:register(XMLValueType.STRING, dashboard .. ".dashboard(?)#animName", "(ANIMATION) Animation name")
  self:register(XMLValueType.FLOAT, dashboard .. ".dashboard(?)#minValueAnim", "(ANIMATION) Min. reference value for animation")
  self:register(XMLValueType.FLOAT, dashboard .. ".dashboard(?)#maxValueAnim", "(ANIMATION) Max. reference value for animation")
  self:register(XMLValueType.FLOAT, dashboard .. ".dashboard(?)#rotAxis", "(ROT) Rotation axis")
  self:register(XMLValueType.STRING, dashboard .. ".dashboard(?)#minRot", "(ROT) Min. rotation (Rotation value if rotAxis is given | Rotation Vector of rotAxis is not given)")
  self:register(XMLValueType.STRING, dashboard .. ".dashboard(?)#maxRot", "(ROT) Min. rotation (Rotation value if rotAxis is given | Rotation Vector of rotAxis is not given)")
  self:register(XMLValueType.FLOAT, dashboard .. ".dashboard(?)#minValueRot", "(ROT) Min. reference value for rotation")
  self:register(XMLValueType.FLOAT, dashboard .. ".dashboard(?)#maxValueRot", "(ROT) Max. reference value for rotation")
  self:register(XMLValueType.FLOAT, dashboard .. ".dashboard(?)#minValueSlider", "(SLIDER) Min. reference value for slider")
  self:register(XMLValueType.FLOAT, dashboard .. ".dashboard(?)#maxValueSlider", "(SLIDER) Max. reference value for slider")
  self:register(XMLValueType.VECTOR_N, dashboard .. ".dashboard(?).state(?)#value", "(MULTI_STATE) One or multiple values separated by space to activate the state")
  self:register(XMLValueType.VECTOR_ROT, dashboard .. ".dashboard(?).state(?)#rotation", "(MULTI_STATE) Rotation while state is active")
  self:register(XMLValueType.VECTOR_TRANS, dashboard .. ".dashboard(?).state(?)#translation", "(MULTI_STATE) Translation while state is active")
  self:register(XMLValueType.VECTOR_SCALE, dashboard .. ".dashboard(?).state(?)#scale", "(MULTI_STATE) Scale while state is active")
  self:register(XMLValueType.BOOL, dashboard .. ".dashboard(?).state(?)#visibility", "(MULTI_STATE) Visibility while state is active")
end
function Dashboard:registerDashboardWarningXMLPaths(dashboard)
  self:register(XMLValueType.FLOAT, dashboard .. ".dashboard(?)#warningThresholdMin", "(WARNING) Threshold min.")
  self:register(XMLValueType.FLOAT, dashboard .. ".dashboard(?)#warningThresholdMax", "(WARNING) Threshold max.")
end
