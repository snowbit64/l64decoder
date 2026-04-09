// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createLateReverbInputDelay
// Entry Point: 00b134f8
// Size: 180 bytes
// Signature: undefined createLateReverbInputDelay(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FDNReverb::createLateReverbInputDelay() */

void FDNReverb::createLateReverbInputDelay(void)

{
  float fVar1;
  float *in_x0;
  float *pfVar2;
  float fVar3;
  
  createMultiTapDelay((FDNReverb *)in_x0,(MultiTapDelay *)(in_x0 + 0x2a),0.0495,3);
  fVar3 = *in_x0;
  pfVar2 = *(float **)(in_x0 + 0x30);
  fVar1 = (float)(int)(fVar3 * 0.0165);
  if ((uint)in_x0[0x2c] <= (uint)(int)(fVar3 * 0.0165)) {
    fVar1 = (float)((int)in_x0[0x2c] - 1);
  }
  *pfVar2 = fVar1;
  fVar1 = (float)(int)(fVar3 * 0.033);
  if ((uint)in_x0[0x2c] <= (uint)(int)(fVar3 * 0.033)) {
    fVar1 = (float)((int)in_x0[0x2c] - 1);
  }
  pfVar2[1] = fVar1;
  fVar1 = (float)(int)(fVar3 * 0.0495);
  if ((uint)in_x0[0x2c] <= (uint)(int)(fVar3 * 0.0495)) {
    fVar1 = (float)((int)in_x0[0x2c] - 1);
  }
  pfVar2[2] = fVar1;
  return;
}


