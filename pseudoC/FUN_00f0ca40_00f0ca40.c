// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0ca40
// Entry Point: 00f0ca40
// Size: 144 bytes
// Signature: undefined FUN_00f0ca40(void)


void FUN_00f0ca40(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  
  bVar1 = *(byte *)(param_2 + 1);
  if ((bVar1 & 7) == 0) {
    if (2 < *(byte *)(*(long *)(param_1 + 0x18) + 0x21) - 1) {
      *(byte *)(param_2 + 1) = bVar1 & 0xf8 | *(byte *)(*(long *)(param_1 + 0x18) + 0x20) & 3;
      return;
    }
    *(byte *)(param_2 + 1) = bVar1 | 4;
    if ((4 < *(int *)((long)*(long **)(param_2 + 8) + 0xc)) &&
       (lVar3 = **(long **)(param_2 + 8), (*(byte *)(lVar3 + 1) & 3) != 0)) {
      lVar2 = *(long *)(param_1 + 0x18);
      if (*(byte *)(lVar2 + 0x21) - 1 < 3) {
        FUN_00f0c8bc(lVar2,lVar3);
        return;
      }
      *(byte *)(param_2 + 1) = bVar1 & 0xf8 | *(byte *)(lVar2 + 0x20) & 3;
      return;
    }
  }
  return;
}


