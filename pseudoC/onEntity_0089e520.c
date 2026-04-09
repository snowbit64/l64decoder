// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onEntity
// Entry Point: 0089e520
// Size: 144 bytes
// Signature: undefined __cdecl onEntity(uint param_1, int param_2, btCollisionObject * param_3, bool param_4)


/* TerrainCollisionMapUtil::PhysicsEntityReport::onEntity(unsigned int, int, btCollisionObject
   const*, bool) */

undefined8
TerrainCollisionMapUtil::PhysicsEntityReport::onEntity
          (uint param_1,int param_2,btCollisionObject *param_3,bool param_4)

{
  int iVar1;
  ulong uVar2;
  EntityRegistryManager *this;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  uVar2 = (ulong)param_1;
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar3 = EntityRegistryManager::getEntityById(this,param_2);
  if ((lVar3 != 0) && (-1 < *(char *)(lVar3 + 0x10))) {
    *(undefined *)(uVar2 + 8) = 1;
    lVar3 = UserAttributes::getAttribute((UserAttributes *)(lVar3 + 0x60),"collisionHeight");
    if ((lVar3 != 0) &&
       ((iVar1 = UserAttribute::getType(), iVar1 == 2 &&
        (fVar6 = *(float *)(uVar2 + 0xc), fVar4 = (float)UserAttribute::getFloat(), fVar6 < fVar4)))
       ) {
      uVar5 = UserAttribute::getFloat();
      *(undefined4 *)(uVar2 + 0xc) = uVar5;
    }
  }
  return 1;
}


