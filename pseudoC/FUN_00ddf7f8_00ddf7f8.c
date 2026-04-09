// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00ddf7f8
// Entry Point: 00ddf7f8
// Size: 792 bytes
// Signature: undefined FUN_00ddf7f8(void)


int FUN_00ddf7f8(int param_1,long param_2,uint *param_3,uint *param_4)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  
  if (0 < param_1) {
    iVar8 = 0;
    do {
      iVar10 = iVar8 + 1;
      uVar15 = 0;
      if (iVar10 < param_1) {
        uVar15 = iVar8 + 1;
      }
      iVar12 = 0;
      if ((int)(uVar15 + 1) < param_1) {
        iVar12 = uVar15 + 1;
      }
      uVar7 = FUN_00de1c90(iVar8,iVar12,param_1,param_2,param_3);
      if ((uVar7 & 1) != 0) {
        param_3[uVar15] = param_3[uVar15] | 0x80000000;
      }
      iVar8 = iVar10;
    } while (param_1 != iVar10);
  }
  iVar8 = param_1;
  if (2 < param_1) {
    iVar8 = 3;
  }
  iVar8 = param_1 - iVar8;
  if (iVar8 != 0) {
    uVar21 = (ulong)param_1;
    uVar7 = 0;
    uVar13 = uVar21;
    uVar22 = uVar21;
    do {
      uVar22 = uVar22 - 1;
      iVar12 = -1;
      uVar20 = 0;
      iVar10 = -1;
      do {
        uVar16 = uVar20 + 1;
        uVar15 = (uint)uVar16;
        if ((long)uVar13 <= (long)uVar16) {
          uVar15 = 0;
        }
        iVar5 = iVar12;
        iVar9 = iVar10;
        if ((int)param_3[uVar15] < 0) {
          uVar17 = (ulong)(uVar15 + 1);
          if ((long)uVar13 <= (long)(int)(uVar15 + 1)) {
            uVar17 = 0;
          }
          piVar1 = (int *)(param_2 + ((ulong)(param_3[uVar20] << 2) & 0x3ffffffc) * 4);
          piVar2 = (int *)(param_2 + ((ulong)(param_3[uVar17] << 2) & 0x3ffffffc) * 4);
          iVar5 = *piVar2 - *piVar1;
          iVar9 = piVar2[2] - piVar1[2];
          iVar5 = iVar5 * iVar5 + iVar9 * iVar9;
          iVar9 = (int)uVar20;
          if (-1 < iVar12 && iVar12 <= iVar5) {
            iVar5 = iVar12;
            iVar9 = iVar10;
          }
        }
        iVar12 = iVar5;
        uVar20 = uVar16;
        iVar10 = iVar9;
      } while ((uVar13 & 0xffffffff) != uVar16);
      if (iVar9 == -1) {
        return -(int)uVar7;
      }
      uVar15 = iVar9 + 1;
      uVar4 = 0;
      if ((long)(int)uVar15 < (long)uVar13) {
        uVar4 = iVar9 + 1;
      }
      lVar14 = (long)(int)(uVar4 + 1);
      uVar20 = uVar13 - 1;
      *param_4 = param_3[iVar9] & 0xfffffff;
      if ((long)uVar13 <= lVar14) {
        lVar14 = 0;
      }
      lVar11 = (long)(int)uVar4;
      param_4[1] = param_3[(int)uVar4] & 0xfffffff;
      param_4[2] = param_3[lVar14] & 0xfffffff;
      uVar19 = (uint)uVar20;
      if (lVar11 < (long)uVar20) {
        uVar13 = (~uVar7 + uVar21) - lVar11;
        lVar14 = lVar11;
        if (uVar13 < 8) {
LAB_00ddfa94:
          do {
            puVar3 = param_3 + lVar14;
            lVar14 = lVar14 + 1;
            *puVar3 = puVar3[1];
          } while (lVar14 < (long)uVar20);
        }
        else {
          lVar14 = (uVar13 & 0xfffffffffffffff8) + lVar11;
          uVar16 = uVar22 - lVar11 & 0xfffffffffffffff8;
          puVar18 = (undefined8 *)(param_3 + lVar11 + 5);
          do {
            uVar16 = uVar16 - 8;
            *(undefined8 *)((long)puVar18 + -0xc) = puVar18[-1];
            *(undefined8 *)((long)puVar18 + -0x14) = puVar18[-2];
            *(undefined8 *)((long)puVar18 + 4) = puVar18[1];
            *(undefined8 *)((long)puVar18 + -4) = *puVar18;
            puVar18 = puVar18 + 4;
          } while (uVar16 != 0);
          if (uVar13 != (uVar13 & 0xfffffffffffffff8)) goto LAB_00ddfa94;
        }
        uVar6 = uVar15;
        if ((int)uVar4 < 1) {
          uVar6 = uVar4;
        }
        uVar13 = (ulong)uVar6;
        if ((int)uVar4 < 1) {
          uVar15 = uVar19;
        }
      }
      else {
        uVar13 = 0;
        uVar15 = uVar19;
      }
      uVar6 = uVar15 - 1;
      uVar4 = uVar6;
      if (uVar6 == 0 || (int)uVar15 < 1) {
        uVar4 = uVar19;
      }
      param_4 = param_4 + 3;
      uVar7 = uVar7 + 1;
      uVar16 = FUN_00de1c90(uVar4 - 1,uVar13,uVar20 & 0xffffffff,param_2,param_3);
      uVar17 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2;
      uVar4 = *(uint *)((long)param_3 + uVar17);
      uVar15 = uVar4 | 0x80000000;
      if ((uVar16 & 1) == 0) {
        uVar15 = uVar4 & 0xfffffff;
      }
      iVar10 = 0;
      if ((long)((int)uVar13 + 1) < (long)uVar20) {
        iVar10 = (int)uVar13 + 1;
      }
      *(uint *)((long)param_3 + uVar17) = uVar15;
      uVar16 = FUN_00de1c90(uVar6,iVar10,uVar20 & 0xffffffff,param_2,param_3);
      uVar13 = -(uVar13 >> 0x1f) & 0xfffffffc00000000 | uVar13 << 2;
      uVar4 = *(uint *)((long)param_3 + uVar13);
      uVar15 = uVar4 | 0x80000000;
      if ((uVar16 & 1) == 0) {
        uVar15 = uVar4 & 0xfffffff;
      }
      *(uint *)((long)param_3 + uVar13) = uVar15;
      uVar13 = uVar20;
    } while ((int)uVar7 != iVar8);
  }
  *param_4 = *param_3 & 0xfffffff;
  param_4[1] = param_3[1] & 0xfffffff;
  param_4[2] = param_3[2] & 0xfffffff;
  return iVar8 + 1;
}


