// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onEntity
// Entry Point: 009863a8
// Size: 108 bytes
// Signature: undefined __cdecl onEntity(uint param_1, int param_2, btCollisionObject * param_3, bool param_4)


/* MeshSplitManager::RemoveAttachmentsEntityReport::onEntity(unsigned int, int, btCollisionObject
   const*, bool) */

undefined8
MeshSplitManager::RemoveAttachmentsEntityReport::onEntity
          (uint param_1,int param_2,btCollisionObject *param_3,bool param_4)

{
  byte bVar1;
  ulong uVar2;
  EntityRegistryManager *this;
  MeshSplitShape *pMVar3;
  
  uVar2 = (ulong)param_1;
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pMVar3 = (MeshSplitShape *)EntityRegistryManager::getEntityById(this,param_2);
  if ((pMVar3 != (MeshSplitShape *)0x0) && (((byte)pMVar3[0x12] >> 2 & 1) != 0)) {
    bVar1 = removeSplitShapeAttachments
                      ((MeshSplitManager *)&s_singletonMeshSplitManager,pMVar3,
                       (Matrix4x4 *)(uVar2 + 0xc),*(float *)(uVar2 + 0x4c),*(float *)(uVar2 + 0x50),
                       *(float *)(uVar2 + 0x54));
    *(byte *)(uVar2 + 8) = *(byte *)(uVar2 + 8) | bVar1 & 1;
  }
  return 1;
}


