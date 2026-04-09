// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079c228
// Entry Point: 0079c228
// Size: 80 bytes
// Signature: undefined FUN_0079c228(void)


void FUN_0079c228(uint *param_1)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = MeshSplitManager::getShapeFromSaveableSplitShapeId
                    ((MeshSplitManager *)&MeshSplitManager::s_singletonMeshSplitManager,*param_1,
                     param_1[4],param_1[8]);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar1 + 0x18);
  }
  param_1[0x40] = uVar2;
  param_1[0x42] = 1;
  return;
}


