// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onEntity
// Entry Point: 008a33a8
// Size: 72 bytes
// Signature: undefined __cdecl onEntity(uint param_1, int param_2, btCollisionObject * param_3, bool param_4)


/* TerrainDeformation::PhysicsEntityReport::onEntity(unsigned int, int, btCollisionObject const*,
   bool) */

undefined8
TerrainDeformation::PhysicsEntityReport::onEntity
          (uint param_1,int param_2,btCollisionObject *param_3,bool param_4)

{
  EntityRegistryManager *this;
  TransformGroup *pTVar1;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pTVar1 = (TransformGroup *)EntityRegistryManager::getEntityById(this,param_2);
  if ((pTVar1 != (TransformGroup *)0x0) && (-1 < (char)pTVar1[0x10])) {
    handleEntityCollision(*(TerrainDeformation **)((ulong)param_1 + 8),pTVar1);
  }
  return 1;
}


