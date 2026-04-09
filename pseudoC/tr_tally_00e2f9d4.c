// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _tr_tally
// Entry Point: 00e2f9d4
// Size: 160 bytes
// Signature: undefined _tr_tally(void)


bool _tr_tally(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  short sVar2;
  short *psVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x170c);
  lVar4 = *(long *)(param_1 + 0x1700);
  *(short *)(*(long *)(param_1 + 0x1710) + (ulong)uVar1 * 2) = (short)param_2;
  *(uint *)(param_1 + 0x170c) = uVar1 + 1;
  *(char *)(lVar4 + (ulong)uVar1) = (char)param_3;
  if (param_2 == 0) {
    psVar3 = (short *)(param_1 + (ulong)param_3 * 4 + 0xd4);
  }
  else {
    uVar1 = param_2 - 1;
    if (0xff < uVar1) {
      uVar1 = (uVar1 >> 7) + 0x100;
    }
    lVar4 = param_1 + (ulong)(byte)_length_code[param_3] * 4;
    sVar2 = *(short *)(lVar4 + 0x4d8);
    psVar3 = (short *)(param_1 + (ulong)(byte)(&_dist_code)[uVar1] * 4 + 0x9c8);
    *(int *)(param_1 + 0x1728) = *(int *)(param_1 + 0x1728) + 1;
    *(short *)(lVar4 + 0x4d8) = sVar2 + 1;
  }
  *psVar3 = *psVar3 + 1;
  return *(int *)(param_1 + 0x170c) == *(int *)(param_1 + 0x1708) + -1;
}


