// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enableDebugRendering
// Entry Point: 00734a5c
// Size: 88 bytes
// Signature: undefined __thiscall enableDebugRendering(VehicleNavigationAgentEntity * this, bool param_1)


/* VehicleNavigationAgentEntity::enableDebugRendering(bool) */

void __thiscall
VehicleNavigationAgentEntity::enableDebugRendering(VehicleNavigationAgentEntity *this,bool param_1)

{
  UpdateRenderingManager *this_00;
  
  if (this[0x68] == (VehicleNavigationAgentEntity)param_1) {
    return;
  }
  this[0x68] = (VehicleNavigationAgentEntity)param_1;
  this_00 = (UpdateRenderingManager *)UpdateRenderingManager::getInstance();
  if (param_1) {
    UpdateRenderingManager::addUpdateableRendered(this_00,(UpdateableRendered *)(this + 0x20));
    return;
  }
  UpdateRenderingManager::removeUpdateableRendered(this_00,(UpdateableRendered *)(this + 0x20));
  return;
}


