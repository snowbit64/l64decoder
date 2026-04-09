// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079770c
// Entry Point: 0079770c
// Size: 60 bytes
// Signature: undefined FUN_0079770c(void)


void FUN_0079770c(long param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x108) = 6;
  uVar1 = 0x2118811;
  if ((FileManager::s_singletonFileManager[72] & 1) != 0) {
    uVar1 = FileManager::s_singletonFileManager._88_8_;
  }
  *(ushort *)(param_1 + 0x10c) = *(ushort *)(param_1 + 0x10c) & 0xfffe;
  *(undefined8 *)(param_1 + 0x100) = uVar1;
  return;
}


