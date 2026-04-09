// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setWaypoint
// Entry Point: 00af8cc8
// Size: 56 bytes
// Signature: undefined __thiscall setWaypoint(NavigationMeshPath * this, uint param_1, float * param_2)


/* NavigationMeshPath::setWaypoint(unsigned int, float const*) */

void __thiscall
NavigationMeshPath::setWaypoint(NavigationMeshPath *this,uint param_1,float *param_2)

{
  uint uVar1;
  long lVar2;
  
  if (param_1 < *(uint *)(this + 0xc)) {
    uVar1 = param_1 * 3;
    lVar2 = *(long *)(this + 0x28);
    *(float *)(lVar2 + (ulong)uVar1 * 4) = *param_2;
    *(float *)(lVar2 + (ulong)(uVar1 + 1) * 4) = param_2[1];
    *(float *)(lVar2 + (ulong)(uVar1 + 2) * 4) = param_2[2];
  }
  return;
}


