// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079cdbc
// Entry Point: 0079cdbc
// Size: 20 bytes
// Signature: undefined FUN_0079cdbc(void)


void FUN_0079cdbc(char **param_1)

{
  MeshSplitManager::removeSplitShapesShaderParameterOverwrite
            ((MeshSplitManager *)&MeshSplitManager::s_singletonMeshSplitManager,*param_1);
  return;
}


