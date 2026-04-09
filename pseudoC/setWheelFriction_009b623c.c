// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setWheelFriction
// Entry Point: 009b623c
// Size: 52 bytes
// Signature: undefined __thiscall setWheelFriction(Bt2RaycastVehicle * this, uint param_1, float param_2, float param_3, float param_4, float param_5)


/* Bt2RaycastVehicle::setWheelFriction(unsigned int, float, float, float, float) */

void __thiscall
Bt2RaycastVehicle::setWheelFriction
          (Bt2RaycastVehicle *this,uint param_1,float param_2,float param_3,float param_4,
          float param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x48) + (long)(int)param_1 * 0x1a0;
  *(float *)(lVar1 + 0x148) = param_2;
  *(float *)(lVar1 + 0x150) = param_3;
  *(float *)(lVar1 + 0x14c) = param_4;
  *(float *)(lVar1 + 0x154) = param_5;
  if (*(long *)(lVar1 + 0x160) != 0) {
    *(float *)(*(long *)(lVar1 + 0x160) + 0x4c) = param_5 * 0.25;
  }
  return;
}


