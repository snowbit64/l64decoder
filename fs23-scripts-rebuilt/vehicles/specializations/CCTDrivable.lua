-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

CCTDrivable = {}
function CCTDrivable.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(Enterable, v0)
end
function CCTDrivable.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("CCTDrivable")
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.cctDrivable#cctRadius", "CCT radius", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.cctDrivable#cctHeight", "CCT height", 1)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.cctDrivable#cctSlopeLimit", "CCT slope limit", 25)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.cctDrivable#cctStepOffset", "CCT step offset", 0.35)
  Vehicle.xmlSchema:register(XMLValueType.FLOAT, "vehicle.cctDrivable#customOffset", "CCT custom offset", 0)
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function CCTDrivable.registerFunctions(vehicleType)
  SpecializationUtil.registerFunction(vehicleType, "moveCCT", CCTDrivable.moveCCT)
  SpecializationUtil.registerFunction(vehicleType, "getIsCCTOnGround", CCTDrivable.getIsCCTOnGround)
  SpecializationUtil.registerFunction(vehicleType, "getCCTCollisionMask", CCTDrivable.getCCTCollisionMask)
  SpecializationUtil.registerFunction(vehicleType, "getCCTWorldTranslation", CCTDrivable.getCCTWorldTranslation)
end
function CCTDrivable.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "setWorldPosition", CCTDrivable.setWorldPosition)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "setWorldPositionQuaternion", CCTDrivable.setWorldPositionQuaternion)
end
function CCTDrivable.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", CCTDrivable)
  SpecializationUtil.registerEventListener(vehicleType, "onDelete", CCTDrivable)
end
function CCTDrivable:onLoad(savegame)
  local v3 = v3:getValue("vehicle.cctDrivable#cctRadius", 1)
  self.spec_cctdrivable.cctRadius = v3
  v3 = v3:getValue("vehicle.cctDrivable#cctHeight", 1)
  self.spec_cctdrivable.cctHeight = v3
  v3 = v3:getValue("vehicle.cctDrivable#cctSlopeLimit", 25)
  self.spec_cctdrivable.cctSlopeLimit = v3
  v3 = v3:getValue("vehicle.cctDrivable#cctStepOffset", 0.3)
  self.spec_cctdrivable.cctStepOffset = v3
  v3 = v3:getValue("vehicle.cctDrivable#customOffset", 0)
  self.spec_cctdrivable.customOffset = v3
  self.spec_cctdrivable.cctCenterOffset = self.spec_cctdrivable.cctRadius + self.spec_cctdrivable.cctHeight * 0.5
  self.spec_cctdrivable.kinematicCollisionMask = 4
  self.spec_cctdrivable.movementCollisionMask = 31
  if self.isServer then
    local v4 = createTransformGroup("cctDrivable")
    self.spec_cctdrivable.cctNode = v4
    local v5 = getRootNode()
    link(v5, self.spec_cctdrivable.cctNode)
    v4 = createCCT(self.spec_cctdrivable.cctNode, self.spec_cctdrivable.cctRadius, self.spec_cctdrivable.cctHeight, self.spec_cctdrivable.cctStepOffset, self.spec_cctdrivable.cctSlopeLimit, 0.1, self.spec_cctdrivable.kinematicCollisionMask, self.components[1].defaultMass * 1000)
    self.spec_cctdrivable.controllerIndex = v4
  end
end
function CCTDrivable:onDelete()
  if self.spec_cctdrivable.controllerIndex ~= nil then
    removeCCT(self.spec_cctdrivable.controllerIndex)
    delete(self.spec_cctdrivable.cctNode)
  end
end
function CCTDrivable:moveCCT(moveX, moveY, moveZ)
  if self.isServer then
    moveCCT(self.spec_cctdrivable.controllerIndex, moveX, moveY, moveZ, self.spec_cctdrivable.movementCollisionMask)
    self:raiseActive()
  end
end
function CCTDrivable:getIsCCTOnGround()
  if self.isServer then
    local v2, v3, v4 = getCCTCollisionFlags(self.spec_cctdrivable.controllerIndex)
    return v4
  end
  return false
end
function CCTDrivable:getCCTCollisionMask()
  return self.spec_cctdrivable.kinematicCollisionMask
end
function CCTDrivable:getCCTWorldTranslation()
  local v2, v3, v4 = getTranslation(self.spec_cctdrivable.cctNode)
  return v2, v3 - self.spec_cctdrivable.cctCenterOffset, v4
end
function CCTDrivable:setWorldPosition(superFunc, x, y, z, xRot, yRot, zRot, i, changeInterp)
  superFunc(self, x, y, z, xRot, yRot, zRot, i, changeInterp)
  if self.isServer and i == 1 then
    setTranslation(self.spec_cctdrivable.cctNode, x, y + self.spec_cctdrivable.cctCenterOffset, z)
  end
end
function CCTDrivable:setWorldPositionQuaternion(superFunc, x, y, z, qx, qy, qz, qw, i, changeInterp)
  superFunc(self, x, y, z, qx, qy, qz, qw, i, changeInterp)
  if self.isServer and i == 1 then
    setTranslation(self.spec_cctdrivable.cctNode, x, y + self.spec_cctdrivable.cctCenterOffset, z)
  end
end
