// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setGoal
// Entry Point: 00734270
// Size: 100 bytes
// Signature: undefined __thiscall setGoal(VehicleNavigationAgentEntity * this, Vector2 * param_1, Vector2 * param_2)


/* VehicleNavigationAgentEntity::setGoal(Vector2 const&, Vector2 const&) */

void __thiscall
VehicleNavigationAgentEntity::setGoal
          (VehicleNavigationAgentEntity *this,Vector2 *param_1,Vector2 *param_2)

{
  if ((*(byte *)(*(long *)(this + 0x38) + 0x1383) & 1) != 0) {
    VehicleNavigationPlanner::cancelPlanning
              (*(VehicleNavigationPlanner **)(this + 0x28),*(VehicleNavigationAgent **)(this + 0x38)
               ,false);
  }
  this[0x54] = (VehicleNavigationAgentEntity)0x0;
  *(undefined8 *)(this + 0x58) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x60) = *(undefined8 *)param_2;
  return;
}


