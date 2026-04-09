// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: collideTT
// Entry Point: 00f8bd38
// Size: 788 bytes
// Signature: undefined __thiscall collideTT(btDbvt * this, btDbvtNode * param_1, btDbvtNode * param_2, ICollide * param_3)


/* btDbvt::collideTT(btDbvtNode const*, btDbvtNode const*, btDbvt::ICollide&) */

void __thiscall
btDbvt::collideTT(btDbvt *this,btDbvtNode *param_1,btDbvtNode *param_2,ICollide *param_3)

{
  float *pfVar1;
  uint uVar2;
  btDbvtNode **ppbVar3;
  btDbvtNode **ppbVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  btDbvtNode **ppbVar10;
  ulong uVar11;
  btDbvtNode **ppbVar12;
  btDbvtNode *pbVar13;
  ulong uVar14;
  float *pfVar15;
  float *pfVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  ulong uVar22;
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar8 = tpidr_el0;
  lVar6 = *(long *)(lVar8 + 0x28);
  if ((param_1 == (btDbvtNode *)0x0) || (param_2 == (btDbvtNode *)0x0)) {
    lVar8 = *(long *)(lVar8 + 0x28);
  }
  else {
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    ppbVar3 = (btDbvtNode **)(*(code *)PTR_FUN_01048e38)(0x800,0x10);
    uVar19 = 1;
    iVar21 = 0x7c;
    uVar22 = 0x80;
    *ppbVar3 = param_1;
    ppbVar3[1] = param_2;
    uVar11 = 0x80;
    do {
      iVar18 = (int)uVar19;
      lVar17 = (long)iVar18;
      uVar20 = lVar17 - 1;
      pfVar1 = (float *)ppbVar3[uVar20 * 2];
      pfVar16 = (float *)(ppbVar3 + uVar20 * 2)[1];
      ppbVar4 = ppbVar3;
      uVar14 = uVar11;
      if (iVar21 < (int)uVar20) {
        iVar21 = (int)uVar11;
        uVar2 = iVar21 * 2;
        uVar14 = (ulong)uVar2;
        if (0 < iVar21 != SBORROW4(iVar21,uVar2)) {
          if ((int)uVar22 < (int)uVar2) {
            if (iVar21 == 0) {
              ppbVar4 = (btDbvtNode **)0x0;
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              ppbVar4 = (btDbvtNode **)
                        (*(code *)PTR_FUN_01048e38)
                                  (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4,0x10);
              uVar22 = uVar11;
              ppbVar10 = ppbVar4;
              ppbVar12 = ppbVar3;
              if (0 < iVar21) {
                do {
                  pbVar13 = *ppbVar12;
                  uVar22 = uVar22 - 1;
                  ppbVar10[1] = ppbVar12[1];
                  *ppbVar10 = pbVar13;
                  ppbVar10 = ppbVar10 + 2;
                  ppbVar12 = ppbVar12 + 2;
                } while (uVar22 != 0);
              }
            }
            gNumAlignedFree = gNumAlignedFree + 1;
            (*(code *)PTR_FUN_01048e40)(ppbVar3);
            uVar22 = uVar14;
          }
          lVar7 = (long)(int)uVar2 - (long)iVar21;
          uVar11 = -(uVar11 >> 0x1f) & 0xfffffff000000000 | uVar11 << 4;
          do {
            lVar7 = lVar7 + -1;
            ((undefined8 *)((long)ppbVar4 + uVar11))[1] = uStack_70;
            *(undefined8 *)((long)ppbVar4 + uVar11) = local_78;
            uVar11 = uVar11 + 0x10;
          } while (lVar7 != 0);
        }
        iVar21 = uVar2 - 4;
      }
      if (pfVar1 == pfVar16) {
        if (*(long *)(pfVar1 + 0xc) != 0) {
          pbVar13 = *(btDbvtNode **)(pfVar1 + 10);
          ppbVar4[uVar20 * 2] = pbVar13;
          (ppbVar4 + uVar20 * 2)[1] = pbVar13;
          pbVar13 = *(btDbvtNode **)(pfVar1 + 0xc);
          ppbVar4[lVar17 * 2] = pbVar13;
          (ppbVar4 + lVar17 * 2)[1] = pbVar13;
          iVar9 = iVar18 + 1;
          pfVar15 = *(float **)(pfVar1 + 10);
          pfVar16 = *(float **)(pfVar1 + 0xc);
          iVar5 = 2;
          goto LAB_00f8bdd8;
        }
      }
      else if ((((*pfVar1 <= pfVar16[4]) && (*pfVar16 <= pfVar1[4])) && (pfVar1[1] <= pfVar16[5]))
              && (((pfVar16[1] <= pfVar1[5] && (pfVar1[2] <= pfVar16[6])) &&
                  (pfVar16[2] <= pfVar1[6])))) {
        if (*(long *)(pfVar1 + 0xc) == 0) {
          if (*(long *)(pfVar16 + 0xc) == 0) {
            uVar11 = (**(code **)(*(long *)param_3 + 0x10))(param_3,pfVar1,pfVar16);
            if ((uVar11 & 1) != 0) goto LAB_00f8bde4;
            break;
          }
          pfVar15 = *(float **)(pfVar16 + 10);
          ppbVar4[uVar20 * 2] = (btDbvtNode *)pfVar1;
          (ppbVar4 + uVar20 * 2)[1] = (btDbvtNode *)pfVar15;
          pfVar16 = *(float **)(pfVar16 + 0xc);
          pfVar15 = pfVar1;
        }
        else {
          if (*(long *)(pfVar16 + 0xc) != 0) {
            pbVar13 = *(btDbvtNode **)(pfVar16 + 10);
            ppbVar4[uVar20 * 2] = *(btDbvtNode **)(pfVar1 + 10);
            (ppbVar4 + uVar20 * 2)[1] = pbVar13;
            ppbVar3 = ppbVar4 + lVar17 * 2;
            pbVar13 = *(btDbvtNode **)(pfVar16 + 10);
            *ppbVar3 = *(btDbvtNode **)(pfVar1 + 0xc);
            ppbVar3[1] = pbVar13;
            pbVar13 = *(btDbvtNode **)(pfVar16 + 0xc);
            ppbVar3[2] = *(btDbvtNode **)(pfVar1 + 10);
            ppbVar3[3] = pbVar13;
            pfVar15 = *(float **)(pfVar1 + 0xc);
            iVar5 = 3;
            pfVar16 = *(float **)(pfVar16 + 0xc);
            iVar9 = iVar18 + 2;
            goto LAB_00f8bdd8;
          }
          ppbVar4[uVar20 * 2] = *(btDbvtNode **)(pfVar1 + 10);
          (ppbVar4 + uVar20 * 2)[1] = (btDbvtNode *)pfVar16;
          pfVar15 = *(float **)(pfVar1 + 0xc);
        }
        iVar5 = 1;
        iVar9 = iVar18;
LAB_00f8bdd8:
        uVar20 = (ulong)(uint)(iVar18 + iVar5);
        ppbVar4[(long)iVar9 * 2] = (btDbvtNode *)pfVar15;
        (ppbVar4 + (long)iVar9 * 2)[1] = (btDbvtNode *)pfVar16;
      }
LAB_00f8bde4:
      uVar19 = uVar20 & 0xffffffff;
      ppbVar3 = ppbVar4;
      uVar11 = uVar14;
    } while ((int)uVar20 != 0);
    gNumAlignedFree = gNumAlignedFree + 1;
    this = (btDbvt *)(*(code *)PTR_FUN_01048e40)(ppbVar4);
    lVar8 = *(long *)(lVar8 + 0x28);
  }
  if (lVar8 != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


