// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setupMergedShadowLight
// Entry Point: 00a581c0
// Size: 1376 bytes
// Signature: undefined __cdecl setupMergedShadowLight(Vector3 * param_1, Vector3 * param_2, Vector3 * param_3, MergedShadowClippingPlaneCorners * param_4, MergedShadowAABB * param_5)


/* LightSource::MergedShadowGroup::setupMergedShadowLight(Vector3 const&, Vector3 const&, Vector3
   const&, LightSource::MergedShadowGroup::MergedShadowClippingPlaneCorners const&,
   LightSource::MergedShadowGroup::MergedShadowAABB const&) */

void LightSource::MergedShadowGroup::setupMergedShadowLight
               (Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,
               MergedShadowClippingPlaneCorners *param_4,MergedShadowAABB *param_5)

{
  Vector3 *pVVar1;
  Vector3 *pVVar2;
  int iVar3;
  long lVar4;
  long in_x5;
  Vector3 **in_x8;
  long *plVar5;
  undefined8 *puVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  Vector3 *pVVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 local_200;
  float local_1f8;
  undefined4 uStack_1f4;
  Vector3 *pVStack_1f0;
  Vector3 *local_1e8;
  Vector3 *pVStack_1e0;
  Vector3 *local_1d8;
  Vector3 *pVStack_1d0;
  Vector3 *local_1c8;
  Vector3 *pVStack_1c0;
  Vector3 *local_1b8;
  Vector3 *pVStack_1b0;
  Vector3 *local_1a8;
  Vector3 *pVStack_1a0;
  Vector3 *local_198;
  Vector3 *pVStack_190;
  Vector3 *local_188;
  Vector3 *pVStack_180;
  Vector3 *local_178;
  Vector3 *pVStack_170;
  Vector3 *local_168;
  Vector3 *pVStack_160;
  Vector3 *local_158;
  Vector3 *pVStack_150;
  Vector3 *local_148;
  Vector3 *pVStack_140;
  Vector3 *local_138;
  Vector3 *pVStack_130;
  Vector3 *local_128;
  Vector3 *pVStack_120;
  Vector3 *local_118;
  undefined8 local_108;
  float local_100;
  Plane aPStack_f8 [16];
  Plane aPStack_e8 [16];
  Plane aPStack_d8 [16];
  Plane aPStack_c8 [16];
  Plane aPStack_b8 [16];
  Vector3 aVStack_a8 [16];
  float local_98;
  float fStack_94;
  float local_90;
  long local_88;
  
  lVar4 = tpidr_el0;
  local_88 = *(long *)(lVar4 + 0x28);
  uVar10 = *(undefined8 *)(param_5 + 0x84);
  uVar13 = *(undefined8 *)(param_5 + 0x24);
  local_1f8 = *(float *)(param_5 + 0x2c) - *(float *)(param_5 + 0x8c);
  fVar14 = 1.0;
  fVar7 = (float)uVar13 - (float)uVar10;
  fVar11 = (float)((ulong)uVar13 >> 0x20) - (float)((ulong)uVar10 >> 0x20);
  fVar15 = (float)NEON_fmadd(local_1f8,local_1f8,fVar11 * fVar11 + fVar7 * fVar7);
  fVar12 = 1.0;
  if (1e-06 < fVar15) {
    fVar14 = 1.0 / SQRT(fVar15);
  }
  local_200 = CONCAT44(fVar11 * fVar14,fVar7 * fVar14);
  local_1f8 = local_1f8 * fVar14;
  uVar10 = *(undefined8 *)(param_5 + 0x78);
  uVar13 = *(undefined8 *)(param_5 + 0x18);
  fVar7 = (float)uVar13 - (float)uVar10;
  fVar11 = (float)((ulong)uVar13 >> 0x20) - (float)((ulong)uVar10 >> 0x20);
  local_100 = *(float *)(param_5 + 0x20) - *(float *)(param_5 + 0x80);
  fVar14 = (float)NEON_fmadd(local_100,local_100,fVar11 * fVar11 + fVar7 * fVar7);
  if (1e-06 < fVar14) {
    fVar12 = 1.0 / SQRT(fVar14);
  }
  local_108 = CONCAT44(fVar11 * fVar12,fVar7 * fVar12);
  local_100 = local_100 * fVar12;
  MathUtil::lineLineIntersect3D
            ((Vector3 *)(param_5 + 0x84),(Vector3 *)&local_200,(Vector3 *)(param_5 + 0x78),
             (Vector3 *)&local_108,(Vector3 *)&local_98,aVStack_a8);
  uVar8 = NEON_fmadd(*(float *)(param_5 + 0x78) - *(float *)(param_5 + 0x6c),
                     *(float *)(param_5 + 0x78) - *(float *)(param_5 + 0x6c),
                     (*(float *)(param_5 + 0x7c) - *(float *)(param_5 + 0x70)) *
                     (*(float *)(param_5 + 0x7c) - *(float *)(param_5 + 0x70)));
  fVar7 = (float)NEON_fmadd(*(float *)(param_5 + 0x80) - *(float *)(param_5 + 0x74),
                            *(float *)(param_5 + 0x80) - *(float *)(param_5 + 0x74),uVar8);
  uVar8 = NEON_fmadd(*(undefined4 *)param_2,local_98,*(float *)(param_2 + 4) * fStack_94);
  fVar11 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 8),local_90,uVar8);
  fVar19 = ABS(fVar11 - *(float *)(in_x5 + 8)) + (*(float *)(in_x5 + 0x14) - *(float *)(in_x5 + 8));
  fVar7 = atanf(SQRT(fVar7) / (fVar19 + fVar19));
  uVar9 = MathUtil::radianToDegree(fVar7 + fVar7);
  fVar7 = *(float *)(param_4 + 8);
  uVar10 = *(undefined8 *)param_3;
  fVar11 = *(float *)(param_3 + 8);
  uVar13 = *(undefined8 *)param_2;
  fVar12 = *(float *)(param_2 + 8);
  puVar6 = (undefined8 *)(param_1 + 0x38);
  *puVar6 = CONCAT44(-(float)((ulong)*(undefined8 *)param_4 >> 0x20),-(float)*(undefined8 *)param_4)
  ;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(float *)(param_1 + 0x40) = -fVar7;
  *(ulong *)(param_1 + 0x48) = CONCAT44(-(float)((ulong)uVar10 >> 0x20),-(float)uVar10);
  *(float *)(param_1 + 0x50) = -fVar11;
  *(ulong *)(param_1 + 0x58) = CONCAT44(-(float)((ulong)uVar13 >> 0x20),-(float)uVar13);
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(float *)(param_1 + 0x60) = -fVar12;
  *(undefined4 *)(param_1 + 100) = 0;
  *(ulong *)(param_1 + 0x68) = CONCAT44(fStack_94,local_98);
  *(float *)(param_1 + 0x70) = local_90;
  *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
  Frustum::Frustum((Frustum *)(in_x8 + 6));
  fVar15 = *(float *)(param_5 + 0x60);
  fVar16 = *(float *)(param_5 + 100);
  fVar7 = *(float *)(param_5 + 0x70);
  fVar11 = *(float *)(param_5 + 0x74);
  fVar14 = *(float *)(param_5 + 0x68);
  fVar12 = *(float *)(param_5 + 0x6c);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  *in_x8 = (Vector3 *)puVar6;
  plVar5 = *(long **)param_1;
  *(undefined4 *)(in_x8 + 2) = uVar9;
  *(float *)((long)in_x8 + 0x14) = fVar19;
  fVar21 = fVar7 - fVar16;
  pVVar18 = *(Vector3 **)(param_1 + 0x28);
  fVar20 = fVar12 - fVar15;
  *(undefined4 *)((long)in_x8 + 0x1c) = uVar8;
  fVar22 = fVar11 - fVar14;
  uVar8 = *(undefined4 *)(param_1 + 0x30);
  iVar3 = *(int *)(*plVar5 + 0x16c);
  fVar23 = 1.0;
  fVar26 = 1.0;
  in_x8[4] = pVVar18;
  *(undefined4 *)(in_x8 + 5) = uVar8;
  uVar8 = NEON_fmadd(fVar20,fVar20,fVar21 * fVar21);
  *in_x8 = (Vector3 *)puVar6;
  fVar17 = (float)NEON_fmadd(fVar22,fVar22,uVar8);
  *(bool *)(in_x8 + 3) = iVar3 == 2;
  if (1e-06 < fVar17) {
    fVar26 = 1.0 / SQRT(fVar17);
  }
  fVar20 = fVar20 * fVar26;
  fVar24 = *(float *)(param_5 + 0x7c) - fVar7;
  fVar25 = *(float *)(param_5 + 0x78) - fVar12;
  fVar17 = *(float *)(param_5 + 0x80) - fVar11;
  uVar8 = NEON_fmadd(fVar25,fVar25,fVar24 * fVar24);
  fVar27 = (float)NEON_fmadd(fVar17,fVar17,uVar8);
  fVar21 = fVar21 * fVar26;
  fVar22 = fVar22 * fVar26;
  if (1e-06 < fVar27) {
    fVar23 = 1.0 / SQRT(fVar27);
  }
  fVar17 = fVar17 * fVar23;
  fVar24 = fVar24 * fVar23;
  fVar25 = fVar25 * fVar23;
  fVar28 = (float)NEON_fmadd(fVar22,fVar25,fVar17 * -fVar20);
  fVar23 = (float)NEON_fmadd(fVar21,fVar17,fVar24 * -fVar22);
  fVar26 = (float)NEON_fmadd(fVar20,fVar24,fVar25 * -fVar21);
  uVar8 = NEON_fmadd(fVar23,fVar23,fVar28 * fVar28);
  fVar29 = (float)NEON_fmadd(fVar26,fVar26,uVar8);
  fVar27 = 1.0;
  if (1e-06 < fVar29) {
    fVar27 = 1.0 / SQRT(fVar29);
  }
  fVar16 = fVar16 - fStack_94;
  fVar15 = fVar15 - local_98;
  fVar14 = fVar14 - local_90;
  uVar9 = NEON_fmadd(fVar15,fVar20,fVar21 * fVar16);
  uVar8 = NEON_fmadd(fVar27 * -fVar23,fVar15,fVar27 * -fVar28 * fVar16);
  fVar15 = (float)NEON_fmadd(fVar14,fVar22,uVar9);
  fVar16 = (float)NEON_fmadd(fVar27 * -fVar26,fVar14,uVar8);
  uVar8 = NEON_fmadd(fVar12 - local_98,fVar20,fVar21 * (fVar7 - fStack_94));
  fVar14 = (float)NEON_fmadd(fVar11 - local_90,fVar22,uVar8);
  uVar9 = NEON_fmadd(*(float *)(param_5 + 0x78) - local_98,fVar25,
                     fVar24 * (*(float *)(param_5 + 0x7c) - fStack_94));
  uVar8 = NEON_fmadd(fVar12 - local_98,fVar25,fVar24 * (fVar7 - fStack_94));
  fVar12 = (float)NEON_fmadd(*(float *)(param_5 + 0x80) - local_90,fVar17,uVar9);
  fVar7 = (float)NEON_fmadd(fVar11 - local_90,fVar17,uVar8);
  RenderDeviceUtil::makePerspProjectionMatrix
            (fVar15 / fVar16,fVar14 / fVar16,fVar7 / fVar16,fVar12 / fVar16,0.2,fVar19,iVar3 == 2,
             (float *)(param_1 + 0x78));
  pVVar18 = (Vector3 *)(param_5 + 0x48);
  pVVar1 = (Vector3 *)(param_5 + 0x3c);
  in_x8[1] = param_1 + 0x78;
  Plane::Plane((Plane *)&local_108,(Vector3 *)(param_5 + 0xc),pVVar18,pVVar1);
  pVVar2 = (Vector3 *)(param_5 + 0x30);
  Plane::Plane(aPStack_f8,(Vector3 *)param_5,pVVar2,(Vector3 *)(param_5 + 0x54));
  Plane::Plane(aPStack_e8,(Vector3 *)param_5,pVVar1,pVVar2);
  Plane::Plane(aPStack_d8,(Vector3 *)(param_5 + 0x24),(Vector3 *)(param_5 + 0x54),pVVar18);
  Plane::Plane(aPStack_c8,pVVar2,pVVar1,pVVar18);
  Plane::Plane(aPStack_b8,(Vector3 *)param_5,(Vector3 *)(param_5 + 0x18),(Vector3 *)(param_5 + 0xc))
  ;
  Frustum::Frustum((Frustum *)&local_200,(Plane *)&local_108);
  in_x8[0x1e] = pVStack_140;
  in_x8[0x1d] = local_148;
  in_x8[0x20] = pVStack_130;
  in_x8[0x1f] = local_138;
  in_x8[0x22] = pVStack_120;
  in_x8[0x21] = local_128;
  in_x8[0x16] = pVStack_180;
  in_x8[0x15] = local_188;
  in_x8[0x18] = pVStack_170;
  in_x8[0x17] = local_178;
  in_x8[0x1a] = pVStack_160;
  in_x8[0x19] = local_168;
  in_x8[0x1c] = pVStack_150;
  in_x8[0x1b] = local_158;
  in_x8[0xe] = pVStack_1c0;
  in_x8[0xd] = local_1c8;
  in_x8[0x10] = pVStack_1b0;
  in_x8[0xf] = local_1b8;
  in_x8[0x12] = pVStack_1a0;
  in_x8[0x11] = local_1a8;
  in_x8[0x14] = pVStack_190;
  in_x8[0x13] = local_198;
  in_x8[0x23] = local_118;
  in_x8[8] = pVStack_1f0;
  in_x8[7] = (Vector3 *)CONCAT44(uStack_1f4,local_1f8);
  in_x8[10] = pVStack_1e0;
  in_x8[9] = local_1e8;
  in_x8[0xc] = pVStack_1d0;
  in_x8[0xb] = local_1d8;
  if (*(long *)(lVar4 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


