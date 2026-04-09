// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e4eb28
// Entry Point: 00e4eb28
// Size: 252 bytes
// Signature: undefined FUN_00e4eb28(void)


ulong FUN_00e4eb28(long param_1,long param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  
  if (*(char *)(param_2 + 0x19) == '\0') {
    uVar4 = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x6f8) < 10) {
      if (*(int *)(param_1 + 0x6f8) == 0) {
        *(undefined4 *)(param_1 + 0x6f4) = 0;
      }
      do {
        if (((*(int *)(param_1 + 0x6ec) != 0) && (*(char *)(param_1 + 0x6e4) == '\0')) ||
           (iVar3 = FUN_00e4c7e4(param_1), iVar3 == -1)) break;
        uVar5 = *(uint *)(param_1 + 0x6f8);
        *(int *)(param_1 + 0x6f4) = *(int *)(param_1 + 0x6f4) + (iVar3 << (ulong)(uVar5 & 0x1f));
        *(uint *)(param_1 + 0x6f8) = uVar5 + 8;
      } while ((int)uVar5 < 0x11);
    }
    uVar1 = *(ushort *)(param_2 + ((ulong)*(uint *)(param_1 + 0x6f4) & 0x3ff) * 2 + 0x30);
    if ((short)uVar1 < 0) {
      uVar4 = FUN_00e4cf68(param_1,param_2);
      if (-1 < (int)uVar4) {
        return uVar4;
      }
    }
    else {
      uVar5 = (uint)*(byte *)(*(long *)(param_2 + 8) + (ulong)uVar1);
      iVar2 = *(int *)(param_1 + 0x6f8) - uVar5;
      iVar3 = 0;
      if (-1 < iVar2) {
        iVar3 = iVar2;
      }
      *(uint *)(param_1 + 0x6f4) = *(uint *)(param_1 + 0x6f4) >> (ulong)(uVar5 & 0x1f);
      *(int *)(param_1 + 0x6f8) = iVar3;
      if (-1 < iVar2) {
        return (ulong)uVar1;
      }
      uVar4 = 0xffffffff;
    }
    if ((*(char *)(param_1 + 0x6e4) == '\0') && (*(int *)(param_1 + 0x6ec) != 0)) {
      return uVar4;
    }
  }
  *(undefined4 *)(param_1 + 0x9c) = 0x15;
  return uVar4;
}


