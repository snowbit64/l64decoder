// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f26108
// Entry Point: 00f26108
// Size: 88 bytes
// Signature: undefined FUN_00f26108(void)


int FUN_00f26108(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 != param_2) {
    uVar3 = *(uint *)(param_1 + 0x14);
    uVar4 = *(uint *)(param_2 + 0x14);
    uVar1 = uVar3;
    if (uVar4 <= uVar3) {
      uVar1 = uVar4;
    }
    iVar5 = 1;
    if (uVar4 > uVar3) {
      iVar5 = -1;
    }
    iVar2 = 0;
    if (uVar3 != uVar4) {
      iVar2 = iVar5;
    }
    iVar5 = memcmp((void *)(param_1 + 0x18),(void *)(param_2 + 0x18),(ulong)uVar1);
    if (iVar5 != 0) {
      iVar2 = iVar5;
    }
    return iVar2;
  }
  return 0;
}


