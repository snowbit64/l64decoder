// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rayTest
// Entry Point: 00f4b118
// Size: 1140 bytes
// Signature: undefined __cdecl rayTest(btDbvtNode * param_1, btVector3 * param_2, btVector3 * param_3, ICollide * param_4)


/* WARNING: Removing unreachable block (ram,0x00f4b514) */
/* btDbvt::rayTest(btDbvtNode const*, btVector3 const&, btVector3 const&, btDbvt::ICollide&) */

void btDbvt::rayTest(btDbvtNode *param_1,btVector3 *param_2,btVector3 *param_3,ICollide *param_4)

{
  uint uVar1;
  btDbvtNode **ppbVar2;
  uint uVar3;
  btDbvtNode **ppbVar4;
  btDbvtNode **ppbVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  btDbvtNode **ppbVar9;
  btDbvtNode **ppbVar10;
  int iVar11;
  long *plVar12;
  int iVar13;
  ulong uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  btDbvtNode *pbVar18;
  btDbvtNode *pbVar19;
  btDbvtNode *pbVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  long local_d0 [4];
  long local_b0;
  
  lVar7 = tpidr_el0;
  local_b0 = *(long *)(lVar7 + 0x28);
  if (param_1 == (btDbvtNode *)0x0) {
    lVar7 = *(long *)(lVar7 + 0x28);
  }
  else {
    fVar24 = 1e+18;
    fVar23 = *(float *)param_3 - *(float *)param_2;
    fVar25 = *(float *)(param_3 + 4) - *(float *)(param_2 + 4);
    fVar21 = *(float *)(param_3 + 8) - *(float *)(param_2 + 8);
    uVar15 = NEON_fmadd(fVar25,fVar25,fVar23 * fVar23);
    fVar16 = (float)NEON_fmadd(fVar21,fVar21,uVar15);
    fVar17 = 1.0 / SQRT(fVar16);
    fVar27 = fVar17 * fVar23;
    fVar26 = fVar17 * fVar25;
    fVar17 = fVar17 * fVar21;
    fVar16 = fVar24;
    if (fVar27 != 0.0) {
      fVar16 = 1.0 / fVar27;
    }
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    fVar22 = fVar24;
    if (fVar17 != 0.0) {
      fVar22 = 1.0 / fVar17;
    }
    ppbVar4 = (btDbvtNode **)(*(code *)PTR_FUN_01048e38)(0x400,0x10);
    memset(ppbVar4 + 1,0,0x3f8);
    uVar14 = 1;
    if (fVar26 != 0.0) {
      fVar24 = 1.0 / fVar26;
    }
    uVar3 = 0x80;
    uVar15 = NEON_fmadd(fVar26,fVar25,fVar27 * fVar23);
    fVar17 = (float)NEON_fmadd(fVar17,fVar21,uVar15);
    iVar11 = 0x7e;
    *ppbVar4 = param_1;
    uVar8 = 0x80;
    do {
      iVar13 = (int)uVar14;
      uVar14 = (long)iVar13 - 1;
      plVar12 = (long *)ppbVar4[uVar14];
      local_d0[1] = plVar12[1];
      local_d0[0] = *plVar12;
      local_d0[3] = plVar12[3];
      local_d0[2] = plVar12[2];
      fVar23 = (*(float *)(local_d0 + (ulong)(fVar16 < 0.0) * 2) - *(float *)param_2) * fVar16;
      fVar25 = (*(float *)((ulong)(local_d0 + (ulong)(fVar24 >= 0.0) * 2) | 4) -
               *(float *)(param_2 + 4)) * fVar24;
      fVar26 = (*(float *)(local_d0 + (ulong)(fVar16 >= 0.0) * 2) - *(float *)param_2) * fVar16;
      fVar21 = (*(float *)((ulong)(local_d0 + (ulong)(fVar24 < 0.0) * 2) | 4) -
               *(float *)(param_2 + 4)) * fVar24;
      if (fVar23 <= fVar25 && fVar21 == fVar26 || fVar23 <= fVar25 && fVar21 < fVar26) {
        if (fVar21 <= fVar23) {
          fVar21 = fVar23;
        }
        fVar23 = (*(float *)(local_d0 + (ulong)(fVar22 >= 0.0) * 2 + 1) - *(float *)(param_2 + 8)) *
                 fVar22;
        if (fVar21 <= fVar23) {
          fVar26 = (float)NEON_fminnm(fVar25,fVar26);
          fVar25 = (*(float *)(local_d0 + (ulong)(fVar22 < 0.0) * 2 + 1) - *(float *)(param_2 + 8))
                   * fVar22;
          if (fVar25 <= fVar26) {
            if (fVar25 <= fVar21) {
              fVar25 = fVar21;
            }
            if ((fVar25 < fVar17) && (fVar21 = (float)NEON_fminnm(fVar23,fVar26), 0.0 < fVar21)) {
              if (plVar12[6] == 0) {
                uVar6 = (**(code **)(*(long *)param_4 + 0x18))(param_4,plVar12);
                if ((uVar6 & 1) == 0) break;
              }
              else {
                if (iVar11 < (int)uVar14) {
                  uVar1 = uVar8 * 2;
                  ppbVar5 = ppbVar4;
                  if (0 < (int)uVar8 != SBORROW4(uVar8,uVar1)) {
                    if ((int)(uVar3 + uVar8 * -2) < 0 != SBORROW4(uVar3,uVar1)) {
                      if (uVar8 == 0) {
                        ppbVar5 = (btDbvtNode **)0x0;
                      }
                      else {
                        gNumAlignedAllocs = gNumAlignedAllocs + 1;
                        ppbVar5 = (btDbvtNode **)
                                  (*(code *)PTR_FUN_01048e38)
                                            (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 |
                                             (ulong)uVar1 << 3,0x10);
                        if (0 < (int)uVar8) {
                          uVar6 = (ulong)uVar8;
                          ppbVar9 = ppbVar4;
                          ppbVar10 = ppbVar5;
                          if ((uVar8 < 4) ||
                             ((ppbVar5 < ppbVar4 + uVar6 && (ppbVar4 < ppbVar5 + uVar6)))) {
                            do {
                              uVar6 = uVar6 - 1;
                              *ppbVar10 = *ppbVar9;
                              ppbVar9 = ppbVar9 + 1;
                              ppbVar10 = ppbVar10 + 1;
                            } while (uVar6 != 0);
                          }
                          else {
                            ppbVar9 = ppbVar4 + 2;
                            ppbVar10 = ppbVar5 + 2;
                            do {
                              ppbVar2 = ppbVar9 + -1;
                              pbVar18 = ppbVar9[-2];
                              pbVar20 = ppbVar9[1];
                              pbVar19 = *ppbVar9;
                              uVar6 = uVar6 - 4;
                              ppbVar9 = ppbVar9 + 4;
                              ppbVar10[-1] = *ppbVar2;
                              ppbVar10[-2] = pbVar18;
                              ppbVar10[1] = pbVar20;
                              *ppbVar10 = pbVar19;
                              ppbVar10 = ppbVar10 + 4;
                            } while (uVar6 != 0);
                          }
                        }
                      }
                      gNumAlignedFree = gNumAlignedFree + 1;
                      (*(code *)PTR_FUN_01048e40)(ppbVar4);
                      uVar3 = uVar1;
                    }
                    memset(ppbVar5 + (int)uVar8,0,((long)(int)uVar1 - (long)(int)uVar8) * 8);
                  }
                  iVar11 = uVar1 - 2;
                  ppbVar4 = ppbVar5;
                  uVar8 = uVar1;
                }
                ppbVar4[uVar14] = (btDbvtNode *)plVar12[5];
                uVar14 = (ulong)(iVar13 + 1);
                ppbVar4[iVar13] = (btDbvtNode *)plVar12[6];
              }
            }
          }
        }
      }
    } while ((int)uVar14 != 0);
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)(ppbVar4);
    lVar7 = *(long *)(lVar7 + 0x28);
  }
  if (lVar7 != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


