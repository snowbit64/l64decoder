// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCachedConvexMesh
// Entry Point: 0098f2fc
// Size: 120 bytes
// Signature: undefined __thiscall getCachedConvexMesh(Bt2PhysicsColShapeCache * this, TransformGroup * param_1, uint param_2)


/* Bt2PhysicsColShapeCache::getCachedConvexMesh(TransformGroup*, unsigned int) */

void __thiscall
Bt2PhysicsColShapeCache::getCachedConvexMesh
          (Bt2PhysicsColShapeCache *this,TransformGroup *param_1,uint param_2)

{
  long lVar1;
  Vector3 aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Bt2PhysicsUtil::getTransformScale(param_1,aVStack_48);
  getCollisionShapeFromCaches(this,(ulong)param_2 | 0x200000000,aVStack_48,true);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


