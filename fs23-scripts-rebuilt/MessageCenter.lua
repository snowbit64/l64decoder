-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MessageCenter = {}
local MessageCenter_mt = Class(MessageCenter)
function MessageCenter.new(customMt)
  local v1 = setmetatable({}, u0)
  v1.subscribers = {}
  v1.queue = {}
  return v1
end
function MessageCenter.delete(v0)
end
function MessageCenter:update(dt)
  if 0 < #self.queue then
    for v5, v6 in ipairs(self.queue) do
      local v10 = unpack(v6[2])
      self:publish(...)
    end
    self.queue = {}
  end
end
function MessageCenter:subscribe(messageType, callback, callbackTarget, argument, isOneShot)
  if messageType == nil then
    Logging.warning("Tried subscribing to a message with a nil-value message type. Check subscribe() function call arguments at:")
    printCallstack()
    return
  end
  if callback == nil then
    Logging.warning("Tried subscribing to a message with a nil-value callback. Check subscribe() function call arguments at:")
    printCallstack()
    return
  end
  local v8 = type(callback)
  if v8 ~= "function" then
  end
  v6(true, "Error: MessageCenter:subscribe(): given argument 'callback' is not a function")
  if self.subscribers[messageType] == nil then
    self.subscribers[messageType] = {}
  end
  local v10 = Utils.getNoNil(isOneShot, false)
  table.insert(v6, {callback = callback, callbackTarget = callbackTarget, argument = argument, isOneShot = v10})
end
function MessageCenter:subscribeOneshot(messageType, callback, callbackTarget, argument)
  self:subscribe(messageType, callback, callbackTarget, argument, true)
end
function MessageCenter:unsubscribe(messageType, callbackTarget)
  if self.subscribers[messageType] ~= nil then
    -- TODO: structure LOP_FORNPREP (pc 8, target 30)
    if self.subscribers[messageType][#self.subscribers[messageType]].callbackTarget == callbackTarget then
      if self.subscribers[messageType][#self.subscribers[messageType]].isOneShot then
        Logging.warning("Unsubscribing a oneshot callback")
        printCallstack()
      end
      table.remove(v3, v6)
    end
    -- TODO: structure LOP_FORNLOOP (pc 29, target 9)
    if #v3 == 0 then
      self.subscribers[messageType] = nil
    end
  end
end
function MessageCenter:unsubscribeAll(callbackTarget)
  for v5, v6 in pairs(self.subscribers) do
    -- TODO: structure LOP_FORNPREP (pc 9, target 21)
    if v6[#v6].callbackTarget == callbackTarget then
      table.remove(v6, #v6)
    end
    -- TODO: structure LOP_FORNLOOP (pc 20, target 10)
    if not (#v6 == 0) then
      continue
    end
    self.subscribers[v5] = nil
  end
end
function MessageCenter:publish(messageType, ...)
  if messageType == nil then
    Logging.warning("Warning: Tried publishing a message with a nil-value message type. Check publish() function call arguments at:")
    printCallstack()
    return
  end
  if self.subscribers[messageType] ~= nil then
    while true do
      if not (v2[v3] ~= nil) then
        break
      end
      if v2[v3].callbackTarget == nil then
        if v2[v3].argument == nil then
          v2[v3].callback(...)
          -- goto L59  (LOP_JUMP +26)
        end
        v4.callback(...)
      elseif v2[v3].argument == nil then
        v2[v3].callback(...)
      else
        v2[v3].callback(...)
      end
      if v4.isOneShot then
        table.remove(v2, v3)
      else
      end
    end
  end
end
function MessageCenter:publishDelayed(messageType, ...)
  if messageType == nil then
    Logging.warning("Tried publishing a message with a nil-value message type. Check publish() function call arguments at:")
    printCallstack()
    return
  end
  table.insert(self.queue, {messageType, {}})
end
function MessageCenter:consoleCommandShowActiveSubscribers()
  for v6, v7 in pairs(self.subscribers) do
    local v9 = type(v6)
    if v9 == "number" then
      for v12, v13 in pairs(MessageType) do
        if not (v13 == v6) then
          continue
        end
        break
      end
      -- cmp-jump LOP_JUMPXEQKNIL R8 aux=0x80000000 -> L61
      for v12, v13 in pairs(MessageType.SETTING_CHANGED) do
        if not (v13 == v6) then
          continue
        end
        for v17, v18 in pairs(GameSettings.SETTING) do
          if not (v12 == v18) then
            continue
          end
          -- goto L61  (LOP_JUMP +11)
        end
        -- goto L61  (LOP_JUMP +8)
      end
    else
      v9 = ClassUtil.getClassName(v6)
    end
    if v8 == nil then
      v12 = type(v6)
      v11 = tostring(v6)
    end
    log("Message Subscribers for '" .. v8 .. "':")
    for v12, v13 in ipairs(v7) do
      if v13.callbackTarget ~= nil then
        v15 = ClassUtil.getClassNameByObject(v13.callbackTarget)
      end
      if not v14 and not v13.callback then
      end
      v15(v16, v17)
    end
  end
  log("\n Total Messages:" .. messageType)
  log("Total Subscribers: " .. v2)
end
function MessageCenter.getMessageNameById(v0, messageType)
  for v5, v6 in pairs(MessageType) do
    if not (messageType == v6) then
      continue
    end
    return v5
  end
  return "<unknownMessageType>"
end
function nextMessageTypeId()
  u0 = u0 + 1
  return u0
end
MessageType = {}
local v3 = nextMessageTypeId()
MessageType.MONEY_CHANGED = v3
v3 = nextMessageTypeId()
MessageType.PLAYER_FARM_CHANGED = v3
v3 = nextMessageTypeId()
MessageType.FARM_CREATED = v3
v3 = nextMessageTypeId()
MessageType.FARM_PROPERTY_CHANGED = v3
v3 = nextMessageTypeId()
MessageType.FARM_DELETED = v3
v3 = nextMessageTypeId()
MessageType.PLAYER_CREATED = v3
v3 = nextMessageTypeId()
MessageType.PLAYER_NICKNAME_CHANGED = v3
v3 = nextMessageTypeId()
MessageType.OWN_PLAYER_ENTERED = v3
v3 = nextMessageTypeId()
MessageType.OWN_PLAYER_LEFT = v3
v3 = nextMessageTypeId()
MessageType.ACHIEVEMENT_UNLOCKED = v3
v3 = nextMessageTypeId()
MessageType.PAUSE = v3
v3 = nextMessageTypeId()
MessageType.HUSBANDRY_ANIMALS_CHANGED = v3
v3 = nextMessageTypeId()
MessageType.VEHICLE_REPAIRED = v3
v3 = nextMessageTypeId()
MessageType.VEHICLE_REPAINTED = v3
v3 = nextMessageTypeId()
MessageType.VEHICLE_RESET = v3
v3 = nextMessageTypeId()
MessageType.VEHICLE_SALES_CHANGED = v3
v3 = nextMessageTypeId()
MessageType.STORE_ITEMS_RELOADED = v3
v3 = nextMessageTypeId()
MessageType.GUI_BEFORE_OPEN = v3
v3 = nextMessageTypeId()
MessageType.GUI_AFTER_OPEN = v3
v3 = nextMessageTypeId()
MessageType.GUI_BEFORE_CLOSE = v3
v3 = nextMessageTypeId()
MessageType.GUI_AFTER_CLOSE = v3
v3 = nextMessageTypeId()
MessageType.GUI_INGAME_OPEN = v3
v3 = nextMessageTypeId()
MessageType.GUI_INGAME_OPEN_FINANCES_SCREEN = v3
v3 = nextMessageTypeId()
MessageType.GUI_INGAME_OPEN_FARMS_SCREEN = v3
v3 = nextMessageTypeId()
MessageType.GUI_INGAME_OPEN_PRODUCTION_SCREEN = v3
v3 = nextMessageTypeId()
MessageType.GUI_INGAME_OPEN_AI_SCREEN = v3
v3 = nextMessageTypeId()
MessageType.GUI_INGAME_OPEN_HELP_SCREEN = v3
v3 = nextMessageTypeId()
MessageType.GUI_MAIN_SCREEN_OPEN = v3
v3 = nextMessageTypeId()
MessageType.GUI_DIALOG_OPENED = v3
v3 = nextMessageTypeId()
MessageType.SAVEGAMES_LOADED = v3
v3 = nextMessageTypeId()
MessageType.GAME_STATE_CHANGED = v3
MessageType.SETTING_CHANGED = {}
for v5, v6 in pairs(GameSettings.SETTING) do
  local v8 = nextMessageTypeId()
  MessageType.SETTING_CHANGED[v6] = v8
end
v3 = nextMessageTypeId()
MessageType.INPUT_BINDINGS_CHANGED = v3
v3 = nextMessageTypeId()
MessageType.INPUT_MODE_CHANGED = v3
v3 = nextMessageTypeId()
MessageType.INPUT_HELP_MODE_CHANGED = v3
v3 = nextMessageTypeId()
MessageType.INPUT_DEVICES_CHANGED = v3
v3 = nextMessageTypeId()
MessageType.TIMESCALE_CHANGED = v3
v3 = nextMessageTypeId()
MessageType.SAVEGAME_LOADED = v3
v3 = nextMessageTypeId()
MessageType.MISSION_GENERATED = v3
v3 = nextMessageTypeId()
MessageType.MISSION_DELETED = v3
v3 = nextMessageTypeId()
MessageType.MISSION_TOUR_STARTED = v3
v3 = nextMessageTypeId()
MessageType.MISSION_TOUR_FINISHED = v3
v3 = nextMessageTypeId()
MessageType.MISSION_TOUR_CHANGED = v3
v3 = nextMessageTypeId()
MessageType.MISSION_TOUR_DIALOG = v3
v3 = nextMessageTypeId()
MessageType.USER_PROFILE_CHANGED = v3
v3 = nextMessageTypeId()
MessageType.USER_ADDED = v3
v3 = nextMessageTypeId()
MessageType.USER_REMOVED = v3
v3 = nextMessageTypeId()
MessageType.MASTERUSER_ADDED = v3
v3 = nextMessageTypeId()
MessageType.PLAYER_STYLE_CHANGED = v3
v3 = nextMessageTypeId()
MessageType.MINUTE_CHANGED = v3
v3 = nextMessageTypeId()
MessageType.HOUR_CHANGED = v3
v3 = nextMessageTypeId()
MessageType.DAY_CHANGED = v3
v3 = nextMessageTypeId()
MessageType.REALHOUR_CHANGED = v3
v3 = nextMessageTypeId()
MessageType.PERIOD_CHANGED = v3
v3 = nextMessageTypeId()
MessageType.PERIOD_LENGTH_CHANGED = v3
v3 = nextMessageTypeId()
MessageType.SEASON_CHANGED = v3
v3 = nextMessageTypeId()
MessageType.YEAR_CHANGED = v3
v3 = nextMessageTypeId()
MessageType.DAYLIGHT_CHANGED = v3
v3 = nextMessageTypeId()
MessageType.WEATHER_CHANGED = v3
v3 = nextMessageTypeId()
MessageType.SNOW_HEIGHT_CHANGED = v3
v3 = nextMessageTypeId()
MessageType.UNLOADING_STATIONS_CHANGED = v3
v3 = nextMessageTypeId()
MessageType.LOADING_STATIONS_CHANGED = v3
v3 = nextMessageTypeId()
MessageType.AI_VEHICLE_STATE_CHANGE = v3
v3 = nextMessageTypeId()
MessageType.AI_TASK_SKIPPED = v3
v3 = nextMessageTypeId()
MessageType.RADIO_CHANNEL_CHANGE = v3
v3 = nextMessageTypeId()
MessageType.APP_SUSPENDED = v3
v3 = nextMessageTypeId()
MessageType.APP_RESUMED = v3
v3 = nextMessageTypeId()
MessageType.WINDOW_SIZE_CHANGED = v3
v3 = nextMessageTypeId()
MessageType.STORAGE_ADDED_TO_UNLOADING_STATION = v3
v3 = nextMessageTypeId()
MessageType.STORAGE_REMOVED_FROM_UNLOADING_STATION = v3
v3 = nextMessageTypeId()
MessageType.STORAGE_ADDED_TO_LOADING_STATION = v3
v3 = nextMessageTypeId()
MessageType.STORAGE_REMOVED_FROM_LOADING_STATION = v3
v3 = nextMessageTypeId()
MessageType.HUSBANDRY_SYSTEM_ADDED_PLACEABLE = v3
v3 = nextMessageTypeId()
MessageType.HUSBANDRY_SYSTEM_REMOVED_PLACEABLE = v3
v3 = nextMessageTypeId()
MessageType.LOADED_ALL_SAVEGAME_VEHICLES = v3
v3 = nextMessageTypeId()
MessageType.LOADED_ALL_SAVEGAME_PLACEABLES = v3
v3 = nextMessageTypeId()
MessageType.FINISHED_GROWTH_PERIOD = v3
v3 = nextMessageTypeId()
MessageType.AI_JOB_STARTED = v3
v3 = nextMessageTypeId()
MessageType.AI_JOB_REMOVED = v3
v3 = nextMessageTypeId()
MessageType.AI_JOB_STOPPED = v3
v3 = nextMessageTypeId()
MessageType.TREE_SHAPE_CUT = v3
v3 = nextMessageTypeId()
MessageType.TREE_SHAPE_MOUNTED = v3
v3 = nextMessageTypeId()
MessageType.SLEEPING = v3
v3 = nextMessageTypeId()
MessageType.SLOT_USAGE_CHANGED = v3
v3 = nextMessageTypeId()
MessageType.INSETS_CHANGED = v3
