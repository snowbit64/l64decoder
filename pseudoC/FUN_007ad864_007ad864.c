// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007ad864
// Entry Point: 007ad864
// Size: 104 bytes
// Signature: undefined FUN_007ad864(void)


void FUN_007ad864(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = GsMaterial::getCustomShader();
  if ((lVar1 == 0) || (*(uint *)(param_1 + 0x88) == 0)) {
    puVar2 = &DAT_0050a39f;
  }
  else {
    puVar2 = *(undefined **)(*(long *)(lVar1 + 0x110) + (ulong)*(uint *)(param_1 + 0x88) * 0xe0);
  }
  *(undefined **)(param_2 + 0x100) = puVar2;
  *(undefined4 *)(param_2 + 0x108) = 6;
  *(ushort *)(param_2 + 0x10c) = *(ushort *)(param_2 + 0x10c) & 0xfffe;
  return;
}


