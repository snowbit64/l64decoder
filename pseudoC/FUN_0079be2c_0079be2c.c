// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079be2c
// Entry Point: 0079be2c
// Size: 124 bytes
// Signature: undefined FUN_0079be2c(void)


void FUN_0079be2c(long param_1)

{
  long lVar1;
  byte bVar2;
  Matrix4x4 aMStack_68 [64];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0079b7dc(param_1,0,aMStack_68);
  bVar2 = MeshSplitManager::findAndRemoveSplitShapeAttachments
                    ((MeshSplitManager *)&MeshSplitManager::s_singletonMeshSplitManager,aMStack_68,
                     *(float *)(param_1 + 0x90),*(float *)(param_1 + 0xa0),
                     *(float *)(param_1 + 0xb0));
  *(undefined4 *)(param_1 + 0x108) = 3;
  *(byte *)(param_1 + 0x100) = bVar2 & 1;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


