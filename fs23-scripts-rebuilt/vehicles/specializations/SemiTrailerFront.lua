-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SemiTrailerFront = {}
function SemiTrailerFront.prerequisitesPresent(v0)
  return SpecializationUtil.hasSpecialization(AttacherJoints, v0)
end
function SemiTrailerFront.registerOverwrittenFunctions(vehicleType)
  SpecializationUtil.registerOverwrittenFunction(vehicleType, "isDetachAllowed", SemiTrailerFront.isDetachAllowed)
end
function SemiTrailerFront.registerEventListeners(vehicleType)
  SpecializationUtil.registerEventListener(vehicleType, "onLoad", SemiTrailerFront)
  SpecializationUtil.registerEventListener(vehicleType, "onUpdate", SemiTrailerFront)
  SpecializationUtil.registerEventListener(vehicleType, "onPostAttachImplement", SemiTrailerFront)
  SpecializationUtil.registerEventListener(vehicleType, "onPreDetachImplement", SemiTrailerFront)
  SpecializationUtil.registerEventListener(vehicleType, "onPreDetach", SemiTrailerFront)
  SpecializationUtil.registerEventListener(vehicleType, "onPostAttach", SemiTrailerFront)
end
function SemiTrailerFront:onLoad(savegame)
  self.spec_semiTrailerFront.inputAttacherCurFade = 1
  self.spec_semiTrailerFront.inputAttacherFadeDir = 1
  self.spec_semiTrailerFront.inputAttacherFadeDuration = 1000
  self.spec_semiTrailerFront.joint = self.spec_attachable.inputAttacherJoints[1]
  self.spec_semiTrailerFront.joint.lowerRotLimitScaleBackup = {self.spec_semiTrailerFront.joint.lowerRotLimitScale[1], self.spec_semiTrailerFront.joint.lowerRotLimitScale[2], self.spec_semiTrailerFront.joint.lowerRotLimitScale[3]}
  self.spec_semiTrailerFront.attachedSemiTrailerBack = nil
  self.spec_semiTrailerFront.inputAttacherImplement = nil
  self.spec_semiTrailerFront.doSemiTrailerLockCheck = true
end
function SemiTrailerFront:onUpdate(dt, isActiveForInput, isActiveForInputIgnoreSelection, isSelected)
  if self.spec_semiTrailerFront.doSemiTrailerLockCheck then
    self.spec_semiTrailerFront.doSemiTrailerLockCheck = false
    if self.spec_semiTrailerFront.attachedSemiTrailerBack == nil then
      self.spec_semiTrailerFront.inputAttacherFadeDir = -1
    end
  end
  if self.isServer and v5.inputAttacherImplement ~= nil then
    if 0 < v5.inputAttacherCurFade then
      -- if v5.inputAttacherFadeDir < 0 then goto L42 end
    end
    if v5.inputAttacherCurFade < 1 and 0 < v5.inputAttacherFadeDir then
      local v6 = MathUtil.clamp(v5.inputAttacherCurFade + v5.inputAttacherFadeDir * dt / v5.inputAttacherFadeDuration, 0, 1)
      v5.inputAttacherCurFade = v6
      v5.joint.lowerRotLimitScale[1] = v5.joint.lowerRotLimitScaleBackup[1] * v5.inputAttacherCurFade
      v5.joint.lowerRotLimitScale[2] = v5.joint.lowerRotLimitScaleBackup[2] * v5.inputAttacherCurFade
      v5.joint.lowerRotLimitScale[3] = v5.joint.lowerRotLimitScaleBackup[3] * v5.inputAttacherCurFade
      local attacherVehicle = self:getAttacherVehicle()
      if attacherVehicle ~= nil then
        local v9 = attacherVehicle:getAttacherJoints()
        setJointRotationLimit(v9[v5.inputAttacherImplement.jointDescIndex].jointIndex, 0, true, -(v5.inputAttacherImplement.lowerRotLimit[1] * v5.joint.lowerRotLimitScale[1]), v5.inputAttacherImplement.lowerRotLimit[1] * v5.joint.lowerRotLimitScale[1])
        setJointRotationLimit(v9[v5.inputAttacherImplement.jointDescIndex].jointIndex, 1, true, -(v5.inputAttacherImplement.lowerRotLimit[2] * v5.joint.lowerRotLimitScale[2]), v5.inputAttacherImplement.lowerRotLimit[2] * v5.joint.lowerRotLimitScale[2])
        setJointRotationLimit(v9[v5.inputAttacherImplement.jointDescIndex].jointIndex, 2, true, -(v5.inputAttacherImplement.lowerRotLimit[3] * v5.joint.lowerRotLimitScale[3]), v5.inputAttacherImplement.lowerRotLimit[3] * v5.joint.lowerRotLimitScale[3])
      end
    end
  end
end
function SemiTrailerFront:isDetachAllowed(superFunc)
  local v2, v3 = superFunc(self)
  if not v2 then
    return false, v3
  end
  if self.spec_semiTrailerFront.attachedSemiTrailerBack == nil then
  end
  return true, nil
end
function SemiTrailerFront:onPostAttachImplement(attachable, inputJointDescIndex, jointDescIndex)
  self.spec_semiTrailerFront.attachedSemiTrailerBack = attachable
  self.spec_semiTrailerFront.inputAttacherFadeDir = 1000
end
function SemiTrailerFront:onPreDetachImplement(implement)
  self.spec_semiTrailerFront.attachedSemiTrailerBack = nil
  self.spec_semiTrailerFront.inputAttacherFadeDir = -1
end
function SemiTrailerFront:onPreDetach(attacherVehicle, implement)
  self.spec_semiTrailerFront.inputAttacherImplement = nil
end
function SemiTrailerFront:onPostAttach(attacherVehicle, inputJointDescIndex, jointDescIndex)
  local v5 = attacherVehicle:getImplementByObject(self)
  self.spec_semiTrailerFront.inputAttacherImplement = v5
end
