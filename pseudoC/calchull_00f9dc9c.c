// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calchull
// Entry Point: 00f9dc9c
// Size: 1796 bytes
// Signature: undefined __thiscall calchull(HullLibrary * this, btVector3 * param_1, int param_2, btAlignedObjectArray * param_3, int * param_4, int param_5)


/* HullLibrary::calchull(btVector3*, int, btAlignedObjectArray<unsigned int>&, int&, int) */

undefined8 __thiscall
HullLibrary::calchull
          (HullLibrary *this,btVector3 *param_1,int param_2,btAlignedObjectArray *param_3,
          int *param_4,int param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined4 *puVar13;
  ulong uVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined4 *puVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  uVar4 = calchullgen(this,param_1,param_2,param_5);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  iVar7 = *(int *)(this + 4);
  if (iVar7 < 1) {
    uVar23 = 0;
    uVar5 = 0;
  }
  else {
    lVar24 = 0;
    uVar20 = 0;
    uVar23 = 0;
    uVar6 = 0;
    do {
      puVar19 = *(undefined4 **)(*(long *)(this + 0x10) + lVar24 * 8);
      uVar5 = uVar6;
      if (puVar19 != (undefined4 *)0x0) {
        if (uVar23 == uVar20) {
          uVar1 = uVar20 << 1;
          if (uVar20 == 0) {
            uVar1 = 1;
          }
          if ((int)uVar20 < (int)uVar1) {
            if (uVar1 == 0) {
              uVar5 = 0;
              if (0 < (int)uVar20) goto LAB_00f9ddac;
LAB_00f9de10:
              uVar20 = uVar1;
              if (uVar6 == 0) goto LAB_00f9de70;
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              uVar5 = (*(code *)PTR_FUN_01048e38)((long)(int)uVar1 << 2,0x10);
              if ((int)uVar20 < 1) goto LAB_00f9de10;
LAB_00f9ddac:
              uVar8 = (ulong)uVar20;
              if ((uVar20 < 8) || ((uVar5 < uVar6 + uVar8 * 4 && (uVar6 < uVar5 + uVar8 * 4)))) {
                uVar12 = 0;
LAB_00f9ddd8:
                lVar9 = uVar8 - uVar12;
                puVar13 = (undefined4 *)(uVar6 + uVar12 * 4);
                puVar15 = (undefined4 *)(uVar5 + uVar12 * 4);
                do {
                  lVar9 = lVar9 + -1;
                  *puVar15 = *puVar13;
                  puVar13 = puVar13 + 1;
                  puVar15 = puVar15 + 1;
                } while (lVar9 != 0);
              }
              else {
                uVar12 = uVar8 & 0xfffffff8;
                puVar16 = (undefined8 *)(uVar6 + 0x10);
                puVar17 = (undefined8 *)(uVar5 + 0x10);
                uVar14 = uVar12;
                do {
                  puVar2 = puVar16 + -1;
                  uVar4 = puVar16[-2];
                  uVar26 = puVar16[1];
                  uVar25 = *puVar16;
                  uVar14 = uVar14 - 8;
                  puVar16 = puVar16 + 4;
                  puVar17[-1] = *puVar2;
                  puVar17[-2] = uVar4;
                  puVar17[1] = uVar26;
                  *puVar17 = uVar25;
                  puVar17 = puVar17 + 4;
                } while (uVar14 != 0);
                if (uVar12 != uVar8) goto LAB_00f9ddd8;
              }
            }
            gNumAlignedFree = gNumAlignedFree + 1;
            (*(code *)PTR_FUN_01048e40)(uVar6);
            uVar20 = uVar1;
          }
        }
LAB_00f9de70:
        lVar10 = *(long *)(this + 0x10);
        lVar21 = (long)(int)uVar23;
        lVar22 = *(long *)(lVar10 + lVar24 * 8);
        lVar9 = lVar21 + 1;
        *(undefined4 *)(uVar5 + lVar21 * 4) = *puVar19;
        lVar11 = lVar22;
        if (uVar20 == (uint)lVar9) {
          uVar1 = uVar20 << 1;
          if (lVar9 == 0) {
            uVar1 = 1;
          }
          if (lVar9 < (int)uVar1) {
            if (uVar1 == 0) {
              uVar6 = 0;
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              uVar6 = (*(code *)PTR_FUN_01048e38)((long)(int)uVar1 << 2,0x10);
            }
            if (-1 < (int)uVar23) {
              uVar8 = (ulong)uVar20;
              if ((uVar20 < 8) || ((uVar6 < uVar5 + uVar8 * 4 && (uVar5 < uVar6 + uVar8 * 4)))) {
                uVar12 = 0;
              }
              else {
                uVar12 = uVar8 & 0xfffffff8;
                puVar16 = (undefined8 *)(uVar5 + 0x10);
                puVar17 = (undefined8 *)(uVar6 + 0x10);
                uVar14 = uVar12;
                do {
                  puVar2 = puVar16 + -1;
                  uVar4 = puVar16[-2];
                  uVar26 = puVar16[1];
                  uVar25 = *puVar16;
                  uVar14 = uVar14 - 8;
                  puVar16 = puVar16 + 4;
                  puVar17[-1] = *puVar2;
                  puVar17[-2] = uVar4;
                  puVar17[1] = uVar26;
                  *puVar17 = uVar25;
                  puVar17 = puVar17 + 4;
                } while (uVar14 != 0);
                if (uVar12 == uVar8) goto LAB_00f9df44;
              }
              lVar11 = uVar8 - uVar12;
              puVar19 = (undefined4 *)(uVar5 + uVar12 * 4);
              puVar13 = (undefined4 *)(uVar6 + uVar12 * 4);
              do {
                lVar11 = lVar11 + -1;
                *puVar13 = *puVar19;
                puVar19 = puVar19 + 1;
                puVar13 = puVar13 + 1;
              } while (lVar11 != 0);
            }
LAB_00f9df44:
            gNumAlignedFree = gNumAlignedFree + 1;
            (*(code *)PTR_FUN_01048e40)(uVar5);
            lVar10 = *(long *)(this + 0x10);
            lVar11 = *(long *)(lVar10 + lVar24 * 8);
            uVar5 = uVar6;
            uVar20 = uVar1;
          }
        }
        lVar21 = lVar21 + 2;
        *(undefined4 *)(uVar5 + lVar9 * 4) = *(undefined4 *)(lVar22 + 4);
        lVar9 = lVar11;
        if (uVar20 == (uint)lVar21) {
          uVar1 = uVar20 << 1;
          if (lVar21 == 0) {
            uVar1 = 1;
          }
          if (lVar21 < (int)uVar1) {
            if (uVar1 == 0) {
              uVar6 = 0;
              if ((int)(uVar23 + 1) < 0 == SCARRY4(uVar23,1)) goto LAB_00f9e008;
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              uVar6 = (*(code *)PTR_FUN_01048e38)((long)(int)uVar1 << 2,0x10);
              if ((int)(uVar23 + 1) < 0 == SCARRY4(uVar23,1)) {
LAB_00f9e008:
                uVar8 = (ulong)uVar20;
                if ((uVar20 < 8) || ((uVar6 < uVar5 + uVar8 * 4 && (uVar5 < uVar6 + uVar8 * 4)))) {
                  uVar12 = 0;
                }
                else {
                  uVar12 = uVar8 & 0xfffffff8;
                  puVar16 = (undefined8 *)(uVar5 + 0x10);
                  puVar17 = (undefined8 *)(uVar6 + 0x10);
                  uVar14 = uVar12;
                  do {
                    puVar2 = puVar16 + -1;
                    uVar4 = puVar16[-2];
                    uVar26 = puVar16[1];
                    uVar25 = *puVar16;
                    uVar14 = uVar14 - 8;
                    puVar16 = puVar16 + 4;
                    puVar17[-1] = *puVar2;
                    puVar17[-2] = uVar4;
                    puVar17[1] = uVar26;
                    *puVar17 = uVar25;
                    puVar17 = puVar17 + 4;
                  } while (uVar14 != 0);
                  if (uVar12 == uVar8) goto LAB_00f9e054;
                }
                lVar9 = uVar8 - uVar12;
                puVar19 = (undefined4 *)(uVar5 + uVar12 * 4);
                puVar13 = (undefined4 *)(uVar6 + uVar12 * 4);
                do {
                  lVar9 = lVar9 + -1;
                  *puVar13 = *puVar19;
                  puVar19 = puVar19 + 1;
                  puVar13 = puVar13 + 1;
                } while (lVar9 != 0);
              }
            }
LAB_00f9e054:
            uVar5 = uVar6;
            gNumAlignedFree = gNumAlignedFree + 1;
            (*(code *)PTR_FUN_01048e40)();
            lVar10 = *(long *)(this + 0x10);
            lVar9 = *(long *)(lVar10 + lVar24 * 8);
            uVar20 = uVar1;
          }
        }
        uVar23 = uVar23 + 3;
        *(undefined4 *)(uVar5 + lVar21 * 4) = *(undefined4 *)(lVar11 + 8);
        *(undefined8 *)(lVar10 + (long)*(int *)(lVar9 + 0x18) * 8) = 0;
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
        iVar7 = *(int *)(this + 4);
      }
      lVar24 = lVar24 + 1;
      uVar6 = uVar5;
    } while (lVar24 < iVar7);
  }
  *param_4 = (int)uVar23 / 3;
  uVar20 = *(uint *)(param_3 + 4);
  if ((int)uVar20 < (int)uVar23) {
    lVar24 = (long)(int)uVar20;
    if (*(int *)(param_3 + 8) < (int)uVar23) {
      if (uVar23 == 0) {
        uVar6 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        uVar6 = (*(code *)PTR_FUN_01048e38)
                          (-(ulong)(uVar23 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar23 << 2,0x10);
        uVar20 = *(uint *)(param_3 + 4);
      }
      uVar8 = *(ulong *)(param_3 + 0x10);
      if ((int)uVar20 < 1) {
        if (uVar8 != 0) goto LAB_00f9e20c;
      }
      else {
        uVar12 = (ulong)uVar20;
        if ((uVar20 < 8) || ((uVar6 < uVar8 + uVar12 * 4 && (uVar8 < uVar6 + uVar12 * 4)))) {
          uVar14 = 0;
        }
        else {
          uVar14 = uVar12 & 0xfffffff8;
          puVar16 = (undefined8 *)(uVar8 + 0x10);
          puVar17 = (undefined8 *)(uVar6 + 0x10);
          uVar18 = uVar14;
          do {
            puVar2 = puVar16 + -1;
            uVar4 = puVar16[-2];
            uVar26 = puVar16[1];
            uVar25 = *puVar16;
            uVar18 = uVar18 - 8;
            puVar16 = puVar16 + 4;
            puVar17[-1] = *puVar2;
            puVar17[-2] = uVar4;
            puVar17[1] = uVar26;
            *puVar17 = uVar25;
            puVar17 = puVar17 + 4;
          } while (uVar18 != 0);
          if (uVar14 == uVar12) goto LAB_00f9e20c;
        }
        lVar9 = uVar12 - uVar14;
        puVar19 = (undefined4 *)(uVar8 + uVar14 * 4);
        puVar13 = (undefined4 *)(uVar6 + uVar14 * 4);
        do {
          lVar9 = lVar9 + -1;
          *puVar13 = *puVar19;
          puVar19 = puVar19 + 1;
          puVar13 = puVar13 + 1;
        } while (lVar9 != 0);
LAB_00f9e20c:
        if (param_3[0x18] != (btAlignedObjectArray)0x0) {
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)PTR_FUN_01048e40)();
        }
      }
      *(ulong *)(param_3 + 0x10) = uVar6;
      *(uint *)(param_3 + 8) = uVar23;
      param_3[0x18] = (btAlignedObjectArray)0x1;
    }
    else {
      uVar6 = *(ulong *)(param_3 + 0x10);
    }
    memset((void *)(uVar6 + lVar24 * 4),0,((int)uVar23 - lVar24) * 4);
  }
  *(uint *)(param_3 + 4) = uVar23;
  if (0 < (int)uVar23) {
    uVar6 = *(ulong *)(param_3 + 0x10);
    uVar8 = (ulong)uVar23;
    if ((uVar23 < 8) || ((uVar6 < uVar5 + uVar8 * 4 && (uVar5 < uVar6 + uVar8 * 4)))) {
      uVar12 = 0;
    }
    else {
      uVar12 = uVar8 & 0xfffffff8;
      puVar16 = (undefined8 *)(uVar6 + 0x10);
      puVar17 = (undefined8 *)(uVar5 + 0x10);
      uVar14 = uVar12;
      do {
        puVar2 = puVar17 + -1;
        uVar4 = puVar17[-2];
        uVar26 = puVar17[1];
        uVar25 = *puVar17;
        uVar14 = uVar14 - 8;
        puVar17 = puVar17 + 4;
        puVar16[-1] = *puVar2;
        puVar16[-2] = uVar4;
        puVar16[1] = uVar26;
        *puVar16 = uVar25;
        puVar16 = puVar16 + 4;
      } while (uVar14 != 0);
      if (uVar12 == uVar8) goto LAB_00f9e2bc;
    }
    lVar24 = uVar8 - uVar12;
    puVar19 = (undefined4 *)(uVar6 + uVar12 * 4);
    puVar13 = (undefined4 *)(uVar5 + uVar12 * 4);
    do {
      lVar24 = lVar24 + -1;
      *puVar19 = *puVar13;
      puVar19 = puVar19 + 1;
      puVar13 = puVar13 + 1;
    } while (lVar24 != 0);
  }
LAB_00f9e2bc:
  lVar24 = (long)*(int *)(this + 4);
  if (*(int *)(this + 4) < 0) {
    if (*(int *)(this + 8) < 0) {
      if ((*(long *)(this + 0x10) != 0) && (this[0x18] != (HullLibrary)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined4 *)(this + 8) = 0;
      this[0x18] = (HullLibrary)0x1;
    }
    do {
      *(undefined8 *)(*(long *)(this + 0x10) + lVar24 * 8) = 0;
      bVar3 = lVar24 != -1;
      lVar24 = lVar24 + 1;
    } while (bVar3);
  }
  *(undefined4 *)(this + 4) = 0;
  if (uVar5 != 0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)(uVar5);
  }
  return 1;
}


