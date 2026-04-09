// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setWheelCollisionMask
// Entry Point: 009b61f4
// Size: 72 bytes
// Signature: undefined __thiscall setWheelCollisionMask(Bt2RaycastVehicle * this, uint param_1, uint param_2)


/* Bt2RaycastVehicle::setWheelCollisionMask(unsigned int, unsigned int) */

void __thiscall
Bt2RaycastVehicle::setWheelCollisionMask(Bt2RaycastVehicle *this,uint param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 0x48);
  lVar2 = lVar1 + (long)(int)param_1 * 0x1a0;
  *(uint *)(lVar2 + 0x174) = param_2;
  if (*(long *)(lVar2 + 0x160) != 0) {
    lVar1 = lVar1 + (long)(int)param_1 * 0x1a0;
    *(uint *)(*(long *)(*(long *)(*(long *)(this + (ulong)*(uint *)(lVar1 + 0x180) * 8 + 8) + 0x108)
                       + 0x18) + (long)*(int *)(lVar1 + 0x168) * 0x10 + 8) = param_2;
  }
  return;
}


