// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007ad584
// Entry Point: 007ad584
// Size: 96 bytes
// Signature: undefined FUN_007ad584(void)


void FUN_007ad584(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = GsMaterial::getEmissiveMap();
  if (lVar1 == 0) {
    puVar2 = &DAT_0050a39f;
  }
  else {
    puVar2 = (undefined *)(lVar1 + 0x31);
    if ((*(byte *)(lVar1 + 0x30) & 1) != 0) {
      puVar2 = *(undefined **)(lVar1 + 0x40);
    }
  }
  *(undefined **)(param_2 + 0x100) = puVar2;
  *(undefined4 *)(param_2 + 0x108) = 6;
  *(ushort *)(param_2 + 0x10c) = *(ushort *)(param_2 + 0x10c) & 0xfffe;
  return;
}


