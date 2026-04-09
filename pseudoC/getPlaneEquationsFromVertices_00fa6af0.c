// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPlaneEquationsFromVertices
// Entry Point: 00fa6af0
// Size: 1036 bytes
// Signature: undefined __cdecl getPlaneEquationsFromVertices(btAlignedObjectArray * param_1, btAlignedObjectArray * param_2)


/* btGeometryUtil::getPlaneEquationsFromVertices(btAlignedObjectArray<btVector3>&,
   btAlignedObjectArray<btVector3>&) */

void btGeometryUtil::getPlaneEquationsFromVertices
               (btAlignedObjectArray *param_1,btAlignedObjectArray *param_2)

{
  ulong uVar1;
  ulong uVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  float *pfVar14;
  long lVar15;
  undefined4 *puVar16;
  float *pfVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  ulong local_e8;
  long local_e0;
  long local_d0;
  
  uVar5 = *(uint *)(param_1 + 4);
  uVar13 = (ulong)uVar5;
  if (0 < (int)uVar5) {
    local_e8 = 1;
    local_e0 = 2;
    uVar11 = 0;
    do {
      uVar1 = uVar11 + 1;
      if (uVar1 < uVar13) {
        lVar10 = *(long *)(param_1 + 0x10);
        pfVar3 = (float *)(lVar10 + uVar11 * 0x10);
        local_d0 = local_e0;
        uVar11 = local_e8;
        do {
          uVar2 = uVar11 + 1;
          if ((int)uVar2 < (int)uVar5) {
            pfVar4 = (float *)(lVar10 + uVar11 * 0x10);
            lVar15 = local_d0;
            do {
              pfVar17 = (float *)(lVar10 + lVar15 * 0x10);
              fVar25 = pfVar3[1];
              fVar28 = pfVar3[2];
              fVar18 = *pfVar4 - *pfVar3;
              fVar22 = *pfVar17 - *pfVar3;
              fVar24 = pfVar4[1] - fVar25;
              fVar25 = pfVar17[1] - fVar25;
              fVar27 = pfVar4[2] - fVar28;
              fVar28 = pfVar17[2] - fVar28;
              fVar29 = (float)NEON_fnmsub(fVar25,fVar18,fVar22 * fVar24);
              fVar19 = 1.0;
              fVar24 = (float)NEON_fnmsub(fVar28,fVar24,fVar25 * fVar27);
              fVar18 = (float)NEON_fnmsub(fVar22,fVar27,fVar28 * fVar18);
              bVar8 = true;
              do {
                bVar7 = bVar8;
                fVar25 = fVar19 * fVar24;
                fVar22 = fVar19 * fVar18;
                fVar19 = fVar19 * fVar29;
                uVar26 = NEON_fmadd(fVar22,fVar22,fVar25 * fVar25);
                fVar27 = (float)NEON_fmadd(fVar19,fVar19,uVar26);
                if (0.0001 < fVar27) {
                  uVar9 = *(uint *)(param_2 + 4);
                  uVar11 = (ulong)uVar9;
                  pfVar17 = *(float **)(param_2 + 0x10);
                  fVar27 = 1.0 / SQRT(fVar27);
                  fVar25 = fVar27 * fVar25;
                  fVar22 = fVar27 * fVar22;
                  fVar27 = fVar27 * fVar19;
                  if ((int)uVar9 < 1) {
LAB_00fa6d3c:
                    uVar6 = *(uint *)(param_1 + 4);
                    fVar19 = pfVar3[2];
                    fVar28 = (float)NEON_fmadd(pfVar3[1],fVar22,*pfVar3 * fVar25);
                    if ((int)uVar6 < 1) {
LAB_00fa6dc4:
                      if (uVar9 == *(uint *)(param_2 + 8)) {
                        uVar6 = uVar9 << 1;
                        if (uVar9 == 0) {
                          uVar6 = 1;
                        }
                        if ((int)uVar9 < (int)uVar6) {
                          if (uVar6 == 0) {
                            pfVar17 = (float *)0x0;
                          }
                          else {
                            gNumAlignedAllocs = gNumAlignedAllocs + 1;
                            pfVar17 = (float *)(*(code *)PTR_FUN_01048e38)
                                                         (-(ulong)(uVar6 >> 0x1f) &
                                                          0xfffffff000000000 | (ulong)uVar6 << 4,
                                                          0x10);
                            uVar9 = *(uint *)(param_2 + 4);
                            uVar11 = (ulong)uVar9;
                          }
                          if (0 < (int)uVar9) {
                            lVar10 = 0;
                            do {
                              uVar21 = *(undefined8 *)(*(long *)(param_2 + 0x10) + lVar10);
                              ((undefined8 *)((long)pfVar17 + lVar10))[1] =
                                   ((undefined8 *)(*(long *)(param_2 + 0x10) + lVar10))[1];
                              *(undefined8 *)((long)pfVar17 + lVar10) = uVar21;
                              lVar10 = lVar10 + 0x10;
                            } while (uVar11 * 0x10 - lVar10 != 0);
                          }
                          if ((*(long *)(param_2 + 0x10) != 0) &&
                             (param_2[0x18] != (btAlignedObjectArray)0x0)) {
                            gNumAlignedFree = gNumAlignedFree + 1;
                            (*(code *)PTR_FUN_01048e40)();
                          }
                          *(float **)(param_2 + 0x10) = pfVar17;
                          *(uint *)(param_2 + 8) = uVar6;
                          param_2[0x18] = (btAlignedObjectArray)0x1;
                          uVar9 = *(uint *)(param_2 + 4);
                        }
                      }
                      fVar19 = (float)NEON_fnmadd(fVar19,fVar27,-fVar28);
                      pfVar17 = pfVar17 + (long)(int)uVar9 * 4;
                      *pfVar17 = fVar25;
                      pfVar17[1] = fVar22;
                      pfVar17[2] = fVar27;
                      pfVar17[3] = fVar19;
                      *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
                    }
                    else {
                      fVar20 = (float)NEON_fmadd(fVar19,fVar27,fVar28);
                      puVar16 = *(undefined4 **)(param_1 + 0x10);
                      uVar26 = NEON_fmadd(*puVar16,fVar25,-0.01 - fVar20);
                      uVar26 = NEON_fmadd(puVar16[1],fVar22,uVar26);
                      fVar23 = (float)NEON_fmadd(puVar16[2],fVar27,uVar26);
                      if (fVar23 <= 0.0) {
                        uVar12 = 0;
                        puVar16 = puVar16 + 6;
                        do {
                          if ((ulong)uVar6 - 1 == uVar12) goto LAB_00fa6dc4;
                          uVar12 = uVar12 + 1;
                          uVar26 = NEON_fmadd(puVar16[-2],fVar25,-0.01 - fVar20);
                          uVar26 = NEON_fmadd(puVar16[-1],fVar22,uVar26);
                          fVar23 = (float)NEON_fmadd(*puVar16,fVar27,uVar26);
                          puVar16 = puVar16 + 4;
                        } while (fVar23 <= 0.0);
                        if (uVar6 <= uVar12) goto LAB_00fa6dc4;
                      }
                    }
                  }
                  else {
                    uVar26 = NEON_fmadd(pfVar17[1],fVar22,*pfVar17 * fVar25);
                    fVar19 = (float)NEON_fmadd(pfVar17[2],fVar27,uVar26);
                    if (fVar19 <= 0.999) {
                      uVar12 = 0;
                      pfVar14 = pfVar17 + 6;
                      do {
                        if (uVar11 - 1 == uVar12) goto LAB_00fa6d3c;
                        uVar12 = uVar12 + 1;
                        uVar26 = NEON_fmadd(pfVar14[-1],fVar22,pfVar14[-2] * fVar25);
                        fVar19 = (float)NEON_fmadd(*pfVar14,fVar27,uVar26);
                        pfVar14 = pfVar14 + 4;
                      } while (fVar19 <= 0.999);
                      if (uVar11 <= uVar12) goto LAB_00fa6d3c;
                    }
                  }
                }
                fVar19 = -1.0;
                bVar8 = false;
              } while (bVar7);
              lVar15 = lVar15 + 1;
              if ((int)uVar5 <= (int)lVar15) break;
              lVar10 = *(long *)(param_1 + 0x10);
            } while( true );
          }
          if (uVar2 == uVar13) break;
          local_d0 = local_d0 + 1;
          lVar10 = *(long *)(param_1 + 0x10);
          uVar11 = uVar2;
        } while( true );
      }
      local_e0 = local_e0 + 1;
      local_e8 = local_e8 + 1;
      uVar11 = uVar1;
    } while (uVar1 != uVar13);
  }
  return;
}


