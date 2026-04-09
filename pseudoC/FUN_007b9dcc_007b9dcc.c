// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b9dcc
// Entry Point: 007b9dcc
// Size: 80 bytes
// Signature: undefined FUN_007b9dcc(void)


void FUN_007b9dcc(VehicleNavigationMapGenerator *param_1,uint *param_2)

{
  TrafficSystem *pTVar1;
  
  if (*param_2 == 0) {
    pTVar1 = (TrafficSystem *)0x0;
  }
  else {
    pTVar1 = (TrafficSystem *)
             ReflectionUtil::getEntity
                       (*param_2,0x10000000,"setVehicleNavigationMapTrafficSystem","trafficSystemId"
                       );
  }
  VehicleNavigationMapGenerator::setTrafficSystem(param_1,pTVar1);
  return;
}


