-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

HeadlandAnimation = {}
function HeadlandAnimation.prerequisitesPresent(v0)
  return true
end
function HeadlandAnimation.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("HeadlandAnimation")
  Vehicle.xmlSchema:register(XMLValueType.TIME, "vehicle.headlandAnimation#activationDelay", "Headland is activated after this time above activationAngle", 0.5)
  Vehicle.xmlSchema:register(XMLValueType.TIME, "vehicle.headlandAnimation#deactivationDelay", "Headland is deactivated after this time below deactivationAngle", 4)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.headlandAnimation#activationAngle", "Headland is activated above this steering percentage [0-1]", 0.2)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.headlandAnimation#deactivationAngle", "Headland is deactivated below this steering percentage [0-1]", 0.13)
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.headlandAnimation#requiredGroundTypes", "Headland is only activated one of these ground types is below vehicle")
  Vehicle.xmlSchema:register(XMLValueType.STRING, "vehicle.headlandAnimation.animation(?)#name", "Animation name")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.headlandAnimation.animation(?)#speed", "Animation speed")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function HeadlandAnimation.registerFunctions(v0)
end
function HeadlandAnimation.registerOverwrittenFunctions(v0)
end
function HeadlandAnimation.registerEventListeners(v0)
  SpecializationUtil.registerEventListener(v0, "onLoad", HeadlandAnimation)
  SpecializationUtil.registerEventListener(v0, "onUpdate", HeadlandAnimation)
end
function HeadlandAnimation:onLoad(v1)
  local v3 = v3:hasProperty("vehicle.headlandAnimation")
  self.spec_headlandAnimation.isAvailable = v3
  if self.spec_headlandAnimation.isAvailable then
    v3 = v3:getValue("vehicle.headlandAnimation#activationDelay", 0.5)
    self.spec_headlandAnimation.headlandActivationDelay = v3
    v3 = v3:getValue("vehicle.headlandAnimation#deactivationDelay", 4)
    self.spec_headlandAnimation.headlandDeactivationDelay = v3
    v3 = v3:getValue("vehicle.headlandAnimation#activationAngle", 0.2)
    self.spec_headlandAnimation.headlandActivationAngle = v3
    v3 = v3:getValue("vehicle.headlandAnimation#deactivationAngle", 0.13)
    self.spec_headlandAnimation.headlandDeactivationAngle = v3
    v3 = v3:getValue("vehicle.headlandAnimation#requiredGroundTypes")
    local v4 = v3:split(" ")
    self.spec_headlandAnimation.requiredGroundTypes = {}
    -- TODO: structure LOP_FORNPREP (pc 67, target 91)
    if v4[1] ~= nil and v4[1] ~= "" then
      if FieldGroundType[v4[1]] ~= nil then
        self.spec_headlandAnimation.requiredGroundTypes[FieldGroundType[v4[1]]] = true
      else
        Logging.xmlWarning(self.xmlFile, "Unknown ground type '%s' defined for headland animation", v4[1])
      end
    end
    -- TODO: structure LOP_FORNLOOP (pc 90, target 68)
    v2.headlandDeactivationTime = 0
    v2.headlandState = false
    v2.lastHeadlandState = false
    v2.animations = {}
    while true do
      v5 = string.format("vehicle.headlandAnimation.animation(%d)", v4)
      v6 = v6:hasProperty(v5)
      -- if not v6 then goto L161 end
      v7 = v7:getValue(v5 .. "#name")
      v7 = v7:getValue(v5 .. "#speed")
      if {name = v7, speed = v7}.name ~= nil then
        table.insert(v2.animations, {name = v7, speed = v7})
      end
    end
    return
  end
  SpecializationUtil.removeEventListener(self, "onUpdate", HeadlandAnimation)
end
function HeadlandAnimation:onUpdate(v1, v2, v3, v4)
  if self.spec_headlandAnimation.headlandRequiredDensityBits ~= 0 then
    local v7, v8, v9 = getWorldTranslation(self.components[1].node)
    local v10, v11, v12 = FSDensityMapUtil.getFieldDataAtWorldPosition(v7, v8, v9)
    if self.spec_headlandAnimation.requiredGroundTypes[v12] ~= true then
    end
  end
  if v6 then
    v7 = math.abs(self.rotatedTime)
    -- if v5.headlandActivationAngle >= v7 then goto L57 end
    v5.headlandDeactivationTime = v5.headlandDeactivationTime + v1
    -- if v5.headlandActivationDelay >= v5.headlandDeactivationTime then goto L78 end
    v5.headlandState = true
    v5.headlandDeactivationTime = v5.headlandDeactivationDelay
  else
    v7 = math.abs(self.rotatedTime)
    if v7 < v5.headlandDeactivationAngle then
      v7 = math.max(v5.headlandDeactivationTime - v1, 0)
      v5.headlandDeactivationTime = v7
    end
  end
  if v5.headlandDeactivationTime == 0 then
    v5.headlandState = false
  end
  if v5.headlandState ~= v5.lastHeadlandState then
    if v5.headlandState then
    else
    end
    -- TODO: structure LOP_FORNPREP (pc 102, target 120)
    local v16 = self:getAnimationTime(v5.animations[1].name)
    self:playAnimation(...)
    -- TODO: structure LOP_FORNLOOP (pc 119, target 103)
    v5.lastHeadlandState = v5.headlandState
  end
end
