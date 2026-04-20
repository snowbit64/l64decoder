-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ManureBarrel = {}
function ManureBarrel.prerequisitesPresent(v0)
  local v1 = SpecializationUtil.hasSpecialization(Sprayer, v0)
  if v1 then
    v1 = SpecializationUtil.hasSpecialization(AttacherJoints, v0)
  end
  return v1
end
function ManureBarrel.initSpecialization()
  Vehicle.xmlSchema:setXMLSpecializationType("ManureBarrel")
  Vehicle.xmlSchema:register(XMLValueType.INT, "vehicle.manureBarrel#attacherJointIndex", "Attacher joint index")
  Vehicle.xmlSchema:setXMLSpecializationType()
end
function ManureBarrel.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getAreEffectsVisible", ManureBarrel.getAreEffectsVisible)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "getIsWorkAreaActive", ManureBarrel.getIsWorkAreaActive)
end
function ManureBarrel.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", ManureBarrel)
  SpecializationUtil.registerEventListener(vehicleType, "onPostAttachImplement", ManureBarrel)
  SpecializationUtil.registerEventListener(vehicleType, "onPostDetachImplement", ManureBarrel)
end
function ManureBarrel:onLoad(savegame)
  XMLUtil.checkDeprecatedXMLElements(self.xmlFile, "vehicle.manureBarrel#toolAttachAnimName", "vehicle.attacherJoints.attacherJoint.objectChange")
  local v3 = v3:getValue("vehicle.manureBarrel#attacherJointIndex")
  self.spec_manureBarrel.attachToolJointIndex = v3
end
function ManureBarrel:onPostAttachImplement(attachable, inputJointDescIndex, jointDescIndex)
  if jointDescIndex == self.spec_manureBarrel.attachToolJointIndex then
    self.spec_manureBarrel.attachedTool = attachable
  end
end
function ManureBarrel:onPostDetachImplement(implementIndex)
  if self.getObjectFromImplementIndex ~= nil then
    local v4 = self:getObjectFromImplementIndex(implementIndex)
  end
  if v3 ~= nil then
    v4 = self:getAttachedImplements()
    if v4[implementIndex].jointDescIndex == v2.attachToolJointIndex then
      v2.attachedTool = nil
    end
  end
end
function ManureBarrel:getAreEffectsVisible(superFunc)
  if self.spec_manureBarrel.attachedTool ~= nil then
    return false
  end
  return superFunc(self)
end
function ManureBarrel:getIsWorkAreaActive(superFunc, workArea)
  if self.spec_manureBarrel.attachedTool ~= nil then
    return false
  end
  return superFunc(self, workArea)
end
