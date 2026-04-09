// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getHorizontalRotation
// Entry Point: 00b22e64
// Size: 168 bytes
// Signature: undefined getHorizontalRotation(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidInputDevice::getHorizontalRotation() */

float AndroidInputDevice::getHorizontalRotation(void)

{
  long in_x0;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = (float)MathUtil::degreeToRadian(25.0);
  fVar2 = atan2f(*(float *)(in_x0 + 0x24),*(float *)(in_x0 + 0x20));
  fVar4 = (0.9 - *(float *)(in_x0 + 0x28)) * 4.0;
  fVar3 = 3.141593;
  if (fVar2 <= 0.0) {
    fVar3 = -3.141593;
  }
  fVar3 = fVar3 - fVar2;
  fVar2 = 1.0;
  if (fVar4 <= 1.0) {
    fVar2 = fVar4;
  }
  fVar5 = 0.0;
  if (0.0 <= fVar4) {
    fVar5 = fVar2;
  }
  fVar2 = fVar1;
  if (fVar3 <= fVar1) {
    fVar2 = fVar3;
  }
  fVar4 = -fVar1;
  if (-fVar1 <= fVar3) {
    fVar4 = fVar2;
  }
  return fVar4 * fVar5;
}


