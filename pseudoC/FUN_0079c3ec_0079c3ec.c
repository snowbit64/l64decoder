// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079c3ec
// Entry Point: 0079c3ec
// Size: 20 bytes
// Signature: undefined FUN_0079c3ec(void)


void FUN_0079c3ec(uint *param_1)

{
  MeshSplitManager::removeConnection
            ((MeshSplitManager *)&MeshSplitManager::s_singletonMeshSplitManager,*param_1);
  return;
}


