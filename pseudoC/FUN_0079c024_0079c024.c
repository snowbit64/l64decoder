// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079c024
// Entry Point: 0079c024
// Size: 232 bytes
// Signature: undefined FUN_0079c024(void)


void FUN_0079c024(uint *param_1)

{
  long lVar1;
  EntityRegistryManager *this;
  MeshSplitShape *pMVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pMVar2 = (MeshSplitShape *)EntityRegistryManager::getEntityById(this,*param_1);
  if ((pMVar2 != (MeshSplitShape *)0x0) && (((byte)pMVar2[0x12] >> 2 & 1) != 0)) {
    MeshSplitManager::getSplitShapeOrientedBoundingBox
              ((MeshSplitManager *)&MeshSplitManager::s_singletonMeshSplitManager,pMVar2,
               (Matrix4x4 *)&local_68,(Vector3 *)&local_78);
    puVar3 = (undefined8 *)operator_new__(0x3c);
    *(undefined8 **)(param_1 + 0x40) = puVar3;
    *puVar3 = local_68;
    *(undefined4 *)(puVar3 + 1) = local_60;
    *(undefined8 *)((long)puVar3 + 0xc) = local_58;
    *(undefined4 *)((long)puVar3 + 0x14) = local_50;
    puVar3[3] = local_48;
    *(undefined4 *)(puVar3 + 4) = local_40;
    *(undefined8 *)((long)puVar3 + 0x24) = local_38;
    param_1[0x42] = 0xc;
    *(undefined4 *)((long)puVar3 + 0x2c) = local_30;
    puVar3[6] = local_78;
    *(undefined4 *)(puVar3 + 7) = local_70;
    *(undefined *)((long)param_1 + 0x10e) = 0;
    *(undefined2 *)(param_1 + 0x43) = 0x1f;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


