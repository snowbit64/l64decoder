// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getOrCookCachedConvexMesh
// Entry Point: 0098ec50
// Size: 336 bytes
// Signature: undefined __thiscall getOrCookCachedConvexMesh(Bt2PhysicsColShapeCache * this, TransformGroup * param_1, Geometry * param_2)


/* Bt2PhysicsColShapeCache::getOrCookCachedConvexMesh(TransformGroup*, Geometry*) */

btConvexPointCloudShape * __thiscall
Bt2PhysicsColShapeCache::getOrCookCachedConvexMesh
          (Bt2PhysicsColShapeCache *this,TransformGroup *param_1,Geometry *param_2)

{
  long lVar1;
  MESSAGE_TYPE MVar2;
  btConvexPointCloudShape *pbVar3;
  long lVar4;
  IndexedTriangleSet *pIVar5;
  ulong uVar6;
  ulong uVar7;
  float local_a4;
  btVector3 *local_a0;
  uint local_94;
  float afStack_90 [4];
  Vector3 aVStack_80 [40];
  float local_58;
  float local_54;
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Bt2PhysicsUtil::getTransformScale(param_1,(Vector3 *)&local_58);
  uVar7 = (ulong)*(uint *)(param_2 + 0x28) | 0x100000000;
  pbVar3 = (btConvexPointCloudShape *)
           getCollisionShapeFromCaches(this,uVar7,(Vector3 *)&local_58,true);
  if (pbVar3 == (btConvexPointCloudShape *)0x0) {
    lVar4 = Geometry::getCollisionProxyMesh();
    if (*(char *)(lVar4 + 0x89) != '\0') {
      Bt2PhysicsContextManager::getInstance();
      MVar2 = Bt2PhysicsContextManager::getPhysicsErrorStream();
      Bt2PhysicsErrorStream::print
                (MVar2,(char *)0x3,
                 "Non-cpu collision mesh for \'%s\' is being cooked at runtime - this will not work on consoles.\n"
                 ,*(undefined8 *)(param_1 + 8));
    }
    pIVar5 = (IndexedTriangleSet *)Geometry::getCollisionProxyMesh();
    uVar6 = Bt2PhysicsCookingUtil::cookConvexMesh
                      (pIVar5,&local_94,&local_a0,&local_a4,afStack_90,
                       (Vector3 *)((ulong)afStack_90 | 4),aVStack_80);
    if ((uVar6 & 1) == 0) {
      pbVar3 = (btConvexPointCloudShape *)0x0;
    }
    else {
      pbVar3 = (btConvexPointCloudShape *)
               createAndCacheConvexColShape
                         (this,uVar7,local_94,local_a0,local_a4,(VolumeInfo *)afStack_90);
      if (((local_58 != 1.0) || (local_54 != 1.0)) || (local_50 != 1.0)) {
        pbVar3 = (btConvexPointCloudShape *)
                 createAndCacheScaledConvexColShape(this,uVar7,pbVar3,(Vector3 *)&local_58);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return pbVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


