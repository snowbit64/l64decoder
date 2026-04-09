// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: bitrv216
// Entry Point: 00e40d7c
// Size: 84 bytes
// Signature: undefined __cdecl bitrv216(float * param_1)


/* fftimpl::bitrv216(float*) */

void fftimpl::bitrv216(float *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 2);
  uVar2 = *(undefined8 *)(param_1 + 6);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x16);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_1 + 4) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0x14);
  uVar1 = *(undefined8 *)(param_1 + 0xe);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)(param_1 + 0x14) = uVar3;
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_1 + 0x1a);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x1a) = uVar4;
  *(undefined8 *)(param_1 + 0x1c) = uVar1;
  return;
}


