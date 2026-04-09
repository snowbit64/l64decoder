// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVerticesFromPlaneEquations
// Entry Point: 00fa6efc
// Size: 964 bytes
// Signature: undefined __cdecl getVerticesFromPlaneEquations(btAlignedObjectArray * param_1, btAlignedObjectArray * param_2)


/* btGeometryUtil::getVerticesFromPlaneEquations(btAlignedObjectArray<btVector3> const&,
   btAlignedObjectArray<btVector3>&) */

void btGeometryUtil::getVerticesFromPlaneEquations
               (btAlignedObjectArray *param_1,btAlignedObjectArray *param_2)

{
  float *pfVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  long lVar11;
  uint uVar12;
  undefined4 *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  float fVar39;
  undefined8 uVar40;
  float fVar41;
  ulong local_b8;
  long local_b0;
  
  uVar7 = *(uint *)(param_1 + 4);
  uVar18 = (ulong)uVar7;
  if (0 < (int)uVar7) {
    local_b8 = 1;
    local_b0 = 2;
    uVar15 = 0;
    do {
      uVar2 = uVar15 + 1;
      if (uVar2 < uVar18) {
        puVar13 = *(undefined4 **)(param_1 + 0x10);
        puVar4 = (undefined8 *)(puVar13 + uVar15 * 4);
        uVar15 = local_b8;
        lVar16 = local_b0;
        do {
          uVar3 = uVar15 + 1;
          if ((int)uVar3 < (int)uVar7) {
            puVar5 = (undefined8 *)(puVar13 + uVar15 * 4);
            lVar17 = lVar16;
            do {
              puVar6 = (undefined8 *)(puVar13 + lVar17 * 4);
              uVar30 = *puVar4;
              uVar22 = *puVar5;
              fVar33 = *(float *)(puVar5 + 1);
              uVar32 = *puVar6;
              uVar40 = NEON_rev64(uVar30,4);
              fVar27 = *(float *)(puVar6 + 1);
              uVar35 = NEON_rev64(uVar22,4);
              fVar34 = *(float *)(puVar4 + 1);
              fVar31 = (float)((ulong)uVar32 >> 0x20);
              uVar38 = NEON_rev64(uVar32,4);
              fVar21 = (float)((ulong)uVar22 >> 0x20);
              fVar36 = (float)uVar30;
              fVar24 = (float)((ulong)uVar38 >> 0x20);
              fVar37 = (float)((ulong)uVar35 >> 0x20);
              fVar19 = -(fVar31 * fVar33) + fVar27 * fVar21;
              fVar39 = (float)uVar40;
              fVar41 = (float)((ulong)uVar40 >> 0x20);
              fVar25 = -((float)uVar32 * (float)uVar35) + (float)uVar38 * (float)uVar22;
              fVar26 = -(fVar27 * fVar37) + fVar24 * fVar33;
              fVar29 = (float)((ulong)uVar30 >> 0x20);
              fVar23 = -(fVar36 * (float)uVar38) + (float)uVar32 * fVar39;
              fVar24 = -(fVar34 * fVar24) + fVar27 * fVar41;
              fVar28 = -(fVar34 * fVar21) + fVar33 * fVar29;
              fVar21 = -(fVar39 * (float)uVar22) + (float)uVar35 * fVar36;
              fVar33 = -(fVar41 * fVar33) + fVar37 * fVar34;
              fVar27 = -(fVar29 * fVar27) + fVar34 * fVar31;
              fVar37 = (float)NEON_fmadd(fVar19,fVar19,fVar26 * fVar26);
              fVar29 = (float)NEON_fmadd(fVar36,fVar19,fVar39 * fVar26 + fVar34 * fVar25);
              fVar31 = (float)NEON_fmadd(fVar27,fVar27,fVar24 * fVar24);
              fVar37 = fVar37 + fVar25 * fVar25;
              fVar34 = (float)NEON_fmadd(fVar28,fVar28,fVar33 * fVar33);
              fVar31 = fVar31 + fVar23 * fVar23;
              fVar34 = fVar34 + fVar21 * fVar21;
              bVar9 = fVar31 == 0.0001;
              bVar10 = fVar31 < 0.0001;
              if ((((((0.0001 < fVar37 && !bVar9) && (fVar37 <= 0.0001 || !bVar10)) &&
                    fVar34 != 0.0001) &&
                   (((fVar37 <= 0.0001 || bVar9) || 0.0001 < fVar37 && bVar10) || fVar34 >= 0.0001))
                  && ABS(fVar29) != 1e-06) &&
                  (((((fVar37 <= 0.0001 || bVar9) || 0.0001 < fVar37 && bVar10) || fVar34 == 0.0001)
                   || ((0.0001 < fVar37 && !bVar9) && (fVar37 <= 0.0001 || !bVar10)) &&
                      fVar34 < 0.0001) || 1e-06 <= ABS(fVar29))) {
                fVar34 = *(float *)((long)puVar4 + 0xc);
                fVar29 = -1.0 / fVar29;
                fVar37 = *(float *)((long)puVar5 + 0xc);
                fVar31 = *(float *)((long)puVar6 + 0xc);
                uVar20 = NEON_fmadd(fVar37,fVar27,fVar34 * fVar19);
                uVar12 = *(uint *)(param_1 + 4);
                fVar19 = (float)NEON_fmadd(fVar31,fVar28,uVar20);
                uVar22 = NEON_rev64(CONCAT44((fVar26 * fVar34 + fVar24 * fVar37 + fVar33 * fVar31) *
                                             fVar29,(fVar25 * fVar34 + fVar23 * fVar37 +
                                                    fVar21 * fVar31) * fVar29),4);
                if (0 < (int)uVar12) {
                  uVar15 = 0;
                  bVar10 = true;
                  do {
                    fVar21 = (float)NEON_fmadd(*puVar13,fVar19 * fVar29,0xbc23d70a);
                    if (0.0 < fVar21 + (float)*(undefined8 *)(puVar13 + 1) * (float)uVar22 +
                              (float)((ulong)*(undefined8 *)(puVar13 + 1) >> 0x20) *
                              (float)((ulong)uVar22 >> 0x20) + (float)puVar13[3]) break;
                    uVar15 = uVar15 + 1;
                    puVar13 = puVar13 + 4;
                    bVar10 = uVar15 < uVar12;
                  } while (uVar12 != uVar15);
                  if (bVar10) goto LAB_00fa70b0;
                }
                uVar12 = *(uint *)(param_2 + 4);
                if (uVar12 == *(uint *)(param_2 + 8)) {
                  uVar8 = uVar12 << 1;
                  if (uVar12 == 0) {
                    uVar8 = 1;
                  }
                  if ((int)uVar12 < (int)uVar8) {
                    if (uVar8 == 0) {
                      lVar11 = 0;
                    }
                    else {
                      gNumAlignedAllocs = gNumAlignedAllocs + 1;
                      lVar11 = (*(code *)PTR_FUN_01048e38)
                                         (-(ulong)(uVar8 >> 0x1f) & 0xfffffff000000000 |
                                          (ulong)uVar8 << 4,0x10);
                      uVar12 = *(uint *)(param_2 + 4);
                    }
                    if (0 < (int)uVar12) {
                      lVar14 = 0;
                      do {
                        uVar30 = *(undefined8 *)(*(long *)(param_2 + 0x10) + lVar14);
                        ((undefined8 *)(lVar11 + lVar14))[1] =
                             ((undefined8 *)(*(long *)(param_2 + 0x10) + lVar14))[1];
                        *(undefined8 *)(lVar11 + lVar14) = uVar30;
                        lVar14 = lVar14 + 0x10;
                      } while ((ulong)uVar12 * 0x10 - lVar14 != 0);
                    }
                    if ((*(long *)(param_2 + 0x10) != 0) &&
                       (param_2[0x18] != (btAlignedObjectArray)0x0)) {
                      gNumAlignedFree = gNumAlignedFree + 1;
                      (*(code *)PTR_FUN_01048e40)();
                    }
                    *(long *)(param_2 + 0x10) = lVar11;
                    param_2[0x18] = (btAlignedObjectArray)0x1;
                    uVar12 = *(uint *)(param_2 + 4);
                    *(uint *)(param_2 + 8) = uVar8;
                  }
                }
                pfVar1 = (float *)(*(long *)(param_2 + 0x10) + (long)(int)uVar12 * 0x10);
                *pfVar1 = fVar19 * fVar29;
                *(undefined8 *)(pfVar1 + 1) = uVar22;
                pfVar1[3] = 0.0;
                *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
              }
LAB_00fa70b0:
              lVar17 = lVar17 + 1;
              if ((int)uVar7 <= (int)lVar17) break;
              puVar13 = *(undefined4 **)(param_1 + 0x10);
            } while( true );
          }
          if (uVar3 == uVar18) break;
          lVar16 = lVar16 + 1;
          puVar13 = *(undefined4 **)(param_1 + 0x10);
          uVar15 = uVar3;
        } while( true );
      }
      local_b0 = local_b0 + 1;
      local_b8 = local_b8 + 1;
      uVar15 = uVar2;
    } while (uVar2 != uVar18);
  }
  return;
}


