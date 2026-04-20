-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

DynamicMountUtil = {TYPE_FORK = 1, TYPE_AUTO_ATTACH_XZ = 2, TYPE_AUTO_ATTACH_XYZ = 3, TYPE_AUTO_ATTACH_Y = 4, TYPE_FIX_ATTACH = 5}
function DynamicMountUtil:mountDynamic(v1, v2, v3, v4, v5, v6, v7)
  if self.dynamicMountObject == nil and v1 ~= nil then
    -- cmp-jump LOP_JUMPXEQKN R1 aux=0x80000001 -> L10
  end
  return false
  local v8 = JointConstructor.new()
  v8:setActors(v3, v1)
  v8:setJointTransforms(v4, v7 or v4)
  if self.getTotalMass ~= nil then
    local v11 = self:getTotalMass()
  else
    v11 = getMass(v1)
  end
  if v5 == DynamicMountUtil.TYPE_FORK then
    v8:setRotationLimit(0, 0, 0)
    v8:setRotationLimit(1, 0, 0)
    v8:setRotationLimit(2, 0, 0)
    if self.dynamicMountSingleAxisFreeX then
      v8:setTranslationLimit(0, false, 0, 0)
    else
      v8:setTranslationLimit(0, true, -(self.dynamicMountForkXLimit or 0.01), self.dynamicMountForkXLimit or 0.01)
    end
    if self.dynamicMountSingleAxisFreeY then
      v8:setTranslationLimit(1, false, 0, 0)
    else
      v8:setTranslationLimit(1, true, -(self.dynamicMountForkYLimit or 0.01), self.dynamicMountForkYLimit or 0.01)
    end
    v8:setTranslationLimit(2, false, 0, 0)
    v8:setLinearDrive(2, false, true, 0, 0, v10, 0, 0)
    v8:setEnableCollision(true)
  else
    if v5 ~= DynamicMountUtil.TYPE_AUTO_ATTACH_XZ and v5 ~= DynamicMountUtil.TYPE_AUTO_ATTACH_XYZ then
      -- if v5 ~= DynamicMountUtil.TYPE_AUTO_ATTACH_Y then goto L259 end
    end
    local v11, v12, v13 = getWorldTranslation(v1)
    v8:setJointWorldPositions(v11, v12, v13, v11, v12, v13)
    v8:setBreakable(v10, v10)
    if v5 == DynamicMountUtil.TYPE_AUTO_ATTACH_XZ then
      v8:setTranslationLimit(1, false, 0, 0)
      v8:setRotationLimit(0, 0, 0)
      v8:setRotationLimit(1, 0, 0)
      v8:setRotationLimit(2, 0, 0)
    elseif v5 == DynamicMountUtil.TYPE_AUTO_ATTACH_Y then
      v8:setTranslationLimit(0, false, 0, 0)
      v8:setTranslationLimit(2, false, 0, 0)
    else
      v8:setRotationLimit(0, 0, 0)
      v8:setRotationLimit(1, 0, 0)
      v8:setRotationLimit(2, 0, 0)
      v8:setRotationLimitSpring(1000, 10, 1000, 10, 1000, 10)
      v8:setTranslationLimitSpring(1000, 10, 1000, 10, 1000, 10)
    end
    v8:setEnableCollision(true)
    -- goto L300  (LOP_JUMP +41)
    if v5 == DynamicMountUtil.TYPE_FIX_ATTACH then
      v8:setRotationLimit(0, 0, 0)
      v8:setRotationLimit(1, 0, 0)
      v8:setRotationLimit(2, 0, 0)
    else
      local v16 = tostring(v5)
      print("Warning: DynamicMountUtil.mountDynamic invalid mountType '" .. v16 .. "'")
      printCallstack()
      return false
    end
  end
  v11 = v8:finalize()
  self.dynamicMountJointIndex = v11
  if v9 then
    if self.onDynamicMountJointBreak == nil then
    end
    assert(true)
    addJointBreakReport(self.dynamicMountJointIndex, "onDynamicMountJointBreak", self)
  end
  self.dynamicMountObjectActorId = v3
  self.dynamicMountObject = v2
  self.dynamicMountJointNode = v7 or v4
  v11:addDynamicMountedObject(self)
  return true
end
function DynamicMountUtil:unmountDynamic(v1)
  if self.dynamicMountJointIndex ~= nil then
    removeJoint(self.dynamicMountJointIndex)
    self.dynamicMountJointIndex = nil
    self.dynamicMountObjectActorId = nil
    if v1 ~= nil then
      -- if not v1 then goto L25 end
    end
    v2:removeDynamicMountedObject(self, false)
    self.dynamicMountObject = nil
  end
end
