-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

Vehicle = {}
local Vehicle_mt = Class(Vehicle, Object)
Vehicle.defaultWidth = 6
Vehicle.defaultLength = 8
Vehicle.defaultHeight = 4
Vehicle.DEFAULT_SIZE = {width = Vehicle.defaultWidth, length = Vehicle.defaultLength, height = Vehicle.defaultHeight, widthOffset = 0, lengthOffset = 0, heightOffset = 0}
Vehicle.PROPERTY_STATE_NONE = 0
Vehicle.PROPERTY_STATE_OWNED = 1
Vehicle.PROPERTY_STATE_LEASED = 2
Vehicle.PROPERTY_STATE_MISSION = 3
Vehicle.PROPERTY_STATE_SHOP_CONFIG = 4
Vehicle.LOAD_STEP_CREATED = 0
Vehicle.LOAD_STEP_PRE_LOAD = 1
Vehicle.LOAD_STEP_AWAIT_I3D = 2
Vehicle.LOAD_STEP_LOAD = 3
Vehicle.LOAD_STEP_POST_LOAD = 4
Vehicle.LOAD_STEP_AWAIT_SUB_I3D = 5
Vehicle.LOAD_STEP_FINISHED = 6
Vehicle.LOAD_STEP_SYNCHRONIZED = 7
Vehicle.SPRING_SCALE = 10
Vehicle.NUM_INTERACTION_FLAGS = 0
Vehicle.INTERACTION_FLAG_NONE = 0
Vehicle.NUM_STATE_CHANGES = 0
Vehicle.DAMAGED_SPEEDLIMIT_REDUCTION = 0.3
Vehicle.INPUT_CONTEXT_NAME = "VEHICLE"
Vehicle.xmlSchema = nil
Vehicle.xmlSchemaSounds = nil
Vehicle.xmlSchemaSavegame = nil
Vehicle.DEBUG_NETWORK_READ_WRITE = false
Vehicle.DEBUG_NETWORK_READ_WRITE_UPDATE = false
InitStaticObjectClass(Vehicle, "Vehicle", ObjectIds.OBJECT_VEHICLE)
source("dataS/scripts/vehicles/VehicleDebug.lua")
source("dataS/scripts/vehicles/VehicleHudUtils.lua")
source("dataS/scripts/vehicles/VehicleSchemaOverlayData.lua")
source("dataS/scripts/vehicles/VehicleBrokenEvent.lua")
source("dataS/scripts/vehicles/VehicleSetIsReconfiguratingEvent.lua")
function Vehicle.registerInteractionFlag(name)
  local v3 = string.upper(name)
  if Vehicle["INTERACTION_FLAG_" .. v3] == nil then
    Vehicle.NUM_INTERACTION_FLAGS = Vehicle.NUM_INTERACTION_FLAGS + 1
    Vehicle["INTERACTION_FLAG_" .. v3] = Vehicle.NUM_INTERACTION_FLAGS
  end
end
function Vehicle.registerStateChange(name)
  local v3 = string.upper(name)
  if Vehicle["STATE_CHANGE_" .. v3] == nil then
    Vehicle.NUM_STATE_CHANGES = Vehicle.NUM_STATE_CHANGES + 1
    Vehicle["STATE_CHANGE_" .. v3] = Vehicle.NUM_STATE_CHANGES
  end
end
function Vehicle.registerEvents(vehicleType)
  SpecializationUtil.registerEvent(vehicleType, "onPreLoad")
  SpecializationUtil.registerEvent(vehicleType, "onLoad")
  SpecializationUtil.registerEvent(vehicleType, "onPostLoad")
  SpecializationUtil.registerEvent(vehicleType, "onPreLoadFinished")
  SpecializationUtil.registerEvent(vehicleType, "onLoadFinished")
  SpecializationUtil.registerEvent(vehicleType, "onPreDelete")
  SpecializationUtil.registerEvent(vehicleType, "onDelete")
  SpecializationUtil.registerEvent(vehicleType, "onSave")
  SpecializationUtil.registerEvent(vehicleType, "onReadStream")
  SpecializationUtil.registerEvent(vehicleType, "onWriteStream")
  SpecializationUtil.registerEvent(vehicleType, "onReadUpdateStream")
  SpecializationUtil.registerEvent(vehicleType, "onWriteUpdateStream")
  SpecializationUtil.registerEvent(vehicleType, "onReadPositionUpdateStream")
  SpecializationUtil.registerEvent(vehicleType, "onWritePositionUpdateStream")
  SpecializationUtil.registerEvent(vehicleType, "onPreUpdate")
  SpecializationUtil.registerEvent(vehicleType, "onUpdate")
  SpecializationUtil.registerEvent(vehicleType, "onUpdateInterpolation")
  SpecializationUtil.registerEvent(vehicleType, "onUpdateDebug")
  SpecializationUtil.registerEvent(vehicleType, "onPostUpdate")
  SpecializationUtil.registerEvent(vehicleType, "onUpdateTick")
  SpecializationUtil.registerEvent(vehicleType, "onPostUpdateTick")
  SpecializationUtil.registerEvent(vehicleType, "onUpdateEnd")
  SpecializationUtil.registerEvent(vehicleType, "onDraw")
  SpecializationUtil.registerEvent(vehicleType, "onDrawUIInfo")
  SpecializationUtil.registerEvent(vehicleType, "onActivate")
  SpecializationUtil.registerEvent(vehicleType, "onDeactivate")
  SpecializationUtil.registerEvent(vehicleType, "onStateChange")
  SpecializationUtil.registerEvent(vehicleType, "onRegisterActionEvents")
  SpecializationUtil.registerEvent(vehicleType, "onRootVehicleChanged")
  SpecializationUtil.registerEvent(vehicleType, "onSelect")
  SpecializationUtil.registerEvent(vehicleType, "onUnselect")
  SpecializationUtil.registerEvent(vehicleType, "onSetBroken")
end
function Vehicle.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "setOwnerFarmId", Vehicle.setOwnerFarmId)
  SpecializationUtil.registerFunction(vehicleType, "loadSubSharedI3DFile", Vehicle.loadSubSharedI3DFile)
  SpecializationUtil.registerFunction(vehicleType, "drawUIInfo", Vehicle.drawUIInfo)
  SpecializationUtil.registerFunction(vehicleType, "raiseActive", Vehicle.raiseActive)
  SpecializationUtil.registerFunction(vehicleType, "setLoadingState", Vehicle.setLoadingState)
  SpecializationUtil.registerFunction(vehicleType, "setLoadingStep", Vehicle.setLoadingStep)
  SpecializationUtil.registerFunction(vehicleType, "addNodeObjectMapping", Vehicle.addNodeObjectMapping)
  SpecializationUtil.registerFunction(vehicleType, "removeNodeObjectMapping", Vehicle.removeNodeObjectMapping)
  SpecializationUtil.registerFunction(vehicleType, "addToPhysics", Vehicle.addToPhysics)
  SpecializationUtil.registerFunction(vehicleType, "removeFromPhysics", Vehicle.removeFromPhysics)
  SpecializationUtil.registerFunction(vehicleType, "setVisibility", Vehicle.setVisibility)
  SpecializationUtil.registerFunction(vehicleType, "setRelativePosition", Vehicle.setRelativePosition)
  SpecializationUtil.registerFunction(vehicleType, "setAbsolutePosition", Vehicle.setAbsolutePosition)
  SpecializationUtil.registerFunction(vehicleType, "getLimitedVehicleYPosition", Vehicle.getLimitedVehicleYPosition)
  SpecializationUtil.registerFunction(vehicleType, "setWorldPosition", Vehicle.setWorldPosition)
  SpecializationUtil.registerFunction(vehicleType, "setWorldPositionQuaternion", Vehicle.setWorldPositionQuaternion)
  SpecializationUtil.registerFunction(vehicleType, "updateVehicleSpeed", Vehicle.updateVehicleSpeed)
  SpecializationUtil.registerFunction(vehicleType, "getUpdatePriority", Vehicle.getUpdatePriority)
  SpecializationUtil.registerFunction(vehicleType, "getPrice", Vehicle.getPrice)
  SpecializationUtil.registerFunction(vehicleType, "getSellPrice", Vehicle.getSellPrice)
  SpecializationUtil.registerFunction(vehicleType, "getDailyUpkeep", Vehicle.getDailyUpkeep)
  SpecializationUtil.registerFunction(vehicleType, "getIsOnField", Vehicle.getIsOnField)
  SpecializationUtil.registerFunction(vehicleType, "getParentComponent", Vehicle.getParentComponent)
  SpecializationUtil.registerFunction(vehicleType, "getLastSpeed", Vehicle.getLastSpeed)
  SpecializationUtil.registerFunction(vehicleType, "getDeactivateOnLeave", Vehicle.getDeactivateOnLeave)
  SpecializationUtil.registerFunction(vehicleType, "getOwner", Vehicle.getOwner)
  SpecializationUtil.registerFunction(vehicleType, "getIsVehicleNode", Vehicle.getIsVehicleNode)
  SpecializationUtil.registerFunction(vehicleType, "getIsOperating", Vehicle.getIsOperating)
  SpecializationUtil.registerFunction(vehicleType, "getIsActive", Vehicle.getIsActive)
  SpecializationUtil.registerFunction(vehicleType, "getIsActiveForInput", Vehicle.getIsActiveForInput)
  SpecializationUtil.registerFunction(vehicleType, "getIsActiveForSound", Vehicle.getIsActiveForSound)
  SpecializationUtil.registerFunction(vehicleType, "getIsLowered", Vehicle.getIsLowered)
  SpecializationUtil.registerFunction(vehicleType, "updateWaterInfo", Vehicle.updateWaterInfo)
  SpecializationUtil.registerFunction(vehicleType, "onWaterRaycastCallback", Vehicle.onWaterRaycastCallback)
  SpecializationUtil.registerFunction(vehicleType, "setBroken", Vehicle.setBroken)
  SpecializationUtil.registerFunction(vehicleType, "getVehicleDamage", Vehicle.getVehicleDamage)
  SpecializationUtil.registerFunction(vehicleType, "getRepairPrice", Vehicle.getRepairPrice)
  SpecializationUtil.registerFunction(vehicleType, "getRepaintPrice", Vehicle.getRepaintPrice)
  SpecializationUtil.registerFunction(vehicleType, "setMassDirty", Vehicle.setMassDirty)
  SpecializationUtil.registerFunction(vehicleType, "updateMass", Vehicle.updateMass)
  SpecializationUtil.registerFunction(vehicleType, "getMaxComponentMassReached", Vehicle.getMaxComponentMassReached)
  SpecializationUtil.registerFunction(vehicleType, "getAdditionalComponentMass", Vehicle.getAdditionalComponentMass)
  SpecializationUtil.registerFunction(vehicleType, "getTotalMass", Vehicle.getTotalMass)
  SpecializationUtil.registerFunction(vehicleType, "getComponentMass", Vehicle.getComponentMass)
  SpecializationUtil.registerFunction(vehicleType, "getDefaultMass", Vehicle.getDefaultMass)
  SpecializationUtil.registerFunction(vehicleType, "getOverallCenterOfMass", Vehicle.getOverallCenterOfMass)
  SpecializationUtil.registerFunction(vehicleType, "getVehicleWorldXRot", Vehicle.getVehicleWorldXRot)
  SpecializationUtil.registerFunction(vehicleType, "getVehicleWorldDirection", Vehicle.getVehicleWorldDirection)
  SpecializationUtil.registerFunction(vehicleType, "getFillLevelInformation", Vehicle.getFillLevelInformation)
  SpecializationUtil.registerFunction(vehicleType, "activate", Vehicle.activate)
  SpecializationUtil.registerFunction(vehicleType, "deactivate", Vehicle.deactivate)
  SpecializationUtil.registerFunction(vehicleType, "setComponentJointFrame", Vehicle.setComponentJointFrame)
  SpecializationUtil.registerFunction(vehicleType, "setComponentJointRotLimit", Vehicle.setComponentJointRotLimit)
  SpecializationUtil.registerFunction(vehicleType, "setComponentJointTransLimit", Vehicle.setComponentJointTransLimit)
  SpecializationUtil.registerFunction(vehicleType, "loadComponentFromXML", Vehicle.loadComponentFromXML)
  SpecializationUtil.registerFunction(vehicleType, "loadComponentJointFromXML", Vehicle.loadComponentJointFromXML)
  SpecializationUtil.registerFunction(vehicleType, "createComponentJoint", Vehicle.createComponentJoint)
  SpecializationUtil.registerFunction(vehicleType, "loadSchemaOverlay", Vehicle.loadSchemaOverlay)
  SpecializationUtil.registerFunction(vehicleType, "getAdditionalSchemaText", Vehicle.getAdditionalSchemaText)
  SpecializationUtil.registerFunction(vehicleType, "getUseTurnedOnSchema", Vehicle.getUseTurnedOnSchema)
  SpecializationUtil.registerFunction(vehicleType, "dayChanged", Vehicle.dayChanged)
  SpecializationUtil.registerFunction(vehicleType, "periodChanged", Vehicle.periodChanged)
  SpecializationUtil.registerFunction(vehicleType, "raiseStateChange", Vehicle.raiseStateChange)
  SpecializationUtil.registerFunction(vehicleType, "doCheckSpeedLimit", Vehicle.doCheckSpeedLimit)
  SpecializationUtil.registerFunction(vehicleType, "interact", Vehicle.interact)
  SpecializationUtil.registerFunction(vehicleType, "getInteractionHelp", Vehicle.getInteractionHelp)
  SpecializationUtil.registerFunction(vehicleType, "getDistanceToNode", Vehicle.getDistanceToNode)
  SpecializationUtil.registerFunction(vehicleType, "getIsAIActive", Vehicle.getIsAIActive)
  SpecializationUtil.registerFunction(vehicleType, "getIsPowered", Vehicle.getIsPowered)
  SpecializationUtil.registerFunction(vehicleType, "getRequiresPower", Vehicle.getRequiresPower)
  SpecializationUtil.registerFunction(vehicleType, "addVehicleToAIImplementList", Vehicle.addVehicleToAIImplementList)
  SpecializationUtil.registerFunction(vehicleType, "setOperatingTime", Vehicle.setOperatingTime)
  SpecializationUtil.registerFunction(vehicleType, "requestActionEventUpdate", Vehicle.requestActionEventUpdate)
  SpecializationUtil.registerFunction(vehicleType, "removeActionEvents", Vehicle.removeActionEvents)
  SpecializationUtil.registerFunction(vehicleType, "updateActionEvents", Vehicle.updateActionEvents)
  SpecializationUtil.registerFunction(vehicleType, "registerActionEvents", Vehicle.registerActionEvents)
  SpecializationUtil.registerFunction(vehicleType, "addActionEvent", Vehicle.addActionEvent)
  SpecializationUtil.registerFunction(vehicleType, "updateSelectableObjects", Vehicle.updateSelectableObjects)
  SpecializationUtil.registerFunction(vehicleType, "registerSelectableObjects", Vehicle.registerSelectableObjects)
  SpecializationUtil.registerFunction(vehicleType, "addSubselection", Vehicle.addSubselection)
  SpecializationUtil.registerFunction(vehicleType, "getRootVehicle", Vehicle.getRootVehicle)
  SpecializationUtil.registerFunction(vehicleType, "findRootVehicle", Vehicle.findRootVehicle)
  SpecializationUtil.registerFunction(vehicleType, "getChildVehicles", Vehicle.getChildVehicles)
  SpecializationUtil.registerFunction(vehicleType, "addChildVehicles", Vehicle.addChildVehicles)
  SpecializationUtil.registerFunction(vehicleType, "updateVehicleChain", Vehicle.updateVehicleChain)
  SpecializationUtil.registerFunction(vehicleType, "getCanBeSelected", Vehicle.getCanBeSelected)
  SpecializationUtil.registerFunction(vehicleType, "getBlockSelection", Vehicle.getBlockSelection)
  SpecializationUtil.registerFunction(vehicleType, "getCanToggleSelectable", Vehicle.getCanToggleSelectable)
  SpecializationUtil.registerFunction(vehicleType, "unselectVehicle", Vehicle.unselectVehicle)
  SpecializationUtil.registerFunction(vehicleType, "selectVehicle", Vehicle.selectVehicle)
  SpecializationUtil.registerFunction(vehicleType, "getIsSelected", Vehicle.getIsSelected)
  SpecializationUtil.registerFunction(vehicleType, "getSelectedObject", Vehicle.getSelectedObject)
  SpecializationUtil.registerFunction(vehicleType, "getSelectedVehicle", Vehicle.getSelectedVehicle)
  SpecializationUtil.registerFunction(vehicleType, "setSelectedVehicle", Vehicle.setSelectedVehicle)
  SpecializationUtil.registerFunction(vehicleType, "setSelectedObject", Vehicle.setSelectedObject)
  SpecializationUtil.registerFunction(vehicleType, "getIsReadyForAutomatedTrainTravel", Vehicle.getIsReadyForAutomatedTrainTravel)
  SpecializationUtil.registerFunction(vehicleType, "getIsAutomaticShiftingAllowed", Vehicle.getIsAutomaticShiftingAllowed)
  SpecializationUtil.registerFunction(vehicleType, "getSpeedLimit", Vehicle.getSpeedLimit)
  SpecializationUtil.registerFunction(vehicleType, "getRawSpeedLimit", Vehicle.getRawSpeedLimit)
  SpecializationUtil.registerFunction(vehicleType, "getActiveFarm", Vehicle.getActiveFarm)
  SpecializationUtil.registerFunction(vehicleType, "onVehicleWakeUpCallback", Vehicle.onVehicleWakeUpCallback)
  SpecializationUtil.registerFunction(vehicleType, "getCanByMounted", Vehicle.getCanByMounted)
  SpecializationUtil.registerFunction(vehicleType, "getName", Vehicle.getName)
  SpecializationUtil.registerFunction(vehicleType, "getFullName", Vehicle.getFullName)
  SpecializationUtil.registerFunction(vehicleType, "getBrand", Vehicle.getBrand)
  SpecializationUtil.registerFunction(vehicleType, "getImageFilename", Vehicle.getImageFilename)
  SpecializationUtil.registerFunction(vehicleType, "getCanBePickedUp", Vehicle.getCanBePickedUp)
  SpecializationUtil.registerFunction(vehicleType, "getCanBeReset", Vehicle.getCanBeReset)
  SpecializationUtil.registerFunction(vehicleType, "getReloadXML", Vehicle.getReloadXML)
  SpecializationUtil.registerFunction(vehicleType, "getIsInUse", Vehicle.getIsInUse)
  SpecializationUtil.registerFunction(vehicleType, "getPropertyState", Vehicle.getPropertyState)
  SpecializationUtil.registerFunction(vehicleType, "getAreControlledActionsAllowed", Vehicle.getAreControlledActionsAllowed)
  SpecializationUtil.registerFunction(vehicleType, "getAreControlledActionsAvailable", Vehicle.getAreControlledActionsAvailable)
  SpecializationUtil.registerFunction(vehicleType, "getAreControlledActionsAccessible", Vehicle.getAreControlledActionsAccessible)
  SpecializationUtil.registerFunction(vehicleType, "getControlledActionIcons", Vehicle.getControlledActionIcons)
  SpecializationUtil.registerFunction(vehicleType, "playControlledActions", Vehicle.playControlledActions)
  SpecializationUtil.registerFunction(vehicleType, "getActionControllerDirection", Vehicle.getActionControllerDirection)
  SpecializationUtil.registerFunction(vehicleType, "createMapHotspot", Vehicle.createMapHotspot)
  SpecializationUtil.registerFunction(vehicleType, "getMapHotspot", Vehicle.getMapHotspot)
  SpecializationUtil.registerFunction(vehicleType, "updateMapHotspot", Vehicle.updateMapHotspot)
  SpecializationUtil.registerFunction(vehicleType, "getIsMapHotspotVisible", Vehicle.getIsMapHotspotVisible)
  SpecializationUtil.registerFunction(vehicleType, "getMapHotspotRotation", Vehicle.getMapHotspotRotation)
  SpecializationUtil.registerFunction(vehicleType, "getShowInVehiclesOverview", Vehicle.getShowInVehiclesOverview)
  SpecializationUtil.registerFunction(vehicleType, "showInfo", Vehicle.showInfo)
  SpecializationUtil.registerFunction(vehicleType, "loadObjectChangeValuesFromXML", Vehicle.loadObjectChangeValuesFromXML)
  SpecializationUtil.registerFunction(vehicleType, "setObjectChangeValues", Vehicle.setObjectChangeValues)
  SpecializationUtil.registerFunction(vehicleType, "getIsSynchronized", Vehicle.getIsSynchronized)
end
function Vehicle.init()
  local v3 = v3:getText("configuration_baseColor")
  v0:addConfigurationType("baseColor", v3, nil, nil, ConfigurationUtil.getConfigColorSingleItemLoad, ConfigurationUtil.getConfigColorPostLoad, ConfigurationUtil.SELECTOR_COLOR)
  v3 = v3:getText("configuration_design")
  v0:addConfigurationType("design", v3, nil, nil, ConfigurationUtil.getConfigColorSingleItemLoad, ConfigurationUtil.getConfigColorPostLoad, ConfigurationUtil.SELECTOR_MULTIOPTION)
  v3 = v3:getText("configuration_designColor")
  v0:addConfigurationType("designColor", v3, nil, nil, ConfigurationUtil.getConfigColorSingleItemLoad, ConfigurationUtil.getConfigColorPostLoad, ConfigurationUtil.SELECTOR_COLOR)
  v3 = v3:getText("configuration_design")
  v0:addConfigurationType("vehicleType", v3, nil, nil, ConfigurationUtil.getStoreAdditionalConfigData, nil, ConfigurationUtil.SELECTOR_MULTIOPTION)
  -- TODO: structure LOP_FORNPREP (pc 82, target 108)
  local v5 = string.format("design%d", 2)
  local v6 = v6:getText("configuration_design")
  v3:addConfigurationType(v5, v6, nil, nil, ConfigurationUtil.getConfigColorSingleItemLoad, ConfigurationUtil.getConfigColorPostLoad, ConfigurationUtil.SELECTOR_MULTIOPTION)
  -- TODO: structure LOP_FORNLOOP (pc 107, target 83)
  v0:addSpecType("age", "shopListAttributeIconLifeTime", nil, Vehicle.getSpecValueAge, "vehicle")
  v0:addSpecType("operatingTime", "shopListAttributeIconOperatingHours", nil, Vehicle.getSpecValueOperatingTime, "vehicle")
  v0:addSpecType("dailyUpkeep", "shopListAttributeIconMaintenanceCosts", nil, Vehicle.getSpecValueDailyUpkeep, "vehicle")
  v0:addSpecType("workingWidth", "shopListAttributeIconWorkingWidth", Vehicle.loadSpecValueWorkingWidth, Vehicle.getSpecValueWorkingWidth, "vehicle")
  v0:addSpecType("workingWidthConfig", "shopListAttributeIconWorkingWidth", Vehicle.loadSpecValueWorkingWidthConfig, Vehicle.getSpecValueWorkingWidthConfig, "vehicle")
  v0:addSpecType("speedLimit", "shopListAttributeIconWorkSpeed", Vehicle.loadSpecValueSpeedLimit, Vehicle.getSpecValueSpeedLimit, "vehicle")
  v0:addSpecType("weight", "shopListAttributeIconWeight", Vehicle.loadSpecValueWeight, Vehicle.getSpecValueWeight, "vehicle", nil, Vehicle.getSpecConfigValuesWeight)
  v0:addSpecType("additionalWeight", "shopListAttributeIconAdditionalWeight", Vehicle.loadSpecValueAdditionalWeight, Vehicle.getSpecValueAdditionalWeight, "vehicle")
  v0:addSpecType("combinations", nil, Vehicle.loadSpecValueCombinations, Vehicle.getSpecValueCombinations, "vehicle")
  v0:addSpecType("slots", "shopListAttributeIconSlots", nil, Vehicle.getSpecValueSlots, "vehicle")
  local v1 = XMLSchema.new("vehicle")
  Vehicle.xmlSchema = v1
  v1 = XMLSchema.new("vehicle_sounds")
  Vehicle.xmlSchemaSounds = v1
  v0:setRootNodeName("sounds")
  v0:addSubSchema(Vehicle.xmlSchemaSounds, "sounds")
  v1 = XMLSchema.new("savegame_vehicles")
  Vehicle.xmlSchemaSavegame = v1
  Vehicle.registers()
end
function Vehicle.postInit()
  local v2 = v2:getConfigurations()
  for v4, v5 in pairs(...) do
    local v6 = v6:getConfigurationAttribute(v4, "xmlKey")
    if v6 ~= nil then
    else
    end
    local v7 = string.format("vehicle%s.%sConfigurations", v6, v4)
    local v8 = string.format("%s.%sConfiguration(?)", v7, v4)
    v0:setXMLSharedRegistration("configSize", v8)
    v0:register(XMLValueType.FLOAT, v8 .. ".size#width", "occupied width of the vehicle when loaded in this configuration")
    v0:register(XMLValueType.FLOAT, v8 .. ".size#length", "occupied length of the vehicle when loaded in this configuration")
    v0:register(XMLValueType.FLOAT, v8 .. ".size#height", "occupied height of the vehicle when loaded in this configuration")
    v0:register(XMLValueType.FLOAT, v8 .. ".size#widthOffset", "width offset")
    v0:register(XMLValueType.FLOAT, v8 .. ".size#lengthOffset", "length offset")
    v0:register(XMLValueType.FLOAT, v8 .. ".size#heightOffset", "height offset")
    v0:setXMLSharedRegistration()
    v0:register(XMLValueType.L10N_STRING, v7 .. "#title", "Configration title to display in shop")
    v0:register(XMLValueType.L10N_STRING, v8 .. "#name", "Configuration name")
    v0:register(XMLValueType.STRING, v8 .. "#params", "Extra paramters to insert in #name text")
    v0:register(XMLValueType.L10N_STRING, v8 .. "#desc", "Configuration description")
    v0:register(XMLValueType.FLOAT, v8 .. "#price", "Price of configuration", 0)
    v0:register(XMLValueType.FLOAT, v8 .. "#dailyUpkeep", "Daily up keep with this configration", 0)
    v0:register(XMLValueType.BOOL, v8 .. "#isDefault", "Is selected by default in shop config screen", false)
    v0:register(XMLValueType.BOOL, v8 .. "#isSelectable", "Configuration can be selected in the shop", true)
    v0:register(XMLValueType.STRING, v8 .. "#saveId", "Custom save id", "Number of configuration")
    v0:register(XMLValueType.STRING, v8 .. "#displayBrand", "If defined a brand icon is displayed in the shop config screen")
    v0:register(XMLValueType.STRING, v8 .. "#vehicleBrand", "Custom brand to display after bought with this configuration")
    v0:register(XMLValueType.STRING, v8 .. "#vehicleName", "Custom vehicle name to display after bought with this configuration")
    v0:register(XMLValueType.STRING, v8 .. "#vehicleIcon", "Custom icon to display after bought with this configuration")
    v0:register(XMLValueType.FLOAT, v8 .. "#workingWidth", "Work width to display in shop while config is active")
    ConfigurationUtil.registerMaterialConfigurationXMLPaths(v0, v8)
  end
end
function Vehicle.registers()
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle#type", "Vehicle type")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.annotation", "Annotation", nil, true)
  StoreManager.registerStoreDataXMLPaths(Vehicle.xmlSchema, "vehicle")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.storeData.specs.workingWidth", "Working width to display in shop")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.storeData.specs.combination(?)#xmlFilename", "Combination to display in shop")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.storeData.specs.combination(?)#filterCategory", "Filter in this category")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.storeData.specs.combination(?)#filterSpec", "Filter for this spec type")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.storeData.specs.combination(?)#filterSpecMin", "Filter spec type in this range (min.)")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.storeData.specs.combination(?)#filterSpecMax", "Filter spec type in this range (max.)")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.storeData.specs.weight#ignore", "Hide vehicle weight in shop", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.storeData.specs.weight#minValue", "Min. weight to display in shop")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.storeData.specs.weight#maxValue", "Max. weight to display in shop")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.storeData.specs.weight.config(?)#name", "Name of configuration")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.storeData.specs.weight.config(?)#index", "Index of selected configuration")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.storeData.specs.weight.config(?)#value", "Weight value which can be reached with this configuration")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.base.filename", "Path to i3d filename", nil)
  Vehicle.xmlSchema:register(XMLValueType.L10N_STRING, "vehicle.base.typeDesc", "Type description", nil)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.base.synchronizePosition", "Vehicle position synchronized", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.base.supportsPickUp", "Vehicle can be picked up by hand", "true if vehicle is a pallet, false otherwise")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.base.canBeReset", "Vehicle can be reset to shop", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.base.showInVehicleMenu", "Vehicle shows in vehicle menu", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.base.supportsRadio", "Vehicle supported radio", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.base.input#allowed", "Vehicle allows key input", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.base.selection#allowed", "Vehicle selection is allowed", true)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.base.tailwaterDepth#warning", "Tailwater depth warning is shown from this water depth", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.base.tailwaterDepth#threshold", "Vehicle is broken after this water depth", 2.5)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.base.mapHotspot#type", "Map hotspot type")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.base.mapHotspot#available", "Map hotspot is available", true)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.base.speedLimit#value", "Speed limit")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.base.size#width", "Occupied width of the vehicle when loaded", nil, true)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.base.size#length", "Occupied length of the vehicle when loaded", nil, true)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.base.size#height", "Occupied height of the vehicle when loaded")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.base.size#widthOffset", "Width offset")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.base.size#lengthOffset", "Width offset")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.base.size#heightOffset", "Height offset")
  Vehicle.xmlSchema:register(XMLValueType.ANGLE, "vehicle.base.size#yRotation", "Y Rotation offset in i3d (Needs to be set to the vehicle's rotation in the i3d file and is e.g. used to check ai working direction)", 0)
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.base.steeringAxle#node", "Steering axle node used to calculate the steering angle of attachments")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.base.sounds#filename", "Path to external sound files")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.base.sounds#volumeFactor", "This factor will be applied to all sounds of this vehicle")
  I3DUtil.registerI3dMappingXMLPaths(Vehicle.xmlSchema, "vehicle")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.base.components#numComponents", "Number of components loaded from i3d", "number of components the i3d contains")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.base.components#maxMass", "Max. overall mass the vehicle can have", "unlimited")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.base.components.component(?)#mass", "Mass of component", "Mass of component in i3d")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_TRANS, "vehicle.base.components.component(?)#centerOfMass", "Center of mass", "Center of mass in i3d")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.base.components.component(?)#solverIterationCount", "Solver iterations count")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.base.components.component(?)#motorized", "Is motorized component", "set by motorized specialization")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.base.components.component(?)#collideWithAttachables", "Collides with attachables", false)
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.base.components.joint(?)#component1", "First component of the joint")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.base.components.joint(?)#component2", "Second component of the joint")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.base.components.joint(?)#node", "Joint node")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.base.components.joint(?)#nodeActor1", "Actor node of second component", "Joint node")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_3, "vehicle.base.components.joint(?)#rotLimit", "Rotation limit", "0 0 0")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_3, "vehicle.base.components.joint(?)#transLimit", "Translation limit", "0 0 0")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_3, "vehicle.base.components.joint(?)#rotMinLimit", "Min rotation limit", "inversed rotation limit")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_3, "vehicle.base.components.joint(?)#transMinLimit", "Min translation limit", "inversed translation limit")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_3, "vehicle.base.components.joint(?)#rotLimitSpring", "Rotation spring limit", "0 0 0")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_3, "vehicle.base.components.joint(?)#rotLimitDamping", "Rotation damping limit", "1 1 1")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_3, "vehicle.base.components.joint(?)#rotLimitForceLimit", "Rotation limit force limit (-1 = infinite)", "-1 -1 -1")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_3, "vehicle.base.components.joint(?)#transLimitForceLimit", "Translation limit force limit (-1 = infinite)", "-1 -1 -1")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_3, "vehicle.base.components.joint(?)#transLimitSpring", "Translation spring limit", "0 0 0")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_3, "vehicle.base.components.joint(?)#transLimitDamping", "Translation damping limit", "1 1 1")
  Vehicle.xmlSchema:register(XMLValueType.NODE_INDEX, "vehicle.base.components.joint(?)#zRotationNode", "Position of joints z rotation")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.base.components.joint(?)#breakable", "Joint is breakable", false)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.base.components.joint(?)#breakForce", "Joint force until it breaks", 10)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.base.components.joint(?)#breakTorque", "Joint torque until it breaks", 10)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.base.components.joint(?)#enableCollision", "Enable collision between both components", false)
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_3, "vehicle.base.components.joint(?)#maxRotDriveForce", "Max rotational drive force", "0 0 0")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_3, "vehicle.base.components.joint(?)#rotDriveVelocity", "Rotational drive velocity")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_3, "vehicle.base.components.joint(?)#rotDriveRotation", "Rotational drive rotation")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_3, "vehicle.base.components.joint(?)#rotDriveSpring", "Rotational drive spring", "0 0 0")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_3, "vehicle.base.components.joint(?)#rotDriveDamping", "Rotational drive damping", "0 0 0")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_3, "vehicle.base.components.joint(?)#transDriveVelocity", "Translational drive velocity")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_3, "vehicle.base.components.joint(?)#transDrivePosition", "Translational drive position")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_3, "vehicle.base.components.joint(?)#transDriveSpring", "Translational drive spring", "0 0 0")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_3, "vehicle.base.components.joint(?)#transDriveDamping", "Translational drive damping", "1 1 1")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_3, "vehicle.base.components.joint(?)#maxTransDriveForce", "Max translational drive force", "0 0 0")
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.base.components.joint(?)#initComponentPosition", "Defines if the component is translated and rotated during loading based on joint movement", true)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.base.components.collisionPair(?)#enabled", "Collision between components enabled")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.base.components.collisionPair(?)#component1", "Index of first component")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.base.components.collisionPair(?)#component2", "Index of second component")
  ObjectChangeUtil.registerObjectChangesXMLPaths(Vehicle.xmlSchema, "vehicle.base")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_2, "vehicle.base.schemaOverlay#attacherJointPosition", "Position of attacher joint")
  Vehicle.xmlSchema:register(XMLValueType.VECTOR_2, "vehicle.base.schemaOverlay#basePosition", "Position of vehicle")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.base.schemaOverlay#name", "Name of schema overlay")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.base.schemaOverlay#invisibleBorderRight", "Size of invisible border on the right")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.base.schemaOverlay#invisibleBorderLeft", "Size of invisible border on the left")
  ConfigurationUtil.registerColorConfigurationXMLPaths(Vehicle.xmlSchema, "baseColor")
  ConfigurationUtil.registerColorConfigurationXMLPaths(Vehicle.xmlSchema, "designColor")
  ConfigurationUtil.registerColorConfigurationXMLPaths(Vehicle.xmlSchema, "design")
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.designConfigurations.designConfiguration(?)")
  ObjectChangeUtil.registerObjectChangeXMLPaths(Vehicle.xmlSchema, "vehicle.vehicleTypeConfigurations.vehicleTypeConfiguration(?)")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.vehicleTypeConfigurations.vehicleTypeConfiguration(?)#vehicleType", "Vehicle type for configuration")
  -- TODO: structure LOP_FORNPREP (pc 687, target 708)
  local v7 = string.format("design%d", 2)
  ConfigurationUtil.registerColorConfigurationXMLPaths(...)
  v7 = string.format("vehicle.design%dConfigurations.design%dConfiguration(?)", 2, 2)
  ObjectChangeUtil.registerObjectChangeXMLPaths(...)
  -- TODO: structure LOP_FORNLOOP (pc 707, target 688)
  Vehicle.xmlSchema:register(XMLValueType.BOOL, "vehicle.designConfigurations#preLoad", "Defines if the design configurations are applied before the execution of load or after. Can help if the configurations manipulate the wheel positions for example.", false)
  StoreItemUtil.registerConfigurationSetXMLPaths(Vehicle.xmlSchema, "vehicle")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.BOOL, "vehicles#loadAnyFarmInSingleplayer", "Load any farm in singleplayer", false)
  Vehicle.xmlSchemaSavegame:register(XMLValueType.STRING, "vehicles.vehicle(?)#filename", "XML filename")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.STRING, "vehicles.vehicle(?)#modName", "Vehicle mod name")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.BOOL, "vehicles.vehicle(?)#defaultFarmProperty", "Property of default farm", false)
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?)#id", "Vehicle id")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.STRING, "vehicles.vehicle(?)#tourId", "Tour id")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?)#farmId", "Farm id")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.FLOAT, "vehicles.vehicle(?)#age", "Age in number of months")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.FLOAT, "vehicles.vehicle(?)#price", "Price")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?)#propertyState", "Property state")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?)#activeMissionId", "Active mission id")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.FLOAT, "vehicles.vehicle(?)#operatingTime", "Operating time")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.BOOL, "vehicles.vehicle(?)#isAbsolute", "Position is Absolute")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.FLOAT, "vehicles.vehicle(?)#yOffset", "Y Offset")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.FLOAT, "vehicles.vehicle(?)#xPosition", "X Position")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.FLOAT, "vehicles.vehicle(?)#zPosition", "Z Position")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.FLOAT, "vehicles.vehicle(?)#yRotation", "Y Rotation")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?)#selectedObjectIndex", "Selected object index")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?)#subSelectedObjectIndex", "Sub selected object index")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.vehicle(?).component(?)#index", "Component index")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.VECTOR_TRANS, "vehicles.vehicle(?).component(?)#position", "Component position")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.VECTOR_ROT, "vehicles.vehicle(?).component(?)#rotation", "Component rotation")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.STRING, "vehicles.vehicle(?).boughtConfiguration(?)#name", "Configuration name")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.STRING, "vehicles.vehicle(?).boughtConfiguration(?)#id", "Configuration save id")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.STRING, "vehicles.vehicle(?).configuration(?)#name", "Configuration name")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.STRING, "vehicles.vehicle(?).configuration(?)#id", "Configuration save id")
  VehicleActionController.registerXMLPaths(Vehicle.xmlSchemaSavegame, "vehicles.vehicle(?).actionController")
  Vehicle.xmlSchemaSavegame:register(XMLValueType.INT, "vehicles.attachments(?)#rootVehicleId", "Id of root vehicle")
end
function Vehicle.new(isServer, isClient, customMt)
  if not customMt then
  end
  local v3 = v3(v4, v5, v6)
  v3.finishedLoading = false
  v3.isAddedToMission = false
  v3.isDeleted = false
  v3.updateLoopIndex = -1
  v3.sharedLoadRequestId = nil
  v3.loadingState = VehicleLoadingUtil.VEHICLE_LOAD_OK
  v3.loadingStep = Vehicle.LOAD_STEP_CREATED
  v3.syncVehicleLoadingFinished = false
  v3.subLoadingTasksFinished = true
  v3.numPendingSubLoadingTasks = 0
  v3.synchronizedConnections = {}
  local v4 = VehicleActionController.new(v3)
  v3.actionController = v4
  v3.tireTrackSystem = g_currentMission.tireTrackSystem
  return v3
end
function Vehicle:load(vehicleData, asyncCallbackFunction, asyncCallbackObject, asyncCallbackArguments)
  if asyncCallbackFunction == nil then
    Logging.xmlWarning(self.xmlFile, "Missing async callback function for '%s'", vehicleData.filename)
    self:setLoadingState(VehicleLoadingUtil.VEHICLE_LOAD_ERROR)
    printCallstack()
    return self.loadingState
  end
  local v5, v6 = Utils.getModNameAndBaseDirectory(vehicleData.filename)
  self:setLoadingStep(Vehicle.LOAD_STEP_PRE_LOAD)
  self.configFileName = vehicleData.filename
  local v7 = Utils.getFilenameInfo(vehicleData.filename, true)
  self.configFileNameClean = v7
  self.baseDirectory = v6
  self.customEnvironment = v5
  self.typeName = vehicleData.typeName
  v7 = Utils.getNoNil(vehicleData.isVehicleSaved, true)
  self.isVehicleSaved = v7
  v7 = Utils.getNoNil(vehicleData.configurations, {})
  self.configurations = v7
  v7 = Utils.getNoNil(vehicleData.boughtConfigurations, {})
  self.boughtConfigurations = v7
  v7 = v7:getTypeByName(self.typeName)
  if v7 == nil then
    Logging.xmlWarning(self.xmlFile, "Unable to find vehicleType '%s'", self.typeName)
    self:setLoadingState(VehicleLoadingUtil.VEHICLE_LOAD_ERROR)
    return self.loadingState
  end
  self["type"] = v7
  self.specializations = v7.specializations
  self.specializationNames = v7.specializationNames
  self.specializationsByName = v7.specializationsByName
  local v8 = table.copy(v7.eventListeners, 2)
  self.eventListeners = v8
  self.actionEvents = {}
  v8 = XMLFile.load("vehicleXml", vehicleData.filename, Vehicle.xmlSchema)
  self.xmlFile = v8
  self.savegame = vehicleData.savegame
  self.isAddedToPhysics = false
  self.additionalLoadParameters = vehicleData.additionalLoadParameters
  v8 = v8:getItemByXMLFilename(self.configFileName)
  if v8 ~= nil then
    local v9 = v9:getBrandByIndex(v8.brandIndex)
    self.brand = v9
    self.lifetime = v8.lifetime
  end
  v9 = v9:getValue("vehicle.base.sounds#filename")
  self.externalSoundsFilename = v9
  if self.externalSoundsFilename ~= nil then
    v9 = Utils.getFilename(self.externalSoundsFilename, self.baseDirectory)
    self.externalSoundsFilename = v9
    v9 = XMLFile.load("TempExternalSounds", self.externalSoundsFilename, Vehicle.xmlSchemaSounds)
    self.externalSoundsFile = v9
  end
  v9 = v9:getValue("vehicle.base.sounds#volumeFactor")
  self.soundVolumeFactor = v9
  for v12, v13 in pairs(v7.functions) do
    self[v12] = v13
  end
  v10 = v10:getItemByXMLFilename(self.configFileName)
  if v10 ~= nil and v10.configurations ~= nil then
    if v10.configurationSets ~= nil and 0 < #v10.configurationSets then
      v11 = StoreItemUtil.getConfigurationsMatchConfigSets(self.configurations, v10.configurationSets)
      if not v11 then
        v11, v12 = StoreItemUtil.getClosestConfigurationSet(self.configurations, v10.configurationSets)
        if v11 ~= nil then
          for v16, v17 in pairs(v11.configurations) do
            self.configurations[v16] = v17
          end
          Logging.xmlInfo(self.xmlFile, "Savegame configurations to not match the configuration sets! Apply closest configuration set '%s' with %d matching configurations.", v11.name, v12)
        end
      end
    end
    for v14, v15 in pairs(v10.configurations) do
      v16 = StoreItemUtil.getDefaultConfigId(v10, v14)
      if self.configurations[v14] == nil then
        ConfigurationUtil.setConfiguration(self, v14, v16)
      end
      ConfigurationUtil.addBoughtConfiguration(self, v14, v16)
    end
    for v14, v15 in pairs(self.configurations) do
      if v10.configurations[v14] == nil then
        Logging.xmlWarning(self.xmlFile, "Configurations are not present anymore. Ignoring this configuration (%s)!", v14)
        self.configurations[v14] = nil
        self.boughtConfigurations[v14] = nil
      else
        v16 = StoreItemUtil.getDefaultConfigId(v10, v14)
        if #v10.configurations[v14] < v15 then
          Logging.xmlWarning(self.xmlFile, "Configuration with index '%d' is not present anymore. Using default configuration instead!", v15)
          if self.boughtConfigurations[v14] ~= nil then
            self.boughtConfigurations[v14][v15] = nil
            v17 = next(self.boughtConfigurations[v14])
            if v17 == nil then
              self.boughtConfigurations[v14] = nil
            end
          end
          ConfigurationUtil.setConfiguration(self, v14, v16)
        else
          ConfigurationUtil.addBoughtConfiguration(self, v14, v15)
        end
      end
    end
  end
  -- TODO: structure LOP_FORNPREP (pc 472, target 511)
  if self["spec_" .. self.specializationNames[1]] ~= nil then
    Logging.xmlError(self.xmlFile, "The vehicle specialization '%s' could not be added because variable '%s' already exists!", self.specializationNames[1], "spec_" .. self.specializationNames[1])
    self:setLoadingState(VehicleLoadingUtil.VEHICLE_LOAD_ERROR)
  end
  setmetatable({}, {__index = self})
  self[v14] = {actionEvents = {}}
  -- TODO: structure LOP_FORNLOOP (pc 510, target 473)
  SpecializationUtil.raiseEvent(self, "onPreLoad", vehicleData.savegame)
  if self.loadingState ~= VehicleLoadingUtil.VEHICLE_LOAD_OK then
    Logging.xmlError(self.xmlFile, "Vehicle pre-loading failed!")
    v11:delete()
    asyncCallbackFunction(asyncCallbackObject, nil, self.loadingState, asyncCallbackArguments)
    return
  end
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.filename", "vehicle.base.filename")
  v12 = v12:getValue("vehicle.base.filename")
  v11 = Utils.getFilename(v12, v6)
  self.i3dFilename = v11
  self:setLoadingStep(Vehicle.LOAD_STEP_AWAIT_I3D)
  v11 = v11:loadSharedI3DFileAsync(self.i3dFilename, true, false, self.loadFinished, self, v9)
  self.sharedLoadRequestId = v11
end
function Vehicle:loadFinished(i3dNode, failedReason, arguments, i3dLoadingId)
  self:setLoadingState(VehicleLoadingUtil.VEHICLE_LOAD_OK)
  self:setLoadingStep(Vehicle.LOAD_STEP_LOAD)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.forcedMapHotspotType", "vehicle.base.mapHotspot#type")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.base.forcedMapHotspotType", "vehicle.base.mapHotspot#type")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.speedLimit#value", "vehicle.base.speedLimit#value")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.steeringAxleNode#index", "vehicle.base.steeringAxle#node")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.size#width", "vehicle.base.size#width")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.size#length", "vehicle.base.size#length")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.size#widthOffset", "vehicle.base.size#widthOffset")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.size#lengthOffset", "vehicle.base.size#lengthOffset")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.typeDesc", "vehicle.base.typeDesc")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.components", "vehicle.base.components")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.components.component", "vehicle.base.components.component")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.base.components.component1", "vehicle.base.components.component")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.base.mapHotspot#hasDirection")
  if i3dNode == 0 then
    self:setLoadingState(VehicleLoadingUtil.VEHICLE_LOAD_ERROR)
    Logging.xmlError(self.xmlFile, "Vehicle i3d loading failed!")
    arguments.asyncCallbackFunction(arguments.asyncCallbackObject, self, self.loadingState, arguments.asyncCallbackArguments)
    return
  end
  if v10 ~= nil then
    while true do
      v16 = string.format(v10.key .. ".boughtConfiguration(%d)", v15)
      v17 = v17:hasProperty(v16)
      if not v17 then
        break
      end
      v17 = v17:getValue(v16 .. "#name")
      v18 = v18:getValue(v16 .. "#id")
      v22 = ConfigurationUtil.getConfigIdBySaveId(self.configFileName, v17, v18)
      ConfigurationUtil.addBoughtConfiguration(...)
    end
    self.tourId = nil
    v16 = v16:getValue(v10.key .. "#tourId")
    if v16 ~= nil then
      self.tourId = v16
      if g_currentMission ~= nil then
        v17:addVehicle(self, self.tourId)
      end
    end
  end
  self.age = 0
  self.propertyState = v7
  self:setOwnerFarmId(v8, true)
  if v10 ~= nil then
    local v15 = v15:getValue(v10.key .. "#farmId", AccessHandler.EVERYONE)
    if g_farmManager.spFarmWasMerged and v15 ~= AccessHandler.EVERYONE then
    end
    self:setOwnerFarmId(v15, true)
  end
  self.price = v9
  if self.price ~= 0 then
    -- cmp-jump LOP_JUMPXEQKNIL R15 aux=0x80000000 -> L281
  end
  v15 = v15:getItemByXMLFilename(self.configFileName)
  v16 = StoreItemUtil.getDefaultPrice(v15, self.configurations)
  self.price = v16
  v15 = v15:getValue("vehicle.base.typeDesc", "TypeDescription", self.customEnvironment, true)
  self.typeDesc = v15
  v15 = v15:getValue("vehicle.base.synchronizePosition", true)
  self.synchronizePosition = v15
  self.highPrecisionPositionSynchronization = false
  v15 = v15:getValue("vehicle.base.supportsPickUp", self.isPallet)
  self.supportsPickUp = v15
  v15 = v15:getValue("vehicle.base.canBeReset", true)
  self.canBeReset = v15
  v15 = v15:getValue("vehicle.base.showInVehicleMenu", true)
  self.showInVehicleOverview = v15
  v15 = getChildAt(i3dNode, 0)
  self.rootNode = v15
  self.serverMass = 0
  self.precalculatedMass = 0
  self.isMassDirty = false
  self.currentUpdateDistance = 0
  self.lastDistanceToCamera = 0
  v15 = getLODDistanceCoeff()
  self.lodDistanceCoeff = v15
  self.components = {}
  self.vehicleNodes = {}
  v15 = getNumOfChildren(i3dNode)
  v18 = v18:getValue("vehicle.base.components#numComponents", v15)
  local v20 = v20:getValue("vehicle.base.components#maxMass", math.huge)
  self.maxComponentMass = v20 / 1000
  while true do
    v19 = string.format("vehicle.base.components.component(%d)", v17 - 1)
    v20 = v20:hasProperty(v19)
    if not v20 then
      break
    end
    if v18 < v17 then
      Logging.xmlWarning(self.xmlFile, "Invalid components count. I3D file has '%d' components, but tried to load component no. '%d'!", v18, v17 + 1)
      break
    end
    v21 = getChildAt(i3dNode, 0)
    v21 = self:loadComponentFromXML({node = v21}, self.xmlFile, v19, v16, v17)
    if v21 then
      v21, v22, v23 = getWorldTranslation({node = v21}.node)
      v24, v25, v26, v27 = getWorldQuaternion({node = v21}.node)
      v29 = InterpolatorPosition.new(v21, v22, v23)
      {node = v21, networkInterpolators = {}}.networkInterpolators.position = v29
      v29 = InterpolatorQuaternion.new(v24, v25, v26, v27)
      {node = v21, networkInterpolators = {}}.networkInterpolators.quaternion = v29
      table.insert(self.components, {node = v21, networkInterpolators = {}})
    end
  end
  delete(i3dNode)
  self.numComponents = #self.components
  if v18 ~= self.numComponents then
    Logging.xmlWarning(self.xmlFile, "I3D file offers '%d' objects, but '%d' components have been loaded!", v18, self.numComponents)
  end
  if self.numComponents == 0 then
    Logging.xmlWarning(self.xmlFile, "No components defined for vehicle!")
    self:setLoadingState(VehicleLoadingUtil.VEHICLE_LOAD_ERROR)
    v11(v12, self, self.loadingState, v13)
    return
  end
  self.defaultMass = 0
  -- TODO: structure LOP_FORNPREP (pc 537, target 549)
  self.defaultMass = self.defaultMass + self.components[1].defaultMass
  -- TODO: structure LOP_FORNLOOP (pc 548, target 538)
  self.i3dMappings = {}
  I3DUtil.loadI3DMapping(self.xmlFile, "vehicle", self.components, self.i3dMappings, v15)
  v19 = v19:getValue("vehicle.base.steeringAxle#node", nil, self.components, self.i3dMappings)
  self.steeringAxleNode = v19
  if self.steeringAxleNode == nil then
    self.steeringAxleNode = self.components[1].node
  end
  self:loadSchemaOverlay(self.xmlFile)
  self.componentJoints = {}
  while true do
    v20 = string.format("vehicle.base.components.joint(%d)", v19)
    v21 = v21:getValue(v20 .. "#component1")
    v22 = v22:getValue(v20 .. "#component2")
    XMLUtil.checkDeprecatedXMLElements(self.xmlFile, v20 .. "#index", v20 .. "#node")
    if not (v21 ~= nil) then
      break
    end
    if not (v22 ~= nil) then
      break
    end
    v23 = v23:getValue(v20 .. "#node", nil, self.components, self.i3dMappings)
    if v23 ~= nil and v23 ~= 0 then
      v25 = self:loadComponentJointFromXML({}, self.xmlFile, v20, v19, v23, v21, v22)
      if v25 then
        table.insert(self.componentJoints, {})
      end
    end
  end
  self.collisionPairs = {}
  while true do
    v21 = string.format("vehicle.base.components.collisionPair(%d)", v20)
    v22 = v22:hasProperty(v21)
    if not v22 then
      break
    end
    v22 = v22:getValue(v21 .. "#enabled")
    v23 = v23:getValue(v21 .. "#component1")
    v24 = v24:getValue(v21 .. "#component2")
    if v23 ~= nil and v24 ~= nil and v22 ~= nil then
      if self.components[v23] ~= nil then
        -- cmp-jump LOP_JUMPXEQKNIL R26 aux=0x0 -> L753
        -- if v22 then goto L760 end
        table.insert(self.collisionPairs, {component1 = self.components[v23], component2 = self.components[v24], enabled = v22})
      else
        Logging.xmlWarning(self.xmlFile, "Failed to load collision pair '%s'. Unknown component indices. Indices start with 1.", v21)
      end
    end
  end
  v21 = v21:getValue("vehicle.base.supportsRadio", true)
  self.supportsRadio = v21
  v21 = v21:getValue("vehicle.base.input#allowed", true)
  self.allowsInput = v21
  v21 = StoreItemUtil.getSizeValuesFromXML(self.xmlFile, "vehicle", 0, self.configurations)
  self.size = v21
  v21 = v21:getValue("vehicle.base.size#yRotation", 0)
  self.yRotationOffset = v21
  self.showTailwaterDepthWarning = false
  v21 = v21:getValue("vehicle.base.tailwaterDepth#warning", 1)
  self.thresholdTailwaterDepthWarning = v21
  v21 = v21:getValue("vehicle.base.tailwaterDepth#threshold", 2.5)
  self.thresholdTailwaterDepth = v21
  v21 = InterpolationTime.new(1.2)
  self.networkTimeInterpolator = v21
  self.movingDirection = 0
  self.requiredDriveMode = 1
  self.rotatedTime = 0
  self.isBroken = false
  self.forceIsActive = false
  self.finishedFirstUpdate = false
  self.lastPosition = nil
  self.lastSpeed = 0
  self.lastSpeedReal = 0
  self.lastSignedSpeed = 0
  self.lastSignedSpeedReal = 0
  self.lastMovedDistance = 0
  self.lastSpeedAcceleration = 0
  self.lastMoveTime = -10000
  self.operatingTime = 0
  v21 = v21:getValue("vehicle.base.selection#allowed", true)
  self.allowSelection = v21
  self.isInWater = false
  self.isInShallowWater = false
  self.isInMediumWater = false
  self.waterY = -200
  self.tailwaterDepth = -200
  self.waterCheckPosition = {0, 0, 0}
  self.selectionObjects = {}
  self.currentSelection = {object = nil, index = 0, subIndex = 1}
  self.selectionObject = {index = 0, isSelected = false, vehicle = self, subSelections = {}}
  self.childVehicles = {self}
  self.childVehicleHash = ""
  self.rootVehicle = self
  self.registeredActionEvents = {}
  self.actionEventUpdateRequested = false
  v21 = self:getNextDirtyFlag()
  self.vehicleDirtyFlag = v21
  if g_currentMission ~= nil and g_currentMission.environment ~= nil then
    v21:subscribe(MessageType.DAY_CHANGED, self.dayChanged, self)
    v21:subscribe(MessageType.PERIOD_CHANGED, self.periodChanged, self)
  end
  v21 = v21:getValue("vehicle.base.mapHotspot#available", true)
  self.mapHotspotAvailable = v21
  if self.mapHotspotAvailable then
    v21 = v21:getValue("vehicle.base.mapHotspot#type", "OTHER")
    v22 = VehicleHotspot.getTypeByName(v21)
    if not v22 then
    end
    self.mapHotspotType = v22
  end
  -- TODO: structure LOP_FORNPREP (pc 1023, target 1047)
  if self.specializations[1].getDefaultSpeedLimit ~= nil then
    v25 = self.specializations[1].getDefaultSpeedLimit(self)
    v26 = math.min(v25, math.huge)
  end
  -- TODO: structure LOP_FORNLOOP (pc 1046, target 1024)
  if v21 ~= math.huge then
  end
  self.checkSpeedLimit = true
  v22 = v22:getValue("vehicle.base.speedLimit#value", v21)
  self.speedLimit = v22
  ObjectChangeUtil.loadObjectChangeFromXML(self.xmlFile, "vehicle.base.objectChanges", {}, self.components, self)
  ObjectChangeUtil.setObjectChanges({}, true)
  if self.configurations.vehicleType ~= nil then
    ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.vehicleTypeConfigurations.vehicleTypeConfiguration", self.configurations.vehicleType, self.components, self)
  end
  v23 = v23:getValue("vehicle.designConfigurations#preLoad", false)
  if v23 and self.configurations.design ~= nil then
    ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.designConfigurations.designConfiguration", self.configurations.design, self.components, self)
  end
  SpecializationUtil.raiseEvent(self, "onLoad", v10)
  if self.loadingState ~= VehicleLoadingUtil.VEHICLE_LOAD_OK then
    Logging.xmlError(self.xmlFile, "Vehicle loading failed!")
    v11(v12, self, self.loadingState, v13)
    return
  end
  if self.actionController ~= nil then
    v24:load(v10)
  end
  SpecializationUtil.raiseEvent(self, "onRootVehicleChanged", self)
  for v27, v28 in pairs(self.configurations) do
    ConfigurationUtil.applyConfigMaterials(self, self.xmlFile, v27, v28)
  end
  if not v23 and self.configurations.design ~= nil then
    ObjectChangeUtil.updateObjectChanges(self.xmlFile, "vehicle.designConfigurations.designConfiguration", self.configurations.design, self.components, self)
  end
  -- TODO: structure LOP_FORNPREP (pc 1208, target 1237)
  v27 = string.format("design%d", 2)
  if self.configurations[v27] ~= nil then
    local v30 = string.format("vehicle.%sConfigurations.%sConfiguration", v27, v27)
    ObjectChangeUtil.updateObjectChanges(self.xmlFile, v30, self.configurations[v27], self.components, self)
  end
  -- TODO: structure LOP_FORNLOOP (pc 1236, target 1209)
  if self.configurations.baseColor ~= nil then
    ConfigurationUtil.setColor(self, self.xmlFile, "baseColor", self.configurations.baseColor)
  end
  if self.configurations.designColor ~= nil then
    ConfigurationUtil.setColor(self, self.xmlFile, "designColor", self.configurations.designColor)
  end
  if self.isServer then
    for v27, v28 in pairs(self.componentJoints) do
      if not v28.initComponentPosition then
        continue
      end
      local v31 = self:getParentComponent(v28.jointNode)
      if v31 == self.components[v28.componentIndices[2]].node then
      end
      v31 = self:getParentComponent(v30)
      if not (v31 ~= v29) then
        continue
      end
      local v33 = localToLocal(v29, v30, 0, 0, 0)
      setTranslation(...)
      v33 = localRotationToLocal(v29, v30, 0, 0, 0)
      setRotation(...)
      link(v30, v29)
    end
  end
  self:setLoadingStep(Vehicle.LOAD_STEP_POST_LOAD)
  SpecializationUtil.raiseEvent(self, "onPostLoad", v10)
  if self.loadingState ~= VehicleLoadingUtil.VEHICLE_LOAD_OK then
    Logging.xmlError(self.xmlFile, "Vehicle post-loading failed!")
    v11(v12, self, self.loadingState, v13)
    return
  end
  if self.isServer then
    for v27, v28 in pairs(self.componentJoints) do
      if not v28.initComponentPosition then
        continue
      end
      v31 = self:getParentComponent(v28.jointNode)
      if v31 == self.components[v28.componentIndices[2]].node then
      end
      v31 = self:getParentComponent(v30)
      if not (v31 ~= v29.node) then
        continue
      end
      v31 = getParent(v29.node)
      if not (v31 == v30) then
        continue
      end
      if v28.jointNodeActor1 ~= v28.jointNode then
        local v34, v35, v36 = localToLocal(v28.jointNode, v29.node, 0, 0, 0)
        local v37, v38, v39 = localToLocal(v28.jointNodeActor1, v29.node, 0, 0, 0)
      end
      v34, v35, v36 = localToWorld(v29.node, v31, v32, v33)
      v37, v38, v39 = localRotationToWorld(v29.node, 0, 0, 0)
      local v41 = getRootNode()
      link(v41, v29.node)
      setWorldTranslation(v29.node, v34, v35, v36)
      setWorldRotation(v29.node, v37, v38, v39)
      v29.originalTranslation = {v34, v35, v36}
      v29.originalRotation = {v37, v38, v39}
      v29.sentTranslation = {v34, v35, v36}
      v29.sentRotation = {v37, v38, v39}
    end
    for v27, v28 in pairs(self.componentJoints) do
      self:setComponentJointFrame(v28, 0)
      self:setComponentJointFrame(v28, 1)
    end
  end
  if v10 ~= nil then
    v24 = v24:getValue(v10.key .. "#id")
    self.currentSavegameId = v24
    v24 = v24:getValue(v10.key .. "#age", 0)
    self.age = v24
    v24 = v24:getValue(v10.key .. "#price", self.price)
    self.price = v24
    v24 = v24:getValue(v10.key .. "#propertyState", self.propertyState)
    self.propertyState = v24
    v24 = v24:getValue(v10.key .. "#activeMissionId")
    self.activeMissionId = v24
    v25 = v25:getValue(v10.key .. "#operatingTime", self.operatingTime)
    self:setOperatingTime(v25 * 1000, true)
    if not v10.useNewPosition then
      if v10.resetVehicles then
      end
      if not v25 then
        v26 = v26:getValue(v10.key .. "#isAbsolute", false)
        if v26 then
          while true do
            v29 = string.format(v10.key .. ".component(%d)", v28)
            v30 = v30:hasProperty(v29)
            if not v30 then
              break
            end
            v30 = v30:getValue(v29 .. "#index")
            v31, v32, v33 = v31:getValue(v29 .. "#position")
            v34, v35, v36 = v34:getValue(v29 .. "#rotation")
            if v31 ~= nil and v32 ~= nil and v33 ~= nil and v34 ~= nil and v35 ~= nil then
              -- cmp-jump LOP_JUMPXEQKNIL R36 aux=0x80000000 -> L1700
            end
            break
            if v27[v30] ~= nil then
              Logging.xmlWarning(v10.xmlFile, "Duplicate component index '%s' in '%s' (%s)!", v30, v10.key, self.xmlFile.filename)
            else
              v27[v30] = {x = v31, y = v32, z = v33, xRot = v34, yRot = v35, zRot = v36}
            end
          end
          v29 = table.size(v27)
          if v29 == #self.components then
            -- TODO: structure LOP_FORNPREP (pc 1747, target 1867)
            self:setWorldPosition(v27[1].x, v27[1].y, v27[1].z, v27[1].xRot, v27[1].yRot, v27[1].zRot, 1, true)
            -- TODO: structure LOP_FORNLOOP (pc 1766, target 1748)
            -- goto L1867  (LOP_JUMP +99)
          end
          if 1 <= v29 then
            self:setAbsolutePosition(v27[1].x, v27[1].y, v27[1].z, v27[1].xRot, v27[1].yRot, v27[1].zRot)
            Logging.xmlWarning(v10.xmlFile, "Invalid component count found in savegame for '%s'. Reset component positions.", self.xmlFile.filename)
            -- goto L1867  (LOP_JUMP +69)
          end
          Logging.xmlWarning(v10.xmlFile, "No component positions found in savegame for '%s'!", self.xmlFile.filename)
        else
          v27 = v27:getValue(v10.key .. "#yOffset")
          v28 = v28:getValue(v10.key .. "#xPosition")
          v29 = v29:getValue(v10.key .. "#zPosition")
          v30 = v30:getValue(v10.key .. "#yRotation")
          if v27 ~= nil and v28 ~= nil and v29 ~= nil then
            -- cmp-jump LOP_JUMPXEQKNIL R30 aux=0x80000000 -> L1856
          end
          -- goto L1867  (LOP_JUMP +11)
          v36 = math.rad(v30)
          self:setRelativePosition(...)
        end
      end
      -- if not v25 then goto L1980 end
      if v10.resetVehicles and not v10.keepPosition then
        v27 = v27:getResetPlaces()
        v26, v27, v28, v29, v30, v31 = PlacementUtil.getPlace(v27, self.size, g_currentMission.usedLoadPlaces, true, false, true)
        if v26 ~= nil then
          v32 = MathUtil.getYRotationFromDirection(v29.dirPerpX, v29.dirPerpZ)
          v33 = v33:getItemByXMLFilename(self.configFileName)
          if v33 ~= nil then
          end
          PlacementUtil.markPlaceUsed(g_currentMission.usedLoadPlaces, v29, v30)
          self:setRelativePosition(v26, v31, v28, v32)
          -- goto L1980  (LOP_JUMP +55)
        end
        self:setLoadingState(VehicleLoadingUtil.VEHICLE_LOAD_NO_SPACE)
        v11(v12, self, self.loadingState, v13)
        return
        -- goto L1980  (LOP_JUMP +41)
      end
      self:setLoadingState(VehicleLoadingUtil.VEHICLE_LOAD_DELAYED)
      -- goto L1980  (LOP_JUMP +35)
    end
    self:setAbsolutePosition(v5.posX, v5.posY, v5.posZ, v6.rotX, v6.rotY, v6.rotZ, v14)
  else
    v27 = self:getLimitedVehicleYPosition(v5)
    self:setAbsolutePosition(v5.posX, v27, v5.posZ, v6.rotX, v6.rotY, v6.rotZ, v14)
  end
  self:updateSelectableObjects()
  self:setSelectedVehicle(self, nil, true)
  if self.rootVehicle == self and v10 ~= nil then
    v24 = v24:getValue(v10.key .. "#selectedObjectIndex")
    self.loadedSelectedObjectIndex = v24
    v24 = v24:getValue(v10.key .. "#subSelectedObjectIndex")
    self.loadedSubSelectedObjectIndex = v24
  end
  if v14 ~= nil and v10 == nil then
    v27 = self:getLimitedVehicleYPosition(v5)
    self:setAbsolutePosition(v5.posX, v27, v5.posZ, v6.rotX, v6.rotY, v6.rotZ, v14)
  end
  SpecializationUtil.raiseEvent(self, "onPreLoadFinished", self.savegame)
  self:addNodeObjectMapping(g_currentMission.nodeToObject)
  if not self.subLoadingTasksFinished then
    self:setLoadingStep(Vehicle.LOAD_STEP_AWAIT_SUB_I3D)
  end
  self.syncVehicleLoadingFinished = true
  self.subLoadingTasksFinishedAsyncData = {asyncCallbackFunction = v11, asyncCallbackObject = v12, asyncCallbackArguments = v13}
  self:setVisibility(false)
  self:tryFinishLoading()
end
function Vehicle:loadSubSharedI3DFile(filename, callOnCreate, addToPhysics, asyncCallbackFunction, asyncCallbackObject, asyncCallbackArguments)
  if asyncCallbackFunction ~= nil and not self.syncVehicleLoadingFinished then
    self.subLoadingTasksFinished = false
    self.numPendingSubLoadingTasks = self.numPendingSubLoadingTasks + 1
  end
  return v7:loadSharedI3DFileAsync(filename, callOnCreate, addToPhysics, asyncCallbackFunction, asyncCallbackObject, asyncCallbackArguments)
end
function Vehicle:tryFinishLoading()
  if self.subLoadingTasksFinished then
    if self.isServer then
      self:setVisibility(true)
      self:addToPhysics()
    end
    self:setLoadingStep(Vehicle.LOAD_STEP_FINISHED)
    SpecializationUtil.raiseEvent(self, "onLoadFinished", self.savegame)
    if self.isServer then
      self:setLoadingStep(Vehicle.LOAD_STEP_SYNCHRONIZED)
    end
    if g_currentMission ~= nil and self.propertyState ~= Vehicle.PROPERTY_STATE_SHOP_CONFIG and self.mapHotspotAvailable then
      self:createMapHotspot()
    end
    self.finishedLoading = true
    self.subLoadingTasksFinishedAsyncData.asyncCallbackFunction(self.subLoadingTasksFinishedAsyncData.asyncCallbackObject, self, self.loadingState, self.subLoadingTasksFinishedAsyncData.asyncCallbackArguments)
    self.subLoadingTasksFinishedAsyncData = nil
    self.savegame = nil
  end
end
function Vehicle:delete()
  if self.isDeleted then
    Logging.devError("Trying to delete a already deleted vehicle")
    printCallstack()
    return
  end
  VehicleDebug.delete(self)
  if self.tourId ~= nil and g_currentMission ~= nil then
    v1:removeVehicle(self.tourId)
  end
  self.isDeleting = true
  v1:unsubscribeAll(self)
  self:deleteMapHotspot()
  if self.rootVehicle ~= nil then
    local v2 = self.rootVehicle:getIsAIActive()
    if v2 then
      local v4 = AIMessageErrorVehicleDeleted.new()
      self.rootVehicle:stopCurrentAIJob(...)
    end
  end
  v2:beginActionEventsModification(Vehicle.INPUT_CONTEXT_NAME)
  self:removeActionEvents()
  v2:endActionEventsModification()
  SpecializationUtil.raiseEvent(self, "onPreDelete")
  SpecializationUtil.raiseEvent(self, "onDelete")
  if self.isServer and self.componentJoints ~= nil then
    for v5, v6 in pairs(self.componentJoints) do
      if not (v6.jointIndex ~= 0) then
        continue
      end
      removeJoint(v6.jointIndex)
    end
    removeWakeUpReport(self.rootNode)
  end
  self:removeNodeObjectMapping(g_currentMission.nodeToObject)
  if self.components ~= nil then
    for v5, v6 in pairs(self.components) do
      delete(v6.node)
    end
  end
  if self.sharedLoadRequestId ~= nil then
    v2:releaseSharedI3DFile(self.sharedLoadRequestId)
    self.sharedLoadRequestId = nil
  end
  v2:delete()
  if self.externalSoundsFile ~= nil then
    v2:delete()
  end
  self.isDeleting = false
  self.isDeleted = true
  v3 = v3:superClass()
  v3.delete(self)
  if self.currentSavegameId ~= nil then
    g_currentMission.savegameIdToVehicle[self.currentSavegameId] = nil
  end
end
function Vehicle:saveToXMLFile(xmlFile, key, usedModNames)
  xmlFile:setValue(key .. "#id", self.currentSavegameId)
  xmlFile:setValue(key .. "#isAbsolute", true)
  xmlFile:setValue(key .. "#age", self.age)
  xmlFile:setValue(key .. "#price", self.price)
  local v7 = self:getOwnerFarmId()
  xmlFile:setValue(...)
  xmlFile:setValue(key .. "#propertyState", self.propertyState)
  xmlFile:setValue(key .. "#operatingTime", self.operatingTime / 1000)
  if self.activeMissionId ~= nil then
    xmlFile:setValue(key .. "#activeMissionId", self.activeMissionId)
  end
  if self.tourId ~= nil then
    xmlFile:setValue(key .. "#tourId", self.tourId)
  end
  if self.rootVehicle == self then
    xmlFile:setValue(key .. "#selectedObjectIndex", self.currentSelection.index)
    if self.currentSelection.subIndex ~= nil then
      xmlFile:setValue(key .. "#subSelectedObjectIndex", self.currentSelection.subIndex)
    end
  end
  if not self.isBroken then
    for v7, v8 in ipairs(self.components) do
      local v9 = string.format("%s.component(%d)", key, v7 - 1)
      local v11, v12, v13 = getWorldTranslation(v8.node)
      local v14, v15, v16 = getWorldRotation(v8.node)
      xmlFile:setValue(v9 .. "#index", v7)
      xmlFile:setValue(v9 .. "#position", v11, v12, v13)
      xmlFile:setValue(v9 .. "#rotation", v14, v15, v16)
    end
  end
  for v8, v9 in pairs(self.configurations) do
    local v10 = ConfigurationUtil.getSaveIdByConfigId(self.configFileName, v8, v9)
    if not (v10 ~= nil) then
      continue
    end
    v11 = string.format("%s.configuration(%d)", key, v4)
    xmlFile:setValue(v11 .. "#name", v8)
    xmlFile:setValue(v11 .. "#id", v10)
  end
  for v8, v9 in pairs(self.boughtConfigurations) do
    for v13, v14 in pairs(v9) do
      v15 = ConfigurationUtil.getSaveIdByConfigId(self.configFileName, v8, v13)
      if not (v15 ~= nil) then
        continue
      end
      v16 = string.format("%s.boughtConfiguration(%d)", key, v4)
      xmlFile:setValue(v16 .. "#name", v8)
      xmlFile:setValue(v16 .. "#id", v15)
    end
  end
  for v8, v9 in pairs(self.specializations) do
    if not (v9.saveToXMLFile ~= nil) then
      continue
    end
    v9.saveToXMLFile(self, xmlFile, key .. "." .. self.specializationNames[v8], usedModNames)
  end
  if self.actionController ~= nil then
    v5:saveToXMLFile(xmlFile, key .. ".actionController", usedModNames)
  end
end
function Vehicle:saveStatsToXMLFile(xmlFile, key)
  if self.getIsTabbable ~= nil then
    local v3 = self:getIsTabbable()
  end
  if not self.isDeleted and self.isVehicleSaved then
    -- if v3 then goto L17 end
  end
  return false
  local v6 = v6:getItemByXMLFilename(self.configFileName)
  if v6 ~= nil and v6.name ~= nil then
    local v7 = tostring(v6.name)
  end
  local v10 = HTMLUtil.encodeToHTML(v4)
  setXMLString(...)
  v10 = HTMLUtil.encodeToHTML(v5)
  setXMLString(...)
  local v11 = tostring(self.typeName)
  v10 = HTMLUtil.encodeToHTML(...)
  setXMLString(...)
  if self.components[1] ~= nil and self.components[1].node ~= 0 then
    local v7, v8, v9 = getWorldTranslation(self.components[1].node)
    setXMLFloat(xmlFile, key .. "#x", v7)
    setXMLFloat(xmlFile, key .. "#y", v8)
    setXMLFloat(xmlFile, key .. "#z", v9)
  end
  for v10, v11 in pairs(self.specializations) do
    if not (v11.saveStatsToXMLFile ~= nil) then
      continue
    end
    v11.saveStatsToXMLFile(self, xmlFile, key)
  end
  return true
end
function Vehicle:readStream(streamId, connection, objectId)
  local v5 = v5:superClass()
  v5.readStream(self, streamId, connection, objectId)
  v5 = streamReadString(streamId)
  local v4 = NetworkUtil.convertFromNetworkFilename(...)
  v5 = streamReadString(streamId)
  local v7 = streamReadUIntN(streamId, ConfigurationUtil.SEND_NUM_BITS)
  -- TODO: structure LOP_FORNPREP (pc 34, target 56)
  local v11 = streamReadUIntN(streamId, ConfigurationUtil.SEND_NUM_BITS)
  local v12 = streamReadUInt16(streamId)
  local v13 = v13:getConfigurationNameByIndex(v11 + 1)
  if v13 ~= nil then
    {}[v13] = v12 + 1
  end
  -- TODO: structure LOP_FORNLOOP (pc 55, target 35)
  local v9 = streamReadUIntN(streamId, ConfigurationUtil.SEND_NUM_BITS)
  -- TODO: structure LOP_FORNPREP (pc 68, target 102)
  v12 = streamReadUIntN(streamId, ConfigurationUtil.SEND_NUM_BITS)
  v13 = v13:getConfigurationNameByIndex(v12 + 1)
  {}[v13] = {}
  local v14 = streamReadUInt16(streamId)
  for v17 = 1, v14 do
    local v18 = streamReadUInt16(streamId)
    v8[v13][v18 + 1] = true
    -- TODO: structure LOP_FORNLOOP (pc 100, target 92)
  end
  v9 = streamReadUIntN(streamId, 2)
  self.propertyState = v9
  if self.configFileName == nil then
    self:load({filename = v4, isAbsolute = false, typeName = v5, posX = 0, posY = nil, posZ = 0, yOffset = 0, rotX = 0, rotY = 0, rotZ = 0, isVehicleSaved = true, price = 0, propertyState = self.propertyState, ownerFarmId = self.ownerFarmId, isLeased = 0, configurations = v6, boughtConfigurations = v8}, function(self, streamId, connection, objectId)
      if connection == VehicleLoadingUtil.VEHICLE_LOAD_OK then
        v4:onObjectFinishedAsyncLoading(u0)
        return
      end
      Logging.error("Failed to load vehicle on client")
      if streamId ~= nil then
        streamId:delete()
      end
      printCallstack()
      return
    end, self)
  end
end
function Vehicle:postReadStream(streamId, connection)
  self:removeFromPhysics()
  if self.highPrecisionPositionSynchronization then
    -- if g_currentMission.vehicleXZPosHighPrecisionCompressionParams then goto L11 end
  end
  if self.highPrecisionPositionSynchronization then
    -- if g_currentMission.vehicleYPosHighPrecisionCompressionParams then goto L19 end
  end
  -- TODO: structure LOP_FORNPREP (pc 24, target 95)
  local v9 = NetworkUtil.readCompressedWorldPosition(streamId, v3)
  local v10 = NetworkUtil.readCompressedWorldPosition(streamId, g_currentMission.vehicleYPosCompressionParams)
  local v11 = NetworkUtil.readCompressedWorldPosition(streamId, v3)
  local v12 = NetworkUtil.readCompressedAngle(streamId)
  local v13 = NetworkUtil.readCompressedAngle(streamId)
  local v14 = NetworkUtil.readCompressedAngle(streamId)
  local v15, v16, v17, v18 = mathEulerToQuaternion(v12, v13, v14)
  self:setWorldPositionQuaternion(v9, v10, v11, v15, v16, v17, v18, 1, true)
  v19:setPosition(v9, v10, v11)
  v19:setQuaternion(v15, v16, v17, v18)
  -- TODO: structure LOP_FORNLOOP (pc 94, target 25)
  v5:reset()
  self:setVisibility(true)
  self:addToPhysics()
  local v5 = streamReadFloat32(streamId)
  self.serverMass = v5
  v5 = streamReadUInt16(streamId)
  self.age = v5
  local v7 = streamReadFloat32(streamId)
  self:setOperatingTime(v7, true)
  v5 = streamReadInt32(streamId)
  self.price = v5
  if Vehicle.DEBUG_NETWORK_READ_WRITE then
    print("-------------------------------------------------------------")
    print(self.configFileName)
    for v8, v9 in ipairs(self.eventListeners.onReadStream) do
      v10 = ClassUtil.getClassName(v9)
      v11 = streamGetReadOffset(streamId)
      v9.onReadStream(self, streamId, connection)
      local v19 = tostring(v10)
      v19 = streamGetReadOffset(streamId)
      print("  " .. v19 .. " read " .. v19 - v11 .. " bits")
    end
  else
    SpecializationUtil.raiseEvent(self, "onReadStream", streamId, connection)
  end
  self:setLoadingStep(Vehicle.LOAD_STEP_SYNCHRONIZED)
end
function Vehicle:writeStream(streamId, connection)
  local v4 = v4:superClass()
  v4.writeStream(self, streamId, connection)
  local v5 = NetworkUtil.convertToNetworkFilename(self.configFileName)
  streamWriteString(...)
  streamWriteString(streamId, self.typeName)
  for v7, v8 in pairs(self.configurations) do
  end
  streamWriteUIntN(streamId, v3, ConfigurationUtil.SEND_NUM_BITS)
  for v7, v8 in pairs(self.configurations) do
    local v9 = v9:getConfigurationIndexByName(v7)
    streamWriteUIntN(streamId, v9 - 1, ConfigurationUtil.SEND_NUM_BITS)
    streamWriteUInt16(streamId, v8 - 1)
  end
  for v8, v9 in pairs(self.boughtConfigurations) do
  end
  streamWriteUIntN(streamId, v4, ConfigurationUtil.SEND_NUM_BITS)
  for v8, v9 in pairs(self.boughtConfigurations) do
    for v14, v15 in pairs(v9) do
    end
    v11 = v11:getConfigurationIndexByName(v8)
    streamWriteUIntN(streamId, v11 - 1, ConfigurationUtil.SEND_NUM_BITS)
    streamWriteUInt16(streamId, v10)
    for v15, v16 in pairs(v9) do
      streamWriteUInt16(streamId, v15 - 1)
    end
  end
  streamWriteUIntN(streamId, self.propertyState, 2)
end
function Vehicle:postWriteStream(streamId, connection)
  if self.highPrecisionPositionSynchronization then
    -- if g_currentMission.vehicleXZPosHighPrecisionCompressionParams then goto L8 end
  end
  if self.highPrecisionPositionSynchronization then
    -- if g_currentMission.vehicleYPosHighPrecisionCompressionParams then goto L16 end
  end
  -- TODO: structure LOP_FORNPREP (pc 21, target 69)
  local v9, v10, v11 = getWorldTranslation(self.components[1].node)
  local v12, v13, v14 = getWorldRotation(self.components[1].node)
  NetworkUtil.writeCompressedWorldPosition(streamId, v9, v3)
  NetworkUtil.writeCompressedWorldPosition(streamId, v10, g_currentMission.vehicleYPosCompressionParams)
  NetworkUtil.writeCompressedWorldPosition(streamId, v11, v3)
  NetworkUtil.writeCompressedAngle(streamId, v12)
  NetworkUtil.writeCompressedAngle(streamId, v13)
  NetworkUtil.writeCompressedAngle(streamId, v14)
  -- TODO: structure LOP_FORNLOOP (pc 68, target 22)
  streamWriteFloat32(streamId, self.serverMass)
  streamWriteUInt16(streamId, self.age)
  streamWriteFloat32(streamId, self.operatingTime)
  streamWriteInt32(streamId, self.price)
  if Vehicle.DEBUG_NETWORK_READ_WRITE then
    print("-------------------------------------------------------------")
    print(self.configFileName)
    for v8, v9 in ipairs(self.eventListeners.onWriteStream) do
      v10 = ClassUtil.getClassName(v9)
      v11 = streamGetWriteOffset(streamId)
      v9.onWriteStream(self, streamId, connection)
      local v19 = tostring(v10)
      v19 = streamGetWriteOffset(streamId)
      print("  " .. v19 .. " Wrote " .. v19 - v11 .. " bits")
    end
    return
  end
  SpecializationUtil.raiseEvent(self, "onWriteStream", streamId, connection)
end
function Vehicle:readUpdateStream(streamId, timestamp, connection)
  if connection.isServer then
    local hasUpdate = streamReadBool(streamId)
    if hasUpdate then
      v5:startNewPhaseNetwork()
      if self.highPrecisionPositionSynchronization then
        -- if g_currentMission.vehicleXZPosHighPrecisionCompressionParams then goto L21 end
      end
      if self.highPrecisionPositionSynchronization then
        -- if g_currentMission.vehicleYPosHighPrecisionCompressionParams then goto L29 end
      end
      -- TODO: structure LOP_FORNPREP (pc 34, target 96)
      if not self.components[1].isStatic then
        local v11 = NetworkUtil.readCompressedWorldPosition(streamId, v5)
        local v12 = NetworkUtil.readCompressedWorldPosition(streamId, g_currentMission.vehicleYPosCompressionParams)
        local v13 = NetworkUtil.readCompressedWorldPosition(streamId, v5)
        local v14 = NetworkUtil.readCompressedAngle(streamId)
        local v15 = NetworkUtil.readCompressedAngle(streamId)
        local v16 = NetworkUtil.readCompressedAngle(streamId)
        local v17, v18, v19, v20 = mathEulerToQuaternion(v14, v15, v16)
        v21:setTargetPosition(v11, v12, v13)
        v21:setTargetQuaternion(v17, v18, v19, v20)
      end
      -- TODO: structure LOP_FORNLOOP (pc 95, target 35)
      SpecializationUtil.raiseEvent(self, "onReadPositionUpdateStream", streamId, connection)
    end
  end
  if Vehicle.DEBUG_NETWORK_READ_WRITE_UPDATE then
    print("-------------------------------------------------------------")
    print(self.configFileName)
    for v7, v8 in ipairs(self.eventListeners.onReadUpdateStream) do
      local v9 = ClassUtil.getClassName(v8)
      local startBits = streamGetReadOffset(streamId)
      v8.onReadUpdateStream(self, streamId, timestamp, connection)
      v18 = tostring(v9)
      v18 = streamGetReadOffset(streamId)
      print("  " .. v18 .. " read " .. v18 - startBits .. " bits")
    end
    return
  end
  SpecializationUtil.raiseEvent(self, "onReadUpdateStream", streamId, timestamp, connection)
end
function Vehicle:writeUpdateStream(streamId, connection, dirtyMask)
  if not connection.isServer then
    local v7 = bitAND(dirtyMask, self.vehicleDirtyFlag)
    if v7 == 0 then
    end
    local v4 = v4(v5, true)
    if v4 then
      if self.highPrecisionPositionSynchronization then
        -- if g_currentMission.vehicleXZPosHighPrecisionCompressionParams then goto L26 end
      end
      if self.highPrecisionPositionSynchronization then
        -- if g_currentMission.vehicleYPosHighPrecisionCompressionParams then goto L34 end
      end
      -- TODO: structure LOP_FORNPREP (pc 39, target 90)
      if not self.components[1].isStatic then
        local v10, v11, v12 = getWorldTranslation(self.components[1].node)
        local v13, v14, v15 = getWorldRotation(self.components[1].node)
        NetworkUtil.writeCompressedWorldPosition(streamId, v10, v4)
        NetworkUtil.writeCompressedWorldPosition(streamId, v11, g_currentMission.vehicleYPosCompressionParams)
        NetworkUtil.writeCompressedWorldPosition(streamId, v12, v4)
        NetworkUtil.writeCompressedAngle(streamId, v13)
        NetworkUtil.writeCompressedAngle(streamId, v14)
        NetworkUtil.writeCompressedAngle(streamId, v15)
      end
      -- TODO: structure LOP_FORNLOOP (pc 89, target 40)
      SpecializationUtil.raiseEvent(self, "onWritePositionUpdateStream", streamId, connection, dirtyMask)
    end
  end
  if Vehicle.DEBUG_NETWORK_READ_WRITE_UPDATE then
    print("-------------------------------------------------------------")
    print(self.configFileName)
    for v7, v8 in ipairs(self.eventListeners.onWriteUpdateStream) do
      local v9 = ClassUtil.getClassName(v8)
      v10 = streamGetWriteOffset(streamId)
      v8.onWriteUpdateStream(self, streamId, connection, dirtyMask)
      local v18 = tostring(v9)
      v18 = streamGetWriteOffset(streamId)
      print("  " .. v18 .. " Wrote " .. v18 - v10 .. " bits")
    end
    return
  end
  SpecializationUtil.raiseEvent(self, "onWriteUpdateStream", streamId, connection, dirtyMask)
end
function Vehicle:updateVehicleSpeed(dt)
  if self.finishedFirstUpdate and not self.components[1].isStatic then
    if self.isServer then
      -- if not v0.components[1].isKinematic then goto L174 end
    end
    if not self.isServer then
      -- if not v0.synchronizePosition then goto L99 end
      local v10 = v10:isInterpolating()
      if v10 then
        local v10, v11, v12 = worldDirectionToLocal(self.components[1].node, self.components[1].networkInterpolators.position.targetPositionX - self.components[1].networkInterpolators.position.lastPositionX, self.components[1].networkInterpolators.position.targetPositionY - self.components[1].networkInterpolators.position.lastPositionY, self.components[1].networkInterpolators.position.targetPositionZ - self.components[1].networkInterpolators.position.lastPositionZ)
      end
      if 0.001 < v9 then
      elseif v9 < -0.001 then
      end
      v10 = MathUtil.vector3Length(v7, v8, v9)
      if 0 <= v9 then
      else
      end
    else
      local v6, v7, v8 = getWorldTranslation(self.components[1].node)
      if self.lastPosition == nil then
        self.lastPosition = {v6, v7, v8}
      end
      local v9, v10, v11 = worldDirectionToLocal(self.components[1].node, v6 - self.lastPosition[1], v7 - self.lastPosition[2], v8 - self.lastPosition[3])
      self.lastPosition[1] = v6
      self.lastPosition[2] = v7
      self.lastPosition[3] = v8
      if 0.001 < v11 then
      elseif v11 < -0.001 then
      end
      v12 = MathUtil.vector3Length(v9, v10, v11)
      if 0 <= v11 then
      else
      end
      -- goto L214  (LOP_JUMP +40)
      if self.components[1].isDynamic then
        v6, v7, v8 = getLocalLinearVelocity(self.components[1].node)
        v9 = MathUtil.vector3Length(v6, v7, v8)
        if 0 <= v8 then
        else
        end
        if 0.001 < v8 then
        elseif v8 < -0.001 then
        end
      end
    end
    if self.isServer then
      -- if 0 >= g_physicsDtNonInterpolated then goto L245 end
      self.lastSpeedAcceleration = (v2 * v4 - self.lastSpeedReal * self.movingDirection) / g_physicsDtNonInterpolated
    else
      self.lastSpeedAcceleration = (v2 * v4 - self.lastSpeedReal * self.movingDirection) / dt
    end
    if self.isServer then
      self.lastSpeed = self.lastSpeed * 0.5 + v2 * 0.5
      self.lastSignedSpeed = self.lastSignedSpeed * 0.5 + v5 * 0.5
    else
      self.lastSpeed = self.lastSpeed * 0.9 + v2 * 0.1
      self.lastSignedSpeed = self.lastSignedSpeed * 0.9 + v5 * 0.1
    end
    self.lastSpeedReal = v2
    self.lastSignedSpeedReal = v5
    self.movingDirection = v4
    self.lastMovedDistance = v3
  end
end
function Vehicle:update(dt)
  local v2 = self:getIsActive()
  self.isActive = v2
  v2 = self:getIsActiveForInput()
  local v3 = self:getIsActiveForInput(true)
  local v4 = self:getIsSelected()
  local v7 = getCamera()
  local v5 = calcDistanceFrom(...)
  self.lastDistanceToCamera = v5
  self.currentUpdateDistance = self.lastDistanceToCamera / self.lodDistanceCoeff
  v5 = self:getIsActiveForInput(true, true)
  self.isActiveForInputIgnoreSelectionIgnoreAI = v5
  self.isActiveForLocalSound = self.isActiveForInputIgnoreSelectionIgnoreAI
  self.updateLoopIndex = g_updateLoopIndex
  SpecializationUtil.raiseEvent(self, "onPreUpdate", dt, v2, v3, v4)
  if not self.isServer and self.synchronizePosition then
    v5:update(dt)
    v5 = v5:getAlpha()
    for v9, v10 in pairs(self.components) do
      if not not v10.isStatic then
        continue
      end
      local v11, v12, v13 = v11:getInterpolatedValues(v5)
      local v14, v15, v16, v17 = v14:getInterpolatedValues(v5)
      self:setWorldPositionQuaternion(v11, v12, v13, v14, v15, v16, v17, v9, false)
    end
    v6 = v6:isInterpolating()
    if v6 then
      self:raiseActive()
    end
  end
  SpecializationUtil.raiseEvent(self, "onUpdateInterpolation", dt, v2, v3, v4)
  self:updateVehicleSpeed(dt)
  if self.actionEventUpdateRequested then
    self:updateActionEvents()
  end
  if Platform.gameplay.automaticVehicleControl then
    -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L170
    v5:update(dt)
    v5:updateForAI(dt)
  elseif self.actionController ~= nil then
    v5:updateForAI(dt)
  end
  SpecializationUtil.raiseEvent(self, "onUpdate", dt, v2, v3, v4)
  if Vehicle.debuggingActive then
    SpecializationUtil.raiseEvent(self, "onUpdateDebug", dt, v2, v3, v4)
  end
  SpecializationUtil.raiseEvent(self, "onPostUpdate", dt, v2, v3, v4)
  if self.finishedFirstUpdate and self.isMassDirty then
    self.isMassDirty = false
    self:updateMass()
  end
  self.finishedFirstUpdate = true
  if self.isServer then
    v5 = getIsSleeping(self.rootNode)
    if not v5 then
      self:raiseActive()
    end
  end
  VehicleDebug.updateDebug(self, dt)
  self:updateMapHotspot()
end
function Vehicle:updateTick(dt)
  local isActiveForInput = self:getIsActiveForInput()
  local isActiveForInputIgnoreSelection = self:getIsActiveForInput(true)
  local isSelected = self:getIsSelected()
  self.wasTooFast = false
  if self.isActive then
    self:updateWaterInfo()
  end
  if self.isServer then
    if self.synchronizePosition then
      local v6 = self:getOwner()
      if v6 == nil then
      end
      -- TODO: structure LOP_FORNPREP (pc 37, target 129)
      if not self.components[1].isStatic then
        local v10, v11, v12 = getWorldTranslation(self.components[1].node)
        local v13, v14, v15 = getWorldRotation(self.components[1].node)
        if not true then
          local v18 = math.abs(v10 - self.components[1].sentTranslation[1])
          if 0.005 >= v18 then
            v18 = math.abs(v11 - self.components[1].sentTranslation[2])
            if 0.005 >= v18 then
              v18 = math.abs(v12 - self.components[1].sentTranslation[3])
              if 0.005 >= v18 then
                v18 = math.abs(v13 - self.components[1].sentRotation[1])
                if 0.1 >= v18 then
                  v18 = math.abs(v14 - self.components[1].sentRotation[2])
                  if 0.1 >= v18 then
                    v18 = math.abs(v15 - self.components[1].sentRotation[3])
                    -- if 0.1 >= v18 then goto L128 end
                  end
                end
              end
            end
          end
        end
        self:raiseDirtyFlags(self.vehicleDirtyFlag)
        v16[1] = v10
        v16[2] = v11
        v16[3] = v12
        v17[1] = v13
        v17[2] = v14
        v17[3] = v15
        self.lastMoveTime = g_currentMission.time
      end
      -- TODO: structure LOP_FORNLOOP (pc 128, target 38)
    end
    self.showTailwaterDepthWarning = false
    if not self.isBroken then
      local v5 = v5:getIsGuiVisible()
      if not v5 and self.thresholdTailwaterDepthWarning < self.tailwaterDepth then
        self.showTailwaterDepthWarning = true
        if self.thresholdTailwaterDepth < self.tailwaterDepth then
          self:setBroken()
        end
      end
    end
    if self.rootVehicle ~= nil and self.rootVehicle ~= self then
      if not self.rootVehicle.showTailwaterDepthWarning then
      end
      v5.showTailwaterDepthWarning = v6
    end
  end
  v5 = self:getIsOperating()
  if v5 then
    self:setOperatingTime(self.operatingTime + dt)
  end
  SpecializationUtil.raiseEvent(self, "onUpdateTick", dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  SpecializationUtil.raiseEvent(self, "onPostUpdateTick", dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
end
function Vehicle:updateEnd(dt)
  local isActiveForInput = self:getIsActiveForInput()
  local isActiveForInputIgnoreSelection = self:getIsActiveForInput(true)
  local isSelected = self:getIsSelected()
  self.currentUpdateDistance = 0
  SpecializationUtil.raiseEvent(self, "onUpdateEnd", dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
end
function Vehicle:draw(subDraw)
  local v2 = self:getIsSynchronized()
  if v2 then
    local selectedVehicle = self:getSelectedVehicle()
    if not subDraw then
      if self ~= self.rootVehicle and selectedVehicle ~= self.rootVehicle then
        self.rootVehicle:draw(true)
      end
      if selectedVehicle ~= nil and self ~= selectedVehicle and selectedVehicle ~= v2 then
        selectedVehicle:draw(true)
      end
    end
    if selectedVehicle ~= self then
      -- if v2 ~= v0 then goto L47 end
    end
    local isActiveForInput = self:getIsActiveForInput()
    local isActiveForInputIgnoreSelection = self:getIsActiveForInput(true)
    SpecializationUtil.raiseEvent(self, "onDraw", isActiveForInput, isActiveForInputIgnoreSelection, true)
    VehicleDebug.drawDebug(self)
    if self.showTailwaterDepthWarning then
      local v6 = v6:getText("warning_dontDriveIntoWater")
      isActiveForInput:showBlinkingWarning(v6, 2000)
    end
  end
end
function Vehicle:drawUIInfo()
  local dt = self:getIsSynchronized()
  if dt then
    SpecializationUtil.raiseEvent(self, "onDrawUIInfo")
    if g_showVehicleDistance then
      local v3 = getCamera()
      dt = calcDistanceFrom(...)
      if dt <= 350 then
        local v2, v3, v4 = getWorldTranslation(self.rootNode)
        local v9 = string.format("%.0f", dt)
        local v10 = getCorrectTextSize(0.02)
        Utils.renderTextAtWorldPosition(v2, v3 + 1, v4, v9, v10, 0)
      end
    end
  end
end
function Vehicle:setLoadingState(loadingState)
  if loadingState ~= VehicleLoadingUtil.VEHICLE_LOAD_OK and loadingState ~= VehicleLoadingUtil.VEHICLE_LOAD_ERROR and loadingState ~= VehicleLoadingUtil.VEHICLE_LOAD_DELAYED then
    -- if v1 ~= VehicleLoadingUtil.VEHICLE_LOAD_NO_SPACE then goto L19 end
  end
  self.loadingState = loadingState
  return
  printCallstack()
  Logging.error("Invalid loading state '%s'!", loadingState)
end
function Vehicle:setLoadingStep(loadingStep)
  if loadingStep ~= Vehicle.LOAD_STEP_CREATED and loadingStep ~= Vehicle.LOAD_STEP_PRE_LOAD and loadingStep ~= Vehicle.LOAD_STEP_AWAIT_I3D and loadingStep ~= Vehicle.LOAD_STEP_LOAD and loadingStep ~= Vehicle.LOAD_STEP_POST_LOAD and loadingStep ~= Vehicle.LOAD_STEP_AWAIT_SUB_I3D and loadingStep ~= Vehicle.LOAD_STEP_FINISHED then
    -- if v1 ~= Vehicle.LOAD_STEP_SYNCHRONIZED then goto L51 end
  end
  self.loadingStep = loadingStep
  return
  printCallstack()
  Logging.error("Invalid loading step '%s'!", loadingStep)
end
function Vehicle:addNodeObjectMapping(list)
  for v5, v6 in pairs(self.components) do
    list[v6.node] = self
  end
end
function Vehicle:removeNodeObjectMapping(list)
  if self.components ~= nil then
    for v5, v6 in pairs(self.components) do
      list[v6.node] = nil
    end
  end
end
function Vehicle:addToPhysics()
  if not self.isAddedToPhysics then
    for v5, v6 in pairs(self.components) do
      addToPhysics(v6.node)
      if not v6.motorized then
        continue
      end
      if dt ~= nil and self.isServer then
        addVehicleLink(dt, v6.node)
      end
    end
    self.isAddedToPhysics = true
    if self.isServer then
      for v5, v6 in pairs(self.componentJoints) do
        self:createComponentJoint(self.components[v6.componentIndices[1]], self.components[v6.componentIndices[2]], v6)
      end
      addWakeUpReport(self.rootNode, "onVehicleWakeUpCallback", self)
    end
    for v5, v6 in pairs(self.collisionPairs) do
      setPairCollision(v6.component1.node, v6.component2.node, v6.enabled)
    end
    self:setMassDirty()
  end
  return true
end
function Vehicle:removeFromPhysics()
  for v4, v5 in pairs(self.components) do
    removeFromPhysics(v5.node)
  end
  if self.isServer then
    for v4, v5 in pairs(self.componentJoints) do
      v5.jointIndex = 0
    end
    removeWakeUpReport(self.rootNode)
  end
  self.isAddedToPhysics = false
  return true
end
function Vehicle:setVisibility(state)
  for v5, v6 in pairs(self.components) do
    setVisibility(v6.node, state)
  end
end
function Vehicle:setRelativePosition(positionX, offsetY, positionZ, yRot)
  local terrainHeight = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, positionX, 300, positionZ)
  self:setAbsolutePosition(positionX, terrainHeight + offsetY, positionZ, 0, yRot, 0)
end
function Vehicle:setAbsolutePosition(positionX, positionY, positionZ, xRot, yRot, zRot, componentPositions)
  local v8 = createTransformGroup("tempRootNode")
  setTranslation(v8, positionX, positionY, positionZ)
  setRotation(v8, xRot, yRot, zRot)
  for v12, v13 in pairs(self.components) do
    local v16 = unpack(v13.originalTranslation)
    local v14, v15, v16 = localToWorld(...)
    local v19 = unpack(v13.originalRotation)
    local v17, v18, v19 = localRotationToWorld(...)
    if componentPositions ~= nil and #componentPositions == #self.components then
      local v20, v21, v22 = unpack(componentPositions[v12][1])
      v20, v21, v22 = unpack(componentPositions[v12][2])
    end
    self:setWorldPosition(v14, v15, v16, v17, v18, v19, v12, true)
  end
  delete(v8)
  v9:reset()
end
function Vehicle.getLimitedVehicleYPosition(v0, dt)
  if dt.posY == nil then
    local v2 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, dt.posX, 300, dt.posZ)
    local v4 = Utils.getNoNil(dt.yOffset, 0)
    return v2 + v4
  end
  return dt.posY
end
function Vehicle:setWorldPosition(x, y, z, xRot, yRot, zRot, i, changeInterp)
  setWorldTranslation(self.components[i].node, x, y, z)
  setWorldRotation(self.components[i].node, xRot, yRot, zRot)
  if changeInterp then
    local v10, v11, v12, v13 = mathEulerToQuaternion(xRot, yRot, zRot)
    v14:setQuaternion(v10, v11, v12, v13)
    v14:setPosition(x, y, z)
  end
end
function Vehicle:setWorldPositionQuaternion(x, y, z, qx, qy, qz, qw, i, changeInterp)
  setWorldTranslation(self.components[i].node, x, y, z)
  setWorldQuaternion(self.components[i].node, qx, qy, qz, qw)
  if changeInterp then
    v11:setQuaternion(qx, qy, qz, qw)
    v11:setPosition(x, y, z)
  end
end
function Vehicle:getUpdatePriority(skipCount, x, y, z, coeff, connection, isGuiVisible)
  local v8 = self:getOwner()
  if v8 == connection then
    return 50
  end
  local v8, v9, v10 = getWorldTranslation(self.components[1].node)
  local v11 = MathUtil.vector3Length(v8 - x, v9 - y, v10 - z)
  local v13 = getClipDistance(self.components[1].node)
  return (1 - v11 / v13 * coeff) * 0.8 + 0.5 * skipCount * 0.2
end
function Vehicle:getPrice()
  return self.price
end
function Vehicle:getSellPrice()
  local dt = dt:getItemByXMLFilename(self.configFileName)
  local v6 = self:getPrice()
  local v7 = self:getRepairPrice()
  local v8 = self:getRepaintPrice()
  return Vehicle.calculateSellPrice(...)
end
function Vehicle:calculateSellPrice(dt, v2, v3, v4, v5)
  StoreItemUtil.loadSpecsFromXML(self)
  if self.specs.power == nil then
  end
  local v15 = math.log(v8)
  local v11 = math.min(-0.1 * v15 + 0.75, 0.8)
  return math.max(v3 * (1 - v6 ^ v9 / v7) * v11 - v4 - v5, v3 * 0.03)
end
function Vehicle:getIsOnField()
  for v4, v5 in pairs(self.components) do
    local v8 = getCenterOfMass(v5.node)
    local v6, v7, v8 = localToWorld(...)
    local v9 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, v6, v7, v8)
    if not (v7 >= v9 - 1) then
      break
    end
    local v10, v11 = FSDensityMapUtil.getFieldDataAtWorldPosition(v6, v7, v8)
    if not v10 then
      continue
    end
    return true
  end
  return false
end
function Vehicle:getParentComponent(node)
  while node ~= 0 do
    local v2 = self:getIsVehicleNode(node)
    if v2 then
      return node
    end
    v2 = getParent(node)
  end
  return 0
end
function Vehicle:getLastSpeed(useAttacherVehicleSpeed)
  if useAttacherVehicleSpeed and self.attacherVehicle ~= nil then
    return v2:getLastSpeed(true)
  end
  return self.lastSpeed * 3600
end
dt:registerModifierType("SPEED", Vehicle.getLastSpeed)
function Vehicle.getDeactivateOnLeave(v0)
  return true
end
function Vehicle:getIsSynchronized()
  if self.loadingStep ~= Vehicle.LOAD_STEP_SYNCHRONIZED then
  end
  return true
end
function Vehicle:getOwner()
  if self.owner ~= nil then
    return self.owner
  end
  return nil
end
function Vehicle:getActiveFarm()
  return self:getOwnerFarmId()
end
function Vehicle:getIsVehicleNode(nodeId)
  if self.vehicleNodes[nodeId] == nil then
  end
  return true
end
function Vehicle.getIsOperating(v0)
  return false
end
function Vehicle:getIsActive()
  if self.isBroken then
    return false
  end
  if self.forceIsActive then
    return true
  end
  return false
end
function Vehicle:getIsActiveForInput(ignoreSelection, activeForAI)
  if not self.allowsInput then
    return false
  end
  if not g_currentMission.isRunning then
    return false
  end
  if activeForAI ~= nil then
    -- if v2 then goto L19 end
  end
  local v3 = self:getIsAIActive()
  if v3 then
    return false
  end
  if not ignoreSelection then
    if self.rootVehicle ~= nil then
      local v4 = self.rootVehicle:getSelectedVehicle()
      -- if v0 == v4 then goto L34 end
      return false
    else
      return false
    end
  end
  if self.rootVehicle ~= self then
    v4 = self.rootVehicle:getIsActiveForInput(true, activeForAI)
    -- if v4 then goto L62 end
    return false
  elseif self.getIsEntered == nil and self.getAttacherVehicle ~= nil then
    v4 = self:getAttacherVehicle()
    if v4 == nil then
      return false
    end
  end
  return true
end
function Vehicle.getIsActiveForSound(v0)
  print("Warning: Vehicle:getIsActiveForSound() is deprecated")
  return false
end
function Vehicle.getIsLowered(v0, ignoreSelection)
  return false
end
function Vehicle:updateWaterInfo()
  if self.waterCheckIsPending then
    return
  end
  local ignoreSelection, activeForAI, v3 = getWorldTranslation(self.rootNode)
  self.waterCheckPosition[1] = ignoreSelection
  self.waterCheckPosition[2] = activeForAI
  self.waterCheckPosition[3] = v3
  self.waterCheckIsPending = true
  v4:getWaterYAtWorldPositionAsync(ignoreSelection, activeForAI, v3, self.onWaterRaycastCallback, self, true)
end
function Vehicle:onWaterRaycastCallback(waterY, args)
  self.waterCheckIsPending = false
  self.waterY = waterY or -2000
  if self.waterCheckPosition[2] >= (waterY or -2000) then
  end
  self.isInWater = true
  self.isInShallowWater = false
  self.isInMediumWater = false
  if self.isInWater then
    local v6 = getTerrainHeightAtWorldPos(g_currentMission.terrainRootNode, self.waterCheckPosition[1], 0, self.waterCheckPosition[3])
    local v7 = math.max(0, waterY - v6)
    if v7 > 0.5 then
    end
    self.isInShallowWater = true
    self.isInMediumWater = not self.isInShallowWater
  end
  local v4 = math.max(0, waterY - v3)
  self.tailwaterDepth = v4
end
function Vehicle:setBroken()
  if self.isServer and not self.isBroken then
    local v3 = VehicleBrokenEvent.new(self)
    ignoreSelection:broadcastEvent(v3, nil, nil, self)
  end
  self.isBroken = true
  SpecializationUtil.raiseEvent(self, "onSetBroken")
end
function Vehicle.getVehicleDamage(v0)
  return 0
end
function Vehicle.getRepairPrice(v0)
  return 0
end
function Vehicle.getRepaintPrice(v0)
  return 0
end
function Vehicle:requestActionEventUpdate()
  if self.rootVehicle == self then
    self.actionEventUpdateRequested = true
  else
    self.rootVehicle:requestActionEventUpdate()
  end
  ignoreSelection:removeActionEvents()
end
function Vehicle.removeActionEvents(v0)
  ignoreSelection:removeActionEventsByTarget(v0)
end
function Vehicle:updateActionEvents()
  self.rootVehicle:registerActionEvents()
end
function Vehicle:registerActionEvents(excludedVehicle)
  local activeForAI = activeForAI:getIsGuiVisible()
  if not activeForAI and not g_currentMission.isPlayerFrozen and excludedVehicle ~= self then
    self.actionEventUpdateRequested = false
    activeForAI = self:getIsActiveForInput()
    local isActiveForInputIgnoreSelection = self:getIsActiveForInput(true)
    if activeForAI then
      v4:resetActiveActionBindings()
    end
    v4:beginActionEventsModification(Vehicle.INPUT_CONTEXT_NAME)
    SpecializationUtil.raiseEvent(self, "onRegisterActionEvents", activeForAI, isActiveForInputIgnoreSelection)
    self:clearActionEventsTable(self.actionEvents)
    local v4 = self:getCanToggleSelectable()
    if v4 then
      for v8, v9 in ipairs(self.selectableObjects) do
      end
      if 1 < v4 then
        v5, v6 = self:addActionEvent(self.actionEvents, InputAction.SWITCH_IMPLEMENT, self, Vehicle.actionEventToggleSelection, false, true, false, true, nil)
        v7:setActionEventTextPriority(v6, GS_PRIO_LOW)
        v7, v8 = self:addActionEvent(self.actionEvents, InputAction.SWITCH_IMPLEMENT_BACK, self, Vehicle.actionEventToggleSelectionReverse, false, true, false, true, nil)
        v7:setActionEventTextVisibility(v8, false)
      end
    end
    VehicleDebug.registerActionEvents(self)
    if Platform.gameplay.automaticVehicleControl and self.actionController ~= nil then
      v4 = self:getIsActiveForInput(true)
      if v4 and self == self.rootVehicle then
        v4:registerActionEvents(activeForAI, isActiveForInputIgnoreSelection)
      end
    end
    v4:endActionEventsModification()
  end
end
function Vehicle.clearActionEventsTable(v0, ignoreSelection)
  if ignoreSelection ~= nil then
    for v5, v6 in pairs(ignoreSelection) do
      v7:removeActionEvent(v6.actionEventId)
      ignoreSelection[v5] = nil
    end
  end
end
function Vehicle:addPoweredActionEvent(actionEventsTable, inputAction, target, callback, triggerUp, triggerDown, triggerAlways, startActive, callbackState, customIconName, ignoreCollisions, reportAnyDeviceCollision)
  return self:addActionEvent(actionEventsTable, inputAction, target, function(self, actionEventsTable, inputAction, target, callback, triggerUp, triggerDown, triggerAlways)
    local startActive, callbackState = self:getIsPowered()
    if startActive then
      u0(self, actionEventsTable, inputAction, target, callback, triggerUp, triggerDown, triggerAlways)
      return
    end
    if inputAction ~= 0 and callbackState ~= nil then
      customIconName:showBlinkingWarning(callbackState, 2000)
    end
  end, triggerUp, triggerDown, triggerAlways, startActive, callbackState, customIconName, ignoreCollisions, reportAnyDeviceCollision)
end
function Vehicle:addActionEvent(actionEventsTable, inputAction, target, callback, triggerUp, triggerDown, triggerAlways, startActive, callbackState, customIconName, ignoreCollisions, reportAnyDeviceCollision)
  local v13, v14, v15 = v13:registerActionEvent(inputAction, target, callback, triggerUp, triggerDown, triggerAlways, startActive, callbackState, true, reportAnyDeviceCollision)
  if v13 then
    actionEventsTable[inputAction] = {actionEventId = v14}
    if g_inputBinding.events[v14] ~= nil then
      g_inputBinding.events[v14].parentEventsTable = actionEventsTable
    end
    if customIconName and customIconName ~= "" then
      v17:setActionEventIcon(v14, customIconName)
    end
  end
  if v15 ~= nil then
    if ignoreCollisions ~= nil then
      -- if v11 then goto L130 end
    end
    local v16 = self:getIsSelected()
    if v16 then
      for v20, v21 in ipairs(v15) do
        if not (v21.parentEventsTable ~= nil) then
          continue
        end
        v22:removeActionEvent(v21.id)
        v21.parentEventsTable[v21.id] = nil
      end
      -- if not v16 then goto L130 end
      v17 = self:addActionEvent(actionEventsTable, inputAction, target, callback, triggerUp, triggerDown, triggerAlways, startActive, callbackState, customIconName)
      return v17
      return v13, v14
    end
    v16:removeActionEvent(v14)
    for v19, v20 in ipairs(v15) do
      if not (v20.targetObject.getIsSelected ~= nil) then
        continue
      end
      v21 = v21:getIsSelected()
      if not not v21 then
        continue
      end
      if not (v20.parentEventsTable ~= nil) then
        continue
      end
      v21:removeActionEvent(v20.id)
      v20.parentEventsTable[v20.id] = nil
    end
  end
  return v13, v14
end
function Vehicle.removeActionEvent(v0, ignoreSelection, activeForAI)
  if ignoreSelection[activeForAI] ~= nil then
    v3:removeActionEvent(ignoreSelection[activeForAI].actionEventId)
    ignoreSelection[activeForAI] = nil
  end
end
function Vehicle:updateSelectableObjects()
  self.selectableObjects = {}
  if self == self.rootVehicle then
    self:registerSelectableObjects(self.selectableObjects)
  end
end
function Vehicle:registerSelectableObjects(selectableObjects)
  local activeForAI = self:getCanBeSelected()
  if activeForAI then
    activeForAI = self:getBlockSelection()
    if not activeForAI then
      table.insert(selectableObjects, self.selectionObject)
      self.selectionObject.index = #selectableObjects
    end
  end
end
function Vehicle:addSubselection(subSelection)
  table.insert(self.selectionObject.subSelections, subSelection)
  return #self.selectionObject.subSelections
end
function Vehicle:clearSubselections()
  self.selectionObject.subSelections = {}
end
function Vehicle.getCanBeSelected(v0)
  if VehicleDebug.state == 0 then
  end
  return true
end
function Vehicle:getBlockSelection()
  return not self.allowSelection
end
function Vehicle.getCanToggleSelectable(v0)
  return false
end
function Vehicle:getRootVehicle()
  return self.rootVehicle
end
function Vehicle.findRootVehicle(v0)
  return v0
end
function Vehicle:getChildVehicles()
  return self.childVehicles
end
function Vehicle:getChildVehicleHash()
  return self.childVehicleHash
end
function Vehicle:addChildVehicles(ignoreSelection, activeForAI)
  table.insert(ignoreSelection, self)
  local v6 = tostring(self.id)
  activeForAI.childVehicleHash = activeForAI.childVehicleHash .. ":" .. v6
end
function Vehicle:updateVehicleChain(secondCall)
  local activeForAI = self:findRootVehicle()
  if activeForAI ~= self.rootVehicle then
    self.rootVehicle = activeForAI
    SpecializationUtil.raiseEvent(self, "onRootVehicleChanged", activeForAI)
  end
  if activeForAI ~= self and not secondCall then
    activeForAI:updateVehicleChain()
    return
  end
  -- TODO: structure LOP_FORNPREP (pc 27, target 33)
  self.childVehicles[#self.childVehicles] = nil
  -- TODO: structure LOP_FORNLOOP (pc 32, target 28)
  self.childVehicleHash = ""
  self:addChildVehicles(self.childVehicles, self)
  if activeForAI == self then
    -- TODO: structure LOP_FORNPREP (pc 49, target 63)
    if self.childVehicles[1] ~= activeForAI then
      v6:updateVehicleChain(true)
    end
    -- TODO: structure LOP_FORNLOOP (pc 62, target 50)
  end
end
function Vehicle:unselectVehicle()
  self.selectionObject.isSelected = false
  SpecializationUtil.raiseEvent(self, "onUnselect")
  self:requestActionEventUpdate()
end
function Vehicle:selectVehicle(subSelectionIndex, ignoreActionEventUpdate)
  self.selectionObject.isSelected = true
  SpecializationUtil.raiseEvent(self, "onSelect", subSelectionIndex)
  if ignoreActionEventUpdate ~= nil then
    -- if v2 then goto L17 end
  end
  self:requestActionEventUpdate()
end
function Vehicle:setSelectedVehicle(vehicle, subSelectionIndex, ignoreActionEventUpdate)
  if vehicle ~= nil then
    local v5 = vehicle:getCanBeSelected()
    if v5 then
      v5 = self:getBlockSelection()
      -- if not v5 then goto L35 end
    end
  end
  for v8, v9 in ipairs(self.selectableObjects) do
    local v10 = v10:getCanBeSelected()
    if not v10 then
      continue
    end
    v10 = v10:getBlockSelection()
    if not not v10 then
      continue
    end
    break
  end
  if vehicle ~= nil then
  end
  v5 = self:setSelectedObject(v4, subSelectionIndex, ignoreActionEventUpdate)
  return v5
end
function Vehicle:setSelectedObject(object, subSelectionIndex, ignoreActionEventUpdate)
  if object == nil then
    local v5 = self:getSelectedObject()
  end
  for v9, v10 in ipairs(self.selectableObjects) do
    if not (v10 == object) then
      continue
    end
  end
  if v5 then
    for v9, v10 in ipairs(self.selectableObjects) do
      if not (v10 ~= object) then
        continue
      end
      local v11 = v11:getIsSelected()
      if not v11 then
        continue
      end
      v11:unselectVehicle()
    end
    if object == v4.object then
      -- if v2 == v4.subIndex then goto L109 end
    end
    v4.object = object
    v4.index = object.index
    if subSelectionIndex ~= nil then
      v4.subIndex = subSelectionIndex
    end
    if #object.subSelections < v4.subIndex then
      v4.subIndex = 1
    end
    v6:selectVehicle(v4.subIndex, ignoreActionEventUpdate)
    return true
  else
    v6 = self:getSelectedObject()
    for v9, v10 in ipairs(self.selectableObjects) do
      if not (v10 == object) then
        continue
      end
    end
    if not v5 then
      v4.object = nil
      v4.index = 1
      v4.subIndex = 1
    end
  end
  return false
end
function Vehicle:getIsSelected()
  return self.selectionObject.isSelected
end
function Vehicle:getSelectedObject()
  if self.rootVehicle == self then
    return self.currentSelection.object
  end
  return ignoreSelection:getSelectedObject()
end
function Vehicle:getSelectedVehicle()
  local selectedObject = self:getSelectedObject()
  if selectedObject ~= nil then
    return selectedObject.vehicle
  end
  return nil
end
function Vehicle:hasInputConflictWithSelection(inputs)
  printCallstack()
  Logging.xmlWarning(self.xmlFile, "Vehicle:hasInputConflictWithSelection() is deprecated!")
  return false
end
function Vehicle:setMassDirty()
  self.isMassDirty = true
end
function Vehicle:updateMass()
  self.serverMass = 0
  for v4, v5 in ipairs(self.components) do
    if v5.defaultMass == nil then
      if v5.isDynamic then
        local v6 = getMass(v5.node)
        v5.defaultMass = v6
      else
        v5.defaultMass = 1
      end
      v5.mass = v5.defaultMass
    end
    v6 = self:getAdditionalComponentMass(v5)
    v5.mass = v5.defaultMass + v6
    self.serverMass = self.serverMass + v5.mass
  end
  for v5, v6 in ipairs(self.components) do
    local v7 = self:getComponentMass(v6)
  end
  self.precalculatedMass = ignoreSelection - self.serverMass
  for v5, v6 in ipairs(self.components) do
    if 1 < self.serverMass / (self.maxComponentMass - self.precalculatedMass) then
      v6.mass = v6.mass / self.serverMass / (self.maxComponentMass - self.precalculatedMass)
    end
    if not self.isServer then
      continue
    end
    if not v6.isDynamic then
      continue
    end
    local v8 = math.abs(v6.lastMass - v6.mass)
    if not (0.02 < v8) then
      continue
    end
    setMass(v6.node, v6.mass)
    v6.lastMass = v6.mass
  end
  activeForAI = math.min(self.serverMass, self.maxComponentMass - self.precalculatedMass)
  self.serverMass = activeForAI
end
function Vehicle:getMaxComponentMassReached()
  if self.maxComponentMass - self.precalculatedMass > self.serverMass + 0.00001 then
  end
  return true
end
function Vehicle:getAvailableComponentMass()
  return math.max(self.maxComponentMass - self.precalculatedMass - self.serverMass, 0)
end
function Vehicle.getAdditionalComponentMass(v0, ignoreSelection)
  return 0
end
function Vehicle:getTotalMass(onlyGivenVehicle)
  for v6, v7 in ipairs(self.components) do
    local v8 = self:getComponentMass(v7)
  end
  return activeForAI
end
function Vehicle.getComponentMass(v0, ignoreSelection)
  if ignoreSelection ~= nil then
    return ignoreSelection.mass
  end
  return 0
end
function Vehicle:getDefaultMass()
  for v5, v6 in ipairs(self.components) do
  end
  return ignoreSelection
end
function Vehicle:getOverallCenterOfMass()
  local totalMass = self:getTotalMass(true)
  -- TODO: structure LOP_FORNPREP (pc 13, target 39)
  local v12 = getCenterOfMass(self.components[1].node)
  local v10, v11, v12 = localToWorld(...)
  local v14 = self:getComponentMass(self.components[1])
  -- TODO: structure LOP_FORNLOOP (pc 38, target 14)
  return 0 + v10 * v14 / totalMass, 0 + v11 * v14 / totalMass, 0 + v12 * v14 / totalMass
end
function Vehicle:getVehicleWorldXRot()
  local ignoreSelection, activeForAI, v3 = localDirectionToWorld(self.components[1].node, 0, 0, 1)
  local v6 = math.atan(1 / activeForAI)
  if math.pi * 0.5 < math.pi * 0.5 - v6 then
  end
  return v4
end
function Vehicle:getVehicleWorldDirection()
  return localDirectionToWorld(self.components[1].node, 0, 0, 1)
end
function Vehicle.getFillLevelInformation(v0, ignoreSelection)
end
function Vehicle:activate()
  if self.actionController ~= nil then
    ignoreSelection:activate()
  end
  SpecializationUtil.raiseEvent(self, "onActivate")
end
function Vehicle:deactivate()
  if self.actionController ~= nil then
    ignoreSelection:deactivate()
  end
  SpecializationUtil.raiseEvent(self, "onDeactivate")
end
function Vehicle:setComponentJointFrame(jointDesc, anchorActor)
  if anchorActor == 0 then
    local v7, v8, v9 = localToLocal(jointDesc.jointNode, self.components[jointDesc.componentIndices[1]].node, 0, 0, 0)
    jointDesc.jointLocalPoses[1].trans[1] = v7
    jointDesc.jointLocalPoses[1].trans[2] = v8
    jointDesc.jointLocalPoses[1].trans[3] = v9
    v7, v8, v9 = localRotationToLocal(jointDesc.jointNode, self.components[jointDesc.componentIndices[1]].node, 0, 0, 0)
    jointDesc.jointLocalPoses[1].rot[1] = v7
    jointDesc.jointLocalPoses[1].rot[2] = v8
    jointDesc.jointLocalPoses[1].rot[3] = v9
  else
    v7, v8, v9 = localToLocal(jointDesc.jointNodeActor1, self.components[jointDesc.componentIndices[2]].node, 0, 0, 0)
    jointDesc.jointLocalPoses[2].trans[1] = v7
    jointDesc.jointLocalPoses[2].trans[2] = v8
    jointDesc.jointLocalPoses[2].trans[3] = v9
    v7, v8, v9 = localRotationToLocal(jointDesc.jointNodeActor1, self.components[jointDesc.componentIndices[2]].node, 0, 0, 0)
    jointDesc.jointLocalPoses[2].rot[1] = v7
    jointDesc.jointLocalPoses[2].rot[2] = v8
    jointDesc.jointLocalPoses[2].rot[3] = v9
  end
  if anchorActor == 1 then
  end
  if jointDesc.jointIndex ~= 0 then
    setJointFrame(jointDesc.jointIndex, anchorActor, v3)
  end
end
function Vehicle:setComponentJointRotLimit(componentJoint, axis, minLimit, maxLimit)
  if self.isServer then
    componentJoint.rotLimit[axis] = maxLimit
    componentJoint.rotMinLimit[axis] = minLimit
    if componentJoint.jointIndex ~= 0 then
      if minLimit <= maxLimit then
        setJointRotationLimit(componentJoint.jointIndex, axis - 1, true, minLimit, maxLimit)
        return
      end
      setJointRotationLimit(componentJoint.jointIndex, axis - 1, false, 0, 0)
    end
  end
end
function Vehicle:setComponentJointTransLimit(componentJoint, axis, minLimit, maxLimit)
  if self.isServer then
    componentJoint.transLimit[axis] = maxLimit
    componentJoint.transMinLimit[axis] = minLimit
    if componentJoint.jointIndex ~= 0 then
      if minLimit <= maxLimit then
        setJointTranslationLimit(componentJoint.jointIndex, axis - 1, true, minLimit, maxLimit)
        return
      end
      setJointTranslationLimit(componentJoint.jointIndex, axis - 1, false, 0, 0)
    end
  end
end
function Vehicle:loadComponentFromXML(component, xmlFile, key, rootPosition, i)
  if not self.isServer then
    local v6 = getRigidBodyType(component.node)
    if v6 == RigidBodyType.DYNAMIC then
      setRigidBodyType(component.node, RigidBodyType.KINEMATIC)
    end
  end
  local v7 = getRootNode()
  link(v7, component.node)
  if i == 1 then
    local v6, v7, v8 = getTranslation(component.node)
    rootPosition[1] = v6
    rootPosition[2] = v7
    rootPosition[3] = v8
    if rootPosition[2] ~= 0 then
      Logging.xmlWarning(self.xmlFile, "Y-Translation of component 1 (node 0>) has to be 0. Current value is: %.5f", rootPosition[2])
    end
  end
  v6 = getRigidBodyType(component.node)
  if v6 == RigidBodyType.STATIC then
    component.isStatic = true
  else
    v6 = getRigidBodyType(component.node)
    if v6 == RigidBodyType.KINEMATIC then
      component.isKinematic = true
    else
      v6 = getRigidBodyType(component.node)
      if v6 == RigidBodyType.DYNAMIC then
        component.isDynamic = true
      end
    end
  end
  v6 = CollisionFlag.getHasFlagSet(component.node, CollisionFlag.VEHICLE)
  if not v6 then
    local v9 = CollisionFlag.getBit(CollisionFlag.VEHICLE)
    local v10 = getName(component.node)
    Logging.xmlWarning(...)
  end
  v6 = CollisionFlag.getHasFlagSet(component.node, CollisionFlag.TRIGGER_VEHICLE)
  if not v6 then
    v9 = CollisionFlag.getBit(CollisionFlag.TRIGGER_VEHICLE)
    v10 = getName(component.node)
    Logging.xmlWarning(...)
  end
  v6 = getVisibility(component.node)
  if not v6 then
    v9 = getName(component.node)
    Logging.xmlDevWarning(...)
    setVisibility(component.node, true)
  end
  translate(component.node, -rootPosition[1], -rootPosition[2], -rootPosition[3])
  v6, v7, v8 = getTranslation(component.node)
  local v9, v10, v11 = getRotation(component.node)
  component.originalTranslation = {v6, v7, v8}
  component.originalRotation = {v9, v10, v11}
  component.sentTranslation = {v6, v7, v8}
  component.sentRotation = {v9, v10, v11}
  component.defaultMass = nil
  component.mass = nil
  local v12 = xmlFile:getValue(key .. "#mass")
  if v12 ~= nil then
    if v12 < 10 then
      Logging.xmlDevWarning(self.xmlFile, "Mass is lower than 10kg for '%s'. Mass unit is kilogramms. Is this correct?", key)
    end
    if component.isDynamic then
      setMass(component.node, v12 / 1000)
    end
    component.defaultMass = v12 / 1000
    component.mass = component.defaultMass
    component.lastMass = component.mass
  else
    Logging.xmlWarning(self.xmlFile, "Missing 'mass' for '%s'. Using default mass 500kg instead!", key)
    component.defaultMass = 0.5
    component.mass = 0.5
    component.lastMass = component.mass
  end
  local v13, v14, v15 = xmlFile:getValue(key .. "#centerOfMass")
  if v13 ~= nil then
    setCenterOfMass(component.node, v13, v14, v15)
  end
  local count = xmlFile:getValue(key .. "#solverIterationCount")
  if count ~= nil then
    setSolverIterationCount(component.node, count)
    component.solverIterationCount = count
  end
  local v17 = xmlFile:getValue(key .. "#motorized")
  component.motorized = v17
  self.vehicleNodes[component.node] = {component = component}
  v17 = getClipDistance(component.node)
  if 1000000 <= v17 then
    local v18 = getVisibility(component.node)
    if v18 then
      local v21 = getName(component.node)
      Logging.xmlWarning(self.xmlFile, "No clipdistance is set to component node '%s' (%s>). Set default clipdistance '%d'", v21, i - 1, 300)
      setClipDistance(component.node, 300)
    end
  end
  v18 = xmlFile:getValue(key .. "#collideWithAttachables", false)
  component.collideWithAttachables = v18
  v18 = getRigidBodyType(component.node)
  if v18 ~= RigidBodyType.NONE then
    v18 = getLinearDamping(component.node)
    if 0.01 < v18 then
      v21 = getLinearDamping(component.node)
      local v22 = getName(component.node)
      Logging.xmlDevWarning(self.xmlFile, "Non-zero linear damping (%.4f) for component node '%s' (%s>). Is this correct?", v21, v22, i - 1)
    else
      v18 = getAngularDamping(component.node)
      if 0.05 < v18 then
        v21 = getAngularDamping(component.node)
        v22 = getName(component.node)
        Logging.xmlDevWarning(self.xmlFile, "Large angular damping (%.4f) for component node '%s' (%s>). Is this correct?", v21, v22, i - 1)
      else
        v18 = getAngularDamping(component.node)
        if v18 < 0.0001 then
          v21 = getName(component.node)
          Logging.xmlDevWarning(self.xmlFile, "Zero damping for component node '%s' (%s>). Is this correct?", v21, i - 1)
        end
      end
    end
  end
  v18 = getName(component.node)
  local v19 = v18:endsWith("component" .. i)
  if not v19 then
    Logging.xmlDevWarning(self.xmlFile, "Name of component '%d' ('%s') does not correpond with the component naming convention! (vehicleName_componentName_component%d)", i, v18, i)
  end
  return true
end
function Vehicle:loadComponentJointFromXML(jointDesc, xmlFile, key, componentJointI, jointNode, index1, index2)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, key .. "#indexActor1", key .. "#nodeActor1")
  jointDesc.componentIndices = {index1, index2}
  jointDesc.jointNode = jointNode
  local v8 = xmlFile:getValue(key .. "#nodeActor1", jointNode, self.components, self.i3dMappings)
  jointDesc.jointNodeActor1 = v8
  if self.isServer then
    if self.components[index1] ~= nil then
      -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x80000000 -> L58
    end
    Logging.xmlWarning(self.xmlFile, "Invalid component indices (component1: %d, component2: %d) for component joint %d. Indices start with 1!", index1, index2, componentJointI)
    return false
    local v8, v9, v10 = xmlFile:getValue(key .. "#rotLimit")
    local v13 = Utils.getNoNil(v8, 0)
    local v12 = math.rad(...)
    local v14 = Utils.getNoNil(v9, 0)
    v13 = math.rad(...)
    local v15 = Utils.getNoNil(v10, 0)
    v14 = math.rad(...)
    v12, v13, v14 = xmlFile:getValue(key .. "#transLimit")
    v13 = Utils.getNoNil(v12, 0)
    v14 = Utils.getNoNil(v13, 0)
    v15 = Utils.getNoNil(v14, 0)
    jointDesc.rotLimit = {}
    jointDesc.transLimit = {}
    v13, v14, v15 = xmlFile:getValue(key .. "#rotMinLimit")
    v14 = Utils.getNoNilRad(v13, nil)
    v15 = Utils.getNoNilRad(v14, nil)
    local v16 = Utils.getNoNilRad(v15, nil)
    v14, v15, v16 = xmlFile:getValue(key .. "#transMinLimit")
    -- TODO: structure LOP_FORNPREP (pc 174, target 204)
    if {}[1] == nil then
      if 0 <= {}[1] then
        {}[1] = -{}[1]
      else
        {}[1] = {}[1] + 1
      end
    end
    if v14[v17] == nil then
      if 0 <= v12[v17] then
        v14[v17] = -v12[v17]
      else
        v14[v17] = v12[v17] + 1
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 203, target 175)
    jointDesc.jointLocalPoses = {}
    v16 = localToLocal(jointDesc.jointNode, self.components[index1].node, 0, 0, 0)
    local v17 = localRotationToLocal(jointDesc.jointNode, self.components[index1].node, 0, 0, 0)
    jointDesc.jointLocalPoses[1] = {trans = {}, rot = {}}
    local v18 = localToLocal(jointDesc.jointNodeActor1, self.components[index2].node, 0, 0, 0)
    v18 = localRotationToLocal(jointDesc.jointNodeActor1, self.components[index2].node, 0, 0, 0)
    jointDesc.jointLocalPoses[2] = {trans = {}, rot = {}}
    jointDesc.rotMinLimit = v13
    jointDesc.transMinLimit = v14
    local v17, v18, v19 = xmlFile:getValue(key .. "#rotLimitSpring")
    v18 = Utils.getNoNil(v17, 0)
    v19 = Utils.getNoNil(v18, 0)
    local v20 = Utils.getNoNil(v19, 0)
    v18, v19, v20 = xmlFile:getValue(key .. "#rotLimitDamping")
    v19 = Utils.getNoNil(v18, 1)
    v20 = Utils.getNoNil(v19, 1)
    local v21 = Utils.getNoNil(v20, 1)
    jointDesc.rotLimitSpring = {}
    jointDesc.rotLimitDamping = {}
    v19, v20, v21 = xmlFile:getValue(key .. "#rotLimitForceLimit")
    v20 = Utils.getNoNil(v19, -1)
    v21 = Utils.getNoNil(v20, -1)
    local v22 = Utils.getNoNil(v21, -1)
    v20, v21, v22 = xmlFile:getValue(key .. "#transLimitForceLimit")
    v21 = Utils.getNoNil(v20, -1)
    v22 = Utils.getNoNil(v21, -1)
    local v23 = Utils.getNoNil(v22, -1)
    jointDesc.rotLimitForceLimit = {}
    jointDesc.transLimitForceLimit = {}
    v21, v22, v23 = xmlFile:getValue(key .. "#transLimitSpring")
    v22 = Utils.getNoNil(v21, 0)
    v23 = Utils.getNoNil(v22, 0)
    local v24 = Utils.getNoNil(v23, 0)
    v22, v23, v24 = xmlFile:getValue(key .. "#transLimitDamping")
    v23 = Utils.getNoNil(v22, 1)
    v24 = Utils.getNoNil(v23, 1)
    local v25 = Utils.getNoNil(v24, 1)
    jointDesc.transLimitSpring = {}
    jointDesc.transLimitDamping = {}
    jointDesc.zRotationXOffset = 0
    v23 = xmlFile:getValue(key .. "#zRotationNode", nil, self.components, self.i3dMappings)
    if v23 ~= nil then
      local v25, v26, v27 = localToLocal(v23, jointNode, 0, 0, 0)
      jointDesc.zRotationXOffset = v25
    end
    v24 = xmlFile:getValue(key .. "#breakable", false)
    jointDesc.isBreakable = v24
    if jointDesc.isBreakable then
      v24 = xmlFile:getValue(key .. "#breakForce", 10)
      jointDesc.breakForce = v24
      v24 = xmlFile:getValue(key .. "#breakTorque", 10)
      jointDesc.breakTorque = v24
    end
    v24 = xmlFile:getValue(key .. "#enableCollision", false)
    jointDesc.enableCollision = v24
    v24, v25, v26 = xmlFile:getValue(key .. "#maxRotDriveForce")
    v25 = Utils.getNoNil(v24, 0)
    v26 = Utils.getNoNil(v25, 0)
    v27 = Utils.getNoNil(v26, 0)
    v25, v26, v27 = xmlFile:getValue(key .. "#rotDriveVelocity")
    v26 = Utils.getNoNilRad(v25, nil)
    v27 = Utils.getNoNilRad(v26, nil)
    local v28 = Utils.getNoNilRad(v27, nil)
    v26, v27, v28 = xmlFile:getValue(key .. "#rotDriveRotation")
    v27 = Utils.getNoNilRad(v26, nil)
    v28 = Utils.getNoNilRad(v27, nil)
    local v29 = Utils.getNoNilRad(v28, nil)
    v27, v28, v29 = xmlFile:getValue(key .. "#rotDriveSpring")
    v28 = Utils.getNoNil(v27, 0)
    v29 = Utils.getNoNil(v28, 0)
    local v30 = Utils.getNoNil(v29, 0)
    v28, v29, v30 = xmlFile:getValue(key .. "#rotDriveDamping")
    v29 = Utils.getNoNil(v28, 0)
    v30 = Utils.getNoNil(v29, 0)
    local v31 = Utils.getNoNil(v30, 0)
    jointDesc.rotDriveVelocity = {}
    jointDesc.rotDriveRotation = {}
    jointDesc.rotDriveSpring = {}
    jointDesc.rotDriveDamping = {}
    jointDesc.maxRotDriveForce = {}
    v29, v30, v31 = xmlFile:getValue(key .. "#maxTransDriveForce")
    v30 = Utils.getNoNil(v29, 0)
    v31 = Utils.getNoNil(v30, 0)
    local v32 = Utils.getNoNil(v31, 0)
    v30, v31, v32 = xmlFile:getValue(key .. "#transDriveVelocity")
    local v31, v32, v33 = xmlFile:getValue(key .. "#transDrivePosition")
    local v32, v33, v34 = xmlFile:getValue(key .. "#transDriveSpring")
    v33 = Utils.getNoNil(v32, 0)
    v34 = Utils.getNoNil(v33, 0)
    local v35 = Utils.getNoNil(v34, 0)
    v33, v34, v35 = xmlFile:getValue(key .. "#transDriveDamping")
    v34 = Utils.getNoNil(v33, 1)
    v35 = Utils.getNoNil(v34, 1)
    local v36 = Utils.getNoNil(v35, 1)
    jointDesc.transDriveVelocity = {v30, v31, v32}
    jointDesc.transDrivePosition = {v31, v32, v33}
    jointDesc.transDriveSpring = {}
    jointDesc.transDriveDamping = {}
    jointDesc.maxTransDriveForce = {}
    v34 = xmlFile:getValue(key .. "#initComponentPosition", true)
    jointDesc.initComponentPosition = v34
    jointDesc.jointIndex = 0
  end
  return true
end
function Vehicle:createComponentJoint(component1, component2, jointDesc)
  if component1 ~= nil and component2 ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x80000000 -> L14
  end
  Logging.xmlWarning(self.xmlFile, "Could not create component joint. No component1, component2 or jointDesc given!")
  return false
  local constr = JointConstructor.new()
  constr:setActors(component1.node, component2.node)
  constr:setJointLocalPositions(jointDesc.jointLocalPoses[1].trans[1], jointDesc.jointLocalPoses[1].trans[2], jointDesc.jointLocalPoses[1].trans[3], jointDesc.jointLocalPoses[2].trans[1], jointDesc.jointLocalPoses[2].trans[2], jointDesc.jointLocalPoses[2].trans[3])
  constr:setJointLocalRotations(jointDesc.jointLocalPoses[1].rot[1], jointDesc.jointLocalPoses[1].rot[2], jointDesc.jointLocalPoses[1].rot[3], jointDesc.jointLocalPoses[2].rot[1], jointDesc.jointLocalPoses[2].rot[2], jointDesc.jointLocalPoses[2].rot[3])
  constr:setRotationLimitSpring(jointDesc.rotLimitSpring[1], jointDesc.rotLimitDamping[1], jointDesc.rotLimitSpring[2], jointDesc.rotLimitDamping[2], jointDesc.rotLimitSpring[3], jointDesc.rotLimitDamping[3])
  constr:setTranslationLimitSpring(jointDesc.transLimitSpring[1], jointDesc.transLimitDamping[1], jointDesc.transLimitSpring[2], jointDesc.transLimitDamping[2], jointDesc.transLimitSpring[3], jointDesc.transLimitDamping[3])
  constr:setZRotationXOffset(jointDesc.zRotationXOffset)
  -- TODO: structure LOP_FORNPREP (pc 122, target 169)
  if jointDesc.rotMinLimit[1] <= jointDesc.rotLimit[1] then
    constr:setRotationLimit(1 - 1, jointDesc.rotMinLimit[1], jointDesc.rotLimit[1])
  end
  if jointDesc.transMinLimit[v9] <= jointDesc.transLimit[v9] then
    constr:setTranslationLimit(v9 - 1, true, jointDesc.transMinLimit[v9], jointDesc.transLimit[v9])
  else
    constr:setTranslationLimit(v9 - 1, false, 0, 0)
  end
  -- TODO: structure LOP_FORNLOOP (pc 168, target 123)
  constr:setRotationLimitForceLimit(jointDesc.rotLimitForceLimit[1], jointDesc.rotLimitForceLimit[2], jointDesc.rotLimitForceLimit[3])
  constr:setTranslationLimitForceLimit(jointDesc.transLimitForceLimit[1], jointDesc.transLimitForceLimit[2], jointDesc.transLimitForceLimit[3])
  if jointDesc.isBreakable then
    constr:setBreakable(jointDesc.breakForce, jointDesc.breakTorque)
  end
  constr:setEnableCollision(jointDesc.enableCollision)
  -- TODO: structure LOP_FORNPREP (pc 211, target 331)
  if 0.0001 < jointDesc.maxRotDriveForce[1] then
    if jointDesc.rotDriveVelocity[1] == nil then
      -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x0 -> L271
    end
    local v10 = Utils.getNoNil(jointDesc.rotDriveRotation[v9], 0)
    local v11 = Utils.getNoNil(jointDesc.rotDriveVelocity[v9], 0)
    if jointDesc.rotDriveRotation[v9] == nil then
    end
    if jointDesc.rotDriveVelocity[v9] == nil then
    end
    constr:setAngularDrive(v14, v15, true, jointDesc.rotDriveSpring[v9], jointDesc.rotDriveDamping[v9], jointDesc.maxRotDriveForce[v9], v10, v11)
  end
  if 0.0001 < jointDesc.maxTransDriveForce[v9] then
    if jointDesc.transDriveVelocity[v9] == nil then
      -- cmp-jump LOP_JUMPXEQKNIL R10 aux=0x0 -> L330
    end
    v10 = Utils.getNoNil(jointDesc.transDrivePosition[v9], 0)
    v11 = Utils.getNoNil(jointDesc.transDriveVelocity[v9], 0)
    if jointDesc.transDrivePosition[v9] == nil then
    end
    if jointDesc.transDriveVelocity[v9] == nil then
    end
    constr:setLinearDrive(v14, v15, true, jointDesc.transDriveSpring[v9], jointDesc.transDriveDamping[v9], jointDesc.maxTransDriveForce[v9], v10, v11)
  end
  -- TODO: structure LOP_FORNLOOP (pc 330, target 212)
  local v7 = constr:finalize()
  jointDesc.jointIndex = v7
  return true
end
function Vehicle.prefixSchemaOverlayName(baseName, prefix)
  if baseName ~= "" and not VehicleSchemaOverlayData.SCHEMA_OVERLAY[baseName] then
  end
  return activeForAI
end
function Vehicle:loadSchemaOverlay(xmlFile)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.schemaOverlay#file")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.schemaOverlay#width")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.schemaOverlay#height")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.schemaOverlay#invisibleBorderRight", "vehicle.base.schemaOverlay#invisibleBorderRight")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.schemaOverlay#invisibleBorderLeft", "vehicle.base.schemaOverlay#invisibleBorderLeft")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.schemaOverlay#attacherJointPosition", "vehicle.base.schemaOverlay#attacherJointPosition")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.schemaOverlay#basePosition", "vehicle.base.schemaOverlay#basePosition")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.schemaOverlay#fileSelected")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.schemaOverlay#fileTurnedOn")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.schemaOverlay#fileSelectedTurnedOn")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.base.schemaOverlay.default#name", "vehicle.base.schemaOverlay#name")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.base.schemaOverlay.turnedOn#name")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.base.schemaOverlay.selected#name")
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.base.schemaOverlay.turnedOnSelected#name")
  local activeForAI = xmlFile:hasProperty("vehicle.base.schemaOverlay")
  if activeForAI then
    XMLUtil.checkDeprecatedXMLElements(xmlFile, "vehicle.schemaOverlay.attacherJoint", "vehicle.attacherJoints.attacherJoint.schema")
    local activeForAI, v3 = xmlFile:getValue("vehicle.base.schemaOverlay#attacherJointPosition")
    local v4, v5 = xmlFile:getValue("vehicle.base.schemaOverlay#basePosition")
    if v4 == nil then
    end
    if v5 == nil then
    end
    local schemaName = xmlFile:getValue("vehicle.base.schemaOverlay#name", "")
    local v8 = Vehicle.prefixSchemaOverlayName(schemaName, self.customEnvironment or "")
    local v12 = xmlFile:getValue("vehicle.base.schemaOverlay#invisibleBorderRight")
    local v13 = xmlFile:getValue("vehicle.base.schemaOverlay#invisibleBorderLeft")
    v8 = VehicleSchemaOverlayData.new(...)
    self.schemaOverlay = v8
  end
end
function Vehicle.getAdditionalSchemaText(v0)
  return nil
end
function Vehicle.getUseTurnedOnSchema(v0)
  return false
end
function Vehicle.dayChanged(v0)
end
function Vehicle:periodChanged()
  self.age = self.age + 1
end
function Vehicle.raiseStateChange(v0, ignoreSelection, ...)
  SpecializationUtil.raiseEvent(...)
end
function Vehicle.doCheckSpeedLimit(v0)
  return false
end
function Vehicle.getWorkLoad(v0)
  return 0, 0
end
function Vehicle.interact(v0)
end
function Vehicle.getInteractionHelp(v0)
  return ""
end
function Vehicle:getDistanceToNode(node)
  self.interactionFlag = Vehicle.INTERACTION_FLAG_NONE
  return math.huge
end
function Vehicle:getIsAIActive()
  if self.getAttacherVehicle ~= nil then
    local attacherVehicle = self:getAttacherVehicle()
    if attacherVehicle ~= nil then
      return attacherVehicle:getIsAIActive()
    end
  end
  return false
end
function Vehicle.getIsPowered(v0)
  return true
end
function Vehicle.getRequiresPower(v0)
  return false
end
function Vehicle.addVehicleToAIImplementList(v0, ignoreSelection)
end
function Vehicle:setOperatingTime(operatingTime, isLoading)
  if not isLoading and self.propertyState == Vehicle.PROPERTY_STATE_LEASED and g_currentMission ~= nil and g_currentMission.economyManager ~= nil then
    local v3 = math.floor(operatingTime / 3600000)
    local v4 = math.floor(self.operatingTime / 3600000)
    if v4 < v3 then
      v3:vehicleOperatingHourChanged(self)
    end
  end
  v4 = Utils.getNoNil(operatingTime, 0)
  v3 = math.max(v4, 0)
  self.operatingTime = v3
end
function Vehicle:getOperatingTime()
  return self.operatingTime
end
function Vehicle:doCollisionMaskCheck(targetCollisionMask, path, node, str)
  if path ~= nil then
    local v6 = v6:getValue(path, false)
  end
  if not v5 then
    if node == nil then
      for v10, v11 in ipairs(self.components) do
        if not v6 then
          local v14 = getCollisionMask(v11.node)
          local v13 = bitAND(v14, targetCollisionMask)
          if v13 ~= targetCollisionMask then
          end
        end
      end
    elseif not false then
      v9 = getCollisionMask(node)
      v8 = bitAND(v9, targetCollisionMask)
      if v8 ~= targetCollisionMask then
      end
    end
    if not v6 then
      printCallstack()
      if not str then
      end
      v11 = MathUtil.numberToSetBitsStr(targetCollisionMask)
      v7(v8, v9, v10, v11, path)
      return false
    end
  end
  return true
end
function Vehicle.getIsReadyForAutomatedTrainTravel(v0)
  return true
end
function Vehicle.getIsAutomaticShiftingAllowed(v0)
  return true
end
function Vehicle:getSpeedLimit(onlyIfWorking)
  local node = self:doCheckSpeedLimit()
  if onlyIfWorking ~= nil then
    -- if not v1 then goto L27 end
    -- if not v3 then goto L27 end
  end
  local str = self:getRawSpeedLimit()
  str = self:getVehicleDamage()
  if 0 < str then
  end
  if self.getAttachedImplements ~= nil then
    local v5 = self:getAttachedImplements()
  end
  if str ~= nil then
    for v8, v9 in pairs(str) do
      if not (v9.object ~= nil) then
        continue
      end
      local v10, v11 = v10:getSpeedLimit(onlyIfWorking)
      if onlyIfWorking ~= nil then
        -- if not v1 then goto L65 end
        -- if not v11 then goto L65 end
      end
      local v12 = math.min(path, v10)
    end
  end
  return path, node
end
function Vehicle:getRawSpeedLimit()
  return self.speedLimit
end
function Vehicle:onVehicleWakeUpCallback(id)
  self:raiseActive()
end
function Vehicle:getCanByMounted()
  return entityExists(self.components[1].node)
end
function Vehicle:getDailyUpkeep()
  local targetCollisionMask = targetCollisionMask:getItemByXMLFilename(self.configFileName)
  return Vehicle.calculateDailyUpkeep(targetCollisionMask, self.age, self.operatingTime, self.configurations)
end
function Vehicle:calculateDailyUpkeep(targetCollisionMask, path, node)
  if self.lifetime ~= nil and self.lifetime ~= 0 then
    local v7 = math.min(targetCollisionMask / self.lifetime, 1)
    local v8 = math.min(path / 3600000 / self.lifetime * EconomyManager.LIFETIME_OPERATINGTIME_RATIO, 1)
  end
  local v6 = StoreItemUtil.getDailyUpkeep(self, node)
  return v6 * str
end
function Vehicle:getName()
  local targetCollisionMask = targetCollisionMask:getItemByXMLFilename(self.configFileName)
  if targetCollisionMask ~= nil and targetCollisionMask.configurations ~= nil then
    for v5, v6 in pairs(targetCollisionMask.configurations) do
      if not (targetCollisionMask.configurations[v5][self.configurations[v5]].vehicleName ~= nil) then
        continue
      end
      if not (targetCollisionMask.configurations[v5][self.configurations[v5]].vehicleName ~= "") then
        continue
      end
      return targetCollisionMask.configurations[v5][self.configurations[v5]].vehicleName
    end
  end
  return targetCollisionMask.name
end
function Vehicle:getFullName()
  local name = self:getName()
  local path = path:getItemByXMLFilename(self.configFileName)
  if path ~= nil then
    local v5 = self:getBrand()
    local node = node:getBrandByIndex(...)
    if node ~= nil then
    end
  end
  return name
end
function Vehicle:getBrand()
  local targetCollisionMask = targetCollisionMask:getItemByXMLFilename(self.configFileName)
  if targetCollisionMask ~= nil and targetCollisionMask.configurations ~= nil then
    for v5, v6 in pairs(targetCollisionMask.configurations) do
      if not (targetCollisionMask.configurations[v5][self.configurations[v5]].vehicleBrand ~= nil) then
        continue
      end
      return targetCollisionMask.configurations[v5][self.configurations[v5]].vehicleBrand
    end
  end
  return targetCollisionMask.brandIndex
end
function Vehicle:getImageFilename()
  local targetCollisionMask = targetCollisionMask:getItemByXMLFilename(self.configFileName)
  if targetCollisionMask ~= nil and targetCollisionMask.configurations ~= nil then
    for v5, v6 in pairs(targetCollisionMask.configurations) do
      if targetCollisionMask.configurations[v5][self.configurations[v5]] == nil then
        Logging.xmlWarning(self.xmlFile, "Vehicle has an invalid configuration value %s for %s", self.configurations[v5], v5)
      else
        if not (targetCollisionMask.configurations[v5][self.configurations[v5]].vehicleIcon ~= nil) then
          continue
        end
        if not (targetCollisionMask.configurations[v5][self.configurations[v5]].vehicleIcon ~= "") then
          continue
        end
        return targetCollisionMask.configurations[v5][self.configurations[v5]].vehicleIcon
      end
    end
  end
  return targetCollisionMask.imageFilename
end
function Vehicle:getCanBePickedUp(byPlayer)
  if self.supportsPickUp then
    local path = path:canPlayerAccess(self, byPlayer)
  end
  return path
end
function Vehicle:getCanBeReset()
  return self.canBeReset
end
function Vehicle:getReloadXML()
  local targetCollisionMask = XMLFile.create("vehicleXMLFile", "", "vehicles", Vehicle.xmlSchemaSavegame)
  if targetCollisionMask ~= nil then
    local path = string.format("vehicles.vehicle(%d)", 0)
    targetCollisionMask:setValue(path .. "#id", 1)
    local v7 = NetworkUtil.convertToNetworkFilename(self.configFileName)
    local v6 = HTMLUtil.encodeToHTML(...)
    targetCollisionMask:setValue(...)
    self.currentSavegameId = 1
    self:saveToXMLFile(targetCollisionMask, path, {})
    return targetCollisionMask
  end
  return nil
end
function Vehicle.getIsInUse(v0, targetCollisionMask)
  return false
end
function Vehicle:getPropertyState()
  return self.propertyState
end
function Vehicle:getAreControlledActionsAvailable()
  local targetCollisionMask = self:getIsAIActive()
  if targetCollisionMask then
    return false
  end
  if self.actionController ~= nil then
    targetCollisionMask = targetCollisionMask:getAreControlledActionsAvailable()
    return targetCollisionMask
  end
  return false
end
function Vehicle:getAreControlledActionsAccessible()
  local targetCollisionMask = self:getIsAIActive()
  if targetCollisionMask then
    return false
  end
  if self.actionController ~= nil then
    targetCollisionMask = targetCollisionMask:getAreControlledActionsAccessible()
    return targetCollisionMask
  end
  return false
end
function Vehicle:getControlledActionIcons()
  if self.actionController ~= nil then
    local targetCollisionMask, path, node = targetCollisionMask:getControlledActionIcons()
    if targetCollisionMask ~= nil then
      return targetCollisionMask, path, node
    end
  end
  return "TURN_ON", "TURN_ON", true
end
function Vehicle:getAreControlledActionsAllowed()
  local path = self:getIsAIActive()
  return not path, ""
end
function Vehicle:playControlledActions()
  if self.actionController ~= nil then
    targetCollisionMask:playControlledActions()
  end
end
function Vehicle:getActionControllerDirection()
  if self.actionController ~= nil then
    return targetCollisionMask:getActionControllerDirection()
  end
  return 1
end
function Vehicle:createMapHotspot()
  local targetCollisionMask = VehicleHotspot.new()
  targetCollisionMask:setVehicle(self)
  targetCollisionMask:setVehicleType(self.mapHotspotType)
  local str = self:getOwnerFarmId()
  targetCollisionMask:setOwnerFarmId(...)
  self.mapHotspot = targetCollisionMask
  path:addMapHotspot(targetCollisionMask)
end
function Vehicle:deleteMapHotspot()
  if self.mapHotspot ~= nil then
    targetCollisionMask:removeMapHotspot(self.mapHotspot)
    targetCollisionMask:delete()
    self.mapHotspot = nil
  end
end
function Vehicle:getMapHotspot()
  return self.mapHotspot
end
function Vehicle:updateMapHotspot()
  if self.mapHotspot ~= nil then
    local node = self:getIsMapHotspotVisible()
    targetCollisionMask:setVisible(...)
  end
end
function Vehicle.getIsMapHotspotVisible(v0)
  return true
end
function Vehicle:getMapHotspotRotation(targetCollisionMask)
  local path, node, str = localDirectionToWorld(self.rootNode, 0, 0, 1)
  local v6 = MathUtil.getYRotationFromDirection(path, str)
  return v6 + math.pi
end
function Vehicle:getShowInVehiclesOverview()
  if self.showInVehicleOverview and self.propertyState ~= Vehicle.PROPERTY_STATE_OWNED and self.propertyState ~= Vehicle.PROPERTY_STATE_LEASED then
  end
  return targetCollisionMask
end
function Vehicle:showInfo(box)
  if self.isBroken then
    local str = str:getText("infohud_vehicleBrokenNeedToReset")
    box:addLine(str, nil, true)
  end
end
function Vehicle.loadObjectChangeValuesFromXML(v0, targetCollisionMask, path, node, str)
end
function Vehicle.setObjectChangeValues(v0, targetCollisionMask, path)
end
function Vehicle:wakeUp()
  I3DUtil.wakeUpObject(self.components[1].node)
end
function Vehicle:setOwnerFarmId(farmId, noEventSend)
  local str = str:superClass()
  str.setOwnerFarmId(self, farmId, noEventSend)
  if self.mapHotspot ~= nil then
    node:setOwnerFarmId(farmId)
  end
end
function Vehicle:actionEventToggleSelection(actionName, inputValue, callbackState, isAnalog)
  if self.currentSelection.object ~= nil then
  end
  if v9 < v8 + 1 and #self.selectableObjects < v7 + 1 then
  end
  if v6 == v12 and v7 == v11 then
    -- if v8 == v10 then goto L41 end
  end
  self:setSelectedObject(v12, v10)
end
function Vehicle:actionEventToggleSelectionReverse(actionName, inputValue, callbackState, isAnalog)
  if self.currentSelection.subIndex - 1 < 1 then
    if self.currentSelection.index - 1 < 1 then
    end
    if self.selectableObjects[v10] ~= nil then
    end
  end
  if v6 == v11 and v7 == v10 then
    -- if v8 == v9 then goto L41 end
  end
  self:setSelectedObject(v11, v9)
end
function Vehicle.getSpecValueAge(storeItem, realItem, _, saleItem)
  if realItem ~= nil and realItem.age ~= nil then
    return str:formatNumMonth(realItem.age)
  end
  if saleItem ~= nil and saleItem.age ~= nil then
    str = str:formatNumMonth(saleItem.age)
    return str
  end
  return nil
end
function Vehicle:getSpecValueDailyUpkeep(targetCollisionMask, path, node)
  if targetCollisionMask ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L13
    local v5 = targetCollisionMask:getDailyUpkeep()
  elseif node ~= nil then
  end
  if str == 0 then
    return nil
  end
  local v6 = v6:getText("shop_maintenanceValue")
  local v7 = v7:formatMoney(str, 2)
  v5 = string.format(...)
  return v5
end
function Vehicle.getSpecValueOperatingTime(storeItem, realItem, _, saleItem)
  if realItem ~= nil then
    -- cmp-jump LOP_JUMPXEQKNIL R5 aux=0x0 -> L10
  elseif saleItem ~= nil then
  else
    return nil
  end
  local v6 = math.floor(str / 60000 / 60)
  local v7 = math.floor((str / 60000 - v6 * 60) / 6)
  local v8 = v8:getText("shop_operatingTime")
  v7 = string.format(v8, v6, v7)
  return v7
end
function Vehicle:loadSpecValueWorkingWidth(realItem, _)
  return self:getValue("vehicle.storeData.specs.workingWidth")
end
function Vehicle:getSpecValueWorkingWidth(realItem)
  if self.specs.workingWidth ~= nil then
    local saleItem = saleItem:getText("shop_workingWidthValue")
    local str = str:formatNumber(self.specs.workingWidth, 1, true)
    return string.format(...)
  end
  return nil
end
function Vehicle:loadSpecValueWorkingWidthConfig(realItem, _)
  local v6 = v6:getConfigurations()
  for v8, v9 in pairs(...) do
    local v10 = v10:getConfigurationAttribute(v8, "xmlKey")
    if v10 ~= nil then
    else
    end
    local v11 = string.format("vehicle%s.%sConfigurations", v10, v8)
    saleItem[v8] = {}
    while true do
      v13 = string.format("%s.%sConfiguration(%d)", v11, v8, v12)
      v14 = self:hasProperty(v13)
      if not v14 then
        break
      end
      v16 = self:getValue(v13 .. "#workingWidth")
      saleItem[v8][v12 + 1] = v16
      if saleItem[v8][v12 + 1] ~= nil then
      end
    end
  end
  if str then
    return saleItem
  end
end
function Vehicle:getSpecValueWorkingWidthConfig(realItem, _, saleItem, str, v5)
  if self.specs.workingWidthConfig ~= nil then
    if _ ~= nil then
      if realItem == nil then
        -- cmp-jump LOP_JUMPXEQKNIL R3 aux=0x0 -> L31
      end
      for v11, v12 in pairs(_) do
        if not (self.specs.workingWidthConfig[v11][v12] ~= nil) then
          continue
        end
      end
    else
      for v13, v14 in pairs(self.specs.workingWidthConfig) do
        for v18, v19 in pairs(v14) do
          local v20 = math.min(v8, v19)
          v20 = math.max(v9, v19)
        end
      end
    end
    if not str then
      if v6 ~= 0 and v6 ~= math.huge and v6 ~= v7 then
        v9 = v9:getText("shop_workingWidthValue")
        v12 = v12:formatNumber(v6, 1, true)
        v13 = v13:formatNumber(v7, 1, true)
        v10 = string.format(...)
        v8 = string.format(...)
        return v8
      end
      v9 = v9:getText("shop_workingWidthValue")
      v10 = v10:formatNumber(v7, 1, true)
      v8 = string.format(...)
      return v8
    end
    return v7
  end
  return nil
end
function Vehicle:loadSpecValueSpeedLimit(realItem, _)
  return self:getValue("vehicle.base.speedLimit#value")
end
function Vehicle:getSpecValueSpeedLimit(realItem)
  if self.specs.speedLimit ~= nil then
    local saleItem = saleItem:getText("shop_maxSpeed")
    local v6 = v6:getSpeed(self.specs.speedLimit)
    local str = string.format(...)
    local v5 = v5:getSpeedMeasuringUnit()
    return string.format(...)
  end
  return nil
end
function Vehicle:loadSpecValueWeight(realItem, _)
  self:iterate("vehicle.base.components.component", function(self, realItem)
    local saleItem = saleItem:getValue(realItem .. "#mass", 0)
    u1.componentMass = u1.componentMass + saleItem / 1000
  end)
  local str = FillUnit.loadSpecValueFillUnitMassData(self, realItem, _)
  str = Wheels.loadSpecValueWheelWeight(self, realItem, _)
  self:iterate("vehicle.storeData.specs.weight.config", function(self, realItem)
    local saleItem = saleItem:getValue(realItem .. "#name")
    if {name = saleItem}.name ~= nil then
      saleItem = saleItem:getValue(realItem .. "#index", 1)
      local str = str:getValue(realItem .. "#value", 0)
      if not u1 then
      end
      saleItem = math.min(str, _.value * 1000)
      u1 = saleItem
      if not u2 then
      end
      saleItem = math.max(str, _.value * 1000)
      u2 = saleItem
      table.insert(u3.storeDataConfigs, _)
    end
  end)
  if #{componentMass = 0, fillUnitMassData = str, wheelMassDefaultConfig = str, storeDataConfigs = {}}.storeDataConfigs == 0 then
  end
  local v6 = self:getValue("vehicle.storeData.specs.weight#ignore", false)
  if not v6 then
    v6 = self:getValue("vehicle.storeData.specs.weight#minValue", str)
    saleItem.storeDataMin = v6
    v6 = self:getValue("vehicle.storeData.specs.weight#maxValue", v5)
    saleItem.storeDataMax = v6
    if 0 >= saleItem.componentMass then
      -- cmp-jump LOP_JUMPXEQKNIL R6 aux=0x0 -> L82
    end
    return saleItem
  end
end
function Vehicle:getSpecConfigValuesWeight(realItem, _, saleItem, str, v5)
  if self.specs.weight ~= nil and self.specs.weight.storeDataConfigs ~= nil then
    return self.specs.weight.storeDataConfigs
  end
end
function Vehicle:getSpecValueWeight(realItem, _, saleItem, str, v5)
  if self.specs.weight ~= nil then
    if realItem ~= nil then
      realItem:updateMass()
      local v8 = realItem:getTotalMass(true)
    elseif self.specs.weight.storeDataMin ~= nil then
    else
      if self.specs.weight.componentMass ~= nil then
        v8 = FillUnit.getSpecValueStartFillUnitMassByMassData(self.specs.weight.fillUnitMassData)
      end
    end
    if v6 ~= nil and v6 ~= 0 then
      if str then
        if v5 then
          return v6, v7
        end
        return v6
      end
      if v7 ~= nil and v7 ~= 0 then
        v8 = v8:formatMass(v6, v7)
        return v8
      end
      v8 = v8:formatMass(v6)
      return v8
    end
  end
  return nil
end
function Vehicle:loadSpecValueAdditionalWeight(realItem, _)
  local saleItem = self:getValue("vehicle.base.components#maxMass")
  if saleItem ~= nil then
    return saleItem / 1000
  end
end
function Vehicle:getSpecValueAdditionalWeight(realItem, _, saleItem, str, v5)
  if not g_currentMission.missionInfo.trailerFillLimit then
    return nil
  end
  if self.specs.additionalWeight ~= nil then
    local v6 = Vehicle.getSpecValueWeight(self, realItem, _, saleItem, true)
    if v6 ~= nil then
      if str then
        return self.specs.additionalWeight - v6
      end
      return v8:formatMass(v7)
    end
  end
  return nil
end
function Vehicle:loadSpecValueCombinations(realItem, _)
  self:iterate("vehicle.storeData.specs.combination", function(self, realItem)
    local saleItem = saleItem:getValue(realItem .. "#xmlFilename")
    if saleItem ~= nil then
      local str = Utils.getFilename(saleItem)
      str = Utils.getFilename(saleItem, u1)
      str = str:getItemByXMLFilename({xmlFilename = str, customXMLFilename = str}.customXMLFilename)
      if str == nil then
        local v5 = v5:getItemByXMLFilename({xmlFilename = str, customXMLFilename = str}.xmlFilename)
      end
      if str == nil then
        Logging.warning("Could not find combination vehicle '%s'", _.xmlFilename)
      end
    end
    str = str:getValue(realItem .. "#filterCategory")
    if str ~= nil then
      v5 = str:split(" ")
      _.filterCategories = v5
    end
    v5 = v5:getValue(realItem .. "#filterSpec")
    _.filterSpec = v5
    v5 = v5:getValue(realItem .. "#filterSpecMin", 0)
    _.filterSpecMin = v5
    v5 = v5:getValue(realItem .. "#filterSpecMax", 1)
    _.filterSpecMax = v5
    if _.xmlFilename == nil and _.filterCategories == nil then
      -- if not v2.filterSpec then goto L111 end
    end
    table.insert(u2, _)
  end)
  return {}
end
function Vehicle:getSpecValueCombinations(realItem)
  return self.specs.combinations
end
function Vehicle:getSpecValueSlots(realItem, _, saleItem, str, v5)
  local v6 = v6:getNumOfItems(self)
  if realItem ~= nil then
    if v6 ~= 1 then
    end
    local v8 = v8:getStoreItemSlotUsage(v10, true)
    -- cmp-jump LOP_JUMPXEQKN R8 aux=0x8 -> L78
  else
    if v6 ~= 0 then
    end
    v8 = v8:getStoreItemSlotUsage(v10, true)
    if self.bundleInfo ~= nil then
      -- TODO: structure LOP_FORNPREP (pc 47, target 73)
      local v13 = v13:getNumOfItems(self.bundleInfo.bundleItems[1].item)
      if v13 ~= 0 then
      end
      local v14 = v14:getStoreItemSlotUsage(v16, true)
      -- TODO: structure LOP_FORNLOOP (pc 72, target 48)
    end
    if v8 ~= 0 then
    end
  end
  if v7 ~= "" then
    return v7
  end
  return nil
end
