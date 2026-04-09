// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078f974
// Entry Point: 0078f974
// Size: 60 bytes
// Signature: undefined FUN_0078f974(void)


void FUN_0078f974(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = AndroidImeUtil::getLastImeStringUtf8();
  *(undefined8 *)(param_1 + 0x100) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = 6;
  *(ushort *)(param_1 + 0x10c) = *(ushort *)(param_1 + 0x10c) & 0xfffe;
  return;
}


