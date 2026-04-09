// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateDifferential
// Entry Point: 009b6764
// Size: 36 bytes
// Signature: undefined __thiscall updateDifferential(Bt2RaycastVehicle * this, uint param_1, float param_2, float param_3)


/* Bt2RaycastVehicle::updateDifferential(unsigned int, float, float) */

void __thiscall
Bt2RaycastVehicle::updateDifferential
          (Bt2RaycastVehicle *this,uint param_1,float param_2,float param_3)

{
  float *pfVar1;
  
  if (param_1 < *(uint *)(this + 0x5c)) {
    pfVar1 = (float *)(*(long *)(this + 0x68) + (long)(int)param_1 * 0xc);
    *pfVar1 = param_2;
    pfVar1[1] = param_3;
    updateWheelsMotorSpeedContribution();
    return;
  }
  return;
}


