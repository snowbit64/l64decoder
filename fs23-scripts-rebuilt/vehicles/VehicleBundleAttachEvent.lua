-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VehicleBundleAttachEvent = {}
local VehicleBundleAttachEvent_mt = Class(VehicleBundleAttachEvent, Event)
InitStaticEventClass(VehicleBundleAttachEvent, "VehicleBundleAttachEvent", EventIds.EVENT_VEHICLE_BUNDLE_ATTACH)
function VehicleBundleAttachEvent.emptyNew()
  return Event.new(u0)
end
function VehicleBundleAttachEvent.new(bundles)
  local v1 = VehicleBundleAttachEvent.emptyNew()
  v1.bundles = bundles
  return v1
end
function VehicleBundleAttachEvent.readStream(v0, v1, v2)
  local v3 = streamReadUInt8(v1)
  -- TODO: structure LOP_FORNPREP (pc 7, target 43)
  local v7 = NetworkUtil.readNodeObjectId(v1)
  local v8 = NetworkUtil.readNodeObjectId(v1)
  local v9 = streamReadUIntN(v1, 7)
  local v10 = streamReadUIntN(v1, 7)
  table.insert(g_currentMission.vehiclesToAttach, {v1id = v7, v2id = v8, inputJointIndex = v9, jointIndex = v10})
  -- TODO: structure LOP_FORNLOOP (pc 42, target 8)
end
function VehicleBundleAttachEvent:writeStream(streamId, connection)
  streamWriteUInt8(streamId, #self.bundles)
  -- TODO: structure LOP_FORNPREP (pc 12, target 49)
  local v9 = NetworkUtil.getObjectId(self.bundles[1].streamId)
  NetworkUtil.writeNodeObjectId(...)
  v9 = NetworkUtil.getObjectId(self.bundles[1].connection)
  NetworkUtil.writeNodeObjectId(...)
  streamWriteUIntN(streamId, self.bundles[1].input, 7)
  streamWriteUIntN(streamId, self.bundles[1].attacher, 7)
  -- TODO: structure LOP_FORNLOOP (pc 48, target 13)
end
function VehicleBundleAttachEvent:run(connection)
  if self.object ~= nil then
    local v2 = v2:getIsSynchronized()
    if v2 then
      v2:attachImplement(self.implement, self.inputJointIndex, self.jointIndex, true, nil, self.startLowered)
    end
  end
  v2 = connection:getIsServer()
  if not v2 then
    v2:broadcastEvent(self, nil, connection, self.object)
  end
end
