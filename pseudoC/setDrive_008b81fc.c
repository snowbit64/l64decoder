// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDrive
// Entry Point: 008b81fc
// Size: 184 bytes
// Signature: undefined __thiscall setDrive(Distortion * this, float param_1)


/* Distortion::setDrive(float) */

void __thiscall Distortion::setDrive(Distortion *this,float param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 < 0.0) {
    return;
  }
  *(float *)(this + 4) = param_1;
  if (param_1 == 0.0) {
    return;
  }
  if (param_1 <= 0.0) {
    return;
  }
  switch(*(undefined4 *)this) {
  case 0:
    *(float *)(this + 8) = param_1;
    if (param_1 - (float)(int)param_1 != 0.0) {
      return;
    }
    param_1 = param_1 + -0.1;
    break;
  case 1:
    uVar1 = 0x3f800000;
    uVar2 = 0x41100000;
    goto LAB_008b82a8;
  case 2:
  case 3:
    *(float *)(this + 8) = 1.0 - param_1;
    if (1.0 - param_1 != 0.0) {
      return;
    }
    *(undefined4 *)(this + 8) = 0x3dcccccd;
    return;
  case 4:
  case 5:
  case 6:
    break;
  default:
    goto switchD_008b823c_caseD_7;
  case 8:
    uVar1 = 0;
    uVar2 = 0x3eaaaaab;
LAB_008b82a8:
    param_1 = (float)NEON_fmadd(param_1,uVar2,uVar1);
  }
  *(float *)(this + 8) = param_1;
switchD_008b823c_caseD_7:
  return;
}


