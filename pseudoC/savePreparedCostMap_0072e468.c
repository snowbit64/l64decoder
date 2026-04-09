// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: savePreparedCostMap
// Entry Point: 0072e468
// Size: 68 bytes
// Signature: undefined __thiscall savePreparedCostMap(VehicleNavigationMapGenerator * this, _func_void_void_ptr_bool * param_1, void * param_2)


/* VehicleNavigationMapGenerator::savePreparedCostMap(void (*)(void*, bool), void*) */

void __thiscall
VehicleNavigationMapGenerator::savePreparedCostMap
          (VehicleNavigationMapGenerator *this,_func_void_void_ptr_bool *param_1,void *param_2)

{
  SaveHelperManager *this_00;
  
  this_00 = (SaveHelperManager *)SaveHelperManager::getInstance();
  SaveHelperManager::beginSave(this_00,*(SaveHelper **)(this + 0x180),param_1,param_2);
  *(undefined8 *)(this + 0x180) = 0;
  return;
}


