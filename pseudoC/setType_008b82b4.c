// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setType
// Entry Point: 008b82b4
// Size: 188 bytes
// Signature: undefined __thiscall setType(Distortion * this, Type param_1)


/* Distortion::setType(DistortionSettings::Type) */

void __thiscall Distortion::setType(Distortion *this,Type param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (9 < param_1) {
    return;
  }
  if (*(Type *)this == param_1) {
    return;
  }
  fVar1 = *(float *)(this + 4);
  *(Type *)this = param_1;
  if (fVar1 <= 0.0) {
    return;
  }
  switch(param_1) {
  case 0:
    *(float *)(this + 8) = fVar1;
    if (fVar1 - (float)(int)fVar1 != 0.0) {
      return;
    }
    fVar1 = fVar1 + -0.1;
    break;
  case 1:
    uVar2 = 0x3f800000;
    uVar3 = 0x41100000;
    goto LAB_008b8364;
  case 2:
  case 3:
    *(float *)(this + 8) = 1.0 - fVar1;
    if (1.0 - fVar1 != 0.0) {
      return;
    }
    *(undefined4 *)(this + 8) = 0x3dcccccd;
    return;
  case 4:
  case 5:
  case 6:
    break;
  default:
    goto switchD_008b82f8_caseD_7;
  case 8:
    uVar2 = 0;
    uVar3 = 0x3eaaaaab;
LAB_008b8364:
    fVar1 = (float)NEON_fmadd(fVar1,uVar3,uVar2);
  }
  *(float *)(this + 8) = fVar1;
switchD_008b82f8_caseD_7:
  return;
}


