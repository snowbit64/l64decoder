-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InputAction = {}
local InputAction_mt = Class(InputAction)
InputAction.AXIS_TYPE = {HALF = "HALF", FULL = "FULL"}
InputAction.CATEGORY = {SYSTEM = 1, ONFOOT = 2, VEHICLE = 3}
function InputAction.new(name, categories, displayCategory, axisType, isLocked, ignoreComboMask, displayNamePositive, displayNameNegative, isBaseAction, isConsoleAction, isMobileAction)
  local v11 = setmetatable({}, u0)
  v11.name = name
  v11.displayNamePositive = displayNamePositive
  v11.displayNameNegative = displayNameNegative
  v11.categories = categories
  v11.axisType = axisType
  v11.isLocked = isLocked
  v11.ignoreComboMask = ignoreComboMask
  v11.displayCategory = displayCategory
  local v12 = Utils.getNoNil(isBaseAction, true)
  v11.isBaseAction = v12
  v12 = Utils.getNoNil(isConsoleAction, true)
  v11.isConsoleAction = v12
  v12 = Utils.getNoNil(isMobileAction, true)
  v11.isMobileAction = v12
  v11.bindingsKnown = false
  v11.bindings = {}
  v11.activeBindings = {}
  v11.isConsumed = false
  v11.comboMaskGamepad = 0
  v11.comboMaskMouse = 0
  v11.primaryKeyboardInput = nil
  return v11
end
function InputAction.createFromXML(xmlFile, elementTag)
  local v2 = getXMLString(xmlFile, elementTag .. "#name")
  local v4 = getXMLString(xmlFile, elementTag .. "#category")
  v4 = (v4 or ""):split(" ")
  for v9, v10 in ipairs(v4) do
    if not (InputAction.CATEGORY[v10] ~= nil) then
      continue
    end
    v5[InputAction.CATEGORY[v10]] = InputAction.CATEGORY[v10]
  end
  v6 = getXMLString(xmlFile, elementTag .. "#displayCategory")
  if v6 ~= nil then
  end
  v7 = getXMLString(xmlFile, elementTag .. "#axisType")
  if v7 ~= InputAction.AXIS_TYPE.FULL and v7 ~= InputAction.AXIS_TYPE.HALF then
  end
  v9 = getXMLBool(xmlFile, elementTag .. "#locked")
  v8 = Utils.getNoNil(v9, false)
  v10 = getXMLBool(xmlFile, elementTag .. "#ignoreComboMask")
  v9 = Utils.getNoNil(v10, false)
  v10 = getXMLBool(xmlFile, elementTag .. "#isBaseAction")
  local v11 = getXMLBool(xmlFile, elementTag .. "#isConsoleAction")
  local v12 = getXMLBool(xmlFile, elementTag .. "#isMobileAction")
  local v13 = table.hasElement(Platform.lockedInputActionNames, v2)
  if v13 then
  end
  if v2 and not InputAction[v2] then
    InputAction[v2] = v2
  end
  v13 = InputAction.new(v2, v5, v6, v7, v8, v9, nil, nil, v10, v11, v12)
  return v13
end
function InputAction:getIsSupportedOnCurrentPlatfrom()
  if not self.isBaseAction then
    -- if GS_PLATFORM_PC then goto L18 end
  end
  if not self.isConsoleAction then
    -- if GS_IS_CONSOLE_VERSION then goto L18 end
  end
  if not self.isMobileAction and GS_IS_MOBILE_VERSION then
    return false
  end
  return true
end
function InputAction:addBinding(binding)
  for v5, v6 in pairs(self.bindings) do
    if not (v6.id == binding.id) then
      continue
    end
    return
  end
  table.insert(self.bindings, binding)
  self:resetActiveBindings()
end
function InputAction:removeBinding(binding)
  for v5, v6 in ipairs(self.bindings) do
    if not (v6.id == binding.id) then
      continue
    end
    table.remove(self.bindings, v5)
    return
  end
  self:resetActiveBindings()
end
function InputAction:disableBinding(binding)
  for v5, v6 in ipairs(self.activeBindings) do
    if not (v6.id == binding.id) then
      continue
    end
    table.remove(self.activeBindings, v5)
    return
  end
end
function InputAction:enableBinding(binding)
  for v5, v6 in ipairs(self.bindings) do
    if not (v6.id == binding.id) then
      continue
    end
    table.addElement(self.activeBindings, binding)
  end
end
function InputAction:getBindings()
  return self.bindings
end
function InputAction:getActiveBindings()
  return self.activeBindings
end
function InputAction:getNumActiveBindings(ignoreDeviceState)
  -- TODO: structure LOP_FORNPREP (pc 6, target 20)
  if g_inputBinding.deviceIdToInternal[self.activeBindings[1].deviceId] == nil then
    -- if not v1 then goto L19 end
  end
  -- TODO: structure LOP_FORNLOOP (pc 19, target 7)
  return v2 + 1
end
function InputAction:resetActiveBindings()
  for v4 in pairs(self.activeBindings) do
    self.activeBindings[v4] = nil
  end
  for v4, v5 in ipairs(self.bindings) do
    table.insert(self.activeBindings, v5)
  end
end
function InputAction:clearBindings()
  self.bindings = {}
  self.activeBindings = {}
end
function InputAction:getBindingAtSlot(axisComponent, isKbMouse, slotIndex)
  for v7, v8 in pairs(self.bindings) do
    local v9 = v8:isSameSlotWithParams(axisComponent, isKbMouse, slotIndex)
    if not v9 then
      continue
    end
    return v8
  end
  return nil
end
function InputAction:setPrimaryKeyboardBinding(binding)
  local v2 = table.concat(binding.axisNames, " ")
  self.primaryKeyboardInput = v2
end
function InputAction:isFullAxis()
  if self.axisType ~= InputAction.AXIS_TYPE.FULL then
  end
  return true
end
function InputAction:getIgnoreComboMask()
  return self.ignoreComboMask
end
function InputAction:clone()
  return InputAction.new(self.name, self.categories, self.displayCategory, self.axisType, self.isLocked, self.ignoreComboMask, self.displayNamePositive, self.displayNameNegative)
end
function InputAction:toString()
  for v5 in pairs(self.categories) do
  end
  v4 = tostring(self.name)
  local v6 = tostring(self.axisType)
  local v7 = tostring(self.isLocked)
  v2 = string.format(...)
  return v2
end
InputAction_mt.__tostring = InputAction.toString
InputAction.JUMP = "JUMP"
InputAction.ACTIVATE_HANDTOOL = "ACTIVATE_HANDTOOL"
InputAction.INTERACT = "INTERACT"
InputAction.THROW_OBJECT = "THROW_OBJECT"
InputAction.ROTATE_OBJECT_LEFT_RIGHT = "ROTATE_OBJECT_LEFT_RIGHT"
InputAction.ROTATE_OBJECT_UP_DOWN = "ROTATE_OBJECT_UP_DOWN"
InputAction.ENTER = "ENTER"
InputAction.CROUCH = "CROUCH"
InputAction.TOGGLE_LIGHTS_FPS = "TOGGLE_LIGHTS_FPS"
InputAction.CAMERA_SWITCH = "CAMERA_SWITCH"
InputAction.ACTIVATE_OBJECT = "ACTIVATE_OBJECT"
InputAction.ANIMAL_PET = "ANIMAL_PET"
InputAction.PAUSE = "PAUSE"
InputAction.SKIP_MESSAGE_BOX = "SKIP_MESSAGE_BOX"
InputAction.CAMERA_ZOOM_IN = "CAMERA_ZOOM_IN"
InputAction.CAMERA_ZOOM_OUT = "CAMERA_ZOOM_OUT"
InputAction.SWITCH_VEHICLE = "SWITCH_VEHICLE"
InputAction.SWITCH_VEHICLE_BACK = "SWITCH_VEHICLE_BACK"
InputAction.MENU = "MENU"
InputAction.TOGGLE_STORE = "TOGGLE_STORE"
InputAction.TOGGLE_MAP = "TOGGLE_MAP"
InputAction.TOGGLE_HELP = "TOGGLE_HELP"
InputAction.TOGGLE_CHARACTER_CREATION = "TOGGLE_CHARACTER_CREATION"
InputAction.TOGGLE_CONSTRUCTION = "TOGGLE_CONSTRUCTION"
InputAction.ATTACH = "ATTACH"
InputAction.SWITCH_IMPLEMENT = "SWITCH_IMPLEMENT"
InputAction.TOGGLE_AI = "TOGGLE_AI"
InputAction.HONK = "HONK"
InputAction.TOGGLE_MOTOR_STATE = "TOGGLE_MOTOR_STATE"
InputAction.SHIFT_GEAR_UP = "SHIFT_GEAR_UP"
InputAction.SHIFT_GEAR_DOWN = "SHIFT_GEAR_DOWN"
InputAction.TOGGLE_TIPSTATE = "TOGGLE_TIPSTATE"
InputAction.TOGGLE_LIGHTS = "TOGGLE_LIGHTS"
InputAction.TOGGLE_BEACON_LIGHTS = "TOGGLE_BEACON_LIGHTS"
InputAction.TOGGLE_TIPSIDE = "TOGGLE_TIPSIDE"
InputAction.TOGGLE_TURNLIGHT_LEFT = "TOGGLE_TURNLIGHT_LEFT"
InputAction.TOGGLE_TURNLIGHT_RIGHT = "TOGGLE_TURNLIGHT_RIGHT"
InputAction.TOGGLE_CRABSTEERING = "TOGGLE_CRABSTEERING"
InputAction.TOGGLE_TENSION_BELTS = "TOGGLE_TENSION_BELTS"
InputAction.LOWER_IMPLEMENT = "LOWER_IMPLEMENT"
InputAction.IMPLEMENT_EXTRA = "IMPLEMENT_EXTRA"
InputAction.IMPLEMENT_EXTRA2 = "IMPLEMENT_EXTRA2"
InputAction.IMPLEMENT_EXTRA3 = "IMPLEMENT_EXTRA3"
InputAction.IMPLEMENT_EXTRA4 = "IMPLEMENT_EXTRA4"
InputAction.UNLOAD_FORK = "UNLOAD_FORK"
InputAction.TOGGLE_PIPE = "TOGGLE_PIPE"
InputAction.TOGGLE_COVER = "TOGGLE_COVER"
InputAction.TOGGLE_CHOPPER = "TOGGLE_CHOPPER"
InputAction.TOGGLE_MAP_SIZE = "TOGGLE_MAP_SIZE"
InputAction.CHANGE_DRIVING_DIRECTION = "CHANGE_DRIVING_DIRECTION"
InputAction.TOGGLE_TIPSTATE_GROUND = "TOGGLE_TIPSTATE_GROUND"
InputAction.TOGGLE_CRUISE_CONTROL = "TOGGLE_CRUISE_CONTROL"
InputAction.RADIO_TOGGLE = "RADIO_TOGGLE"
InputAction.RADIO_NEXT_CHANNEL = "RADIO_NEXT_CHANNEL"
InputAction.RADIO_PREVIOUS_CHANNEL = "RADIO_PREVIOUS_CHANNEL"
InputAction.RADIO_NEXT_ITEM = "RADIO_NEXT_ITEM"
InputAction.RADIO_PREVIOUS_ITEM = "RADIO_PREVIOUS_ITEM"
InputAction.INGAMEMAP_ACCEPT = "INGAMEMAP_ACCEPT"
InputAction.MENU_ACCEPT = "MENU_ACCEPT"
InputAction.MENU_ACTIVATE = "MENU_ACTIVATE"
InputAction.MENU_CANCEL = "MENU_CANCEL"
InputAction.MENU_BACK = "MENU_BACK"
InputAction.MENU_PAGE_PREV = "MENU_PAGE_PREV"
InputAction.MENU_PAGE_NEXT = "MENU_PAGE_NEXT"
InputAction.TAKE_SCREENSHOT = "TAKE_SCREENSHOT"
InputAction.ADD_NOTE = "ADD_NOTE"
InputAction.CHAT = "CHAT"
InputAction.PUSH_TO_TALK = "PUSH_TO_TALK"
InputAction.TOGGLE_TURNLIGHT_HAZARD = "TOGGLE_TURNLIGHT_HAZARD"
InputAction.TOGGLE_WORK_LIGHT_BACK = "TOGGLE_WORK_LIGHT_BACK"
InputAction.TOGGLE_WORK_LIGHT_FRONT = "TOGGLE_WORK_LIGHT_FRONT"
InputAction.TOGGLE_HIGH_BEAM_LIGHT = "TOGGLE_HIGH_BEAM_LIGHT"
InputAction.TOGGLE_LIGHT_FRONT = "TOGGLE_LIGHT_FRONT"
InputAction.LOWER_ALL_IMPLEMENTS = "LOWER_ALL_IMPLEMENTS"
InputAction.TOGGLE_HELP_TEXT = "TOGGLE_HELP_TEXT"
InputAction.INCREASE_TIMESCALE = "INCREASE_TIMESCALE"
InputAction.DECREASE_TIMESCALE = "DECREASE_TIMESCALE"
InputAction.CRABSTEERING_ALLWHEEL = "CRABSTEERING_ALLWHEEL"
InputAction.CRABSTEERING_CRABLEFT = "CRABSTEERING_CRABLEFT"
InputAction.CRABSTEERING_CRABRIGHT = "CRABSTEERING_CRABRIGHT"
InputAction.RESET_HEAD_TRACKING = "RESET_HEAD_TRACKING"
InputAction.MENU_AXIS_UP_DOWN = "MENU_AXIS_UP_DOWN"
InputAction.MENU_AXIS_UP_DOWN_SECONDARY = "MENU_AXIS_UP_DOWN_SECONDARY"
InputAction.MENU_AXIS_LEFT_RIGHT = "MENU_AXIS_LEFT_RIGHT"
InputAction.AXIS_RUN = "AXIS_RUN"
InputAction.AXIS_MOVE_FORWARD_PLAYER = "AXIS_MOVE_FORWARD_PLAYER"
InputAction.AXIS_MOVE_SIDE_PLAYER = "AXIS_MOVE_SIDE_PLAYER"
InputAction.AXIS_LOOK_UPDOWN_PLAYER = "AXIS_LOOK_UPDOWN_PLAYER"
InputAction.AXIS_LOOK_LEFTRIGHT_PLAYER = "AXIS_LOOK_LEFTRIGHT_PLAYER"
InputAction.AXIS_ROTATE_HANDTOOL = "AXIS_ROTATE_HANDTOOL"
InputAction.AXIS_DOOR = "AXIS_DOOR"
InputAction.AXIS_MAP_SCROLL_LEFT_RIGHT = "AXIS_MAP_SCROLL_LEFT_RIGHT"
InputAction.AXIS_MAP_SCROLL_UP_DOWN = "AXIS_MAP_SCROLL_UP_DOWN"
InputAction.AXIS_MAP_ZOOM_OUT = "AXIS_MAP_ZOOM_OUT"
InputAction.AXIS_MAP_ZOOM_IN = "AXIS_MAP_ZOOM_IN"
InputAction.AXIS_CONSTRUCTION_CAMERA_ZOOM = "AXIS_CONSTRUCTION_CAMERA_ZOOM"
InputAction.AXIS_CONSTRUCTION_CAMERA_ROTATE = "AXIS_CONSTRUCTION_CAMERA_ROTATE"
InputAction.AXIS_CONSTRUCTION_CAMERA_TILT = "AXIS_CONSTRUCTION_CAMERA_TILT"
InputAction.CONSTRUCTION_ACTION_PRIMARY = "CONSTRUCTION_ACTION_PRIMARY"
InputAction.CONSTRUCTION_ACTION_SECONDARY = "CONSTRUCTION_ACTION_SECONDARY"
InputAction.CONSTRUCTION_ACTION_TERTIARY = "CONSTRUCTION_ACTION_TERTIARY"
InputAction.CONSTRUCTION_ACTION_FOURTH = "CONSTRUCTION_ACTION_FOURTH"
InputAction.AXIS_CONSTRUCTION_ACTION_PRIMARY = "AXIS_CONSTRUCTION_ACTION_PRIMARY"
InputAction.AXIS_CONSTRUCTION_ACTION_SECONDARY = "AXIS_CONSTRUCTION_ACTION_SECONDARY"
InputAction.AXIS_CONSTRUCTION_MENU_UP_DOWN = "AXIS_CONSTRUCTION_MENU_UP_DOWN"
InputAction.AXIS_CONSTRUCTION_MENU_LEFT_RIGHT = "AXIS_CONSTRUCTION_MENU_LEFT_RIGHT"
InputAction.CONSTRUCTION_DESTRUCT_TOGGLE = "CONSTRUCTION_DESTRUCT_TOGGLE"
InputAction.AXIS_BRAKE_VEHICLE = "AXIS_BRAKE_VEHICLE"
InputAction.AXIS_ACCELERATE_VEHICLE = "AXIS_ACCELERATE_VEHICLE"
InputAction.AXIS_MOVE_SIDE_VEHICLE = "AXIS_MOVE_SIDE_VEHICLE"
InputAction.AXIS_LOOK_UPDOWN_VEHICLE = "AXIS_LOOK_UPDOWN_VEHICLE"
InputAction.AXIS_LOOK_LEFTRIGHT_VEHICLE = "AXIS_LOOK_LEFTRIGHT_VEHICLE"
InputAction.AXIS_HYDRAULICATTACHER1 = "AXIS_HYDRAULICATTACHER1"
InputAction.AXIS_HYDRAULICATTACHER2 = "AXIS_HYDRAULICATTACHER2"
InputAction.AXIS_FRONTLOADER_ARM = "AXIS_FRONTLOADER_ARM"
InputAction.AXIS_FRONTLOADER_ARM2 = "AXIS_FRONTLOADER_ARM2"
InputAction.AXIS_FRONTLOADER_TOOL = "AXIS_FRONTLOADER_TOOL"
InputAction.AXIS_FRONTLOADER_TOOL2 = "AXIS_FRONTLOADER_TOOL2"
InputAction.AXIS_FRONTLOADER_TOOL3 = "AXIS_FRONTLOADER_TOOL3"
InputAction.AXIS_FRONTLOADER_TOOL4 = "AXIS_FRONTLOADER_TOOL4"
InputAction.AXIS_FRONTLOADER_TOOL5 = "AXIS_FRONTLOADER_TOOL5"
InputAction.AXIS_CRANE_ARM = "AXIS_CRANE_ARM"
InputAction.AXIS_CRANE_ARM2 = "AXIS_CRANE_ARM2"
InputAction.AXIS_CRANE_ARM3 = "AXIS_CRANE_ARM3"
InputAction.AXIS_CRANE_ARM4 = "AXIS_CRANE_ARM4"
InputAction.AXIS_CRANE_TOOL = "AXIS_CRANE_TOOL"
InputAction.AXIS_CRANE_TOOL2 = "AXIS_CRANE_TOOL2"
InputAction.AXIS_CRANE_TOOL3 = "AXIS_CRANE_TOOL3"
InputAction.AXIS_CUTTER_REEL = "AXIS_CUTTER_REEL"
InputAction.AXIS_CUTTER_REEL2 = "AXIS_CUTTER_REEL2"
InputAction.AXIS_PIPE = "AXIS_PIPE"
InputAction.AXIS_PIPE2 = "AXIS_PIPE2"
InputAction.AXIS_DRAWBAR = "AXIS_DRAWBAR"
InputAction.AXIS_DRAWBAR2 = "AXIS_DRAWBAR2"
InputAction.AXIS_SPRAYER_ARM = "AXIS_SPRAYER_ARM"
InputAction.AXIS_WHEEL_BASE = "AXIS_WHEEL_BASE"
InputAction.AXIS_CRUISE_CONTROL = "AXIS_CRUISE_CONTROL"
InputAction.SWITCH_HANDTOOL = "SWITCH_HANDTOOL"
InputAction.AXIS_LOOK_LEFTRIGHT_DRAG = "AXIS_LOOK_LEFTRIGHT_DRAG"
InputAction.AXIS_LOOK_UPDOWN_DRAG = "AXIS_LOOK_UPDOWN_DRAG"
InputAction.MENU_EXTRA_1 = "MENU_EXTRA_1"
InputAction.MENU_EXTRA_2 = "MENU_EXTRA_2"
InputAction.CONSOLE_ALT_COMMAND_BUTTON = "CONSOLE_ALT_COMMAND_BUTTON"
InputAction.CONSOLE_ALT_COMMAND2_BUTTON = "CONSOLE_ALT_COMMAND2_BUTTON"
InputAction.CONSOLE_ALT_COMMAND3_BUTTON = "CONSOLE_ALT_COMMAND3_BUTTON"
InputAction.MOUSE_ALT_COMMAND_BUTTON = "MOUSE_ALT_COMMAND_BUTTON"
InputAction.MOUSE_ALT_COMMAND2_BUTTON = "MOUSE_ALT_COMMAND2_BUTTON"
InputAction.MOUSE_ALT_COMMAND3_BUTTON = "MOUSE_ALT_COMMAND3_BUTTON"
InputAction.MOUSE_ALT_COMMAND4_BUTTON = "MOUSE_ALT_COMMAND4_BUTTON"
InputAction.AXIS_MTO_SCROLL = "AXIS_MTO_SCROLL"
InputAction.UNLOAD = "UNLOAD"
{}[InputAction.AXIS_LOOK_LEFTRIGHT_PLAYER] = InputAction.AXIS_LOOK_UPDOWN_PLAYER
{}[InputAction.AXIS_LOOK_UPDOWN_PLAYER] = InputAction.AXIS_LOOK_LEFTRIGHT_PLAYER
{}[InputAction.AXIS_LOOK_LEFTRIGHT_VEHICLE] = InputAction.AXIS_LOOK_UPDOWN_VEHICLE
{}[InputAction.AXIS_LOOK_UPDOWN_VEHICLE] = InputAction.AXIS_LOOK_LEFTRIGHT_VEHICLE
{}[InputAction.CAMERA_ZOOM_IN] = InputAction.CAMERA_ZOOM_OUT
{}[InputAction.CAMERA_ZOOM_OUT] = InputAction.CAMERA_ZOOM_IN
InputAction.LINKED_ACTIONS = {}
InputAction.EXCLUSIVE_ACTION_GROUPS = {MENU = {InputAction.MENU_ACCEPT, InputAction.MENU_ACTIVATE, InputAction.MENU_BACK, InputAction.MENU_CANCEL, InputAction.MENU_EXTRA_1, InputAction.MENU_EXTRA_2, InputAction.MENU_AXIS_LEFT_RIGHT, InputAction.MENU_AXIS_UP_DOWN}}
