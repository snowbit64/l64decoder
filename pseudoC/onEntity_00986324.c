// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onEntity
// Entry Point: 00986324
// Size: 128 bytes
// Signature: undefined __cdecl onEntity(uint param_1, int param_2, btCollisionObject * param_3, bool param_4)


/* MeshSplitManager::SplitShapeFindEntityReport::onEntity(unsigned int, int, btCollisionObject
   const*, bool) */

undefined8
MeshSplitManager::SplitShapeFindEntityReport::onEntity
          (uint param_1,int param_2,btCollisionObject *param_3,bool param_4)

{
  ulong uVar1;
  EntityRegistryManager *this;
  MeshSplitShape *pMVar2;
  ulong uVar3;
  
  uVar1 = (ulong)param_1;
  if (*(long *)(uVar1 + 8) == 0) {
    this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
    pMVar2 = (MeshSplitShape *)EntityRegistryManager::getEntityById(this,param_2);
    if (((pMVar2 != (MeshSplitShape *)0x0) && (((byte)pMVar2[0x12] >> 2 & 1) != 0)) &&
       (uVar3 = testSplitMesh((MeshSplitManager *)&s_singletonMeshSplitManager,pMVar2,
                              (Matrix4x4 *)(uVar1 + 0x20),*(float *)(uVar1 + 0x60),
                              *(float *)(uVar1 + 100),(float *)(uVar1 + 0x10),
                              (float *)(uVar1 + 0x14),(float *)(uVar1 + 0x18),
                              (float *)(uVar1 + 0x1c)), (uVar3 & 1) != 0)) {
      *(MeshSplitShape **)(uVar1 + 8) = pMVar2;
      return 0;
    }
  }
  return 1;
}


