// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bd5a0
// Entry Point: 007bd5a0
// Size: 80 bytes
// Signature: undefined FUN_007bd5a0(void)


void FUN_007bd5a0(TrafficSystem *param_1,uint *param_2)

{
  VehicleNavigationMapGenerator *pVVar1;
  
  if (*param_2 == 0) {
    pVVar1 = (VehicleNavigationMapGenerator *)0x0;
  }
  else {
    pVVar1 = (VehicleNavigationMapGenerator *)
             ReflectionUtil::getEntity
                       (*param_2,0x80000000,"setTrafficSystemVehicleNavigationMap",
                        "vehicleNavigationMap");
  }
  TrafficSystem::linkVehicleNavigationMapGenerator(param_1,pVVar1);
  return;
}


