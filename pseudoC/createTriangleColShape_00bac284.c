// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createTriangleColShape
// Entry Point: 00bac284
// Size: 244 bytes
// Signature: undefined __cdecl createTriangleColShape(Bt2PhysicsMeshInterface * param_1, btOptimizedBvh * param_2, BtTriangleInfoMap * param_3)


/* Bt2PhysicsCookingUtil::createTriangleColShape(Bt2PhysicsMeshInterface*, btOptimizedBvh*,
   BtTriangleInfoMap*) */

btBvhTriangleMeshShape *
Bt2PhysicsCookingUtil::createTriangleColShape
          (Bt2PhysicsMeshInterface *param_1,btOptimizedBvh *param_2,BtTriangleInfoMap *param_3)

{
  long lVar1;
  btBvhTriangleMeshShape *this;
  undefined8 *puVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (btBvhTriangleMeshShape *)btAlignedAllocInternal(0x68,0x10);
                    /* try { // try from 00bac2cc to 00bac2d7 has its CatchHandler @ 00bac378 */
  btBvhTriangleMeshShape::btBvhTriangleMeshShape
            (this,(btStridingMeshInterface *)param_1,true,param_2 == (btOptimizedBvh *)0x0);
  if (param_2 != (btOptimizedBvh *)0x0) {
    uStack_58 = 0x3f800000;
    local_60 = 0x3f8000003f800000;
    btBvhTriangleMeshShape::setOptimizedBvh(this,param_2,(btVector3 *)&local_60);
  }
  if (param_3 == (BtTriangleInfoMap *)0x0) {
    puVar2 = (undefined8 *)operator_new(0x38);
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[4] = 0;
    puVar2[2] = 0x3dcccccd322bcc76;
    puVar2[1] = 0x38d1b71700000000;
    puVar2[3] = 0x322bcc7640c90fdb;
    *puVar2 = &PTR__BtTriangleInfoMap_00feb2f0;
    BtGenerateInternalEdgeInfo(this,(BtTriangleInfoMap *)puVar2);
  }
  else {
    *(BtTriangleInfoMap **)(this + 0x50) = param_3;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


