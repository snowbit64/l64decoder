// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setWheelSuspensionLength
// Entry Point: 009b61c8
// Size: 44 bytes
// Signature: undefined __thiscall setWheelSuspensionLength(Bt2RaycastVehicle * this, uint param_1, float param_2, float param_3, float param_4)


/* Bt2RaycastVehicle::setWheelSuspensionLength(unsigned int, float, float, float) */

void __thiscall
Bt2RaycastVehicle::setWheelSuspensionLength
          (Bt2RaycastVehicle *this,uint param_1,float param_2,float param_3,float param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x48) + (long)(int)param_1 * 0x1a0;
  *(float *)(lVar1 + 0xd4) = param_2;
  *(float *)(lVar1 + 0xd8) = param_3;
  *(float *)(lVar1 + 0xdc) = param_4;
  if (*(long *)(lVar1 + 0x160) != 0) {
    *(float *)(*(long *)(lVar1 + 0x160) + 0x48) = param_2 - param_3;
  }
  return;
}


