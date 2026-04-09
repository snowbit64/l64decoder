// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079c7cc
// Entry Point: 0079c7cc
// Size: 56 bytes
// Signature: undefined FUN_0079c7cc(void)


void FUN_0079c7cc(long param_1)

{
  byte bVar1;
  
  bVar1 = MeshSplitManager::startWriteServerEvents();
  *(undefined4 *)(param_1 + 0x108) = 3;
  *(byte *)(param_1 + 0x100) = bVar1 & 1;
  return;
}


