// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeAmountDistortion
// Entry Point: 008b8148
// Size: 180 bytes
// Signature: undefined computeAmountDistortion(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Distortion::computeAmountDistortion() */

void Distortion::computeAmountDistortion(void)

{
  undefined4 *in_x0;
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  fVar1 = (float)in_x0[1];
  if (fVar1 == 0.0) {
    return;
  }
  switch(*in_x0) {
  case 0:
    in_x0[2] = fVar1;
    if (fVar1 - (float)(int)fVar1 == 0.0) {
      in_x0[2] = fVar1 + -0.1;
      return;
    }
    break;
  case 1:
    uVar3 = 0x3f800000;
    uVar2 = 0x41100000;
    goto LAB_008b81f0;
  case 2:
  case 3:
    in_x0[2] = 1.0 - fVar1;
    if (1.0 - fVar1 == 0.0) {
      in_x0[2] = 0x3dcccccd;
      return;
    }
    break;
  case 4:
  case 5:
  case 6:
    in_x0[2] = fVar1;
    return;
  case 8:
    uVar3 = 0;
    uVar2 = 0x3eaaaaab;
LAB_008b81f0:
    uVar2 = NEON_fmadd(fVar1,uVar2,uVar3);
    in_x0[2] = uVar2;
    return;
  }
  return;
}


