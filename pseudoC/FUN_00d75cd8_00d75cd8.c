// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d75cd8
// Entry Point: 00d75cd8
// Size: 76 bytes
// Signature: undefined FUN_00d75cd8(void)


void FUN_00d75cd8(long param_1)

{
  long lVar1;
  long lVar2;
  
  *(undefined4 *)(param_1 + 0xa0) = 0;
  lVar2 = *(long *)(param_1 + 0x230);
  if (1 < *(int *)(param_1 + 0x1a0)) {
    *(undefined4 *)(lVar2 + 0x30) = 1;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    return;
  }
  lVar1 = 0x4c;
  if (*(int *)(param_1 + 400) != 1) {
    lVar1 = 0xc;
  }
  *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(*(long *)(param_1 + 0x1a8) + lVar1);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  return;
}


