// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setStart
// Entry Point: 00737068
// Size: 52 bytes
// Signature: undefined __thiscall setStart(VehicleNavigationAgent * this, PlanarPose * param_1)


/* VehicleNavigationAgent::setStart(PlanarPose const*) */

void __thiscall VehicleNavigationAgent::setStart(VehicleNavigationAgent *this,PlanarPose *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(int *)(this + 0x13a0) != -1) {
    uVar2 = 0xffffffff;
    do {
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulong)uVar1;
      lVar3 = uVar2 * 0x10;
      uVar4 = *(undefined8 *)(param_1 + lVar3);
      *(undefined8 *)(this + lVar3 + 0x1318) = *(undefined8 *)((long)(param_1 + lVar3) + 8);
      *(undefined8 *)(this + lVar3 + 0x1310) = uVar4;
    } while (uVar1 != *(uint *)(this + 0x13a0));
  }
  return;
}


