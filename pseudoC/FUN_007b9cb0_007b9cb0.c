// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b9cb0
// Entry Point: 007b9cb0
// Size: 188 bytes
// Signature: undefined FUN_007b9cb0(void)


void FUN_007b9cb0(VehicleNavigationMapGenerator *param_1,uint *param_2)

{
  long lVar1;
  TransformGroup *pTVar2;
  float local_58;
  float fStack_54;
  float local_50;
  uint local_48;
  uint uStack_44;
  uint local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pTVar2 = (TransformGroup *)
           ReflectionUtil::getEntity
                     (*param_2,0x20,"setVehicleNavigationPhysicsObstacleCollisionBox","transform");
  if (pTVar2 != (TransformGroup *)0x0) {
    local_48 = param_2[4];
    uStack_44 = param_2[8];
    local_58 = (float)param_2[0x10] * 0.5;
    local_40 = param_2[0xc];
    fStack_54 = (float)param_2[0x14] * 0.5;
    local_50 = (float)param_2[0x18] * 0.5;
    VehicleNavigationMapGenerator::setPhysicsObstacleCollisionBox
              (param_1,pTVar2,(Vector3 *)&local_48,(Vector3 *)&local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


