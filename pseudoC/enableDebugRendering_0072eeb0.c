// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enableDebugRendering
// Entry Point: 0072eeb0
// Size: 88 bytes
// Signature: undefined __thiscall enableDebugRendering(VehicleNavigationMapGenerator * this, bool param_1)


/* VehicleNavigationMapGenerator::enableDebugRendering(bool) */

void __thiscall
VehicleNavigationMapGenerator::enableDebugRendering
          (VehicleNavigationMapGenerator *this,bool param_1)

{
  UpdateRenderingManager *this_00;
  
  if (this[0x1e0] == (VehicleNavigationMapGenerator)param_1) {
    return;
  }
  this[0x1e0] = (VehicleNavigationMapGenerator)param_1;
  this_00 = (UpdateRenderingManager *)UpdateRenderingManager::getInstance();
  if (param_1) {
    UpdateRenderingManager::addUpdateableRendered(this_00,(UpdateableRendered *)(this + 0x30));
    return;
  }
  UpdateRenderingManager::removeUpdateableRendered(this_00,(UpdateableRendered *)(this + 0x30));
  return;
}


