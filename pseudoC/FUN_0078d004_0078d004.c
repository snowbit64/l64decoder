// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078d004
// Entry Point: 0078d004
// Size: 84 bytes
// Signature: undefined FUN_0078d004(void)


void FUN_0078d004(char **param_1)

{
  longlong lVar1;
  
  lVar1 = EnvUtil::getTime();
  EnvUtil::formatDateString(lVar1,*param_1,&DAT_0107c1ed,0x40);
  param_1[0x20] = &DAT_0107c1ed;
  *(undefined4 *)(param_1 + 0x21) = 6;
  *(ushort *)((long)param_1 + 0x10c) = *(ushort *)((long)param_1 + 0x10c) & 0xfffe;
  return;
}


