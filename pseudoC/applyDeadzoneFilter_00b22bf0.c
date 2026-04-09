// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyDeadzoneFilter
// Entry Point: 00b22bf0
// Size: 176 bytes
// Signature: undefined __thiscall applyDeadzoneFilter(AndroidInputDevice * this, INPUT_AXIS param_1, float param_2)


/* AndroidInputDevice::applyDeadzoneFilter(AndroidInputDevice::INPUT_AXIS, float) */

float __thiscall
AndroidInputDevice::applyDeadzoneFilter(AndroidInputDevice *this,INPUT_AXIS param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(this + (ulong)param_1 * 4 + 0x1480);
  if ((param_1 & 0xfffffffe) == 10) {
    fVar1 = 1.0;
    fVar3 = (float)NEON_fmadd(fVar2,0xc0000000,0x3f800000);
    if (param_2 <= fVar3 && fVar2 == 0.9999 || param_2 <= fVar3 && fVar2 < 0.9999) {
      return (param_2 + 1.0) / (1.0 - fVar2) + -1.0;
    }
  }
  else {
    if (-fVar2 <= param_2) {
      if ((param_2 <= fVar2 || fVar2 != 0.9999) && (param_2 <= fVar2 || 0.9999 <= fVar2)) {
        return 0.0;
      }
    }
    else if (0.9999 < fVar2) {
      return 0.0;
    }
    fVar1 = -fVar2;
    if (param_2 <= 0.0) {
      fVar1 = fVar2;
    }
    fVar1 = (fVar1 + param_2) / (1.0 - fVar2);
  }
  return fVar1;
}


