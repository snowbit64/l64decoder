// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d8fb30
// Entry Point: 00d8fb30
// Size: 744 bytes
// Signature: undefined FUN_00d8fb30(void)


void FUN_00d8fb30(long param_1,long param_2,void **param_3,uint param_4)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  short sVar10;
  ulong __n;
  int iVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  void *pvVar16;
  long *plVar17;
  undefined8 *puVar18;
  byte *pbVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  
  if (0 < (int)param_4) {
    uVar2 = *(uint *)(param_1 + 0x7c);
    uVar29 = (ulong)uVar2;
    lVar27 = *(long *)(param_1 + 0x270);
    uVar15 = (ulong)param_4;
    uVar3 = *(uint *)(param_1 + 0x74);
    __n = (ulong)uVar3;
    if ((int)uVar2 < 1) {
      do {
        memset(*param_3,0,__n);
        uVar15 = uVar15 - 1;
        *(bool *)(lVar27 + 0x90) = *(char *)(lVar27 + 0x90) == '\0';
        param_3 = param_3 + 1;
      } while (uVar15 != 0);
    }
    else {
      uVar30 = (ulong)(uVar3 + 1);
      if (uVar3 == 0) {
        uVar31 = 0;
        uVar14 = uVar29 & 0xfffffffe;
        do {
          memset(param_3[uVar31],0,__n);
          cVar5 = *(char *)(lVar27 + 0x90);
          if (cVar5 == '\0') {
            uVar13 = uVar14;
            plVar17 = (long *)(lVar27 + 0x78);
            if (uVar2 < 2) {
              uVar13 = 0;
            }
            else {
              do {
                puVar1 = (undefined2 *)*plVar17;
                uVar13 = uVar13 - 2;
                *(undefined2 *)plVar17[-1] = 0;
                *puVar1 = 0;
                plVar17 = plVar17 + 2;
              } while (uVar13 != 0);
              uVar13 = uVar14;
              if (uVar14 == uVar29) goto LAB_00d8fd28;
            }
            lVar28 = uVar29 - uVar13;
            puVar18 = (undefined8 *)(lVar27 + 0x70 + uVar13 * 8);
            do {
              lVar28 = lVar28 + -1;
              *(undefined2 *)*puVar18 = 0;
              puVar18 = puVar18 + 1;
            } while (lVar28 != 0);
          }
          else {
            uVar13 = uVar14;
            plVar17 = (long *)(lVar27 + 0x78);
            if (uVar2 < 2) {
              uVar13 = 0;
            }
            else {
              do {
                lVar28 = *plVar17;
                uVar13 = uVar13 - 2;
                *(undefined2 *)(plVar17[-1] + uVar30 * 2) = 0;
                *(undefined2 *)(lVar28 + uVar30 * 2) = 0;
                plVar17 = plVar17 + 2;
              } while (uVar13 != 0);
              uVar13 = uVar14;
              if (uVar14 == uVar29) goto LAB_00d8fd28;
            }
            lVar28 = uVar29 - uVar13;
            plVar17 = (long *)(lVar27 + 0x70 + uVar13 * 8);
            do {
              lVar28 = lVar28 + -1;
              *(undefined2 *)(*plVar17 + uVar30 * 2) = 0;
              plVar17 = plVar17 + 1;
            } while (lVar28 != 0);
          }
LAB_00d8fd28:
          uVar31 = uVar31 + 1;
          *(bool *)(lVar27 + 0x90) = cVar5 == '\0';
        } while (uVar31 != uVar15);
      }
      else {
        uVar31 = 0;
        lVar28 = *(long *)(param_1 + 0x198);
        do {
          memset(param_3[uVar31],0,__n);
          uVar14 = 0;
          do {
            pvVar16 = param_3[uVar31];
            pbVar19 = (byte *)(*(long *)(param_2 + uVar31 * 8) + uVar14);
            if (*(char *)(lVar27 + 0x90) == '\0') {
              lVar21 = 1;
              lVar20 = *(long *)(lVar27 + uVar14 * 8 + 0x70);
              uVar9 = uVar2;
            }
            else {
              pbVar19 = pbVar19 + (uVar3 - 1) * uVar2;
              pvVar16 = (void *)((long)pvVar16 + (ulong)(uVar3 - 1));
              lVar21 = -1;
              lVar20 = *(long *)(lVar27 + uVar14 * 8 + 0x70) + uVar30 * 2;
              uVar9 = -uVar2;
            }
            lVar22 = 0;
            iVar11 = 0;
            lVar25 = *(long *)(*(long *)(lVar27 + 0x30) + uVar14 * 8);
            iVar23 = 0;
            lVar26 = *(long *)(*(long *)(lVar27 + 0x20) + uVar14 * 8);
            uVar13 = __n;
            iVar24 = 0;
            do {
              lVar12 = lVar22 * 2;
              uVar8 = (int)uVar13 - 1;
              uVar13 = (ulong)uVar8;
              bVar4 = *pbVar19;
              pbVar19 = pbVar19 + (int)uVar9;
              bVar4 = *(byte *)(lVar28 + (ulong)bVar4 +
                                         (long)(iVar11 + *(short *)(lVar20 + lVar21 * 2 + lVar12) +
                                                8 >> 4));
              bVar6 = *(byte *)(lVar25 + (ulong)bVar4);
              *(byte *)((long)pvVar16 + lVar22) = *(char *)((long)pvVar16 + lVar22) + bVar6;
              lVar22 = lVar22 + lVar21;
              iVar7 = (uint)bVar4 - (uint)*(byte *)(lVar26 + (ulong)bVar6);
              iVar11 = iVar7 * 7;
              sVar10 = (short)iVar23;
              iVar23 = iVar7 * 5 + iVar24;
              *(short *)(lVar20 + lVar12) = (short)iVar7 * 3 + sVar10;
              iVar24 = iVar7;
            } while (uVar8 != 0);
            uVar14 = uVar14 + 1;
            *(short *)(lVar20 + lVar22 * 2) = (short)iVar23;
          } while (uVar14 != uVar29);
          uVar31 = uVar31 + 1;
          *(bool *)(lVar27 + 0x90) = *(char *)(lVar27 + 0x90) == '\0';
        } while (uVar31 != uVar15);
      }
    }
  }
  return;
}


