// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007ae8c4
// Entry Point: 007ae8c4
// Size: 128 bytes
// Signature: undefined FUN_007ae8c4(void)


void FUN_007ae8c4(long param_1,float *param_2)

{
  float fVar1;
  
  if (((*(float *)(param_1 + 0x1d8) != *param_2) &&
      (*(float *)(param_1 + 0x1d8) = *param_2, (*(uint *)(param_1 + 0x1d0) & 0x18) == 0x10)) &&
     (-1 < *(int *)(param_1 + 0x1e0))) {
    AudioSourceSample::rawStop((AudioSourceSample *)(param_1 + 0x158),0.0,0.0,false);
    fVar1 = (float)Sample::getVolume();
    AudioSourceSample::rawPlay((AudioSourceSample *)(param_1 + 0x158),fVar1,0.0,0.0,(Sample *)0x0);
    return;
  }
  return;
}


