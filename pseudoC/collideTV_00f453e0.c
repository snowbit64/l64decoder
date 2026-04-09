// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: collideTV
// Entry Point: 00f453e0
// Size: 880 bytes
// Signature: undefined __thiscall collideTV(btDbvt * this, btDbvtNode * param_1, btDbvtAabbMm * param_2, ICollide * param_3)


/* btDbvt::collideTV(btDbvtNode const*, btDbvtAabbMm const&, btDbvt::ICollide&) const */

void __thiscall
btDbvt::collideTV(btDbvt *this,btDbvtNode *param_1,btDbvtAabbMm *param_2,ICollide *param_3)

{
  uint uVar1;
  btDbvtNode **ppbVar2;
  btDbvtNode **ppbVar3;
  ulong uVar4;
  btDbvtNode **ppbVar5;
  long lVar6;
  ulong uVar7;
  btDbvtNode **ppbVar8;
  btDbvtNode **ppbVar9;
  ulong uVar10;
  float *pfVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  btDbvtNode *pbVar16;
  btDbvtNode *pbVar17;
  btDbvtNode *pbVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  if (param_1 == (btDbvtNode *)0x0) {
    return;
  }
  fVar19 = *(float *)param_2;
  fVar20 = *(float *)(param_2 + 4);
  fVar22 = *(float *)(param_2 + 0x10);
  fVar23 = *(float *)(param_2 + 0x14);
  fVar21 = *(float *)(param_2 + 8);
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  fVar24 = *(float *)(param_2 + 0x18);
  ppbVar3 = (btDbvtNode **)(*(code *)PTR_FUN_01048e38)(0x200,0x10);
  uVar14 = 0x40;
  *ppbVar3 = param_1;
  uVar4 = 1;
  do {
    uVar15 = (uint)uVar4;
    uVar12 = (ulong)(uVar15 - 1);
    pfVar11 = (float *)ppbVar3[uVar12];
    if (((((*pfVar11 <= fVar22) && (fVar19 <= pfVar11[4])) && (pfVar11[1] <= fVar23)) &&
        ((fVar20 <= pfVar11[5] && (pfVar11[2] <= fVar24)))) && (fVar21 <= pfVar11[6])) {
      if (*(long *)(pfVar11 + 0xc) == 0) {
        uVar4 = (**(code **)(*(long *)param_3 + 0x18))(param_3,pfVar11);
        if ((uVar4 & 1) == 0) break;
      }
      else {
        uVar13 = (uint)uVar14;
        if (uVar15 - 1 == uVar13) {
          uVar1 = uVar13 << 1;
          if (uVar13 == 0) {
            uVar1 = 1;
          }
          if ((int)uVar15 <= (int)uVar1) {
            if (uVar1 == 0) {
              ppbVar5 = (btDbvtNode **)0x0;
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              ppbVar5 = (btDbvtNode **)
                        (*(code *)PTR_FUN_01048e38)
                                  (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3,
                                   0x10);
            }
            if (uVar13 != 0) {
              if ((uVar13 < 4) || ((ppbVar5 < ppbVar3 + uVar14 && (ppbVar3 < ppbVar5 + uVar14)))) {
                uVar7 = 0;
              }
              else {
                uVar7 = uVar14 & 0xfffffffc;
                ppbVar8 = ppbVar3 + 2;
                ppbVar9 = ppbVar5 + 2;
                uVar10 = uVar7;
                do {
                  ppbVar2 = ppbVar8 + -1;
                  pbVar16 = ppbVar8[-2];
                  pbVar18 = ppbVar8[1];
                  pbVar17 = *ppbVar8;
                  uVar10 = uVar10 - 4;
                  ppbVar8 = ppbVar8 + 4;
                  ppbVar9[-1] = *ppbVar2;
                  ppbVar9[-2] = pbVar16;
                  ppbVar9[1] = pbVar18;
                  *ppbVar9 = pbVar17;
                  ppbVar9 = ppbVar9 + 4;
                } while (uVar10 != 0);
                if (uVar7 == uVar14) goto LAB_00f455d0;
              }
              lVar6 = uVar14 - uVar7;
              ppbVar8 = ppbVar3 + uVar7;
              ppbVar9 = ppbVar5 + uVar7;
              do {
                lVar6 = lVar6 + -1;
                *ppbVar9 = *ppbVar8;
                ppbVar8 = ppbVar8 + 1;
                ppbVar9 = ppbVar9 + 1;
              } while (lVar6 != 0);
            }
LAB_00f455d0:
            gNumAlignedFree = gNumAlignedFree + 1;
            (*(code *)PTR_FUN_01048e40)(ppbVar3);
            ppbVar3 = ppbVar5;
            uVar14 = (ulong)uVar1;
          }
        }
        ppbVar3[uVar12] = *(btDbvtNode **)(pfVar11 + 10);
        if (uVar15 == (uint)uVar14) {
          uVar13 = uVar15 * 2;
          uVar14 = uVar4;
          if (0 < (int)uVar15 != SBORROW4(uVar15,uVar13)) {
            gNumAlignedAllocs = gNumAlignedAllocs + 1;
            ppbVar5 = (btDbvtNode **)
                      (*(code *)PTR_FUN_01048e38)
                                (-(ulong)(uVar13 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar13 << 3,
                                 0x10);
            if (0 < (int)uVar15) {
              if ((uVar15 < 4) || ((ppbVar5 < ppbVar3 + uVar4 && (ppbVar3 < ppbVar5 + uVar4)))) {
                uVar14 = 0;
              }
              else {
                uVar14 = uVar4 & 0xfffffffc;
                ppbVar8 = ppbVar3 + 2;
                ppbVar9 = ppbVar5 + 2;
                uVar12 = uVar14;
                do {
                  ppbVar2 = ppbVar8 + -1;
                  pbVar16 = ppbVar8[-2];
                  pbVar18 = ppbVar8[1];
                  pbVar17 = *ppbVar8;
                  uVar12 = uVar12 - 4;
                  ppbVar8 = ppbVar8 + 4;
                  ppbVar9[-1] = *ppbVar2;
                  ppbVar9[-2] = pbVar16;
                  ppbVar9[1] = pbVar18;
                  *ppbVar9 = pbVar17;
                  ppbVar9 = ppbVar9 + 4;
                } while (uVar12 != 0);
                if (uVar14 == uVar4) goto LAB_00f45690;
              }
              lVar6 = uVar4 - uVar14;
              ppbVar3 = ppbVar3 + uVar14;
              ppbVar8 = ppbVar5 + uVar14;
              do {
                lVar6 = lVar6 + -1;
                *ppbVar8 = *ppbVar3;
                ppbVar3 = ppbVar3 + 1;
                ppbVar8 = ppbVar8 + 1;
              } while (lVar6 != 0);
            }
LAB_00f45690:
            gNumAlignedFree = gNumAlignedFree + 1;
            (*(code *)PTR_FUN_01048e40)();
            ppbVar3 = ppbVar5;
            uVar14 = (ulong)uVar13;
          }
        }
        uVar12 = (ulong)(uVar15 + 1);
        ppbVar3[(int)uVar15] = *(btDbvtNode **)(pfVar11 + 0xc);
      }
    }
    uVar4 = uVar12;
  } while (0 < (int)uVar12);
  gNumAlignedFree = gNumAlignedFree + 1;
                    /* WARNING: Could not recover jumptable at 0x00f4574c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_01048e40)(ppbVar3);
  return;
}


