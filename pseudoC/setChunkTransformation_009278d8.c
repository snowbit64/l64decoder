// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setChunkTransformation
// Entry Point: 009278d8
// Size: 1052 bytes
// Signature: undefined __cdecl setChunkTransformation(uint param_1, Matrix4x4 * param_2, Matrix4x4 * param_3, bool param_4, GsShape * param_5, float param_6, float param_7, float param_8)


/* DestructionGeometry::setChunkTransformation(unsigned int, Matrix4x4 const&, Matrix4x4 const&,
   bool, GsShape*, float, float, float) */

void DestructionGeometry::setChunkTransformation
               (uint param_1,Matrix4x4 *param_2,Matrix4x4 *param_3,bool param_4,GsShape *param_5,
               float param_6,float param_7,float param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  DestructionGeometry *this;
  void *__dest;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 *puVar11;
  long lVar12;
  void *__src;
  long lVar13;
  int *piVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  int *piVar18;
  undefined4 uVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  puVar11 = (undefined8 *)(ulong)param_4;
  this = (DestructionGeometry *)(ulong)param_1;
  lVar17 = *(long *)(this + 0xd8);
  piVar18 = (int *)(lVar17 + ((ulong)param_2 & 0xffffffff) * 0x94 + 0xc);
  if (*piVar18 == 0) {
    return;
  }
  uVar15 = (ulong)param_2 & 0xffffffff;
  uVar10 = (uint)param_2;
  DestructionGeometryShared::getChunk(*(DestructionGeometryShared **)(this + 0x70),uVar10);
  iVar6 = *piVar18;
  if ((iVar6 == 2) || (((ulong)param_5 & 1) != 0)) {
    if (iVar6 != 2) {
LAB_00927c8c:
      if (((ulong)param_5 & 1) != 0) {
        uVar23 = puVar11[4];
        uVar22 = puVar11[7];
        uVar21 = puVar11[6];
        lVar8 = lVar17 + uVar15 * 0x94;
        uVar27 = puVar11[1];
        uVar26 = *puVar11;
        uVar25 = puVar11[3];
        uVar24 = puVar11[2];
        *(undefined8 *)(lVar8 + 0x38) = puVar11[5];
        *(undefined8 *)(lVar8 + 0x30) = uVar23;
        *(undefined8 *)(lVar8 + 0x48) = uVar22;
        *(undefined8 *)(lVar8 + 0x40) = uVar21;
        *(undefined *)(lVar8 + 0x90) = 0;
        *(undefined8 *)(lVar8 + 0x18) = uVar27;
        *(undefined8 *)(lVar8 + 0x10) = uVar26;
        *(undefined8 *)(lVar8 + 0x28) = uVar25;
        *(undefined8 *)(lVar8 + 0x20) = uVar24;
      }
      goto LAB_00927cb0;
    }
LAB_00927b7c:
    lVar8 = lVar17 + uVar15 * 0x94;
    if (param_8 < ABS(*(float *)(lVar8 + 0x10) - *(float *)puVar11) +
                  ABS(*(float *)(lVar8 + 0x14) - *(float *)((long)puVar11 + 4)) +
                  ABS(*(float *)(lVar8 + 0x18) - *(float *)(puVar11 + 1)) +
                  ABS(*(float *)(lVar8 + 0x1c) - *(float *)((long)puVar11 + 0xc)) +
                  ABS(*(float *)(lVar8 + 0x20) - *(float *)(puVar11 + 2)) +
                  ABS(*(float *)(lVar8 + 0x24) - *(float *)((long)puVar11 + 0x14)) +
                  ABS(*(float *)(lVar8 + 0x28) - *(float *)(puVar11 + 3)) +
                  ABS(*(float *)(lVar8 + 0x2c) - *(float *)((long)puVar11 + 0x1c)) +
                  ABS(*(float *)(lVar8 + 0x30) - *(float *)(puVar11 + 4)) +
                  ABS(*(float *)(lVar8 + 0x34) - *(float *)((long)puVar11 + 0x24)) +
                  ABS(*(float *)(lVar8 + 0x38) - *(float *)(puVar11 + 5)) +
                  ABS(*(float *)(lVar8 + 0x3c) - *(float *)((long)puVar11 + 0x2c)) +
                  ABS(*(float *)(lVar8 + 0x40) - *(float *)(puVar11 + 6)) +
                  ABS(*(float *)(lVar8 + 0x44) - *(float *)((long)puVar11 + 0x34)) +
                  ABS(*(float *)(lVar8 + 0x48) - *(float *)(puVar11 + 7)) +
                  ABS(*(float *)(lVar8 + 0x4c) - *(float *)((long)puVar11 + 0x3c))) {
      uVar23 = puVar11[4];
      uVar22 = puVar11[7];
      uVar21 = puVar11[6];
      lVar8 = lVar17 + uVar15 * 0x94;
      uVar27 = puVar11[1];
      uVar26 = *puVar11;
      uVar25 = puVar11[3];
      uVar24 = puVar11[2];
      *(undefined8 *)(lVar8 + 0x38) = puVar11[5];
      *(undefined8 *)(lVar8 + 0x30) = uVar23;
      *(undefined8 *)(lVar8 + 0x48) = uVar22;
      *(undefined8 *)(lVar8 + 0x40) = uVar21;
      *(undefined *)(lVar8 + 0x90) = 0;
      *(undefined8 *)(lVar8 + 0x18) = uVar27;
      *(undefined8 *)(lVar8 + 0x10) = uVar26;
      *(undefined8 *)(lVar8 + 0x28) = uVar25;
      *(undefined8 *)(lVar8 + 0x20) = uVar24;
      this[0xd1] = (DestructionGeometry)0x1;
      updateVertexBufferPositions(this,uVar10);
    }
  }
  else {
    if (((param_7 <= *(float *)puVar11) && (param_7 <= *(float *)((long)puVar11 + 0x14))) &&
       (param_7 <= *(float *)(puVar11 + 5))) {
      uVar19 = NEON_fmadd(*(float *)(puVar11 + 6),*(float *)(puVar11 + 6),
                          *(float *)((long)puVar11 + 0x34) * *(float *)((long)puVar11 + 0x34));
      fVar20 = (float)NEON_fmadd(*(float *)(puVar11 + 7),*(float *)(puVar11 + 7),uVar19);
      if (fVar20 <= param_6) goto LAB_00927c8c;
    }
    if (iVar6 != 1) goto LAB_00927b7c;
    removeChunkFromStartIndexBuffer(this,uVar10);
    uVar1 = DestructionChunk::getNumVertices();
    validateBrokenVertexBuffer(this,uVar1);
    uVar2 = DestructionChunk::getNumIndices();
    uVar1 = *(uint *)(this + 0xcc);
    if (*(int *)(this + 200) - uVar1 < uVar2) {
      __src = *(void **)(this + 0xa8);
      uVar2 = *(int *)(this + 200) + uVar2 * 5;
      *(uint *)(this + 200) = uVar2;
      __dest = operator_new__((ulong)uVar2 << 1);
      *(void **)(this + 0xa8) = __dest;
      if (__src != (void *)0x0) {
        memcpy(__dest,__src,(ulong)uVar1 << 1);
        operator_delete__(__src);
      }
      if (*(long **)(this + 0xb8) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0xb8) + 8))();
      }
      *(undefined8 *)(this + 0xb8) = 0;
      this[0xd0] = (DestructionGeometry)0x1;
    }
    iVar6 = *(int *)(this + 0xc0);
    iVar3 = DestructionChunk::getFirstVertex();
    lVar13 = lVar17 + uVar15 * 0x94;
    piVar14 = (int *)(lVar13 + 8);
    *piVar14 = iVar6 - iVar3;
    plVar7 = (long *)DestructionGeometryShared::getVertexDeclaration();
    iVar3 = (**(code **)(*plVar7 + 0x10))(plVar7,0);
    lVar8 = DestructionGeometryShared::getVertices();
    iVar4 = DestructionChunk::getFirstVertex();
    iVar6 = *(int *)(this + 0xc0);
    lVar12 = *(long *)(this + 0xa0);
    iVar5 = DestructionChunk::getNumVertices();
    memcpy((void *)(lVar12 + (ulong)(uint)(iVar6 * iVar3)),
           (void *)(lVar8 + (ulong)(uint)(iVar4 * iVar3)),(ulong)(uint)(iVar5 * iVar3));
    *(undefined4 *)(lVar13 + 4) = *(undefined4 *)(this + 0xcc);
    lVar8 = DestructionChunk::getIndices();
    iVar6 = DestructionChunk::getNumIndices();
    if (iVar6 != 0) {
      uVar16 = 0;
      do {
        lVar12 = uVar16 * 2;
        iVar6 = (int)uVar16;
        uVar16 = uVar16 + 1;
        *(short *)(*(long *)(this + 0xa8) + (ulong)(uint)(iVar6 + *(int *)(this + 0xcc)) * 2) =
             *(short *)(lVar8 + lVar12) + *(short *)piVar14;
        uVar9 = DestructionChunk::getNumIndices();
      } while (uVar16 < (uVar9 & 0xffffffff));
    }
    iVar6 = DestructionChunk::getNumVertices();
    *(int *)(this + 0xc0) = *(int *)(this + 0xc0) + iVar6;
    iVar6 = DestructionChunk::getNumIndices();
    lVar8 = lVar17 + uVar15 * 0x94;
    *(int *)(this + 0xcc) = *(int *)(this + 0xcc) + iVar6;
    uVar23 = puVar11[4];
    uVar22 = puVar11[7];
    uVar21 = puVar11[6];
    uVar27 = puVar11[1];
    uVar26 = *puVar11;
    uVar25 = puVar11[3];
    uVar24 = puVar11[2];
    *(undefined8 *)(lVar8 + 0x38) = puVar11[5];
    *(undefined8 *)(lVar8 + 0x30) = uVar23;
    *(undefined8 *)(lVar8 + 0x48) = uVar22;
    *(undefined8 *)(lVar8 + 0x40) = uVar21;
    *(undefined *)(lVar8 + 0x90) = 0;
    *(undefined8 *)(lVar8 + 0x18) = uVar27;
    *(undefined8 *)(lVar8 + 0x10) = uVar26;
    *(undefined8 *)(lVar8 + 0x28) = uVar25;
    *(undefined8 *)(lVar8 + 0x20) = uVar24;
    updateVertexBufferPositions(this,uVar10);
    *(undefined2 *)(this + 0xd0) = 0x101;
    if (this[0x78] == (DestructionGeometry)0x0) {
      this[0x78] = (DestructionGeometry)0x1;
    }
  }
  *piVar18 = 2;
LAB_00927cb0:
  uVar23 = *(undefined8 *)(param_3 + 0x20);
  uVar22 = *(undefined8 *)(param_3 + 0x38);
  uVar21 = *(undefined8 *)(param_3 + 0x30);
  lVar17 = lVar17 + uVar15 * 0x94;
  uVar27 = *(undefined8 *)(param_3 + 8);
  uVar26 = *(undefined8 *)param_3;
  uVar25 = *(undefined8 *)(param_3 + 0x18);
  uVar24 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(lVar17 + 0x78) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(lVar17 + 0x70) = uVar23;
  *(undefined8 *)(lVar17 + 0x88) = uVar22;
  *(undefined8 *)(lVar17 + 0x80) = uVar21;
  *(undefined8 *)(lVar17 + 0x58) = uVar27;
  *(undefined8 *)(lVar17 + 0x50) = uVar26;
  *(undefined8 *)(lVar17 + 0x68) = uVar25;
  *(undefined8 *)(lVar17 + 0x60) = uVar24;
  return;
}


