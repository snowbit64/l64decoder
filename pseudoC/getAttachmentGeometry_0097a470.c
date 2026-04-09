// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAttachmentGeometry
// Entry Point: 0097a470
// Size: 1344 bytes
// Signature: undefined __cdecl getAttachmentGeometry(IndexedTriangleSet * param_1, BoundingVolume * param_2, Matrix4x4 * param_3, ushort param_4, uint param_5, uint param_6, IndexedTriangleSet * param_7, AttachmentGeometryData * param_8)


/* MeshSplitAttachmentSharedData::getAttachmentGeometry(IndexedTriangleSet*, BoundingVolume const*,
   Matrix4x4 const&, unsigned short, unsigned int, unsigned int, IndexedTriangleSet*,
   MeshSplitAttachmentSharedData::AttachmentGeometryData&) */

void MeshSplitAttachmentSharedData::getAttachmentGeometry
               (IndexedTriangleSet *param_1,BoundingVolume *param_2,Matrix4x4 *param_3,
               ushort param_4,uint param_5,uint param_6,IndexedTriangleSet *param_7,
               AttachmentGeometryData *param_8)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  void *pvVar11;
  ulong uVar12;
  uint *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  short *psVar17;
  long lVar18;
  short *psVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long lVar24;
  size_t __n;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  float fVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  float fVar42;
  float fVar43;
  BoundingSphere aBStack_f0 [12];
  undefined8 local_e4;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long local_90;
  
  lVar3 = tpidr_el0;
  local_90 = *(long *)(lVar3 + 0x28);
  *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) | 0x20;
  IndexedTriangleSet::optimize();
  uStack_c8 = *(undefined8 *)(param_3 + 8);
  local_d0 = *(undefined8 *)param_3;
  local_b8 = *(undefined8 *)(param_3 + 0x18);
  local_c0 = *(undefined8 *)(param_3 + 0x10);
  uStack_a8 = *(undefined8 *)(param_3 + 0x28);
  local_b0 = *(undefined8 *)(param_3 + 0x20);
  uStack_98 = *(undefined8 *)(param_3 + 0x38);
  uStack_a0 = *(undefined8 *)(param_3 + 0x30);
  Matrix4x4::orthonormalize3x3();
  uVar4 = TriangleSet::getNumVertices();
  lVar5 = TriangleSet::getPositions();
  lVar6 = TriangleSet::getNormals();
  lVar7 = TriangleSet::getTangents();
  lVar8 = TriangleSet::getPositions();
  lVar9 = TriangleSet::getNormals();
  lVar10 = TriangleSet::getTangents();
  if (uVar4 != 0) {
    lVar21 = *(long *)(param_7 + 0x60);
    uVar14 = 0;
    uVar25 = 2;
    lVar18 = (ulong)((uint)param_4 + (uint)param_4 * 2) * 4;
    do {
      lVar24 = (ulong)(uVar25 - 2) * 4;
      pfVar1 = (float *)(lVar5 + lVar24);
      pfVar2 = (float *)(lVar6 + lVar24);
      fVar39 = *pfVar1;
      fVar32 = pfVar1[1];
      uVar33 = NEON_fmadd(fVar39,*(undefined4 *)(param_3 + 8),fVar32 * *(float *)(param_3 + 0x18));
      fVar42 = pfVar1[2];
      puVar20 = (undefined8 *)(lVar8 + lVar18 + lVar24);
      puVar22 = (undefined8 *)(lVar9 + lVar18 + lVar24);
      fVar34 = (float)NEON_fmadd(fVar42,*(undefined4 *)(param_3 + 0x28),uVar33);
      fVar36 = *(float *)(param_3 + 0x38);
      *puVar20 = CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x30) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20) * fVar32 +
                          (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar39 +
                          (float)((ulong)*(undefined8 *)(param_3 + 0x20) >> 0x20) * fVar42,
                          (float)*(undefined8 *)(param_3 + 0x30) +
                          (float)*(undefined8 *)(param_3 + 0x10) * fVar32 +
                          (float)*(undefined8 *)param_3 * fVar39 +
                          (float)*(undefined8 *)(param_3 + 0x20) * fVar42);
      *(float *)(puVar20 + 1) = fVar36 + fVar34;
      fVar36 = *pfVar2;
      fVar32 = pfVar2[1];
      fVar34 = (float)((ulong)local_c0 >> 0x20);
      fVar43 = pfVar2[2];
      fVar39 = (float)((ulong)local_d0 >> 0x20);
      uVar33 = NEON_fmadd(fVar36,(undefined4)uStack_c8,fVar32 * (float)local_b8);
      fVar42 = (float)((ulong)local_b0 >> 0x20);
      uVar33 = NEON_fmadd(fVar43,(undefined4)uStack_a8,uVar33);
      *puVar22 = CONCAT44(fVar34 * fVar32 + fVar39 * fVar36 + fVar42 * fVar43,
                          (float)local_c0 * fVar32 + (float)local_d0 * fVar36 +
                          (float)local_b0 * fVar43);
      *(undefined4 *)(puVar22 + 1) = uVar33;
      if (lVar7 != 0) {
        lVar24 = (uVar14 & 0xfffffffc) * 4;
        pfVar1 = (float *)(lVar7 + lVar24);
        puVar20 = (undefined8 *)(lVar10 + (ulong)param_4 * 0x10 + lVar24);
        fVar36 = *pfVar1;
        fVar32 = pfVar1[1];
        uVar33 = NEON_fmadd(fVar36,(undefined4)uStack_c8,fVar32 * (float)local_b8);
        fVar43 = pfVar1[2];
        uVar33 = NEON_fmadd(fVar43,(undefined4)uStack_a8,uVar33);
        *puVar20 = CONCAT44(fVar34 * fVar32 + fVar39 * fVar36 + fVar42 * fVar43,
                            (float)local_c0 * fVar32 + (float)local_d0 * fVar36 +
                            (float)local_b0 * fVar43);
        *(undefined4 *)(puVar20 + 1) = uVar33;
      }
      fVar34 = *(float *)(lVar5 + (ulong)uVar25 * 4) / 100.0;
      fVar32 = -1.0;
      if ((-1.0 <= fVar34) && (fVar32 = 1.0, fVar34 <= 1.0)) {
        fVar32 = fVar34;
      }
      *(float *)(lVar21 + (ulong)param_4 * 4 + uVar14) = fVar32;
      uVar14 = uVar14 + 4;
      uVar25 = uVar25 + 3;
    } while ((ulong)uVar4 * 4 - uVar14 != 0);
  }
  __n = (ulong)(uVar4 << 1) << 2;
  uVar14 = (ulong)param_4;
  pvVar11 = (void *)TriangleSet::getTexCoords((TriangleSet *)param_1,0);
  if (pvVar11 != (void *)0x0) {
    lVar5 = TriangleSet::getTexCoords((TriangleSet *)param_7,0);
    memcpy((void *)(lVar5 + uVar14 * 8),pvVar11,__n);
  }
  pvVar11 = (void *)TriangleSet::getTexCoords((TriangleSet *)param_1,1);
  if (pvVar11 != (void *)0x0) {
    lVar5 = TriangleSet::getTexCoords((TriangleSet *)param_7,1);
    memcpy((void *)(lVar5 + uVar14 * 8),pvVar11,__n);
  }
  pvVar11 = (void *)TriangleSet::getTexCoords((TriangleSet *)param_1,2);
  if (pvVar11 != (void *)0x0) {
    lVar5 = TriangleSet::getTexCoords((TriangleSet *)param_7,2);
    memcpy((void *)(lVar5 + uVar14 * 8),pvVar11,__n);
  }
  pvVar11 = (void *)TriangleSet::getTexCoords((TriangleSet *)param_1,3);
  if (pvVar11 != (void *)0x0) {
    lVar5 = TriangleSet::getTexCoords((TriangleSet *)param_7,3);
    memcpy((void *)(lVar5 + uVar14 * 8),pvVar11,__n);
  }
  pvVar11 = (void *)TriangleSet::getColors();
  if (pvVar11 != (void *)0x0) {
    lVar5 = TriangleSet::getColors();
    memcpy((void *)(lVar5 + (ulong)param_4 * 0x10),pvVar11,(ulong)(uVar4 << 2) << 2);
  }
  uVar14 = IndexedTriangleSet::getNumIndices();
  uVar12 = IndexedTriangleSet::getIndices16();
  lVar5 = IndexedTriangleSet::getIndices16();
  uVar25 = (uint)uVar14;
  if (uVar25 != 0) {
    uVar16 = (ulong)param_5;
    uVar15 = uVar14 & 0xffffffff;
    if ((uVar25 < 0x10) ||
       ((lVar5 + (ulong)param_5 * 2 < uVar12 + uVar15 * 2 &&
        (uVar12 < lVar5 + (uVar15 + uVar16) * 2)))) {
      uVar14 = 0;
    }
    else {
      uVar14 = uVar14 & 0xfffffff0;
      puVar20 = (undefined8 *)(uVar12 + 0x10);
      puVar22 = (undefined8 *)(lVar5 + uVar16 * 2 + 0x10);
      uVar23 = uVar14;
      do {
        uVar31 = puVar20[-1];
        uVar30 = puVar20[-2];
        uVar37 = puVar20[1];
        uVar35 = *puVar20;
        puVar20 = puVar20 + 4;
        uVar23 = uVar23 - 0x10;
        puVar22[-1] = CONCAT26((short)((ulong)uVar31 >> 0x30) + param_4,
                               CONCAT24((short)((ulong)uVar31 >> 0x20) + param_4,
                                        CONCAT22((short)((ulong)uVar31 >> 0x10) + param_4,
                                                 (short)uVar31 + param_4)));
        puVar22[-2] = CONCAT26((short)((ulong)uVar30 >> 0x30) + param_4,
                               CONCAT24((short)((ulong)uVar30 >> 0x20) + param_4,
                                        CONCAT22((short)((ulong)uVar30 >> 0x10) + param_4,
                                                 (short)uVar30 + param_4)));
        puVar22[1] = CONCAT26((short)((ulong)uVar37 >> 0x30) + param_4,
                              CONCAT24((short)((ulong)uVar37 >> 0x20) + param_4,
                                       CONCAT22((short)((ulong)uVar37 >> 0x10) + param_4,
                                                (short)uVar37 + param_4)));
        *puVar22 = CONCAT26((short)((ulong)uVar35 >> 0x30) + param_4,
                            CONCAT24((short)((ulong)uVar35 >> 0x20) + param_4,
                                     CONCAT22((short)((ulong)uVar35 >> 0x10) + param_4,
                                              (short)uVar35 + param_4)));
        puVar22 = puVar22 + 4;
      } while (uVar23 != 0);
      if (uVar14 == uVar15) goto LAB_0097a850;
    }
    lVar6 = uVar15 - uVar14;
    psVar17 = (short *)(uVar12 + uVar14 * 2);
    psVar19 = (short *)(lVar5 + (uVar14 + uVar16) * 2);
    do {
      lVar6 = lVar6 + -1;
      *psVar19 = *psVar17 + param_4;
      psVar17 = psVar17 + 1;
      psVar19 = psVar19 + 1;
    } while (lVar6 != 0);
  }
LAB_0097a850:
  BoundingSphere::BoundingSphere(aBStack_f0,(Vector3 *)(param_2 + 0xc),*(float *)(param_2 + 0x18));
                    /* try { // try from 0097a864 to 0097a86f has its CatchHandler @ 0097a9b0 */
  BoundingSphere::transform(aBStack_f0,param_3);
  uVar35 = *(undefined8 *)(param_3 + 0x20);
  uVar31 = *(undefined8 *)(param_3 + 0x38);
  uVar30 = *(undefined8 *)(param_3 + 0x30);
  uVar41 = *(undefined8 *)(param_3 + 8);
  uVar40 = *(undefined8 *)param_3;
  uVar38 = *(undefined8 *)(param_3 + 0x18);
  uVar37 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_8 + 0x28) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(param_8 + 0x20) = uVar35;
  *(undefined8 *)(param_8 + 0x38) = uVar31;
  *(undefined8 *)(param_8 + 0x30) = uVar30;
  *(undefined8 *)(param_8 + 8) = uVar41;
  *(undefined8 *)param_8 = uVar40;
  *(undefined8 *)(param_8 + 0x18) = uVar38;
  *(undefined8 *)(param_8 + 0x10) = uVar37;
  *(undefined8 *)(param_8 + 0x40) = local_e4;
  *(undefined4 *)(param_8 + 0x48) = local_dc;
  *(undefined4 *)(param_8 + 0x4c) = local_d8;
                    /* try { // try from 0097a89c to 0097a8f7 has its CatchHandler @ 0097a9b8 */
  uVar26 = IndexedTriangleSet::computeUvDensity(param_7,0,param_5,uVar25);
  uVar27 = IndexedTriangleSet::computeUvDensity(param_7,1,param_5,uVar25);
  uVar28 = IndexedTriangleSet::computeUvDensity(param_7,2,param_5,uVar25);
  uVar29 = IndexedTriangleSet::computeUvDensity(param_7,3,param_5,uVar25);
                    /* try { // try from 0097a8fc to 0097a923 has its CatchHandler @ 0097a9b4 */
  puVar13 = (uint *)operator_new(0x20);
  puVar13[4] = uVar26;
  puVar13[5] = uVar27;
  puVar13[6] = uVar28;
  puVar13[7] = uVar29;
  *puVar13 = (uint)param_4;
  puVar13[1] = uVar4;
  puVar13[2] = param_5;
  puVar13[3] = uVar25;
  IndexedTriangleSet::setSubset(param_7,(IndexedTriangleSubset *)puVar13,param_6);
  BoundingSphere::~BoundingSphere(aBStack_f0);
  if (*(long *)(lVar3 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


