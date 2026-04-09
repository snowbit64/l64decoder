// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: bitrv208neg
// Entry Point: 00e40e50
// Size: 48 bytes
// Signature: undefined __cdecl bitrv208neg(float * param_1)


/* fftimpl::bitrv208neg(float*) */

void fftimpl::bitrv208neg(float *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 2);
  uVar2 = *(undefined8 *)(param_1 + 4);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0xe);
  uVar3 = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 6);
  *(undefined8 *)(param_1 + 0xc) = uVar2;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
  *(undefined8 *)(param_1 + 10) = uVar3;
  *(undefined8 *)(param_1 + 0xe) = uVar4;
  return;
}


