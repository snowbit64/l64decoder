// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b3260
// Entry Point: 007b3260
// Size: 120 bytes
// Signature: undefined FUN_007b3260(void)


void FUN_007b3260(long param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *param_2;
  iVar5 = (int)((ulong)(*(long *)(param_1 + 0x180) - *(long *)(param_1 + 0x178)) >> 4);
  uVar2 = param_2[4];
  uVar3 = uVar4 + iVar5 * 0x45d1745d;
  if (uVar4 < (uint)(iVar5 * -0x45d1745d)) {
    if (uVar2 != 0) {
      uVar4 = 0xffffffff;
    }
  }
  else if ((uVar3 < (uint)((ulong)(*(long *)(param_1 + 0x1b0) - *(long *)(param_1 + 0x1a8)) >> 6))
          && (lVar1 = *(long *)(param_1 + 0x1a8) + (ulong)uVar3 * 0x40,
             uVar2 < *(uint *)(lVar1 + 0x20))) {
    uVar4 = *(uint *)(lVar1 + (ulong)uVar2 * 4 + 0x24);
  }
  else {
    uVar4 = 0xffffffff;
  }
  param_2[0x40] = uVar4;
  param_2[0x42] = 1;
  return;
}


