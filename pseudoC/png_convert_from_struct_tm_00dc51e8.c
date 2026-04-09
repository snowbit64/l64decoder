// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_convert_from_struct_tm
// Entry Point: 00dc51e8
// Size: 56 bytes
// Signature: undefined png_convert_from_struct_tm(void)


void png_convert_from_struct_tm(short *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  short sVar5;
  
  uVar1 = param_2[2];
  sVar5 = *(short *)(param_2 + 5);
  cVar4 = *(char *)(param_2 + 4);
  uVar2 = param_2[1];
  *(char *)((long)param_1 + 3) = (char)param_2[3];
  uVar3 = *param_2;
  *(char *)(param_1 + 2) = (char)uVar1;
  *(char *)((long)param_1 + 5) = (char)uVar2;
  *param_1 = sVar5 + 0x76c;
  *(char *)(param_1 + 1) = cVar4 + '\x01';
  *(char *)(param_1 + 3) = (char)uVar3;
  return;
}


