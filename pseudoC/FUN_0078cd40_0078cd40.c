// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078cd40
// Entry Point: 0078cd40
// Size: 140 bytes
// Signature: undefined FUN_0078cd40(void)


void FUN_0078cd40(char **param_1)

{
  char *pcVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  switch(*(undefined4 *)(param_1 + 5)) {
  case 1:
  case 2:
    uVar2 = *(uint *)(param_1 + 4);
    break;
  case 4:
    uVar2 = (uint)*(float *)(param_1 + 4);
    break;
  case 5:
    uVar2 = (uint)(double)param_1[4];
  }
  pcVar1 = (char *)StringUtil::utf8Substr(*param_1,*(uint *)(param_1 + 2),uVar2);
  param_1[0x20] = pcVar1;
  *(undefined4 *)(param_1 + 0x21) = 6;
  *(ushort *)((long)param_1 + 0x10c) = *(ushort *)((long)param_1 + 0x10c) | 1;
  return;
}


