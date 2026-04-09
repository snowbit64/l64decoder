// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b9c60
// Entry Point: 007b9c60
// Size: 80 bytes
// Signature: undefined FUN_007b9c60(void)


void FUN_007b9c60(VehicleNavigationMapGenerator *param_1,uint *param_2)

{
  TransformGroup *pTVar1;
  
  pTVar1 = (TransformGroup *)
           ReflectionUtil::getEntity
                     (*param_2,0x20,"removeVehicleNavigationPhysicsObstacle","transform");
  if (pTVar1 != (TransformGroup *)0x0) {
    VehicleNavigationMapGenerator::removePhysicsObstacle(param_1,pTVar1);
    return;
  }
  return;
}


