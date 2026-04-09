// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e8b94
// Entry Point: 006e8b94
// Size: 60 bytes
// Signature: undefined FUN_006e8b94(void)


void FUN_006e8b94(long param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x108) = 6;
  uVar1 = 0x21187f9;
  if ((FileManager::s_singletonFileManager[48] & 1) != 0) {
    uVar1 = FileManager::s_singletonFileManager._64_8_;
  }
  *(ushort *)(param_1 + 0x10c) = *(ushort *)(param_1 + 0x10c) & 0xfffe;
  *(undefined8 *)(param_1 + 0x100) = uVar1;
  return;
}


