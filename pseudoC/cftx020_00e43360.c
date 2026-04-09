// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cftx020
// Entry Point: 00e43360
// Size: 32 bytes
// Signature: undefined __cdecl cftx020(float * param_1)


/* fftimpl::cftx020(float*) */

undefined8 fftimpl::cftx020(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)*(undefined8 *)param_1;
  fVar3 = (float)*(undefined8 *)(param_1 + 2);
  fVar2 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar4 = (float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  *(ulong *)(param_1 + 2) = CONCAT44(fVar2 - fVar4,fVar1 - fVar3);
  *(ulong *)param_1 = CONCAT44(fVar2 + fVar4,fVar1 + fVar3);
  return CONCAT44(fVar2 - fVar4,fVar1 - fVar3);
}


