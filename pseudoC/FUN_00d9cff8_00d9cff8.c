// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d9cff8
// Entry Point: 00d9cff8
// Size: 88 bytes
// Signature: undefined FUN_00d9cff8(void)


int FUN_00d9cff8(long param_1,uint param_2,uint param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar4 = 0;
  uVar6 = 0x100;
  uVar5 = param_2 | 0x100;
  do {
    iVar1 = uVar6 + (uVar5 >> 8);
    uVar2 = uVar6 & param_3 << 1;
    uVar3 = uVar5 << 1;
    uVar6 = uVar6 & ((param_3 ^ uVar5) << 1 ^ 0xffffffff);
    iVar4 = *(int *)(param_4 +
                    (ulong)((-(uVar5 >> 7 & 1) & 0x7f0 ^
                            (uint)*(ushort *)(param_1 + (ulong)(iVar1 + uVar2) * 2)) >> 4) * 4) +
            iVar4;
    uVar5 = uVar3;
    param_3 = param_3 << 1;
  } while (uVar3 < 0x10000);
  return iVar4;
}


