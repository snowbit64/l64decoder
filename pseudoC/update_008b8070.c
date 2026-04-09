// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 008b8070
// Size: 216 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Distortion::update() */

undefined4 Distortion::update(void)

{
  uint *in_x0;
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (9 < *in_x0) {
switchD_008b80b8_caseD_7:
    return uVar3;
  }
  fVar1 = (float)in_x0[1];
  if (fVar1 <= 0.0) {
    return 0;
  }
  uVar3 = 1;
  if (fVar1 == 0.0) {
    return 1;
  }
  switch(*in_x0) {
  case 0:
    in_x0[2] = (uint)fVar1;
    if (fVar1 - (float)(int)fVar1 != 0.0) {
      return 1;
    }
    fVar1 = fVar1 + -0.1;
    goto switchD_008b80b8_caseD_4;
  case 1:
    uVar2 = 0x3f800000;
    uVar3 = 0x41100000;
    break;
  case 2:
  case 3:
    in_x0[2] = (uint)(1.0 - fVar1);
    if (1.0 - fVar1 != 0.0) {
      return 1;
    }
    in_x0[2] = 0x3dcccccd;
    return 1;
  case 4:
  case 5:
  case 6:
    goto switchD_008b80b8_caseD_4;
  default:
    goto switchD_008b80b8_caseD_7;
  case 8:
    uVar2 = 0;
    uVar3 = 0x3eaaaaab;
  }
  fVar1 = (float)NEON_fmadd(fVar1,uVar3,uVar2);
switchD_008b80b8_caseD_4:
  in_x0[2] = (uint)fVar1;
  return 1;
}


