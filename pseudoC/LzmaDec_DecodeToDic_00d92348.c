// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LzmaDec_DecodeToDic
// Entry Point: 00d92348
// Size: 1512 bytes
// Signature: undefined LzmaDec_DecodeToDic(void)


ulong LzmaDec_DecodeToDic(int *param_1,ulong param_2,undefined8 *param_3,ulong *param_4,int param_5,
                         undefined4 *param_6)

{
  undefined *puVar1;
  int *__dest;
  ulong uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  undefined8 uVar18;
  
  uVar17 = param_1[0x17];
  uVar9 = *param_4;
  *param_4 = 0;
  if (uVar17 - 1 < 0x111) {
    uVar11 = *(ulong *)(param_1 + 0xc);
    uVar12 = (uint)(param_2 - uVar11);
    if ((ulong)uVar17 <= param_2 - uVar11) {
      uVar12 = uVar17;
    }
    if (param_1[0x11] == 0) {
      iVar6 = param_1[0x10];
      if ((uint)(param_1[3] - iVar6) <= uVar12) {
        param_1[0x11] = param_1[3];
      }
    }
    else {
      iVar6 = param_1[0x10];
    }
    lVar15 = *(long *)(param_1 + 6);
    uVar3 = param_1[0x13];
    lVar14 = *(long *)(param_1 + 0xe);
    param_1[0x10] = iVar6 + uVar12;
    param_1[0x17] = uVar17 - uVar12;
    if (uVar12 != 0) {
      do {
        uVar12 = uVar12 - 1;
        lVar13 = lVar14;
        if (uVar3 <= uVar11) {
          lVar13 = 0;
        }
        *(undefined *)(lVar15 + uVar11) = *(undefined *)((lVar15 - (ulong)uVar3) + lVar13 + uVar11);
        uVar11 = uVar11 + 1;
      } while (uVar12 != 0);
    }
    *(ulong *)(param_1 + 0xc) = uVar11;
  }
  *param_6 = 0;
  iVar6 = param_1[0x17];
  if (iVar6 != 0x112) {
    __dest = param_1 + 0x1c;
LAB_00d92468:
    do {
      if (param_1[0x18] != 0) {
        uVar17 = param_1[0x1b];
        uVar11 = (ulong)uVar17;
        puVar7 = param_3;
        uVar12 = uVar17;
        if (uVar9 != 0) {
          uVar16 = uVar9;
          if (uVar17 < 5) {
            *(undefined *)((long)param_1 + uVar11 + 0x70) = *(undefined *)param_3;
            uVar16 = *param_4;
            param_1[0x1b] = uVar17 + 1;
            *param_4 = uVar16 + 1;
            puVar7 = (undefined8 *)((long)param_3 + 1);
            uVar12 = uVar17 + 1;
            if (uVar9 - 1 == 0) goto joined_r0x00d925b8;
            uVar16 = uVar9 - 1;
            if (uVar17 < 4) {
              *(undefined *)((long)param_1 + uVar11 + 0x71) = *(undefined *)((long)param_3 + 1);
              uVar16 = *param_4;
              param_1[0x1b] = uVar17 + 2;
              *param_4 = uVar16 + 1;
              puVar7 = (undefined8 *)((long)param_3 + 2);
              uVar12 = uVar17 + 2;
              if (uVar9 - 2 == 0) goto joined_r0x00d925b8;
              uVar16 = uVar9 - 2;
              if (uVar17 < 3) {
                *(undefined *)((long)param_1 + uVar11 + 0x72) = *(undefined *)((long)param_3 + 2);
                uVar16 = *param_4;
                param_1[0x1b] = uVar17 + 3;
                *param_4 = uVar16 + 1;
                puVar7 = (undefined8 *)((long)param_3 + 3);
                uVar12 = uVar17 + 3;
                if (uVar9 - 3 == 0) goto joined_r0x00d925b8;
                uVar16 = uVar9 - 3;
                if (uVar17 < 2) {
                  *(undefined *)((long)param_1 + uVar11 + 0x73) = *(undefined *)((long)param_3 + 3);
                  uVar16 = *param_4;
                  param_1[0x1b] = uVar17 + 4;
                  *param_4 = uVar16 + 1;
                  puVar7 = (undefined8 *)((long)param_3 + 4);
                  uVar12 = uVar17 + 4;
                  if (uVar9 - 4 == 0) goto joined_r0x00d925b8;
                  uVar16 = uVar9 - 4;
                  if (uVar17 == 0) {
                    *(undefined *)((long)param_1 + uVar11 + 0x74) =
                         *(undefined *)((long)param_3 + 4);
                    uVar11 = *param_4;
                    param_1[0x1b] = 5;
                    *param_4 = uVar11 + 1;
                    puVar7 = (undefined8 *)((long)param_3 + 5);
                    uVar16 = uVar9 - 5;
                    uVar12 = 5;
                    if (uVar9 - 5 == 0) goto joined_r0x00d925b8;
                  }
                }
              }
            }
          }
LAB_00d925c0:
          if (*(char *)__dest != '\0') {
            return 1;
          }
          param_1[0x18] = 0;
          param_1[0x1b] = 0;
          uVar17 = (*(uint *)((long)param_1 + 0x71) & 0xff00ff00) >> 8 |
                   (*(uint *)((long)param_1 + 0x71) & 0xff00ff) << 8;
          param_1[10] = -1;
          param_1[0xb] = uVar17 >> 0x10 | uVar17 << 0x10;
          uVar11 = *(ulong *)(param_1 + 0xc);
          param_3 = puVar7;
          uVar9 = uVar16;
          goto joined_r0x00d925e8;
        }
joined_r0x00d925b8:
        if (4 < uVar12) {
          uVar16 = 0;
          goto LAB_00d925c0;
        }
        uVar8 = 3;
        goto LAB_00d928c0;
      }
      uVar11 = *(ulong *)(param_1 + 0xc);
joined_r0x00d925e8:
      if (param_2 <= uVar11) {
        if (iVar6 == 0) {
          if (param_1[0xb] == 0) {
            uVar8 = 4;
            goto LAB_00d928c0;
          }
          if (param_5 == 0) goto LAB_00d928ac;
          goto LAB_00d92600;
        }
        if (param_5 == 0) {
LAB_00d928ac:
          uVar8 = 2;
LAB_00d928c0:
          uVar9 = 0;
          goto LAB_00d928c4;
        }
LAB_00d928a0:
        uVar8 = 2;
        uVar9 = 1;
LAB_00d928c4:
        *param_6 = uVar8;
        return uVar9;
      }
LAB_00d92600:
      bVar4 = param_2 <= uVar11;
      if (param_1[0x19] != 0) {
        lVar15 = *(long *)(param_1 + 4);
        uVar11 = (ulong)((0x300 << (ulong)(param_1[1] + *param_1 & 0x1f)) + 0x736);
        lVar13 = uVar11 - 6;
        puVar7 = (undefined8 *)(lVar15 + 0x10);
        lVar14 = lVar13;
        do {
          puVar7[-1] = 0x400040004000400;
          puVar7[-2] = 0x400040004000400;
          puVar7[1] = 0x400040004000400;
          *puVar7 = 0x400040004000400;
          puVar7 = puVar7 + 4;
          lVar14 = lVar14 + -0x10;
        } while (lVar14 != 0);
        lVar14 = lVar15 + uVar11 * 2;
        *(undefined2 *)(lVar15 + lVar13 * 2) = 0x400;
        *(undefined2 *)(lVar14 + -10) = 0x400;
        *(undefined8 *)(lVar14 + -8) = 0x400040004000400;
        *(undefined8 *)(param_1 + 0x14) = 0x100000001;
        *(undefined8 *)(param_1 + 0x12) = 0x100000000;
        param_1[0x19] = 0;
        param_1[0x16] = 1;
      }
      uVar17 = param_1[0x1b];
      uVar11 = (ulong)uVar17;
      if (uVar17 == 0) {
        if (uVar9 < 0x14 || bVar4) {
          iVar6 = FUN_00d92930(param_1,param_3,uVar9);
          if (iVar6 == 0) {
            memcpy(__dest,param_3,uVar9);
            uVar16 = *param_4;
            uVar11 = 0;
            param_1[0x1b] = (int)uVar9;
            uVar16 = uVar16 + uVar9;
            goto LAB_00d92920;
          }
          puVar7 = param_3;
          if (bVar4 && iVar6 != 2) goto LAB_00d928a0;
        }
        else {
          puVar7 = (undefined8 *)((long)param_3 + (uVar9 - 0x14));
        }
        *(undefined8 **)(param_1 + 8) = param_3;
        iVar6 = FUN_00d92f70(param_1,param_2,puVar7);
        if (iVar6 != 0) {
          return 1;
        }
        lVar14 = *(long *)(param_1 + 8) - (long)param_3;
        *param_4 = lVar14 + *param_4;
        iVar6 = param_1[0x17];
        param_3 = (undefined8 *)((long)param_3 + lVar14);
        uVar9 = uVar9 - lVar14;
        if (iVar6 == 0x112) break;
        goto LAB_00d92468;
      }
      bVar5 = uVar17 < 0x14;
      uVar16 = 0;
      if ((uVar17 < 0x14) && (uVar9 != 0)) {
        uVar10 = uVar9 - 1;
        uVar16 = uVar10;
        if (0x13 - uVar11 <= uVar10) {
          uVar16 = 0x13 - uVar11;
        }
        uVar2 = 1;
        if (uVar17 != 0x13) {
          uVar2 = uVar16 + 1;
        }
        if (uVar2 < 0x10) {
LAB_00d926f4:
          uVar16 = 0;
LAB_00d926fc:
          do {
            bVar5 = uVar11 < 0x13;
            puVar1 = (undefined *)((long)param_3 + uVar16);
            uVar16 = uVar16 + 1;
            uVar10 = uVar11 + 1;
            *(undefined *)((long)__dest + uVar11) = *puVar1;
            if (0x12 < uVar11) break;
            uVar11 = uVar10;
          } while (uVar16 < uVar9);
        }
        else {
          if (0x13 - uVar11 <= uVar10) {
            uVar10 = 0x13 - uVar11;
          }
          uVar16 = 0;
          if (uVar17 != 0x13) {
            uVar16 = uVar10;
          }
          if (((undefined *)((long)param_1 + uVar11 + 0x70) <
               (undefined *)((long)param_3 + uVar16 + 1)) &&
             (param_3 < (undefined8 *)((long)param_1 + uVar16 + uVar11 + 0x71))) goto LAB_00d926f4;
          uVar16 = uVar2 & 0xfffffffffffffff0;
          uVar10 = uVar16 + uVar11;
          lVar14 = uVar11 + 0x70;
          uVar11 = uVar16;
          puVar7 = param_3;
          do {
            lVar15 = lVar14;
            uVar18 = *puVar7;
            uVar11 = uVar11 - 0x10;
            ((undefined8 *)((long)param_1 + lVar15))[1] = puVar7[1];
            *(undefined8 *)((long)param_1 + lVar15) = uVar18;
            lVar14 = lVar15 + 0x10;
            puVar7 = puVar7 + 2;
          } while (uVar11 != 0);
          bVar5 = lVar15 - 0x61U < 0x13;
          uVar11 = uVar10;
          if (uVar2 != uVar16) goto LAB_00d926fc;
        }
        uVar17 = (uint)uVar10;
      }
      param_1[0x1b] = uVar17;
      if ((bool)(bVar5 | bVar4)) {
        uVar11 = FUN_00d92930(param_1,__dest,uVar17);
        if ((int)uVar11 == 0) {
          uVar16 = *param_4 + (uVar16 & 0xffffffff);
LAB_00d92920:
          *param_4 = uVar16;
          *param_6 = 3;
          return uVar11;
        }
        if (bVar4 && (int)uVar11 != 2) goto LAB_00d928a0;
      }
      *(int **)(param_1 + 8) = __dest;
      iVar6 = FUN_00d92f70(param_1,param_2,__dest);
      if (iVar6 != 0) {
        return 1;
      }
      uVar10 = *param_4;
      param_1[0x1b] = 0;
      uVar11 = (ulong)(((int)uVar16 - uVar17) + (param_1[8] - (int)__dest));
      *param_4 = uVar10 + uVar11;
      iVar6 = param_1[0x17];
      param_3 = (undefined8 *)((long)param_3 + uVar11);
      uVar9 = uVar9 - uVar11;
    } while (iVar6 != 0x112);
  }
  iVar6 = param_1[0xb];
  if (iVar6 == 0) {
    *param_6 = 1;
    iVar6 = param_1[0xb];
  }
  return (ulong)(iVar6 != 0);
}


