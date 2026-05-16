-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

BeaconLightManager = {MASK_ALL = 4294967295, MODE = {}}
BeaconLightManager.MODE.ROTATE_LEFT = 0
BeaconLightManager.MODE.ROTATE_RIGHT = 1
BeaconLightManager.MODE.BLINK = 2
BeaconLightManager.MODE.ROTATE_LEFT_RIGHT = 3
BeaconLightManager.MODE.DOUBLE_ROTATE_CROSS = 4
BeaconLightManager.MODE.DOUBLE_ROTATE_LEFT = 5
BeaconLightManager.MODE.DOUBLE_ROTATE_RIGHT = 6
BeaconLightManager.MODE.DOUBLE_BLINK_TRIPLE_WAIT = 7
local BeaconLightManager_mt = Class(BeaconLightManager, AbstractManager)
if getNumOfBeaconLights == nil then
  function getNumOfBeaconLights()
    return 0
  end
end
function BeaconLightManager.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2, v3)
  v1.nextBeaconLightId = 1
  v1.beaconLights = {}
  v1.maxNumBeaconLights = 1
  v1.lastBrightnessScale = nil
  return v1
end
function BeaconLightManager.getNumOfLights(v0)
  return getNumOfBeaconLights()
end
function BeaconLightManager:activateBeaconLight(mode, numLEDs, rpm, brightness)
  if #self.beaconLights < self.maxNumBeaconLights then
    local v6 = v6:getValue(GameSettings.SETTING.REAL_BEACON_LIGHT_BRIGHTNESS)
    if 0 < v6 then
      setBeaconLights(BeaconLightManager.MASK_ALL, mode, numLEDs, rpm, brightness * v6)
    end
    self.nextBeaconLightId = self.nextBeaconLightId + 1
    table.insert(self.beaconLights, {id = self.nextBeaconLightId, mask = v5, mode = mode, numLEDs = numLEDs, rpm = rpm, brightness = brightness, brightnessScale = v6})
    return self.nextBeaconLightId
  end
  return nil
end
function BeaconLightManager:deactivateBeaconLight(id)
  if id ~= nil then
    local v2 = v2:getValue(GameSettings.SETTING.REAL_BEACON_LIGHT_BRIGHTNESS)
    for v6, v7 in ipairs(self.beaconLights) do
      if not (v7.id == id) then
        continue
      end
      if 0 < v2 then
        setBeaconLights(v7.mask, 0, 0, 100, 0)
      end
      table.remove(self.beaconLights, v6)
      return
    end
  end
end
function BeaconLightManager:updateBeaconLights()
  if 0 < #self.beaconLights then
    local v1 = v1:getValue(GameSettings.SETTING.REAL_BEACON_LIGHT_BRIGHTNESS)
    for v5, v6 in ipairs(self.beaconLights) do
      if 0 < v1 then
        setBeaconLights(v6.mask, v6.mode, v6.numLEDs, v6.rpm, v6.brightness * v1)
        v6.brightnessScale = v1
      else
        if not (v1 == 0) then
          continue
        end
        if not (0 < v6.brightnessScale) then
          continue
        end
        setBeaconLights(v6.mask, 0, 0, 100, 0)
        v6.brightnessScale = 0
      end
    end
  end
end
function BeaconLightManager:getModeByName()
  if self ~= nil then
    local v1 = self:upper()
    return BeaconLightManager.MODE[v1]
  end
  return nil
end
function BeaconLightManager:registerXMLPaths(v1)
  self:register(XMLValueType.STRING, v1 .. "#mode", "Real beacon light mode")
  self:register(XMLValueType.FLOAT, v1 .. "#rpm", "Real beacon rpm")
  self:register(XMLValueType.FLOAT, v1 .. "#numLEDScale", "Real beacon num led factor (0-1)")
  self:register(XMLValueType.FLOAT, v1 .. "#brightnessScale", "Real beacon brightness factor (0-1)")
end
function BeaconLightManager:loadDeviceFromXML(v1)
  local v2 = self:getValue(v1 .. "#mode")
  if v2 ~= nil then
    local v3 = BeaconLightManager.getModeByName(v2)
    if v3 ~= nil then
      local v5 = self:getValue(v1 .. "#rpm", 100)
      v5 = self:getValue(v1 .. "#numLEDScale", 1)
      v5 = self:getValue(v1 .. "#brightnessScale", 1)
      return {mode = v3, rpm = v5, numLEDScale = v5, brightnessScale = v5}
    end
  end
  return nil
end
local v1 = BeaconLightManager.new()
g_beaconLightManager = v1
