// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getOrCookCachedTriangleMesh
// Entry Point: 0098df44
// Size: 880 bytes
// Signature: undefined __thiscall getOrCookCachedTriangleMesh(Bt2PhysicsColShapeCache * this, TransformGroup * param_1, Geometry * param_2)


/* Bt2PhysicsColShapeCache::getOrCookCachedTriangleMesh(TransformGroup*, Geometry*) */

btBvhTriangleMeshShape * __thiscall
Bt2PhysicsColShapeCache::getOrCookCachedTriangleMesh
          (Bt2PhysicsColShapeCache *this,TransformGroup *param_1,Geometry *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  btBvhTriangleMeshShape *pbVar5;
  long lVar6;
  ulong uVar7;
  Bt2PhysicsMeshInterface *this_00;
  float *pfVar8;
  ushort *puVar9;
  float local_68;
  float local_64;
  float local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  Bt2PhysicsUtil::getTransformScale(param_1,(Vector3 *)&local_68);
  pbVar5 = (btBvhTriangleMeshShape *)
           getCollisionShapeFromCaches
                     (this,(ulong)*(uint *)(param_2 + 0x28),(Vector3 *)&local_68,false);
  if (pbVar5 != (btBvhTriangleMeshShape *)0x0) goto LAB_0098e160;
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 0098e1a0 to 0098e1ab has its CatchHandler @ 0098e2c0 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                    "Warning: Mesh cooking \'%s\'",*(undefined8 *)(param_1 + 8));
  if ((local_68 == 1.0) && (local_64 == 1.0)) {
    if (local_60 != 1.0) goto LAB_0098dff4;
  }
  else {
LAB_0098dff4:
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 0098e230 to 0098e23b has its CatchHandler @ 0098e2b8 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,(double)local_68,
                      (double)local_64,(double)local_60," (Scale: %f,%f,%f)");
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 0098e1e8 to 0098e1f3 has its CatchHandler @ 0098e2bc */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,&DAT_00510489);
  pbVar5 = (btBvhTriangleMeshShape *)Geometry::getCollisionProxyMesh();
  if (pbVar5 != (btBvhTriangleMeshShape *)0x0) {
    lVar6 = TriangleSet::getPositions();
    if ((lVar6 != 0) && (lVar6 = IndexedTriangleSet::getIndices16(), lVar6 != 0)) {
      uVar7 = IndexedTriangleSet::is16Bit();
      if ((uVar7 & 1) != 0) {
        this_00 = (Bt2PhysicsMeshInterface *)btAlignedAllocInternal(0x30,0x10);
                    /* try { // try from 0098e084 to 0098e0cf has its CatchHandler @ 0098e2d8 */
        uVar2 = TriangleSet::getNumVertices();
        pfVar8 = (float *)TriangleSet::getPositions();
        uVar3 = IndexedTriangleSet::getNumIndices();
        puVar9 = (ushort *)IndexedTriangleSet::getIndices16();
        Bt2PhysicsMeshInterface::Bt2PhysicsMeshInterface
                  (this_00,uVar2,pfVar8,uVar3,puVar9,true,true);
        pbVar5 = (btBvhTriangleMeshShape *)
                 Bt2PhysicsCookingUtil::createTriangleColShape
                           (this_00,(btOptimizedBvh *)0x0,(BtTriangleInfoMap *)0x0);
        addTriangleColShapeToCache(this,(ulong)*(uint *)(param_2 + 0x28),pbVar5);
        if (((local_68 != 1.0) || (local_64 != 1.0)) || (local_60 != 1.0)) {
          pbVar5 = (btBvhTriangleMeshShape *)
                   createAndCacheScaledTriangleColShape
                             (this,(ulong)*(uint *)(param_2 + 0x28),pbVar5,(Vector3 *)&local_68);
        }
        goto LAB_0098e160;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0))
      {
                    /* try { // try from 0098e278 to 0098e283 has its CatchHandler @ 0098e2b4 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Physics Mesh Cooking failed, due to too many polygons in \'%s\'.\n"
                         ,*(undefined8 *)(param_1 + 8));
    }
    pbVar5 = (btBvhTriangleMeshShape *)0x0;
  }
LAB_0098e160:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return pbVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


