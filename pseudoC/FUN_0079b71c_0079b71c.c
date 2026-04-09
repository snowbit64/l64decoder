// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079b71c
// Entry Point: 0079b71c
// Size: 192 bytes
// Signature: undefined FUN_0079b71c(void)


void FUN_0079b71c(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  float local_78;
  float local_74;
  float local_70;
  float fStack_6c;
  Matrix4x4 aMStack_68 [64];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  FUN_0079b7dc(param_1,0,aMStack_68);
  lVar3 = MeshSplitManager::findSplitShape
                    ((MeshSplitManager *)&MeshSplitManager::s_singletonMeshSplitManager,aMStack_68,
                     *(float *)(param_1 + 0x90),*(float *)(param_1 + 0xa0),&fStack_6c,&local_70,
                     &local_74,&local_78);
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x108) = 1;
  if (lVar3 != 0) {
    uVar1 = *(undefined4 *)(lVar3 + 0x18);
    *(float *)(param_1 + 0x110) = fStack_6c;
    *(float *)(param_1 + 0x120) = local_70;
    *(undefined4 *)(param_1 + 0x100) = uVar1;
    *(float *)(param_1 + 0x130) = local_74;
    *(undefined4 *)(param_1 + 0x118) = 4;
    *(undefined4 *)(param_1 + 0x128) = 4;
    *(undefined4 *)(param_1 + 0x138) = 4;
    *(float *)(param_1 + 0x140) = local_78;
    *(undefined4 *)(param_1 + 0x148) = 4;
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


