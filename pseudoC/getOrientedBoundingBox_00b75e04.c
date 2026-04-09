// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getOrientedBoundingBox
// Entry Point: 00b75e04
// Size: 640 bytes
// Signature: undefined __cdecl getOrientedBoundingBox(Brep * param_1, Matrix4x4 * param_2, Vector3 * param_3)


/* BrepUtil::getOrientedBoundingBox(Brep const*, Matrix4x4&, Vector3&) */

void BrepUtil::getOrientedBoundingBox(Brep *param_1,Matrix4x4 *param_2,Vector3 *param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  bool bVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  ulong uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  float local_a0;
  float fStack_9c;
  undefined4 *local_98 [2];
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  uVar2 = (uint)(*(int *)(param_1 + 0x2ef8) - *(int *)(param_1 + 0x2ef0)) >> 4;
  uVar3 = uVar2 & 0xffff;
  uVar12 = (ulong)uVar3;
  PCA3D::PCA3D((PCA3D *)local_98,uVar3);
  if (uVar3 != 0) {
    puVar7 = *(undefined4 **)(param_1 + 0x2ef0);
    if ((uVar3 < 5) ||
       ((local_98[0] < puVar7 + uVar12 * 4 + -1 && (puVar7 < local_98[0] + uVar12 * 3)))) {
      lVar10 = 0;
    }
    else {
      uVar1 = 4;
      if ((uVar2 & 3) != 0) {
        uVar1 = uVar12 & 3;
      }
      lVar10 = uVar12 - uVar1;
      lVar9 = uVar1 - uVar12;
      puVar8 = local_98[0];
      puVar11 = puVar7;
      do {
        uVar19 = *puVar11;
        uVar17 = puVar11[1];
        uVar23 = puVar11[2];
        uVar14 = puVar11[4];
        uVar20 = puVar11[5];
        uVar24 = puVar11[6];
        uVar15 = puVar11[8];
        uVar21 = puVar11[9];
        uVar25 = puVar11[10];
        uVar16 = puVar11[0xc];
        uVar22 = puVar11[0xd];
        uVar26 = puVar11[0xe];
        puVar11 = puVar11 + 0x10;
        *puVar8 = uVar19;
        puVar8[1] = uVar17;
        puVar8[2] = uVar23;
        puVar8[3] = uVar14;
        puVar8[4] = uVar20;
        puVar8[5] = uVar24;
        puVar8[6] = uVar15;
        puVar8[7] = uVar21;
        puVar8[8] = uVar25;
        puVar8[9] = uVar16;
        puVar8[10] = uVar22;
        puVar8[0xb] = uVar26;
        puVar8 = puVar8 + 0xc;
        lVar9 = lVar9 + 4;
      } while (lVar9 != 0);
    }
    lVar9 = lVar10 - uVar12;
    puVar8 = local_98[0] + lVar10 * 3 + 2;
    puVar7 = puVar7 + lVar10 * 4 + 2;
    do {
      bVar6 = lVar9 != -1;
      lVar9 = lVar9 + 1;
      puVar8[-2] = puVar7[-2];
      puVar8[-1] = puVar7[-1];
      *puVar8 = *puVar7;
      puVar8 = puVar8 + 3;
      puVar7 = puVar7 + 4;
    } while (bVar6);
  }
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)param_2 = 0x3f800000;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0x3f80000000000000;
  *(undefined8 *)(param_2 + 0x28) = 0x3f800000;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0x3f80000000000000;
  *(undefined8 *)(param_2 + 0x30) = 0;
                    /* try { // try from 00b75f28 to 00b75f33 has its CatchHandler @ 00b76088 */
  PCA3D::computeMaximalEigenvector((PCA3D *)local_98,(float *)&local_88);
                    /* try { // try from 00b75f34 to 00b75f47 has its CatchHandler @ 00b76084 */
  PCA3D::collapseAlongVector((PCA3D *)local_98,(float *)&local_88,&fStack_9c,&local_a0);
  fVar5 = fStack_9c;
  fVar18 = local_a0;
  *(undefined8 *)param_2 = local_88;
  *(undefined4 *)(param_2 + 8) = local_80;
  *(float *)param_3 = (local_a0 - fStack_9c) * 0.5;
                    /* try { // try from 00b75f6c to 00b75f77 has its CatchHandler @ 00b76088 */
  PCA3D::computeMaximalEigenvector((PCA3D *)local_98,(float *)&local_88);
                    /* try { // try from 00b75f78 to 00b75f8b has its CatchHandler @ 00b76084 */
  PCA3D::collapseAlongVector((PCA3D *)local_98,(float *)&local_88,&fStack_9c,&local_a0);
  fVar27 = fStack_9c;
  fVar13 = local_a0;
  *(undefined8 *)(param_2 + 0x10) = local_88;
  *(undefined4 *)(param_2 + 0x18) = local_80;
  *(float *)(param_3 + 4) = (local_a0 - fStack_9c) * 0.5;
                    /* try { // try from 00b75fb0 to 00b75fbb has its CatchHandler @ 00b76088 */
  PCA3D::computeMaximalEigenvector((PCA3D *)local_98,(float *)&local_88);
                    /* try { // try from 00b75fbc to 00b75fcf has its CatchHandler @ 00b76084 */
  PCA3D::collapseAlongVector((PCA3D *)local_98,(float *)&local_88,&fStack_9c,&local_a0);
  *(undefined8 *)(param_2 + 0x20) = local_88;
  *(undefined4 *)(param_2 + 0x28) = local_80;
  fVar27 = (fVar27 + fVar13) * 0.5;
  fVar13 = (fStack_9c + local_a0) * 0.5;
  fVar18 = (fVar5 + fVar18) * 0.5;
  *(float *)(param_3 + 8) = (local_a0 - fStack_9c) * 0.5;
  uVar19 = NEON_fmadd(fVar18,*(undefined4 *)(param_2 + 8),fVar27 * *(float *)(param_2 + 0x18));
  uVar19 = NEON_fmadd(fVar13,*(undefined4 *)(param_2 + 0x28),uVar19);
  *(ulong *)(param_2 + 0x30) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) * fVar27 +
                (float)((ulong)*(undefined8 *)param_2 >> 0x20) * fVar18 +
                (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20) * fVar13,
                (float)*(undefined8 *)(param_2 + 0x10) * fVar27 +
                (float)*(undefined8 *)param_2 * fVar18 +
                (float)*(undefined8 *)(param_2 + 0x20) * fVar13);
  *(undefined4 *)(param_2 + 0x38) = uVar19;
  PCA3D::~PCA3D((PCA3D *)local_98);
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


