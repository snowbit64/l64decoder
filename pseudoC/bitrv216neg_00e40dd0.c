// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: bitrv216neg
// Entry Point: 00e40dd0
// Size: 96 bytes
// Signature: undefined __cdecl bitrv216neg(float * param_1)


/* fftimpl::bitrv216neg(float*) */

void fftimpl::bitrv216neg(float *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0xe);
  uVar2 = *(undefined8 *)(param_1 + 6);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0x16);
  uVar6 = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 10);
  uVar2 = *(undefined8 *)(param_1 + 0x12);
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0x1e);
  *(undefined8 *)(param_1 + 0x14) = uVar6;
  *(undefined8 *)(param_1 + 0xe) = uVar2;
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0x1a);
  *(undefined8 *)(param_1 + 0x16) = uVar4;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x1a) = uVar7;
  *(undefined8 *)(param_1 + 0x1c) = uVar3;
  *(undefined8 *)(param_1 + 0x1e) = uVar5;
  return;
}


