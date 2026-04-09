// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clipFaceAgainstHull
// Entry Point: 00f71e44
// Size: 1156 bytes
// Signature: undefined __cdecl clipFaceAgainstHull(btVector3 * param_1, btConvexPolyhedron * param_2, btTransform * param_3, btAlignedObjectArray * param_4, float param_5, float param_6, Result * param_7)


/* btPolyhedralContactClipping::clipFaceAgainstHull(btVector3 const&, btConvexPolyhedron const&,
   btTransform const&, btAlignedObjectArray<btVector3>&, float, float,
   btDiscreteCollisionDetectorInterface::Result&) */

void btPolyhedralContactClipping::clipFaceAgainstHull
               (btVector3 *param_1,btConvexPolyhedron *param_2,btTransform *param_3,
               btAlignedObjectArray *param_4,float param_5,float param_6,Result *param_7)

{
  ulong uVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 *puVar4;
  long lVar5;
  btAlignedObjectArray *pbVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined4 *puVar14;
  long lVar15;
  btAlignedObjectArray *pbVar16;
  long lVar17;
  ulong uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  float fVar37;
  undefined4 uVar38;
  float fVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  btAlignedObjectArray abStack_e0 [4];
  undefined4 local_dc;
  uint local_d8;
  long local_d0;
  char local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  long local_a0;
  
  lVar5 = tpidr_el0;
  local_a0 = *(long *)(lVar5 + 0x28);
  uVar10 = *(uint *)(param_4 + 4);
  local_d0 = 0;
  local_dc = 0;
  local_d8 = 0;
  local_c8 = 1;
  if (0 < (int)uVar10) {
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    local_d0 = (*(code *)PTR_FUN_01048e38)((ulong)uVar10 << 4,0x10);
    local_c8 = 1;
    local_d8 = uVar10;
  }
  local_c8 = '\x01';
  if (0 < (int)*(uint *)(param_2 + 0x2c)) {
    fVar23 = *(float *)param_3;
    uVar21 = *(undefined4 *)(param_3 + 4);
    fVar24 = *(float *)(param_3 + 0x10);
    uVar22 = *(undefined4 *)(param_3 + 0x14);
    lVar15 = *(long *)(param_2 + 0x38);
    uVar11 = 0;
    fVar25 = *(float *)(param_3 + 0x20);
    uVar27 = *(undefined4 *)(param_3 + 0x24);
    uVar19 = *(undefined4 *)(param_3 + 8);
    uVar20 = *(undefined4 *)(param_3 + 0x18);
    fVar31 = 3.402823e+38;
    uVar28 = *(undefined4 *)(param_3 + 0x28);
    uVar18 = 0xffffffff;
    puVar14 = (undefined4 *)(lVar15 + 0x28);
    do {
      fVar33 = (float)puVar14[-2];
      uVar35 = puVar14[-1];
      uVar40 = *puVar14;
      uVar36 = NEON_fmadd(uVar21,uVar35,fVar23 * fVar33);
      uVar38 = NEON_fmadd(uVar22,uVar35,fVar24 * fVar33);
      uVar35 = NEON_fmadd(uVar27,uVar35,fVar25 * fVar33);
      fVar33 = (float)NEON_fmadd(uVar19,uVar40,uVar36);
      uVar36 = NEON_fmadd(uVar20,uVar40,uVar38);
      uVar35 = NEON_fmadd(uVar28,uVar40,uVar35);
      uVar36 = NEON_fmadd(*(undefined4 *)(param_1 + 4),uVar36,*(float *)param_1 * fVar33);
      fVar33 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),uVar35,uVar36);
      bVar7 = fVar31 <= fVar33;
      fVar31 = (float)NEON_fminnm(fVar33,fVar31);
      uVar10 = (uint)uVar11;
      if (bVar7) {
        uVar10 = (uint)uVar18;
      }
      uVar18 = (ulong)uVar10;
      uVar11 = uVar11 + 1;
      puVar14 = puVar14 + 0xc;
    } while (*(uint *)(param_2 + 0x2c) != uVar11);
    if (-1 < (int)uVar10) {
      lVar12 = lVar15 + (ulong)uVar10 * 0x30;
      uVar10 = *(uint *)(lVar12 + 4);
      if (0 < (int)uVar10) {
        uVar11 = 0;
        pbVar6 = param_4;
        pbVar16 = abStack_e0;
        do {
          param_4 = pbVar16;
          pbVar16 = pbVar6;
          uVar1 = uVar11 + 1;
          lVar17 = 0;
          if (uVar1 != uVar10) {
            lVar17 = uVar11 + 1;
          }
          fVar31 = *(float *)(lVar12 + 0x20);
          uVar35 = *(undefined4 *)(lVar12 + 0x24);
          pfVar2 = (float *)(*(long *)(param_2 + 0x18) +
                            (long)*(int *)(*(long *)(lVar12 + 0x10) + uVar11 * 4) * 0x10);
          pfVar3 = (float *)(*(long *)(param_2 + 0x18) +
                            (long)*(int *)(*(long *)(lVar12 + 0x10) + lVar17 * 4) * 0x10);
          fVar29 = *pfVar2;
          fVar32 = pfVar2[1];
          fVar37 = pfVar2[2];
          uVar36 = NEON_fmadd(uVar35,uVar27,fVar31 * fVar25);
          uVar38 = NEON_fmadd(uVar35,uVar21,fVar31 * fVar23);
          uVar35 = NEON_fmadd(uVar35,uVar22,fVar31 * fVar24);
          fVar31 = fVar29 - *pfVar3;
          fVar34 = fVar32 - pfVar3[1];
          fVar41 = fVar37 - pfVar3[2];
          uVar40 = *(undefined4 *)(lVar12 + 0x28);
          fVar33 = (float)NEON_fmadd(uVar40,uVar28,uVar36);
          fVar30 = (float)NEON_fmadd(uVar40,uVar20,uVar35);
          uVar36 = NEON_fmadd(uVar22,fVar34,fVar24 * fVar31);
          uVar35 = NEON_fmadd(uVar27,fVar34,fVar25 * fVar31);
          uVar22 = NEON_fmadd(uVar22,fVar32,fVar24 * fVar29);
          uVar27 = NEON_fmadd(uVar27,fVar32,fVar25 * fVar29);
          fVar39 = (float)NEON_fmadd(uVar20,fVar41,uVar36);
          fVar42 = (float)NEON_fmadd(uVar40,uVar19,uVar38);
          uVar36 = NEON_fmadd(uVar21,fVar32,fVar23 * fVar29);
          uVar21 = NEON_fmadd(uVar21,fVar34,fVar23 * fVar31);
          fVar23 = (float)NEON_fmadd(uVar28,fVar41,uVar35);
          fVar24 = (float)NEON_fmadd(uVar20,fVar37,uVar22);
          fVar29 = (float)NEON_fmadd(uVar19,fVar37,uVar36);
          fVar31 = (float)NEON_fmadd(uVar19,fVar41,uVar21);
          fVar25 = (float)NEON_fnmsub(fVar30,fVar23,fVar33 * fVar39);
          uVar19 = NEON_fnmsub(fVar33,fVar31,fVar42 * fVar23);
          fVar23 = (float)NEON_fmadd(uVar28,fVar37,uVar27);
          local_b0 = CONCAT44(uVar19,fVar25);
          uVar26 = NEON_fnmsub(fVar42,fVar39,fVar30 * fVar31);
          fVar31 = (float)NEON_fmadd(fVar24 + *(float *)(param_3 + 0x34),uVar19,
                                     (fVar29 + *(float *)(param_3 + 0x30)) * fVar25);
          uStack_a8 = (ulong)uVar26;
          fVar31 = (float)NEON_fnmadd(fVar23 + *(float *)(param_3 + 0x38),uVar26,-fVar31);
          clipFace(pbVar16,param_4,(btVector3 *)&local_b0,fVar31);
          lVar17 = (long)*(int *)(pbVar16 + 4);
          if (*(int *)(pbVar16 + 4) < 0) {
            if (*(int *)(pbVar16 + 8) < 0) {
              if ((*(long *)(pbVar16 + 0x10) != 0) && (pbVar16[0x18] != (btAlignedObjectArray)0x0))
              {
                gNumAlignedFree = gNumAlignedFree + 1;
                (*(code *)PTR_FUN_01048e40)();
              }
              *(undefined8 *)(pbVar16 + 0x10) = 0;
              *(undefined4 *)(pbVar16 + 8) = 0;
              pbVar16[0x18] = (btAlignedObjectArray)0x1;
            }
            lVar9 = lVar17 << 4;
            do {
              lVar13 = *(long *)(pbVar16 + 0x10);
              bVar7 = lVar17 != -1;
              lVar17 = lVar17 + 1;
              ((undefined8 *)(lVar13 + lVar9))[1] = uStack_b8;
              *(undefined8 *)(lVar13 + lVar9) = local_c0;
              lVar9 = lVar9 + 0x10;
            } while (bVar7);
          }
          *(undefined4 *)(pbVar16 + 4) = 0;
          fVar23 = *(float *)param_3;
          uVar21 = *(undefined4 *)(param_3 + 4);
          fVar24 = *(float *)(param_3 + 0x10);
          uVar22 = *(undefined4 *)(param_3 + 0x14);
          fVar25 = *(float *)(param_3 + 0x20);
          uVar27 = *(undefined4 *)(param_3 + 0x24);
          uVar19 = *(undefined4 *)(param_3 + 8);
          uVar20 = *(undefined4 *)(param_3 + 0x18);
          uVar28 = *(undefined4 *)(param_3 + 0x28);
          uVar11 = uVar1;
          pbVar6 = param_4;
        } while (uVar1 != uVar10);
      }
      iVar8 = *(int *)(param_4 + 4);
      if (0 < iVar8) {
        fVar31 = *(float *)(lVar12 + 0x20);
        lVar9 = 0;
        uVar36 = *(undefined4 *)(lVar12 + 0x24);
        lVar17 = 0;
        uVar21 = NEON_fmadd(uVar21,uVar36,fVar23 * fVar31);
        uVar35 = *(undefined4 *)(lVar12 + 0x28);
        uVar22 = NEON_fmadd(uVar22,uVar36,fVar24 * fVar31);
        fVar24 = (float)NEON_fmadd(uVar19,uVar35,uVar21);
        uVar20 = NEON_fmadd(uVar20,uVar35,uVar22);
        uVar19 = NEON_fmadd(uVar27,uVar36,fVar25 * fVar31);
        uVar21 = NEON_fmadd(uVar28,uVar35,uVar19);
        uVar19 = NEON_fmadd(*(undefined4 *)(param_3 + 0x34),uVar20,
                            *(float *)(param_3 + 0x30) * fVar24);
        fVar31 = (float)NEON_fmadd(*(undefined4 *)(param_3 + 0x38),uVar21,uVar19);
        fVar23 = *(float *)(lVar15 + uVar18 * 0x30 + 0x2c);
        do {
          puVar14 = (undefined4 *)(*(long *)(param_4 + 0x10) + lVar9);
          uVar19 = NEON_fmadd(*puVar14,fVar24,fVar23 - fVar31);
          uVar19 = NEON_fmadd(puVar14[1],uVar20,uVar19);
          fVar25 = (float)NEON_fmadd(puVar14[2],uVar21,uVar19);
          if (fVar25 <= param_5) {
            fVar25 = param_5;
          }
          if (fVar25 <= param_6) {
            puVar4 = (undefined8 *)(*(long *)(param_4 + 0x10) + lVar9);
            uStack_a8 = puVar4[1];
            local_b0 = *puVar4;
            (**(code **)(*(long *)param_7 + 0x20))(param_7,param_1,&local_b0);
            iVar8 = *(int *)(param_4 + 4);
          }
          lVar17 = lVar17 + 1;
          lVar9 = lVar9 + 0x10;
        } while (lVar17 < iVar8);
      }
    }
  }
  if ((local_d0 != 0) && (local_c8 != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  if (*(long *)(lVar5 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


