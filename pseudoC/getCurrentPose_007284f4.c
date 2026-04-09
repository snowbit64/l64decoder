// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCurrentPose
// Entry Point: 007284f4
// Size: 96 bytes
// Signature: undefined getCurrentPose(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StoppingPath::getCurrentPose() const */

undefined4 StoppingPath::getCurrentPose(void)

{
  long *in_x0;
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *in_x0;
  fVar2 = *(float *)(lVar1 + 0x10);
  if (*(char *)(in_x0 + 4) == '\0') {
    fVar3 = *(float *)(lVar1 + 0x14);
  }
  else {
    fVar2 = -fVar2;
    fVar3 = -*(float *)(lVar1 + 0x14);
  }
  NEON_fmadd(fVar2,fVar2,fVar3 * fVar3);
  return *(undefined4 *)(lVar1 + 8);
}


