-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

MotorGearShiftEvent = {TYPE_SHIFT_UP = 1, TYPE_SHIFT_DOWN = 2, TYPE_SELECT_GEAR = 3, TYPE_SHIFT_GROUP_UP = 4, TYPE_SHIFT_GROUP_DOWN = 5, TYPE_SELECT_GROUP = 6, TYPE_DIRECTION_CHANGE = 7, TYPE_DIRECTION_CHANGE_POS = 8, TYPE_DIRECTION_CHANGE_NEG = 9}
local MotorGearShiftEvent_mt = Class(MotorGearShiftEvent, Event)
InitStaticEventClass(MotorGearShiftEvent, "MotorGearShiftEvent", EventIds.EVENT_MOTOR_GEAR_SHIFT)
function MotorGearShiftEvent.emptyNew()
  return Event.new(u0)
end
function MotorGearShiftEvent.new(vehicle, shiftType, shiftValue)
  local v3 = MotorGearShiftEvent.emptyNew()
  v3.vehicle = vehicle
  v3.shiftType = shiftType
  v3.shiftValue = shiftValue
  return v3
end
function MotorGearShiftEvent:readStream(streamId, connection)
  local v3 = NetworkUtil.readNodeObject(streamId)
  self.vehicle = v3
  v3 = streamReadUIntN(streamId, 4)
  self.shiftType = v3
  if self.shiftType ~= MotorGearShiftEvent.TYPE_SELECT_GEAR then
    -- if v0.shiftType ~= MotorGearShiftEvent.TYPE_SELECT_GROUP then goto L36 end
  end
  v3 = streamReadUIntN(streamId, 3)
  self.shiftValue = v3
  self:run(connection)
end
function MotorGearShiftEvent:writeStream(streamId, connection)
  NetworkUtil.writeNodeObject(streamId, self.vehicle)
  streamWriteUIntN(streamId, self.shiftType, 4)
  if self.shiftType ~= MotorGearShiftEvent.TYPE_SELECT_GEAR then
    -- if v0.shiftType ~= MotorGearShiftEvent.TYPE_SELECT_GROUP then goto L36 end
  end
  streamWriteUIntN(streamId, self.shiftValue, 3)
end
function MotorGearShiftEvent:run(connection)
  if self.vehicle ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 and self.vehicle.spec_motorized ~= nil and self.vehicle.spec_motorized.isMotorStarted then
      if self.shiftType == MotorGearShiftEvent.TYPE_SHIFT_UP then
        v3:shiftGear(true)
        return
      end
      if self.shiftType == MotorGearShiftEvent.TYPE_SHIFT_DOWN then
        v3:shiftGear(false)
        return
      end
      if self.shiftType == MotorGearShiftEvent.TYPE_SELECT_GEAR then
        if self.shiftValue == 0 then
        end
        v3:selectGear(v5, true)
        return
      end
      if self.shiftType == MotorGearShiftEvent.TYPE_SHIFT_GROUP_UP then
        v3:shiftGroup(true)
        return
      end
      if self.shiftType == MotorGearShiftEvent.TYPE_SHIFT_GROUP_DOWN then
        v3:shiftGroup(false)
        return
      end
      if self.shiftType == MotorGearShiftEvent.TYPE_SELECT_GROUP then
        if self.shiftValue == 0 then
        end
        v3:selectGroup(v5, true)
        return
      end
      if self.shiftType == MotorGearShiftEvent.TYPE_DIRECTION_CHANGE then
        v3:changeDirection()
        return
      end
      if self.shiftType == MotorGearShiftEvent.TYPE_DIRECTION_CHANGE_POS then
        v3:changeDirection(1)
        return
      end
      if self.shiftType == MotorGearShiftEvent.TYPE_DIRECTION_CHANGE_NEG then
        v3:changeDirection(-1)
      end
    end
  end
end
function MotorGearShiftEvent.sendEvent(vehicle, shiftType, shiftValue)
  if g_client ~= nil then
    local v3 = v3:getServerConnection()
    local v5 = MotorGearShiftEvent.new(vehicle, shiftType, shiftValue)
    v3:sendEvent(...)
  end
end
