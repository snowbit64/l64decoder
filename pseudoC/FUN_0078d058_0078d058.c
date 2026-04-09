// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078d058
// Entry Point: 0078d058
// Size: 136 bytes
// Signature: undefined FUN_0078d058(void)


void FUN_0078d058(char **param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = EnvUtil::getTimeAt(*(uint *)(param_1 + 2),*(uint *)(param_1 + 4),*(uint *)(param_1 + 6),
                             *(uint *)(param_1 + 8),*(uint *)(param_1 + 10),*(uint *)(param_1 + 0xc)
                            );
  uVar3 = (ulong)*(uint *)(param_1 + 0x10);
  if (0 < (int)*(uint *)(param_1 + 0x10)) {
    lVar1 = 0;
    if (uVar3 != 0) {
      lVar1 = lVar2 / (long)uVar3;
    }
    lVar2 = lVar1 * uVar3;
  }
  EnvUtil::formatDateString(lVar2 + *(int *)(param_1 + 0xe),*param_1,&DAT_0107c22d,0x40);
  param_1[0x20] = &DAT_0107c22d;
  *(undefined4 *)(param_1 + 0x21) = 6;
  *(ushort *)((long)param_1 + 0x10c) = *(ushort *)((long)param_1 + 0x10c) & 0xfffe;
  return;
}


