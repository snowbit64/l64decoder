// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a9da8
// Entry Point: 007a9da8
// Size: 68 bytes
// Signature: undefined FUN_007a9da8(void)


void FUN_007a9da8(long param_1,uint *param_2)

{
  long *plVar1;
  ushort uVar2;
  long lVar3;
  
  param_2[0x40] = 0;
  uVar2 = *(ushort *)(param_1 + 0x196);
  param_2[0x42] = 1;
  if (*param_2 < (uint)uVar2) {
    lVar3 = *(long *)(param_1 + 0x178);
    param_2[0x42] = 1;
    plVar1 = (long *)(param_1 + 0x178);
    if (uVar2 != 1) {
      plVar1 = (long *)(lVar3 + (ulong)*param_2 * 8);
    }
    param_2[0x40] = *(uint *)(*plVar1 + 0x18);
  }
  return;
}


