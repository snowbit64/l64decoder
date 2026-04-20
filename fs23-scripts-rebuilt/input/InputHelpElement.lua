-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InputHelpElement = {}
local InputHelpElement_mt = Class(InputHelpElement)
InputHelpElement.SEPARATOR = {NONE = 1, COMBO_INPUT = 2, ANY_INPUT = 3}
InputHelpElement.NO_DATA = {}
function InputHelpElement.new(actionName, actionName2, buttonOverlays, keyLabels, separators, textLeft, textRight, inlineModifierButtons, iconOverlay, priority)
  local v10 = setmetatable({}, u0)
  if textRight and iconOverlay then
  end
  v10.actionName = actionName or ""
  v10.actionName2 = actionName2 or ""
  if not buttonOverlays then
  end
  v10.buttons = v11
  if not separators then
  end
  v10.separators = v11
  if not keyLabels then
  end
  v10.keys = v11
  v10.textLeft = textLeft or ""
  v10.textRight = textRight or ""
  v10.inlineModifierButtons = inlineModifierButtons
  v10.iconOverlay = iconOverlay
  if not priority then
  end
  v10.priority = v11
  return v10
end
function InputHelpElement:getActionNames()
  if self.actionName ~= "" then
    table.insert({}, self.actionName)
  end
  if self.actionName2 ~= "" then
    table.insert(v1, self.actionName2)
  end
  return v1
end
InputHelpElement.AXIS_ICON = {CRANE_ARM1_ROTATE_X = "CRANE_ARM1_ROTATE_X", CRANE_ARM1_ROTATE_Y = "CRANE_ARM1_ROTATE_Y", CRANE_ARM1_TRANSLATE = "CRANE_ARM1_TRANSLATE", CRANE_ARM2_ROTATE_X = "CRANE_ARM2_ROTATE_X", CRANE_ARM2_ROTATE_TOOL = "CRANE_ARM2_ROTATE_TOOL", CRANE_ARM2_TRANSLATE = "CRANE_ARM2_TRANSLATE", DRAWBAR_ROTATE_X = "DRAWBAR_ROTATE_X", FRONTLOADER_ARM_ROTATE = "FRONTLOADER_ARM_ROTATE", FRONTLOADER_ARM_ROTATE_TOOL = "FRONTLOADER_ARM_ROTATE_TOOL", GRABBER_OPEN_CLOSE = "GRABBER_OPEN_CLOSE", GRABBER_ROTATE_Y = "GRABBER_ROTATE_Y", IMPLEMENT_ATTACHER_ROTX = "IMPLEMENT_ATTACHER_ROTX", IMPLEMENT_ATTACHER_TRANS = "IMPLEMENT_ATTACHER_TRANS", IMPLEMENT_TRANS_X = "IMPLEMENT_TRANS_X", IMPLEMENT_TRANS_Y = "IMPLEMENT_TRANS_Y", PIPE_END_ROTATE = "PIPE_END_ROTATE", PIPE_ROTATE_X = "PIPE_ROTATE_X", PIPE_ROTATE_Y = "PIPE_ROTATE_Y", REEL_TRANSLATE_X = "REEL_TRANSLATE_X", REEL_TRANSLATE_Y = "REEL_TRANSLATE_Y", SPRAYER_ARM_TRANSLATE_Y = "SPRAYER_ARM_TRANSLATE_Y", SUPPORT_ARM_TRANSLATE_Y = "SUPPORT_ARM_TRANSLATE_Y", TOOL_OPEN_CLOSE = "TOOL_OPEN_CLOSE", TOP_DOOR_ROTATE = "TOP_DOOR_ROTATE", WHEEL_BASE_TRANSLATE_X = "WHEEL_BASE_TRANSLATE_X", WORKING_WIDTH_TRANSLATE_X = "WORKING_WIDTH_TRANSLATE_X", CRANE_EC_TRANSLATE_Y = "CRANE_EC_TRANSLATE_Y", CRANE_EC_TRANSLATE_Z = "CRANE_EC_TRANSLATE_Z", BEET_PICKUP_TRANS_X = "BEET_PICKUP_TRANS_X", BEET_PICKUP_TRANS_Y = "BEET_PICKUP_TRANS_Y", SEAT_ROT_Y = "SEAT_ROT_Y", SNOW_PLOW_ROT_LEFT = "SNOW_PLOW_ROT_LEFT", SNOW_PLOW_ROT_CENTER = "SNOW_PLOW_ROT_CENTER", SNOW_PLOW_ROT_RIGHT = "SNOW_PLOW_ROT_RIGHT", FORKLIFT_ROTATE_X = "FORKLIFT_ROTATE_X", FORKLIFT_TRANSLATE_Y = "FORKLIFT_TRANSLATE_Y"}
