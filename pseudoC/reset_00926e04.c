// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 00926e04
// Size: 692 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DestructionGeometry::reset() */

void DestructionGeometry::reset(void)

{
  undefined8 *puVar1;
  short sVar2;
  long lVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  long in_x0;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  void *pvVar11;
  uint uVar12;
  long lVar13;
  void *pvVar14;
  undefined8 uVar15;
  void *local_90;
  void *local_88;
  undefined8 local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  iVar5 = DestructionGeometryShared::getNumChunks();
  if (iVar5 != 0) {
    uVar15 = NEON_fmov(0x3f800000,4);
    uVar10 = 0;
    lVar13 = 0x4c;
    do {
      uVar10 = uVar10 + 1;
      puVar1 = (undefined8 *)(*(long *)(in_x0 + 0xd8) + lVar13);
      *(undefined8 *)((long)puVar1 + -0x44) = 0;
      *(undefined8 *)((long)puVar1 + -0x4c) = 0;
      *(undefined4 *)((long)puVar1 + -0x3c) = 0x3f800000;
      puVar1[-7] = 0;
      puVar1[-6] = 0;
      *(undefined4 *)(puVar1 + -5) = 0x3f800000;
      *(undefined8 *)((long)puVar1 + -0x1c) = 0;
      *(undefined8 *)((long)puVar1 + -0x24) = 0;
      *(undefined4 *)((long)puVar1 + -0x14) = 0x3f800000;
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = uVar15;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(undefined4 *)(puVar1 + 3) = 0x3f800000;
      *(undefined8 *)((long)puVar1 + 0x24) = 0;
      *(undefined8 *)((long)puVar1 + 0x1c) = 0;
      *(undefined4 *)((long)puVar1 + 0x2c) = 0x3f800000;
      puVar1[6] = 0;
      puVar1[7] = 0;
      *(undefined4 *)(puVar1 + 8) = 0x3f800000;
      *(undefined *)((long)puVar1 + 0x44) = 0;
      uVar7 = DestructionGeometryShared::getNumChunks();
      lVar13 = lVar13 + 0x94;
    } while (uVar10 < (uVar7 & 0xffffffff));
  }
  local_90 = (void *)0x0;
  local_88 = (void *)0x0;
  local_80 = 0;
                    /* try { // try from 00926ec8 to 00926ecf has its CatchHandler @ 009270bc */
  DestructionGeometryShared::getStartLevelChunks
            (*(DestructionGeometryShared **)(in_x0 + 0x70),(vector *)&local_90);
  if (*(long *)(in_x0 + 0x80) == 0) {
    *(undefined4 *)(in_x0 + 0x90) = 0;
    if (local_88 == local_90) {
      uVar12 = 0;
      pvVar11 = local_88;
    }
    else {
      uVar10 = 0;
      do {
                    /* try { // try from 00926f04 to 00926f0b has its CatchHandler @ 009270c0 */
        DestructionGeometryShared::getChunk
                  (*(DestructionGeometryShared **)(in_x0 + 0x70),
                   *(uint *)((long)local_90 + uVar10 * 4));
        iVar5 = DestructionChunk::getNumIndices();
        uVar10 = (ulong)((int)uVar10 + 1);
        uVar12 = *(int *)(in_x0 + 0x90) + iVar5;
        *(uint *)(in_x0 + 0x90) = uVar12;
        pvVar11 = local_90;
      } while (uVar10 < (ulong)((long)local_88 - (long)local_90 >> 2));
    }
    pvVar14 = local_88;
                    /* try { // try from 00926f40 to 00926f43 has its CatchHandler @ 009270bc */
    pvVar8 = operator_new__((ulong)uVar12 << 1);
    *(void **)(in_x0 + 0x80) = pvVar8;
    *(uint *)(in_x0 + 0x94) = uVar12;
  }
  else {
    uVar12 = *(uint *)(in_x0 + 0x94);
    pvVar11 = local_90;
    pvVar14 = local_88;
  }
  *(uint *)(in_x0 + 0x90) = uVar12;
  if (pvVar14 != pvVar11) {
    uVar10 = 0;
    iVar5 = 0;
    do {
                    /* try { // try from 00926f70 to 00926f73 has its CatchHandler @ 009270c4 */
      DestructionGeometryShared::getChunk
                (*(DestructionGeometryShared **)(in_x0 + 0x70),*(uint *)((long)pvVar11 + uVar10 * 4)
                );
      lVar13 = *(long *)(in_x0 + 0xd8);
      *(int *)(lVar13 + (ulong)*(uint *)((long)local_90 + uVar10 * 4) * 0x94 + 4) = iVar5;
      *(undefined4 *)(lVar13 + (ulong)*(uint *)((long)local_90 + uVar10 * 4) * 0x94 + 0xc) = 1;
                    /* try { // try from 00926fac to 00926fcf has its CatchHandler @ 009270c8 */
      for (uVar7 = 0; uVar9 = DestructionChunk::getNumIndices(), uVar7 < (uVar9 & 0xffffffff);
          uVar7 = uVar7 + 1) {
        lVar13 = DestructionChunk::getIndices();
        sVar2 = *(short *)(lVar13 + uVar7 * 2);
        sVar4 = DestructionChunk::getStartLevelIndexOffset();
        *(short *)(*(long *)(in_x0 + 0x80) + (ulong)(uint)(iVar5 + (int)uVar7) * 2) = sVar2 + sVar4;
      }
                    /* try { // try from 00926fe8 to 00926fef has its CatchHandler @ 009270c4 */
      iVar6 = DestructionChunk::getNumIndices();
      iVar5 = iVar6 + iVar5;
      uVar10 = (ulong)((int)uVar10 + 1);
      pvVar11 = local_90;
    } while (uVar10 < (ulong)((long)local_88 - (long)local_90 >> 2));
  }
  *(undefined *)(in_x0 + 0x78) = 0;
  *(undefined8 *)(in_x0 + 0xc0) = 0;
  *(undefined8 *)(in_x0 + 200) = 0;
  *(undefined *)(in_x0 + 0x98) = 1;
  free(*(void **)(in_x0 + 0xa0));
  *(undefined8 *)(in_x0 + 0xa0) = 0;
  if (*(long **)(in_x0 + 0xb0) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0xb0) + 8))();
  }
  *(undefined8 *)(in_x0 + 0xb0) = 0;
  if (*(void **)(in_x0 + 0xa8) != (void *)0x0) {
    operator_delete__(*(void **)(in_x0 + 0xa8));
  }
  *(undefined8 *)(in_x0 + 0xa8) = 0;
  if (*(long **)(in_x0 + 0xb8) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0xb8) + 8))();
  }
  *(undefined8 *)(in_x0 + 0xb8) = 0;
  *(undefined2 *)(in_x0 + 0xd0) = 0;
                    /* try { // try from 00927068 to 0092706f has its CatchHandler @ 009270b8 */
  updateBoundingVolume();
  if (local_90 != (void *)0x0) {
    local_88 = local_90;
    operator_delete(local_90);
  }
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


