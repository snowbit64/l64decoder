// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fill_zlib_filefunc64_32_def_from_filefunc32
// Entry Point: 00e33190
// Size: 52 bytes
// Signature: undefined fill_zlib_filefunc64_32_def_from_filefunc32(void)


void fill_zlib_filefunc64_32_def_from_filefunc32(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = param_2[1];
  uVar1 = param_2[2];
  uVar2 = param_2[6];
  uVar4 = *param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = uVar3;
  uVar5 = param_2[7];
  param_1[2] = uVar1;
  uVar3 = param_2[5];
  param_1[7] = uVar5;
  param_1[8] = uVar4;
  param_1[5] = uVar3;
  param_1[6] = uVar2;
  uVar3 = param_2[4];
  param_1[9] = param_2[3];
  param_1[10] = uVar3;
  return;
}


