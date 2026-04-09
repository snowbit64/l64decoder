// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setGoal
// Entry Point: 0073709c
// Size: 36 bytes
// Signature: undefined __thiscall setGoal(VehicleNavigationAgent * this, PlanarPose * param_1)


/* VehicleNavigationAgent::setGoal(PlanarPose const&) */

void __thiscall VehicleNavigationAgent::setGoal(VehicleNavigationAgent *this,PlanarPose *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x1376) = 0xffffffff;
  *(undefined8 *)(this + 0x1368) = uVar2;
  *(undefined8 *)(this + 0x1360) = uVar1;
  *(undefined2 *)(this + 0x137a) = 0xffff;
  return;
}


