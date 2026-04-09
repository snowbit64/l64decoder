// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079b22c
// Entry Point: 0079b22c
// Size: 60 bytes
// Signature: undefined FUN_0079b22c(void)


void FUN_0079b22c(char **param_1)

{
  byte bVar1;
  
  bVar1 = MeshSplitManager::saveSplitShapesToFile
                    ((MeshSplitManager *)&MeshSplitManager::s_singletonMeshSplitManager,*param_1);
  *(undefined4 *)(param_1 + 0x21) = 3;
  *(byte *)(param_1 + 0x20) = bVar1 & 1;
  return;
}


