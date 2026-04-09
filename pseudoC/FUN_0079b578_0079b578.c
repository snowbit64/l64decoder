// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079b578
// Entry Point: 0079b578
// Size: 60 bytes
// Signature: undefined FUN_0079b578(void)


void FUN_0079b578(char **param_1)

{
  byte bVar1;
  
  bVar1 = MeshSplitManager::loadSplitShapesFromFile
                    ((MeshSplitManager *)&MeshSplitManager::s_singletonMeshSplitManager,*param_1);
  *(undefined4 *)(param_1 + 0x21) = 3;
  *(byte *)(param_1 + 0x20) = bVar1 & 1;
  return;
}


