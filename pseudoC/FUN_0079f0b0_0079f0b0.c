// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079f0b0
// Entry Point: 0079f0b0
// Size: 84 bytes
// Signature: undefined FUN_0079f0b0(void)


void FUN_0079f0b0(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  *(undefined4 *)(param_2 + 0x100) = 0xffffffff;
  lVar1 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(param_2 + 0x108) = 1;
  if (lVar1 != 0) {
    uVar3 = *(long *)(lVar1 + 0x30) - *(long *)(lVar1 + 0x28);
    if ((int)(uVar3 >> 3) != 0) {
      uVar2 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0x28) + uVar2 * 8) == param_1) {
          *(int *)(param_2 + 0x100) = (int)uVar2;
          return;
        }
        uVar2 = uVar2 + 1;
      } while ((uVar3 >> 3 & 0xffffffff) != uVar2);
    }
  }
  return;
}


