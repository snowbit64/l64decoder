// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: bitrv208
// Entry Point: 00e40e30
// Size: 32 bytes
// Signature: undefined __cdecl bitrv208(float * param_1)


/* fftimpl::bitrv208(float*) */

void fftimpl::bitrv208(float *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xc);
  uVar2 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 6);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 6) = uVar1;
  *(undefined8 *)(param_1 + 8) = uVar2;
  return;
}


