// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getShapesChunksPairs
// Entry Point: 00929fe4
// Size: 464 bytes
// Signature: undefined __cdecl getShapesChunksPairs(DestructionShape * param_1, DestructionShape * param_2, vector * param_3, float param_4)


/* DestructionUtil::getShapesChunksPairs(DestructionShape*, DestructionShape*,
   std::__ndk1::vector<DestructionUtil::ChunkPairInfo,
   std::__ndk1::allocator<DestructionUtil::ChunkPairInfo> >&, float) */

void DestructionUtil::getShapesChunksPairs
               (DestructionShape *param_1,DestructionShape *param_2,vector *param_3,float param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  DestructionGeometryShared *pDVar4;
  DestructionChunk *pDVar5;
  DestructionChunk *pDVar6;
  ulong uVar7;
  void *pvVar8;
  void *pvVar9;
  ulong uVar10;
  ulong uVar11;
  void *local_d0;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  void *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  local_b8 = (void *)0x0;
  local_b0 = (void *)0x0;
  local_a8 = 0;
  local_d0 = (void *)0x0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
                    /* try { // try from 0092a03c to 0092a05b has its CatchHandler @ 0092a1bc */
  pDVar4 = (DestructionGeometryShared *)DestructionGeometry::getShared();
  DestructionGeometryShared::getStartLevelChunks(pDVar4,(vector *)&local_b8);
  pDVar4 = (DestructionGeometryShared *)DestructionGeometry::getShared();
  DestructionGeometryShared::getStartLevelChunks(pDVar4,(vector *)&local_d0);
                    /* try { // try from 0092a05c to 0092a063 has its CatchHandler @ 0092a1b8 */
  RawTransformGroup::updateWorldTransformation();
                    /* try { // try from 0092a064 to 0092a06b has its CatchHandler @ 0092a1b4 */
  RawTransformGroup::updateWorldTransformation();
  pvVar8 = local_b0;
  pvVar9 = local_d0;
  if (local_b0 != local_b8) {
    uVar10 = 0;
    do {
                    /* try { // try from 0092a0a4 to 0092a0b7 has its CatchHandler @ 0092a1c0 */
      pDVar4 = (DestructionGeometryShared *)DestructionGeometry::getShared();
      pDVar5 = (DestructionChunk *)
               DestructionGeometryShared::getChunk(pDVar4,*(uint *)((long)local_b8 + uVar10 * 4));
      pvVar9 = local_c8;
      if (local_c8 != local_d0) {
        uVar11 = 0;
        do {
                    /* try { // try from 0092a0e4 to 0092a113 has its CatchHandler @ 0092a1c8 */
          pDVar4 = (DestructionGeometryShared *)DestructionGeometry::getShared();
          pDVar6 = (DestructionChunk *)
                   DestructionGeometryShared::getChunk
                             (pDVar4,*(uint *)((long)local_d0 + uVar11 * 4));
          uVar7 = getChunksCollisionPoint
                            (pDVar5,(Matrix4x4 *)(param_1 + 0xb8),pDVar6,
                             (Matrix4x4 *)(param_2 + 0xb8),(Vector3 *)&local_88,param_4);
          if ((uVar7 & 1) != 0) {
            local_a0 = *(undefined4 *)((long)local_b8 + uVar10 * 4);
            uStack_9c = *(undefined4 *)((long)local_d0 + uVar11 * 4);
            local_98 = local_88;
            local_90 = local_80;
                    /* try { // try from 0092a13c to 0092a147 has its CatchHandler @ 0092a1c4 */
            FUN_0092a31c(param_3,&local_a0);
          }
          uVar11 = (ulong)((int)uVar11 + 1);
          pvVar9 = local_d0;
        } while (uVar11 < (ulong)((long)local_c8 - (long)local_d0 >> 2));
      }
      uVar10 = (ulong)((int)uVar10 + 1);
      pvVar8 = local_b8;
    } while (uVar10 < (ulong)((long)local_b0 - (long)local_b8 >> 2));
  }
  lVar1 = *(long *)param_3;
  lVar2 = *(long *)(param_3 + 8);
  if (pvVar9 != (void *)0x0) {
    local_c8 = pvVar9;
    operator_delete(pvVar9);
    pvVar8 = local_b8;
  }
  if (pvVar8 != (void *)0x0) {
    local_b0 = pvVar8;
    operator_delete(pvVar8);
  }
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar2 != lVar1);
  }
  return;
}


