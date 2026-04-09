// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b98e4
// Entry Point: 007b98e4
// Size: 100 bytes
// Signature: undefined FUN_007b98e4(void)


void FUN_007b98e4(VehicleNavigationMapGenerator *param_1,uint *param_2)

{
  Node *pNVar1;
  
  if (*param_2 == 0) {
    pNVar1 = (Node *)0x0;
  }
  else {
    pNVar1 = (Node *)ReflectionUtil::getEntity
                               (*param_2,0x20,"createVehicleNavigationMap","roadSplineRootNode");
  }
  VehicleNavigationMapGenerator::addRoads
            (param_1,pNVar1,(float)param_2[4],(float)param_2[8],INFINITY);
  return;
}


