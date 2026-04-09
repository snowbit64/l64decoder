// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getOrCookCachedConvexMesh
// Entry Point: 0098f374
// Size: 300 bytes
// Signature: undefined __thiscall getOrCookCachedConvexMesh(Bt2PhysicsColShapeCache * this, TransformGroup * param_1, uint param_2, uint param_3, float * param_4)


/* Bt2PhysicsColShapeCache::getOrCookCachedConvexMesh(TransformGroup*, unsigned int, unsigned int,
   float*) */

btConvexPointCloudShape * __thiscall
Bt2PhysicsColShapeCache::getOrCookCachedConvexMesh
          (Bt2PhysicsColShapeCache *this,TransformGroup *param_1,uint param_2,uint param_3,
          float *param_4)

{
  long lVar1;
  btConvexPointCloudShape *pbVar2;
  ulong uVar3;
  ulong uVar4;
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
  uVar4 = (ulong)param_2 | 0x200000000;
  pbVar2 = (btConvexPointCloudShape *)
           getCollisionShapeFromCaches(this,uVar4,(Vector3 *)&local_58,true);
  if (pbVar2 == (btConvexPointCloudShape *)0x0) {
    uVar3 = Bt2PhysicsCookingUtil::cookConvexMesh
                      (param_3,param_4,&local_94,&local_a0,&local_a4,afStack_90,
                       (Vector3 *)((ulong)afStack_90 | 4),aVStack_80);
    if ((uVar3 & 1) == 0) {
      pbVar2 = (btConvexPointCloudShape *)0x0;
    }
    else {
      pbVar2 = (btConvexPointCloudShape *)
               createAndCacheConvexColShape
                         (this,uVar4,local_94,local_a0,local_a4,(VolumeInfo *)afStack_90);
      if (((local_58 != 1.0) || (local_54 != 1.0)) || (local_50 != 1.0)) {
        pbVar2 = (btConvexPointCloudShape *)
                 createAndCacheScaledConvexColShape(this,uVar4,pbVar2,(Vector3 *)&local_58);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return pbVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


