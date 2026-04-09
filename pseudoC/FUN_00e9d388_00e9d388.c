// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e9d388
// Entry Point: 00e9d388
// Size: 740 bytes
// Signature: undefined FUN_00e9d388(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)


void FUN_00e9d388(long param_1,uint param_2,long param_3,undefined8 *param_4,uint param_5,
                 uint param_6,uint param_7,int param_8,undefined4 param_9)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  iVar5 = *(int *)(param_1 + 4);
  uVar4 = *(uint *)(param_1 + 0x28);
  if (param_2 == 0) {
    uVar19 = uVar4 << (ulong)(param_7 & 0x1f);
    param_2 = 1;
    iVar18 = *(int *)(param_1 + 0x20) - param_7;
    uVar4 = uVar19;
LAB_00e9d3f8:
    uVar1 = uVar19 + iVar5;
    iVar11 = 0;
    uVar13 = 0;
    uVar3 = param_6;
    if ((int)param_6 < 2) {
      uVar3 = 1;
    }
    do {
      lVar6 = (long)param_4 + (long)iVar11 * 4;
      uVar14 = (ulong)param_2;
      lVar16 = param_3;
      do {
        clt_mdct_forward_c(param_1 + 0x48,lVar16,lVar6,*(undefined8 *)(param_1 + 0x40),iVar5,iVar18,
                           (ulong)param_2,param_9);
        lVar6 = lVar6 + 4;
        lVar16 = lVar16 + (-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2);
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
      iVar11 = iVar11 + uVar19;
      uVar13 = uVar13 + 1;
      param_3 = param_3 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
    } while (uVar13 != uVar3);
  }
  else {
    uVar19 = uVar4 * param_2;
    if (0 < (int)param_2) {
      iVar18 = *(int *)(param_1 + 0x20);
      goto LAB_00e9d3f8;
    }
  }
  if (((param_5 == 1) && (param_6 == 2)) && (0 < (int)uVar19)) {
    uVar13 = (ulong)uVar19;
    if (uVar19 < 8) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar13 & 0xfffffff8;
      uVar14 = uVar9;
      puVar7 = param_4;
      do {
        puVar2 = (undefined8 *)((long)puVar7 + uVar13 * 4);
        uVar14 = uVar14 - 8;
        uVar20 = *puVar2;
        uVar22 = puVar2[3];
        uVar21 = puVar2[2];
        puVar7[1] = CONCAT44((int)((long)puVar2[1] >> 0x21) + (int)((long)puVar7[1] >> 0x21),
                             ((int)puVar2[1] >> 1) + ((int)puVar7[1] >> 1));
        *puVar7 = CONCAT44((int)((long)uVar20 >> 0x21) + (int)((long)*puVar7 >> 0x21),
                           ((int)uVar20 >> 1) + ((int)*puVar7 >> 1));
        puVar7[3] = CONCAT44((int)((long)uVar22 >> 0x21) + (int)((long)puVar7[3] >> 0x21),
                             ((int)uVar22 >> 1) + ((int)puVar7[3] >> 1));
        puVar7[2] = CONCAT44((int)((long)uVar21 >> 0x21) + (int)((long)puVar7[2] >> 0x21),
                             ((int)uVar21 >> 1) + ((int)puVar7[2] >> 1));
        puVar7 = puVar7 + 4;
      } while (uVar14 != 0);
      if (uVar9 == uVar13) goto LAB_00e9d54c;
    }
    lVar6 = uVar13 - uVar9;
    piVar8 = (int *)((long)param_4 + (uVar9 + uVar13) * 4);
    piVar12 = (int *)((long)param_4 + uVar9 * 4);
    do {
      lVar6 = lVar6 + -1;
      *piVar12 = (*piVar8 >> 1) + (*piVar12 >> 1);
      piVar8 = piVar8 + 1;
      piVar12 = piVar12 + 1;
    } while (lVar6 != 0);
  }
LAB_00e9d54c:
  if (param_8 != 1) {
    uVar4 = 0;
    if (param_8 != 0) {
      uVar4 = (int)uVar19 / param_8;
    }
    uVar13 = (ulong)uVar4;
    if ((int)param_5 < 2) {
      param_5 = 1;
    }
    uVar14 = (ulong)param_5;
    uVar9 = -(ulong)(uVar19 - uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar19 - uVar4) << 2;
    if ((int)uVar4 < 1) {
      do {
        memset((void *)((long)param_4 + (long)(int)uVar13 * 4),0,uVar9);
        uVar13 = (ulong)((int)uVar13 + uVar19);
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    else {
      iVar5 = 0;
      uVar15 = 0;
      uVar17 = uVar13 & 0xfffffff8;
      do {
        if (uVar4 < 8) {
          uVar10 = 0;
LAB_00e9d604:
          lVar6 = uVar13 - uVar10;
          piVar8 = (int *)((long)param_4 + (uVar10 + (long)iVar5) * 4);
          do {
            lVar6 = lVar6 + -1;
            *piVar8 = *piVar8 * param_8;
            piVar8 = piVar8 + 1;
          } while (lVar6 != 0);
        }
        else {
          puVar7 = (undefined8 *)((long)param_4 + (long)iVar5 * 4 + 0x10);
          uVar10 = uVar17;
          do {
            uVar10 = uVar10 - 8;
            puVar7[-1] = CONCAT44((int)((ulong)puVar7[-1] >> 0x20) * param_8,
                                  (int)puVar7[-1] * param_8);
            puVar7[-2] = CONCAT44((int)((ulong)puVar7[-2] >> 0x20) * param_8,
                                  (int)puVar7[-2] * param_8);
            puVar7[1] = CONCAT44((int)((ulong)puVar7[1] >> 0x20) * param_8,(int)puVar7[1] * param_8)
            ;
            *puVar7 = CONCAT44((int)((ulong)*puVar7 >> 0x20) * param_8,(int)*puVar7 * param_8);
            puVar7 = puVar7 + 4;
          } while (uVar10 != 0);
          uVar10 = uVar17;
          if (uVar17 != uVar13) goto LAB_00e9d604;
        }
        memset((void *)((long)param_4 + (long)(int)(uVar19 * (int)uVar15 + uVar4) * 4),0,uVar9);
        uVar15 = uVar15 + 1;
        iVar5 = iVar5 + uVar19;
      } while (uVar15 != uVar14);
    }
  }
  return;
}


