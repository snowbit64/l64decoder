// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getOvertakeOffset
// Entry Point: 0071eec4
// Size: 224 bytes
// Signature: undefined __thiscall getOvertakeOffset(TrafficVehicle * this, float param_1)


/* TrafficVehicle::getOvertakeOffset(float) */

float __thiscall TrafficVehicle::getOvertakeOffset(TrafficVehicle *this,float param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = 0.0;
  lVar1 = *(long *)(this + 0x380);
  if (lVar1 != 0) {
    switch(*(undefined4 *)(this + 0x378)) {
    case 1:
    case 4:
      fVar2 = (param_1 - *(float *)(this + 0x388)) /
              (*(float *)(this + 0x38c) - *(float *)(this + 0x388));
      fVar4 = (float)NEON_fmin(fVar2,0x3f800000);
      fVar3 = 0.0;
      break;
    case 2:
    case 5:
      return *(float *)(lVar1 + 8);
    case 3:
      fVar3 = 3.141593;
      fVar2 = (param_1 - *(float *)(this + 0x388)) /
              (*(float *)(this + 0x38c) - *(float *)(this + 0x388));
      fVar4 = (float)NEON_fmin(fVar2,0x3f800000);
      fVar4 = 1.0 - fVar4;
      break;
    default:
      goto switchD_0071ef00_caseD_5;
    }
    if (0.0 <= fVar2) {
      fVar3 = fVar4 * 3.141593;
    }
    fVar3 = cosf(fVar3);
    fVar3 = *(float *)(lVar1 + 8) * (fVar3 + -1.0) * -0.5;
  }
switchD_0071ef00_caseD_5:
  return fVar3;
}


