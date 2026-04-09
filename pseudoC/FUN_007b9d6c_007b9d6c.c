// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b9d6c
// Entry Point: 007b9d6c
// Size: 88 bytes
// Signature: undefined FUN_007b9d6c(void)


void FUN_007b9d6c(VehicleNavigationMapGenerator *param_1,uint *param_2)

{
  TransformGroup *pTVar1;
  
  pTVar1 = (TransformGroup *)
           ReflectionUtil::getEntity
                     (*param_2,0x20,"setVehicleNavigationPhysicsObstacleIsPassable","transform");
  if (pTVar1 != (TransformGroup *)0x0) {
    VehicleNavigationMapGenerator::setPhysicsObstacleIsPassable
              (param_1,pTVar1,*(bool *)(param_2 + 4));
    return;
  }
  return;
}


