// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: collideTTpersistentStack
// Entry Point: 00f44fe8
// Size: 904 bytes
// Signature: undefined __thiscall collideTTpersistentStack(btDbvt * this, btDbvtNode * param_1, btDbvtNode * param_2, ICollide * param_3)


/* btDbvt::collideTTpersistentStack(btDbvtNode const*, btDbvtNode const*, btDbvt::ICollide&) */

void __thiscall
btDbvt::collideTTpersistentStack
          (btDbvt *this,btDbvtNode *param_1,btDbvtNode *param_2,ICollide *param_3)

{
  float **ppfVar1;
  undefined8 *puVar2;
  float *pfVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  btDbvtNode **ppbVar9;
  float *pfVar10;
  float *pfVar11;
  undefined8 uVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  
  if ((param_1 != (btDbvtNode *)0x0) && (param_2 != (btDbvtNode *)0x0)) {
    if ((*(int *)(this + 0x24) < 0x80) && (*(int *)(this + 0x28) < 0x80)) {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      lVar5 = (*(code *)PTR_FUN_01048e38)(0x800,0x10);
      uVar4 = *(uint *)(this + 0x24);
      if (0 < (int)uVar4) {
        lVar7 = 0;
        do {
          uVar12 = *(undefined8 *)(*(long *)(this + 0x30) + lVar7);
          ((undefined8 *)(lVar5 + lVar7))[1] = ((undefined8 *)(*(long *)(this + 0x30) + lVar7))[1];
          *(undefined8 *)(lVar5 + lVar7) = uVar12;
          lVar7 = lVar7 + 0x10;
        } while ((ulong)uVar4 * 0x10 - lVar7 != 0);
      }
      if ((*(long *)(this + 0x30) != 0) && (this[0x38] != (btDbvt)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(long *)(this + 0x30) = lVar5;
      this[0x38] = (btDbvt)0x1;
      *(undefined4 *)(this + 0x28) = 0x80;
    }
    ppbVar9 = *(btDbvtNode ***)(this + 0x30);
    iVar15 = 0x7c;
    uVar14 = 1;
    *(undefined4 *)(this + 0x24) = 0x80;
    *ppbVar9 = param_1;
    ppbVar9[1] = param_2;
    do {
      iVar13 = (int)uVar14;
      lVar5 = (long)iVar13;
      uVar14 = lVar5 - 1;
      ppfVar1 = (float **)(*(long *)(this + 0x30) + uVar14 * 0x10);
      pfVar3 = *ppfVar1;
      pfVar11 = ppfVar1[1];
      if (iVar15 < (int)uVar14) {
        iVar15 = *(int *)(this + 0x24);
        iVar16 = (int)((long)iVar15 << 1);
        if ((iVar15 < iVar16) && (*(int *)(this + 0x28) < iVar16)) {
          if (iVar15 == 0) {
            lVar7 = 0;
            lVar8 = *(long *)(this + 0x30);
          }
          else {
            gNumAlignedAllocs = gNumAlignedAllocs + 1;
            lVar7 = (*(code *)PTR_FUN_01048e38)((long)iVar15 << 5,0x10);
            uVar4 = *(uint *)(this + 0x24);
            if (0 < (int)uVar4) {
              lVar8 = 0;
              do {
                uVar12 = *(undefined8 *)(*(long *)(this + 0x30) + lVar8);
                ((undefined8 *)(lVar7 + lVar8))[1] =
                     ((undefined8 *)(*(long *)(this + 0x30) + lVar8))[1];
                *(undefined8 *)(lVar7 + lVar8) = uVar12;
                lVar8 = lVar8 + 0x10;
              } while ((ulong)uVar4 * 0x10 - lVar8 != 0);
            }
            lVar8 = *(long *)(this + 0x30);
          }
          if ((lVar8 != 0) && (this[0x38] != (btDbvt)0x0)) {
            gNumAlignedFree = gNumAlignedFree + 1;
            (*(code *)PTR_FUN_01048e40)();
          }
          this[0x38] = (btDbvt)0x1;
          *(long *)(this + 0x30) = lVar7;
          *(int *)(this + 0x28) = iVar16;
        }
        iVar15 = iVar16 + -4;
        *(int *)(this + 0x24) = iVar16;
      }
      if (pfVar3 == pfVar11) {
        if (*(long *)(pfVar3 + 0xc) != 0) {
          uVar12 = *(undefined8 *)(pfVar3 + 10);
          puVar2 = (undefined8 *)(*(long *)(this + 0x30) + uVar14 * 0x10);
          uVar14 = (ulong)(iVar13 + 2);
          *puVar2 = uVar12;
          puVar2[1] = uVar12;
          uVar12 = *(undefined8 *)(pfVar3 + 0xc);
          puVar2 = (undefined8 *)(*(long *)(this + 0x30) + lVar5 * 0x10);
          *puVar2 = uVar12;
          puVar2[1] = uVar12;
          lVar5 = lVar5 * 0x10 + *(long *)(this + 0x30);
          uVar12 = *(undefined8 *)(pfVar3 + 0xc);
          *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(pfVar3 + 10);
          *(undefined8 *)(lVar5 + 0x18) = uVar12;
        }
      }
      else if ((((*pfVar3 <= pfVar11[4]) && (*pfVar11 <= pfVar3[4])) && (pfVar3[1] <= pfVar11[5]))
              && (((pfVar11[1] <= pfVar3[5] && (pfVar3[2] <= pfVar11[6])) &&
                  (pfVar11[2] <= pfVar3[6])))) {
        if (*(long *)(pfVar3 + 0xc) == 0) {
          if (*(long *)(pfVar11 + 0xc) == 0) {
            uVar6 = (**(code **)(*(long *)param_3 + 0x10))(param_3,pfVar3,pfVar11);
            if ((uVar6 & 1) == 0) {
              return;
            }
          }
          else {
            pfVar10 = *(float **)(pfVar11 + 10);
            ppfVar1 = (float **)(*(long *)(this + 0x30) + uVar14 * 0x10);
            uVar14 = (ulong)(iVar13 + 1);
            *ppfVar1 = pfVar3;
            ppfVar1[1] = pfVar10;
            pfVar11 = *(float **)(pfVar11 + 0xc);
            ppfVar1 = (float **)(*(long *)(this + 0x30) + lVar5 * 0x10);
            *ppfVar1 = pfVar3;
            ppfVar1[1] = pfVar11;
          }
        }
        else if (*(long *)(pfVar11 + 0xc) == 0) {
          puVar2 = (undefined8 *)(*(long *)(this + 0x30) + uVar14 * 0x10);
          uVar14 = (ulong)(iVar13 + 1);
          *puVar2 = *(undefined8 *)(pfVar3 + 10);
          puVar2[1] = pfVar11;
          puVar2 = (undefined8 *)(*(long *)(this + 0x30) + lVar5 * 0x10);
          *puVar2 = *(undefined8 *)(pfVar3 + 0xc);
          puVar2[1] = pfVar11;
        }
        else {
          uVar12 = *(undefined8 *)(pfVar11 + 10);
          puVar2 = (undefined8 *)(*(long *)(this + 0x30) + uVar14 * 0x10);
          uVar14 = (ulong)(iVar13 + 3);
          *puVar2 = *(undefined8 *)(pfVar3 + 10);
          puVar2[1] = uVar12;
          lVar5 = lVar5 * 0x10;
          lVar7 = *(long *)(this + 0x30);
          uVar12 = *(undefined8 *)(pfVar11 + 10);
          *(undefined8 *)(lVar7 + lVar5) = *(undefined8 *)(pfVar3 + 0xc);
          ((undefined8 *)(lVar7 + lVar5))[1] = uVar12;
          lVar7 = *(long *)(this + 0x30);
          uVar12 = *(undefined8 *)(pfVar11 + 0xc);
          *(undefined8 *)(lVar5 + lVar7 + 0x10) = *(undefined8 *)(pfVar3 + 10);
          *(undefined8 *)(lVar5 + lVar7 + 0x18) = uVar12;
          lVar7 = *(long *)(this + 0x30);
          uVar12 = *(undefined8 *)(pfVar11 + 0xc);
          *(undefined8 *)(lVar5 + lVar7 + 0x20) = *(undefined8 *)(pfVar3 + 0xc);
          *(undefined8 *)(lVar5 + lVar7 + 0x28) = uVar12;
        }
      }
    } while ((int)uVar14 != 0);
  }
  return;
}


