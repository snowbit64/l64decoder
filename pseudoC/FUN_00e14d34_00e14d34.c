// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e14d34
// Entry Point: 00e14d34
// Size: 616 bytes
// Signature: undefined FUN_00e14d34(void)


undefined8 FUN_00e14d34(long param_1,long param_2,int *param_3,void *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  float *pfVar18;
  ulong uVar19;
  undefined8 *puVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  float fVar24;
  
  lVar16 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + 0x30) +
                    *(long *)(param_1 + 0x38) * 8);
  if (lVar16 < 0) {
    lVar16 = lVar16 + 1;
  }
  uVar17 = lVar16 >> 1;
  if (param_3 == (int *)0x0) {
    memset(param_4,0,-(uVar17 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar17 & 0xffffffff) << 2);
    return 0;
  }
  lVar16 = *(long *)(param_2 + 0x510);
  uVar5 = *(uint *)(param_2 + 0x504);
  iVar6 = *(int *)(lVar16 + 0x340);
  uVar22 = iVar6 * *param_3;
  if (0xfe < (int)uVar22) {
    uVar22 = 0xff;
  }
  uVar22 = uVar22 & ((int)uVar22 >> 0x1f ^ 0xffffffffU);
  uVar15 = (uint)uVar17;
  if ((int)uVar5 < 2) {
    uVar21 = 0;
    if ((int)uVar15 < 1) {
      return 1;
    }
  }
  else {
    uVar14 = 0;
    uVar21 = 0;
    uVar17 = 1;
    do {
      while( true ) {
        lVar11 = (long)*(int *)(param_2 + 0x104 + uVar17 * 4);
        if ((uint)param_3[lVar11] >> 0xf != 0) break;
        uVar7 = param_3[lVar11] * iVar6;
        uVar21 = *(uint *)(lVar16 + lVar11 * 4 + 0x344);
        if (0xfe < (int)uVar7) {
          uVar7 = 0xff;
        }
        uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
        iVar10 = uVar7 - uVar22;
        uVar12 = (uint)uVar14;
        iVar9 = uVar21 - uVar12;
        iVar1 = -iVar10;
        if (-1 < iVar10) {
          iVar1 = iVar10;
        }
        iVar8 = 0;
        if (iVar9 != 0) {
          iVar8 = iVar10 / iVar9;
        }
        iVar13 = iVar8 * iVar9;
        iVar2 = -iVar13;
        if (-1 < iVar13) {
          iVar2 = iVar13;
        }
        uVar3 = uVar21;
        if ((int)uVar15 <= (int)uVar21) {
          uVar3 = uVar15;
        }
        if ((int)uVar12 < (int)uVar3) {
          uVar14 = -(uVar14 >> 0x1f) & 0xfffffffc00000000 | uVar14 << 2;
          *(float *)((long)param_4 + uVar14) =
               *(float *)(&DAT_00551f9c + (long)(int)uVar22 * 4) *
               *(float *)((long)param_4 + uVar14);
        }
        if ((int)(uVar12 + 1) < (int)uVar3) {
          iVar23 = 0;
          iVar13 = ~uVar12 + uVar3;
          pfVar18 = (float *)((long)param_4 + (long)(int)(uVar12 + 1) * 4);
          do {
            iVar23 = iVar23 + (iVar1 - iVar2);
            uVar12 = 0;
            if (iVar9 <= iVar23) {
              uVar12 = iVar10 >> 0x1f | 1;
            }
            uVar22 = uVar22 + iVar8 + uVar12;
            iVar4 = 0;
            if (iVar9 <= iVar23) {
              iVar4 = iVar9;
            }
            iVar23 = iVar23 - iVar4;
            iVar13 = iVar13 + -1;
            *pfVar18 = *(float *)(&DAT_00551f9c + (long)(int)uVar22 * 4) * *pfVar18;
            pfVar18 = pfVar18 + 1;
          } while (iVar13 != 0);
        }
        uVar14 = (ulong)uVar21;
        uVar17 = uVar17 + 1;
        uVar22 = uVar7;
        if (uVar17 == uVar5) goto LAB_00e14ea4;
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar5);
LAB_00e14ea4:
    if ((int)uVar15 <= (int)uVar21) {
      return 1;
    }
  }
  lVar11 = (long)(int)uVar21;
  fVar24 = *(float *)(&DAT_00551f9c + (long)(int)uVar22 * 4);
  uVar17 = (int)uVar15 - lVar11;
  lVar16 = lVar11;
  if (7 < uVar17) {
    uVar19 = uVar17 & 0xfffffffffffffff8;
    lVar16 = uVar19 + lVar11;
    puVar20 = (undefined8 *)((long)param_4 + lVar11 * 4 + 0x10);
    uVar14 = uVar19;
    do {
      uVar14 = uVar14 - 8;
      puVar20[-1] = CONCAT44(fVar24 * (float)((ulong)puVar20[-1] >> 0x20),
                             fVar24 * (float)puVar20[-1]);
      puVar20[-2] = CONCAT44(fVar24 * (float)((ulong)puVar20[-2] >> 0x20),
                             fVar24 * (float)puVar20[-2]);
      puVar20[1] = CONCAT44((float)((ulong)puVar20[1] >> 0x20) * fVar24,(float)puVar20[1] * fVar24);
      *puVar20 = CONCAT44((float)((ulong)*puVar20 >> 0x20) * fVar24,(float)*puVar20 * fVar24);
      puVar20 = puVar20 + 4;
    } while (uVar14 != 0);
    if (uVar17 == uVar19) {
      return 1;
    }
  }
  lVar11 = (int)uVar15 - lVar16;
  pfVar18 = (float *)((long)param_4 + lVar16 * 4);
  do {
    lVar11 = lVar11 + -1;
    *pfVar18 = fVar24 * *pfVar18;
    pfVar18 = pfVar18 + 1;
  } while (lVar11 != 0);
  return 1;
}


