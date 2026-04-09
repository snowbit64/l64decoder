// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b9948
// Entry Point: 007b9948
// Size: 80 bytes
// Signature: undefined FUN_007b9948(void)


void FUN_007b9948(VehicleNavigationMapGenerator *param_1,uint *param_2)

{
  Node *pNVar1;
  
  if (*param_2 == 0) {
    pNVar1 = (Node *)0x0;
  }
  else {
    pNVar1 = (Node *)ReflectionUtil::getEntity
                               (*param_2,0x20,"createVehicleNavigationMap","roadSplineRootNode");
  }
  VehicleNavigationMapGenerator::removeRoads(param_1,pNVar1);
  return;
}


