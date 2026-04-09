// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b312c
// Entry Point: 007b312c
// Size: 52 bytes
// Signature: undefined FUN_007b312c(void)


void FUN_007b312c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x178);
  lVar3 = *(long *)(param_1 + 0x180);
  lVar2 = *(long *)(param_1 + 0x1a8);
  lVar4 = *(long *)(param_1 + 0x1b0);
  *(undefined4 *)(param_2 + 0x108) = 1;
  *(int *)(param_2 + 0x100) =
       (int)((ulong)(lVar4 - lVar2) >> 6) + (int)((ulong)(lVar3 - lVar1) >> 4) * -0x45d1745d;
  return;
}


