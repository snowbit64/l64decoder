// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079c784
// Entry Point: 0079c784
// Size: 72 bytes
// Signature: undefined FUN_0079c784(void)


void FUN_0079c784(uint *param_1)

{
  long lVar1;
  
  param_1[0x40] = 0;
  param_1[0x42] = 1;
  lVar1 = MeshSplitManager::resolveStreamSplitShapeId
                    ((MeshSplitManager *)&MeshSplitManager::s_singletonMeshSplitManager,*param_1,
                     param_1[4]);
  if (lVar1 != 0) {
    param_1[0x40] = *(uint *)(lVar1 + 0x18);
  }
  return;
}


