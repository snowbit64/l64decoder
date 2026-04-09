// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVerticesFromPlaneEquations
// Entry Point: 00bacfbc
// Size: 880 bytes
// Signature: undefined __cdecl getVerticesFromPlaneEquations(btAlignedObjectArray * param_1, btAlignedObjectArray * param_2)


/* Bt2PhysicsCookingUtil::getVerticesFromPlaneEquations(btAlignedObjectArray<btVector3> const&,
   btAlignedObjectArray<btVector3>&) */

void Bt2PhysicsCookingUtil::getVerticesFromPlaneEquations
               (btAlignedObjectArray *param_1,btAlignedObjectArray *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  bool bVar9;
  bool bVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  undefined8 uVar29;
  undefined4 uVar30;
  undefined8 uVar31;
  float fVar32;
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  ulong local_c0;
  long local_b8;
  float local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long local_78;
  
  lVar8 = tpidr_el0;
  local_78 = *(long *)(lVar8 + 0x28);
  uVar6 = *(uint *)(param_1 + 4);
  uVar17 = (ulong)uVar6;
  if (0 < (int)uVar6) {
    local_c0 = 1;
    local_b8 = 2;
    uVar11 = 0;
    do {
      uVar1 = uVar11 + 1;
      if (uVar1 < uVar17) {
        lVar13 = *(long *)(param_1 + 0x10);
        puVar3 = (undefined8 *)(lVar13 + uVar11 * 0x10);
        uVar11 = local_c0;
        lVar15 = local_b8;
        while( true ) {
          uVar2 = uVar11 + 1;
          if ((int)uVar2 < (int)uVar6) {
            puVar4 = (undefined8 *)(lVar13 + uVar11 * 0x10);
            lVar16 = lVar15;
            while( true ) {
              puVar5 = (undefined8 *)(lVar13 + lVar16 * 0x10);
              uVar29 = *puVar4;
              uVar33 = *puVar3;
              fVar34 = *(float *)(puVar3 + 1);
              uVar31 = *puVar5;
              uVar27 = NEON_rev64(uVar29,4);
              fVar32 = *(float *)(puVar5 + 1);
              uVar36 = NEON_rev64(uVar33,4);
              fVar38 = *(float *)(puVar4 + 1);
              uVar21 = NEON_rev64(uVar31,4);
              fVar22 = (float)((ulong)uVar27 >> 0x20);
              fVar25 = (float)((ulong)uVar36 >> 0x20);
              fVar20 = (float)((ulong)uVar21 >> 0x20);
              fVar37 = (float)uVar33;
              fVar18 = (float)uVar31 * -(float)uVar27 + (float)uVar21 * (float)uVar29;
              fVar19 = fVar32 * -fVar22 + fVar20 * fVar38;
              fVar23 = fVar37 * -(float)uVar21 + (float)uVar36 * (float)uVar31;
              fVar24 = fVar34 * -fVar20 + fVar25 * fVar32;
              fVar26 = (float)((ulong)uVar31 >> 0x20);
              fVar20 = (float)uVar29 * -(float)uVar36 + (float)uVar27 * fVar37;
              fVar22 = fVar38 * -fVar25 + fVar22 * fVar34;
              fVar35 = (float)((ulong)uVar33 >> 0x20);
              fVar28 = (float)((ulong)uVar29 >> 0x20);
              fVar25 = -fVar38 * fVar26 + fVar32 * fVar28;
              fVar26 = -fVar32 * fVar35 + fVar34 * fVar26;
              fVar28 = -fVar34 * fVar28 + fVar38 * fVar35;
              fVar38 = (float)NEON_fmadd(fVar25,fVar25,fVar19 * fVar19);
              fVar39 = (float)NEON_fmadd(fVar26,fVar26,fVar24 * fVar24);
              uVar30 = NEON_fmadd(fVar37,fVar25,fVar35 * fVar19);
              fVar38 = fVar38 + fVar18 * fVar18;
              fVar35 = (float)NEON_fmadd(fVar28,fVar28,fVar22 * fVar22);
              fVar39 = fVar39 + fVar23 * fVar23;
              fVar32 = (float)NEON_fmadd(fVar34,fVar18,uVar30);
              fVar35 = fVar35 + fVar20 * fVar20;
              bVar10 = fVar39 == 0.0001;
              bVar9 = fVar39 < 0.0001;
              if ((((((0.0001 < fVar38 && !bVar10) && (fVar38 <= 0.0001 || !bVar9)) &&
                    fVar35 != 0.0001) &&
                   (((fVar38 <= 0.0001 || bVar10) || 0.0001 < fVar38 && bVar9) || fVar35 >= 0.0001))
                  && ABS(fVar32) != 1e-06) &&
                  (((((fVar38 <= 0.0001 || bVar10) || 0.0001 < fVar38 && bVar9) || fVar35 == 0.0001)
                   || ((0.0001 < fVar38 && !bVar10) && (fVar38 <= 0.0001 || !bVar9)) &&
                      fVar35 < 0.0001) || 1e-06 <= ABS(fVar32))) {
                fVar32 = -1.0 / fVar32;
                fVar38 = *(float *)((long)puVar3 + 0xc);
                fVar34 = *(float *)((long)puVar5 + 0xc);
                fVar35 = *(float *)((long)puVar4 + 0xc);
                uStack_7c = 0;
                local_88 = fVar32 * (fVar28 * fVar34 + fVar25 * fVar38 + fVar26 * fVar35);
                uVar21 = NEON_rev64(CONCAT44((fVar22 * fVar34 + fVar19 * fVar38 + fVar24 * fVar35) *
                                             fVar32,(fVar20 * fVar34 +
                                                    fVar18 * fVar38 + fVar23 * fVar35) * fVar32),4);
                uStack_84 = (undefined4)uVar21;
                uStack_80 = (undefined4)((ulong)uVar21 >> 0x20);
                uVar11 = btGeometryUtil::isPointInsidePlanes(param_1,(btVector3 *)&local_88,0.0001);
                if ((uVar11 & 1) != 0) {
                  uVar12 = *(uint *)(param_2 + 4);
                  if (uVar12 == *(uint *)(param_2 + 8)) {
                    uVar7 = uVar12 << 1;
                    if (uVar12 == 0) {
                      uVar7 = 1;
                    }
                    if ((int)uVar12 < (int)uVar7) {
                      if (uVar7 == 0) {
                        lVar13 = 0;
                      }
                      else {
                        lVar13 = btAlignedAllocInternal
                                           (-(ulong)(uVar7 >> 0x1f) & 0xfffffff000000000 |
                                            (ulong)uVar7 << 4,0x10);
                        uVar12 = *(uint *)(param_2 + 4);
                      }
                      if (0 < (int)uVar12) {
                        lVar14 = 0;
                        do {
                          uVar21 = *(undefined8 *)(*(long *)(param_2 + 0x10) + lVar14);
                          ((undefined8 *)(lVar13 + lVar14))[1] =
                               ((undefined8 *)(*(long *)(param_2 + 0x10) + lVar14))[1];
                          *(undefined8 *)(lVar13 + lVar14) = uVar21;
                          lVar14 = lVar14 + 0x10;
                        } while ((ulong)uVar12 * 0x10 - lVar14 != 0);
                      }
                      if ((*(void **)(param_2 + 0x10) != (void *)0x0) &&
                         (param_2[0x18] != (btAlignedObjectArray)0x0)) {
                        btAlignedFreeInternal(*(void **)(param_2 + 0x10));
                      }
                      *(long *)(param_2 + 0x10) = lVar13;
                      param_2[0x18] = (btAlignedObjectArray)0x1;
                      uVar12 = *(uint *)(param_2 + 4);
                      *(uint *)(param_2 + 8) = uVar7;
                    }
                  }
                  puVar5 = (undefined8 *)(*(long *)(param_2 + 0x10) + (long)(int)uVar12 * 0x10);
                  puVar5[1] = CONCAT44(uStack_7c,uStack_80);
                  *puVar5 = CONCAT44(uStack_84,local_88);
                  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
                }
              }
              lVar16 = lVar16 + 1;
              if ((int)uVar6 <= (int)lVar16) break;
              lVar13 = *(long *)(param_1 + 0x10);
            }
          }
          if (uVar2 == uVar17) break;
          lVar15 = lVar15 + 1;
          lVar13 = *(long *)(param_1 + 0x10);
          uVar11 = uVar2;
        }
      }
      local_b8 = local_b8 + 1;
      local_c0 = local_c0 + 1;
      uVar11 = uVar1;
    } while (uVar1 != uVar17);
  }
  if (*(long *)(lVar8 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


