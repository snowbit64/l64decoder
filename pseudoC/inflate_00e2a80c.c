// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: inflate
// Entry Point: 00e2a80c
// Size: 8028 bytes
// Signature: undefined inflate(void)


void inflate(byte **param_1,int param_2)

{
  uint uVar1;
  long **pplVar2;
  long **pplVar3;
  long **pplVar4;
  long **pplVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  ushort uVar9;
  long lVar10;
  undefined8 *puVar11;
  ushort uVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  undefined4 uVar22;
  long lVar23;
  ulong uVar24;
  long **pplVar25;
  char *pcVar26;
  byte *pbVar27;
  int iVar28;
  byte *pbVar29;
  long *plVar30;
  uint uVar31;
  int iVar32;
  ulong uVar33;
  undefined8 *puVar34;
  undefined2 uVar35;
  ulong uVar36;
  ulong uVar37;
  undefined8 *puVar38;
  byte *pbVar39;
  long **pplVar40;
  long *plVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  int local_a4;
  uint local_94;
  byte *local_80;
  undefined4 local_6c;
  long local_68;
  
  lVar10 = tpidr_el0;
  local_68 = *(long *)(lVar10 + 0x28);
  if ((((param_1 != (byte **)0x0) && (param_1[8] != (byte *)0x0)) && (param_1[9] != (byte *)0x0)) &&
     ((pplVar40 = (long **)param_1[7], pplVar40 != (long **)0x0 && ((byte **)*pplVar40 == param_1)))
     ) {
    pplVar25 = pplVar40 + 1;
    iVar13 = *(int *)pplVar25;
    if (((iVar13 - 0x3f34U < 0x20) && (local_80 = param_1[3], local_80 != (byte *)0x0)) &&
       ((pbVar39 = *param_1, pbVar39 != (byte *)0x0 || (*(int *)(param_1 + 1) == 0)))) {
      if (iVar13 == 0x3f3f) {
        iVar13 = 0x3f40;
        *(undefined4 *)pplVar25 = 0x3f40;
      }
      pplVar2 = pplVar40 + 4;
      pplVar3 = pplVar40 + 0xab;
      uVar7 = *(uint *)(param_1 + 1);
      local_94 = *(uint *)(param_1 + 4);
      pplVar4 = pplVar40 + 99;
      pplVar5 = pplVar40 + 0x12;
      plVar41 = pplVar40[10];
      uVar20 = (ulong)*(uint *)(pplVar40 + 0xb);
      uVar17 = (ulong)uVar7;
      local_a4 = 0;
      uVar18 = local_94;
      while( true ) {
        uVar15 = (uint)uVar17;
        uVar19 = (uint)uVar20;
        if (0x1e < iVar13 - 0x3f34U) break;
        uVar14 = uVar17;
        pbVar27 = pbVar39;
        iVar32 = 1;
        iVar28 = -3;
        pbVar29 = pbVar39;
        uVar21 = uVar19;
        switch(iVar13) {
        case 0x3f34:
          uVar16 = *(uint *)(pplVar40 + 2);
          if (uVar16 == 0) {
            uVar22 = 0x3f40;
            break;
          }
          if (uVar19 < 0x10) {
            if (uVar15 == 0) goto LAB_00e2c5cc;
            uVar31 = uVar15 - 1;
            pbVar29 = pbVar39 + 1;
            plVar41 = (long *)(((ulong)*pbVar39 << (uVar20 & 0x3f)) + (long)plVar41);
            uVar14 = uVar20 + 8;
            if (uVar19 < 8) {
              uVar21 = (uint)uVar14;
              if (uVar31 == 0) goto LAB_00e2c5cc;
              uVar31 = uVar15 - 2;
              pbVar29 = pbVar39 + 2;
              plVar41 = (long *)(((ulong)pbVar39[1] << (uVar14 & 0x3f)) + (long)plVar41);
              uVar14 = uVar20 + 0x10;
            }
            uVar17 = (ulong)uVar31;
            uVar20 = uVar14 & 0xffffffff;
            pbVar39 = pbVar29;
          }
          if (((uVar16 >> 1 & 1) == 0) || (plVar41 != (long *)0x8b1f)) {
            *(undefined4 *)(pplVar40 + 3) = 0;
            if (pplVar40[6] != (long *)0x0) {
              *(undefined4 *)(pplVar40[6] + 9) = 0xffffffff;
            }
            if (((uVar16 & 1) == 0) ||
               (0x842108421084210 <
                (((ulong)(uint)((int)plVar41 << 8) & 0xff00) + ((ulong)plVar41 >> 8)) *
                -0x1084210842108421)) {
              uVar22 = 0x3f51;
              param_1[6] = (byte *)"incorrect header check";
              break;
            }
            if (((ulong)plVar41 & 0xf) != 8) goto LAB_00e2c490;
            uVar14 = (ulong)plVar41 >> 4 & 0xf;
            uVar21 = (uint)uVar14;
            uVar19 = uVar21 + 8;
            uVar15 = *(uint *)(pplVar40 + 7);
            if (*(uint *)(pplVar40 + 7) == 0) {
              *(uint *)(pplVar40 + 7) = uVar19;
              uVar15 = uVar19;
            }
            if ((uVar21 < 8) && (uVar19 <= uVar15)) {
              *(int *)((long)pplVar40 + 0x1c) = 0x100 << uVar14;
              plVar30 = (long *)adler32(0,0,0);
              uVar20 = 0;
              uVar22 = 0x3f3f;
              if (((ulong)plVar41 & 0x2000) != 0) {
                uVar22 = 0x3f3d;
              }
              pplVar40[4] = plVar30;
              plVar41 = (long *)0x0;
              param_1[0xc] = (byte *)plVar30;
              *(undefined4 *)(pplVar40 + 1) = uVar22;
            }
            else {
              uVar20 = (ulong)((int)uVar20 - 4);
              plVar41 = (long *)((ulong)plVar41 >> 4);
              *(undefined4 *)pplVar25 = 0x3f51;
              param_1[6] = (byte *)"invalid window size";
            }
          }
          else {
            if (*(int *)(pplVar40 + 7) == 0) {
              *(undefined4 *)(pplVar40 + 7) = 0xf;
            }
            plVar41 = (long *)crc32(0,0,0);
            *pplVar2 = plVar41;
            local_6c = CONCAT22(local_6c._2_2_,0x8b1f);
            plVar30 = (long *)crc32(plVar41,&local_6c,2);
            plVar41 = (long *)0x0;
            uVar20 = 0;
            *pplVar2 = plVar30;
            *(undefined4 *)pplVar25 = 0x3f35;
          }
          goto LAB_00e2a95c;
        case 0x3f35:
          if (uVar19 < 0x10) {
            if (uVar15 == 0) goto LAB_00e2c5e8;
            uVar16 = uVar15 - 1;
            pbVar29 = pbVar39 + 1;
            plVar41 = (long *)(((ulong)*pbVar39 << (uVar20 & 0x3f)) + (long)plVar41);
            uVar14 = uVar20 + 8;
            if (uVar19 < 8) {
              pbVar27 = pbVar29;
              uVar21 = (uint)uVar14;
              if (uVar16 == 0) goto LAB_00e2c5e8;
              uVar16 = uVar15 - 2;
              pbVar29 = pbVar39 + 2;
              plVar41 = (long *)(((ulong)pbVar39[1] << (uVar14 & 0x3f)) + (long)plVar41);
              uVar14 = uVar20 + 0x10;
            }
            uVar17 = (ulong)uVar16;
            uVar20 = uVar14 & 0xffffffff;
          }
          uVar15 = (uint)uVar17;
          uVar19 = (uint)plVar41;
          *(uint *)(pplVar40 + 3) = uVar19;
          pbVar39 = pbVar29;
          if ((uVar19 & 0xff) == 8) {
            if (((ulong)plVar41 & 0xe000) == 0) {
              if (pplVar40[6] != (long *)0x0) {
                *(uint *)pplVar40[6] = uVar19 >> 8 & 1;
              }
              if (((uVar19 >> 9 & 1) != 0) && ((*(byte *)(pplVar40 + 2) >> 2 & 1) != 0)) {
                local_6c = CONCAT22(local_6c._2_2_,(short)plVar41);
                plVar41 = (long *)crc32(*pplVar2,&local_6c,2);
                *pplVar2 = plVar41;
              }
              uVar20 = 0;
              plVar41 = (long *)0x0;
              *(undefined4 *)pplVar25 = 0x3f36;
              goto LAB_00e2b67c;
            }
            uVar22 = 0x3f51;
            param_1[6] = (byte *)"unknown header flags set";
          }
          else {
LAB_00e2c490:
            uVar22 = 0x3f51;
            param_1[6] = (byte *)"unknown compression method";
          }
          break;
        case 0x3f36:
          uVar19 = uVar15;
          if (uVar19 < 0x20) {
LAB_00e2b67c:
            uVar21 = (uint)uVar20;
            pbVar27 = pbVar29;
            uVar19 = uVar21;
            if (uVar15 == 0) {
LAB_00e2c5ac:
              uVar15 = 0;
              pbVar39 = pbVar27;
              iVar32 = local_a4;
              goto switchD_00e2a98c_caseD_3f50;
            }
            pbVar39 = pbVar29 + 1;
            plVar41 = (long *)(((ulong)*pbVar29 << (uVar20 & 0x3f)) + (long)plVar41);
            uVar19 = uVar15 - 1;
            if (uVar21 < 0x18) {
              pbVar27 = pbVar39;
              uVar19 = (uint)(uVar20 + 8);
              if (uVar15 - 1 == 0) goto LAB_00e2c5ac;
              pbVar39 = pbVar29 + 2;
              plVar41 = (long *)(((ulong)pbVar29[1] << (uVar20 + 8 & 0x3f)) + (long)plVar41);
              uVar19 = uVar15 - 2;
              if (uVar21 < 0x10) {
                pbVar27 = pbVar39;
                uVar19 = (uint)(uVar20 + 0x10);
                if (uVar15 - 2 == 0) goto LAB_00e2c5ac;
                pbVar39 = pbVar29 + 3;
                plVar41 = (long *)(((ulong)pbVar29[2] << (uVar20 + 0x10 & 0x3f)) + (long)plVar41);
                uVar19 = uVar15 - 3;
                if (uVar21 < 8) {
                  pbVar27 = pbVar39;
                  uVar19 = (uint)(uVar20 + 0x18);
                  if (uVar15 - 3 == 0) goto LAB_00e2c5ac;
                  pbVar39 = pbVar29 + 4;
                  plVar41 = (long *)(((ulong)pbVar29[3] << (uVar20 + 0x18 & 0x3f)) + (long)plVar41);
                  uVar19 = uVar15 - 4;
                }
              }
            }
          }
          uVar15 = uVar19;
          if (pplVar40[6] != (long *)0x0) {
            pplVar40[6][1] = (long)plVar41;
          }
          if (((*(byte *)((long)pplVar40 + 0x19) >> 1 & 1) != 0) &&
             ((*(byte *)(pplVar40 + 2) >> 2 & 1) != 0)) {
            local_6c = SUB84(plVar41,0);
            plVar41 = (long *)crc32(*pplVar2,&local_6c,4);
            *pplVar2 = plVar41;
          }
          uVar20 = 0;
          plVar41 = (long *)0x0;
          *(undefined4 *)pplVar25 = 0x3f37;
          pbVar29 = pbVar39;
LAB_00e2b78c:
          pbVar27 = pbVar29;
          uVar21 = (uint)uVar20;
          if (uVar15 != 0) {
            pbVar39 = pbVar29 + 1;
            plVar41 = (long *)(((ulong)*pbVar29 << (uVar20 & 0x3f)) + (long)plVar41);
            if ((uint)uVar20 < 8) {
              pbVar27 = pbVar39;
              uVar21 = (uint)(uVar20 + 8);
              if (uVar15 - 1 == 0) goto LAB_00e2c5e8;
              pbVar39 = pbVar29 + 2;
              uVar17 = (ulong)(uVar15 - 2);
              plVar41 = (long *)(((ulong)pbVar29[1] << (uVar20 + 8 & 0x3f)) + (long)plVar41);
            }
            else {
              uVar17 = (ulong)(uVar15 - 1);
            }
            goto LAB_00e2b7d8;
          }
LAB_00e2c5e8:
          uVar19 = uVar21;
          uVar15 = 0;
          pbVar39 = pbVar27;
          iVar32 = local_a4;
          goto switchD_00e2a98c_caseD_3f50;
        case 0x3f37:
          pbVar29 = pbVar39;
          if (uVar19 < 0x10) goto LAB_00e2b78c;
LAB_00e2b7d8:
          uVar15 = (uint)uVar17;
          plVar30 = pplVar40[6];
          if (plVar30 != (long *)0x0) {
            *(uint *)(plVar30 + 2) = (uint)plVar41 & 0xff;
            *(int *)((long)plVar30 + 0x14) = (int)((ulong)plVar41 >> 8);
          }
          if (((*(byte *)((long)pplVar40 + 0x19) >> 1 & 1) != 0) &&
             ((*(byte *)(pplVar40 + 2) >> 2 & 1) != 0)) {
            local_6c = CONCAT22(local_6c._2_2_,(short)plVar41);
            plVar41 = (long *)crc32(*pplVar2,&local_6c,2);
            *pplVar2 = plVar41;
          }
          plVar41 = (long *)0x0;
          uVar16 = *(uint *)(pplVar40 + 3);
          uVar20 = 0;
          *(undefined4 *)(pplVar40 + 1) = 0x3f38;
          uVar14 = 0;
          pbVar27 = pbVar39;
          if ((uVar16 >> 10 & 1) == 0) goto LAB_00e2b850;
LAB_00e2b860:
          pbVar29 = pbVar27;
          uVar21 = (uint)uVar14;
          if (uVar15 != 0) {
            pbVar39 = pbVar27 + 1;
            plVar41 = (long *)(((ulong)*pbVar27 << (uVar14 & 0x3f)) + (long)plVar41);
            if ((uint)uVar14 < 8) {
              pbVar29 = pbVar39;
              uVar21 = (uint)(uVar14 + 8);
              if (uVar15 - 1 == 0) goto LAB_00e2c5cc;
              pbVar39 = pbVar27 + 2;
              uVar17 = (ulong)(uVar15 - 2);
              plVar41 = (long *)(((ulong)pbVar27[1] << (uVar14 + 8 & 0x3f)) + (long)plVar41);
            }
            else {
              uVar17 = (ulong)(uVar15 - 1);
            }
LAB_00e2b8ac:
            *(int *)((long)pplVar40 + 0x5c) = (int)plVar41;
            if (pplVar40[6] != (long *)0x0) {
              *(int *)(pplVar40[6] + 4) = (int)plVar41;
            }
            if (((uVar16 >> 9 & 1) == 0) || ((*(byte *)(pplVar40 + 2) >> 2 & 1) == 0)) {
              plVar41 = (long *)0x0;
              uVar20 = 0;
            }
            else {
              local_6c = CONCAT22(local_6c._2_2_,(short)plVar41);
              plVar30 = (long *)crc32(*pplVar2,&local_6c,2);
              plVar41 = (long *)0x0;
              uVar20 = 0;
              *pplVar2 = plVar30;
            }
            goto LAB_00e2b914;
          }
          goto LAB_00e2c5cc;
        case 0x3f38:
          uVar16 = *(uint *)(pplVar40 + 3);
          if ((uVar16 >> 10 & 1) != 0) {
            uVar14 = uVar20;
            pbVar27 = pbVar39;
            if (uVar19 < 0x10) goto LAB_00e2b860;
            goto LAB_00e2b8ac;
          }
LAB_00e2b850:
          if (pplVar40[6] != (long *)0x0) {
            pplVar40[6][3] = 0;
          }
LAB_00e2b914:
          *(undefined4 *)pplVar25 = 0x3f39;
          pbVar27 = pbVar39;
        case 0x3f39:
          uVar19 = *(uint *)(pplVar40 + 3);
          if ((uVar19 >> 10 & 1) == 0) {
LAB_00e2ba00:
            *(undefined4 *)((long)pplVar40 + 0x5c) = 0;
            *(undefined4 *)(pplVar40 + 1) = 0x3f3a;
switchD_00e2a98c_caseD_3f3a:
            uVar15 = (uint)uVar17;
            uVar19 = (uint)uVar20;
            if ((*(byte *)((long)pplVar40 + 0x19) >> 3 & 1) == 0) {
              if (pplVar40[6] != (long *)0x0) {
                pplVar40[6][5] = 0;
              }
LAB_00e2bacc:
              *(undefined4 *)((long)pplVar40 + 0x5c) = 0;
              *(undefined4 *)(pplVar40 + 1) = 0x3f3b;
switchD_00e2a98c_caseD_3f3b:
              uVar15 = (uint)uVar17;
              uVar19 = (uint)uVar20;
              if ((*(byte *)((long)pplVar40 + 0x19) >> 4 & 1) == 0) {
                if (pplVar40[6] != (long *)0x0) {
                  pplVar40[6][7] = 0;
                }
              }
              else {
                if (uVar15 == 0) goto LAB_00e2c51c;
                uVar14 = 0;
                do {
                  bVar8 = pbVar27[uVar14];
                  plVar30 = pplVar40[6];
                  if ((plVar30 != (long *)0x0) && (lVar23 = plVar30[7], lVar23 != 0)) {
                    uVar21 = *(uint *)((long)pplVar40 + 0x5c);
                    if (uVar21 < *(uint *)(plVar30 + 8)) {
                      *(uint *)((long)pplVar40 + 0x5c) = uVar21 + 1;
                      *(byte *)(lVar23 + (ulong)uVar21) = bVar8;
                    }
                  }
                  uVar14 = uVar14 + 1;
                } while ((bVar8 != 0) && (uVar14 < (uVar17 & 0xffffffff)));
                if (((*(byte *)((long)pplVar40 + 0x19) >> 1 & 1) != 0) &&
                   ((*(byte *)(pplVar40 + 2) >> 2 & 1) != 0)) {
                  plVar30 = (long *)crc32(*pplVar2,pbVar27,uVar14 & 0xffffffff);
                  *pplVar2 = plVar30;
                }
                pbVar27 = pbVar27 + uVar14;
                if (bVar8 != 0) goto LAB_00e2c50c;
                uVar17 = (uVar17 & 0xffffffff) - uVar14 & 0xffffffff;
              }
              *(undefined4 *)pplVar25 = 0x3f3c;
switchD_00e2a98c_caseD_3f3c:
              uVar21 = (uint)uVar20;
              pbVar29 = pbVar27;
              if ((*(uint *)(pplVar40 + 3) >> 9 & 1) != 0) {
                if (uVar21 < 0x10) {
                  iVar13 = (int)uVar17;
                  if (iVar13 == 0) {
LAB_00e2c5cc:
                    uVar19 = uVar21;
                    uVar15 = 0;
                    pbVar39 = pbVar29;
                    iVar32 = local_a4;
                    goto switchD_00e2a98c_caseD_3f50;
                  }
                  uVar19 = iVar13 - 1;
                  pbVar29 = pbVar27 + 1;
                  plVar41 = (long *)(((ulong)*pbVar27 << (uVar20 & 0x3f)) + (long)plVar41);
                  uVar14 = uVar20 + 8;
                  if (uVar21 < 8) {
                    uVar21 = (uint)uVar14;
                    if (uVar19 == 0) goto LAB_00e2c5cc;
                    uVar19 = iVar13 - 2;
                    pbVar29 = pbVar27 + 2;
                    plVar41 = (long *)(((ulong)pbVar27[1] << (uVar14 & 0x3f)) + (long)plVar41);
                    uVar14 = uVar20 + 0x10;
                  }
                  uVar17 = (ulong)uVar19;
                  uVar20 = uVar14 & 0xffffffff;
                }
                if (((*(byte *)(pplVar40 + 2) >> 2 & 1) != 0) &&
                   (plVar41 != (long *)(ulong)*(ushort *)pplVar2)) {
                  uVar22 = 0x3f51;
                  param_1[6] = (byte *)"header crc mismatch";
                  pbVar39 = pbVar29;
                  break;
                }
                plVar41 = (long *)0x0;
                uVar20 = 0;
              }
              plVar30 = pplVar40[6];
              if (plVar30 != (long *)0x0) {
                *(uint *)((long)plVar30 + 0x44) = *(uint *)(pplVar40 + 3) >> 9 & 1;
                *(undefined4 *)(plVar30 + 9) = 1;
              }
              plVar30 = (long *)crc32(0,0,0);
              uVar22 = 0x3f3f;
              param_1[0xc] = (byte *)plVar30;
              *pplVar2 = plVar30;
              pbVar39 = pbVar29;
              break;
            }
            if (uVar15 != 0) {
              uVar14 = 0;
              do {
                bVar8 = pbVar27[uVar14];
                plVar30 = pplVar40[6];
                if ((plVar30 != (long *)0x0) && (lVar23 = plVar30[5], lVar23 != 0)) {
                  uVar21 = *(uint *)((long)pplVar40 + 0x5c);
                  if (uVar21 < *(uint *)(plVar30 + 6)) {
                    *(uint *)((long)pplVar40 + 0x5c) = uVar21 + 1;
                    *(byte *)(lVar23 + (ulong)uVar21) = bVar8;
                  }
                }
                uVar14 = uVar14 + 1;
              } while ((bVar8 != 0) && (uVar14 < (uVar17 & 0xffffffff)));
              if (((*(byte *)((long)pplVar40 + 0x19) >> 1 & 1) != 0) &&
                 ((*(byte *)(pplVar40 + 2) >> 2 & 1) != 0)) {
                plVar30 = (long *)crc32(*pplVar2,pbVar27,uVar14 & 0xffffffff);
                *pplVar2 = plVar30;
              }
              pbVar27 = pbVar27 + uVar14;
              if (bVar8 == 0) {
                uVar17 = (uVar17 & 0xffffffff) - uVar14;
                goto LAB_00e2bacc;
              }
LAB_00e2c50c:
              uVar15 = uVar15 - (int)uVar14;
              pbVar39 = pbVar27;
              iVar32 = local_a4;
              goto switchD_00e2a98c_caseD_3f50;
            }
          }
          else {
            uVar21 = *(uint *)((long)pplVar40 + 0x5c);
            uVar16 = (uint)uVar17;
            uVar15 = uVar16;
            if (uVar21 <= uVar16) {
              uVar15 = uVar21;
            }
            if (uVar15 != 0) {
              plVar30 = pplVar40[6];
              if ((plVar30 != (long *)0x0) && (plVar30[3] != 0)) {
                uVar21 = *(int *)(plVar30 + 4) - uVar21;
                uVar19 = *(uint *)((long)plVar30 + 0x24) - uVar21;
                if (uVar21 + uVar15 <= *(uint *)((long)plVar30 + 0x24)) {
                  uVar19 = uVar15;
                }
                memcpy((void *)(plVar30[3] + (ulong)uVar21),pbVar27,(ulong)uVar19);
                uVar19 = *(uint *)(pplVar40 + 3);
              }
              if (((uVar19 >> 9 & 1) != 0) && ((*(byte *)(pplVar40 + 2) >> 2 & 1) != 0)) {
                plVar30 = (long *)crc32(*pplVar2,pbVar27,uVar15);
                *pplVar2 = plVar30;
              }
              uVar17 = (ulong)(uVar16 - uVar15);
              pbVar27 = pbVar27 + uVar15;
              uVar21 = *(int *)((long)pplVar40 + 0x5c) - uVar15;
              *(uint *)((long)pplVar40 + 0x5c) = uVar21;
            }
            uVar15 = (uint)uVar17;
            if (uVar21 == 0) goto LAB_00e2ba00;
          }
          goto LAB_00e2c51c;
        case 0x3f3a:
          goto switchD_00e2a98c_caseD_3f3a;
        case 0x3f3b:
          goto switchD_00e2a98c_caseD_3f3b;
        case 0x3f3c:
          goto switchD_00e2a98c_caseD_3f3c;
        case 0x3f3d:
          if (uVar19 < 0x20) {
            if (uVar15 != 0) {
              uVar16 = uVar15 - 1;
              pbVar27 = pbVar39 + 1;
              plVar41 = (long *)(((ulong)*pbVar39 << (uVar20 & 0x3f)) + (long)plVar41);
              if (0x17 < uVar19) {
LAB_00e2b3f8:
                uVar17 = (ulong)uVar16;
                goto LAB_00e2b400;
              }
              uVar21 = (uint)(uVar20 + 8);
              if (uVar16 != 0) {
                uVar16 = uVar15 - 2;
                pbVar27 = pbVar39 + 2;
                plVar41 = (long *)(((ulong)pbVar39[1] << (uVar20 + 8 & 0x3f)) + (long)plVar41);
                if (0xf < uVar19) goto LAB_00e2b3f8;
                uVar21 = (uint)(uVar20 + 0x10);
                if (uVar16 != 0) {
                  uVar16 = uVar15 - 3;
                  pbVar27 = pbVar39 + 3;
                  plVar41 = (long *)(((ulong)pbVar39[2] << (uVar20 + 0x10 & 0x3f)) + (long)plVar41);
                  if (7 < uVar19) goto LAB_00e2b3f8;
                  uVar21 = (uint)(uVar20 + 0x18);
                  if (uVar16 != 0) {
                    pbVar27 = pbVar39 + 4;
                    uVar17 = (ulong)(uVar15 - 4);
                    plVar41 = (long *)(((ulong)pbVar39[3] << (uVar20 + 0x18 & 0x3f)) + (long)plVar41
                                      );
                    goto LAB_00e2b400;
                  }
                }
              }
            }
            goto LAB_00e2c5e8;
          }
LAB_00e2b400:
          uVar19 = ((uint)plVar41 & 0xff00ff00) >> 8 | ((uint)plVar41 & 0xff00ff) << 8;
          plVar30 = (long *)(ulong)(uVar19 >> 0x10 | uVar19 << 0x10);
          uVar20 = 0;
          plVar41 = (long *)0x0;
          *pplVar2 = plVar30;
          param_1[0xc] = (byte *)plVar30;
          *(undefined4 *)pplVar25 = 0x3f3e;
        case 0x3f3e:
          if (*(int *)((long)pplVar40 + 0x14) != 0) {
            plVar30 = (long *)adler32(0,0,0);
            param_1[0xc] = (byte *)plVar30;
            *pplVar2 = plVar30;
            *(undefined4 *)pplVar25 = 0x3f3f;
switchD_00e2a98c_caseD_3f3f:
            uVar15 = (uint)uVar17;
            if (param_2 - 5U < 2) goto LAB_00e2c51c;
switchD_00e2a98c_caseD_3f40:
            uVar19 = (uint)uVar20;
            pbVar39 = pbVar27;
            if (*(int *)((long)pplVar40 + 0xc) == 0) {
              if (uVar19 < 3) {
                if ((int)uVar17 == 0) {
                  uVar15 = 0;
                  iVar28 = local_a4;
switchD_00e2a98c_caseD_3f51:
                  pbVar39 = pbVar27;
                  iVar32 = iVar28;
                  goto switchD_00e2a98c_caseD_3f50;
                }
                pbVar39 = pbVar27 + 1;
                uVar17 = (ulong)((int)uVar17 - 1);
                uVar19 = uVar19 + 8;
                plVar41 = (long *)(((ulong)*pbVar27 << (uVar20 & 0x3f)) + (long)plVar41);
              }
              uVar15 = (uint)uVar17;
              uVar22 = 0x3f41;
              *(uint *)((long)pplVar40 + 0xc) = (uint)plVar41 & 1;
              switch((uint)plVar41 >> 1 & 3) {
              case 1:
                pplVar40[0xe] = (long *)&DAT_0055ed40;
                pplVar40[0xf] = (long *)0x500000009;
                pplVar40[0xd] = (long *)&DAT_0055e540;
                *(undefined4 *)(pplVar40 + 1) = 0x3f47;
                if (param_2 == 6) {
                  plVar41 = (long *)((ulong)plVar41 >> 3);
                  uVar19 = uVar19 - 3;
                  iVar32 = local_a4;
                  goto switchD_00e2a98c_caseD_3f50;
                }
                goto LAB_00e2b54c;
              case 2:
                uVar22 = 0x3f44;
                break;
              case 3:
                uVar22 = 0x3f51;
                param_1[6] = (byte *)"invalid block type";
              }
              *(undefined4 *)pplVar25 = uVar22;
LAB_00e2b54c:
              plVar41 = (long *)((ulong)plVar41 >> 3);
              uVar20 = (ulong)(uVar19 - 3);
            }
            else {
              uVar22 = 0x3f4e;
              uVar20 = (ulong)(uVar19 & 0xfffffff8);
              plVar41 = (long *)((ulong)plVar41 >> (uVar19 & 7));
LAB_00e2b49c:
              *(undefined4 *)pplVar25 = uVar22;
            }
            goto LAB_00e2a95c;
          }
          *(uint *)(param_1 + 4) = uVar18;
          *param_1 = pbVar27;
          iVar13 = 2;
          *(int *)(param_1 + 1) = (int)uVar17;
          param_1[3] = local_80;
          pplVar40[10] = plVar41;
          *(int *)(pplVar40 + 0xb) = (int)uVar20;
          goto LAB_00e2a920;
        case 0x3f3f:
          goto switchD_00e2a98c_caseD_3f3f;
        case 0x3f40:
          goto switchD_00e2a98c_caseD_3f40;
        case 0x3f41:
          uVar21 = uVar19 & 0xfffffff8;
          uVar14 = (ulong)uVar21;
          plVar41 = (long *)((ulong)plVar41 >> (uVar19 & 7));
          if (uVar21 < 0x20) {
            uVar19 = uVar21;
            if (uVar15 == 0) goto LAB_00e2c5ac;
            uVar16 = uVar15 - 1;
            uVar24 = uVar14 + 8;
            pbVar27 = pbVar39 + 1;
            plVar41 = (long *)(((ulong)*pbVar39 << (uVar14 & 0x3f)) + (long)plVar41);
            if (uVar21 < 0x18) {
              uVar19 = (uint)uVar24;
              if (uVar16 == 0) goto LAB_00e2c5ac;
              uVar16 = uVar15 - 2;
              pbVar27 = pbVar39 + 2;
              uVar17 = uVar24 & 0x3f;
              uVar24 = uVar14 + 0x10;
              plVar41 = (long *)(((ulong)pbVar39[1] << uVar17) + (long)plVar41);
              if (uVar21 < 0x10) {
                uVar19 = (uint)uVar24;
                if (uVar16 == 0) goto LAB_00e2c5ac;
                uVar16 = uVar15 - 3;
                pbVar27 = pbVar39 + 3;
                uVar17 = uVar24 & 0x3f;
                uVar24 = uVar14 + 0x18;
                plVar41 = (long *)(((ulong)pbVar39[2] << uVar17) + (long)plVar41);
                if ((uVar20 & 0xfffffff8) == 0) {
                  uVar19 = (uint)uVar24;
                  if (uVar16 == 0) goto LAB_00e2c5ac;
                  uVar16 = uVar15 - 4;
                  pbVar27 = pbVar39 + 4;
                  uVar20 = uVar24 & 0x3f;
                  uVar24 = uVar14 + 0x20;
                  plVar41 = (long *)(((ulong)pbVar39[3] << uVar20) + (long)plVar41);
                }
              }
            }
            uVar17 = (ulong)uVar16;
            uVar20 = uVar24 & 0xffffffff;
          }
          else {
            uVar20 = (ulong)uVar21;
          }
          uVar15 = (uint)uVar17;
          if (((ulong)plVar41 >> 0x10 ^ 0xffff) == ((ulong)plVar41 & 0xffff)) {
            uVar20 = 0;
            uVar19 = (uint)plVar41;
            plVar41 = (long *)0x0;
            *(uint *)((long)pplVar40 + 0x5c) = uVar19 & 0xffff;
            *(undefined4 *)(pplVar40 + 1) = 0x3f42;
            if (param_2 != 6) goto switchD_00e2a98c_caseD_3f42;
            goto LAB_00e2c51c;
          }
          uVar22 = 0x3f51;
          param_1[6] = (byte *)"invalid stored block lengths";
          pbVar39 = pbVar27;
          break;
        case 0x3f42:
switchD_00e2a98c_caseD_3f42:
          *(undefined4 *)pplVar25 = 0x3f43;
        case 0x3f43:
          uVar15 = (uint)uVar17;
          uVar19 = *(uint *)((long)pplVar40 + 0x5c);
          if (uVar19 == 0) {
            uVar22 = 0x3f3f;
            pbVar39 = pbVar27;
            break;
          }
          uVar21 = uVar15;
          if (uVar19 <= uVar15) {
            uVar21 = uVar19;
          }
          uVar19 = uVar18;
          if (uVar21 <= uVar18) {
            uVar19 = uVar21;
          }
          uVar14 = (ulong)uVar19;
          if (uVar19 == 0) goto LAB_00e2c51c;
          memcpy(local_80,pbVar27,uVar14);
          uVar17 = (ulong)(uVar15 - uVar19);
          pbVar39 = pbVar27 + uVar14;
          uVar18 = uVar18 - uVar19;
          *(uint *)((long)pplVar40 + 0x5c) = *(int *)((long)pplVar40 + 0x5c) - uVar19;
          local_80 = local_80 + uVar14;
          goto LAB_00e2a95c;
        case 0x3f44:
          if (uVar19 < 0xe) {
            if (uVar15 != 0) {
              uVar16 = uVar15 - 1;
              pbVar29 = pbVar39 + 1;
              plVar41 = (long *)(((ulong)*pbVar39 << (uVar20 & 0x3f)) + (long)plVar41);
              uVar21 = (uint)(uVar20 + 8);
              if (uVar19 < 6) {
                if (uVar16 == 0) goto LAB_00e2c5cc;
                uVar16 = uVar15 - 2;
                pbVar29 = pbVar39 + 2;
                plVar41 = (long *)(((ulong)pbVar39[1] << (uVar20 + 8 & 0x3f)) + (long)plVar41);
                uVar21 = uVar19 + 0x10;
              }
              uVar19 = uVar21;
              uVar17 = (ulong)uVar16;
              goto LAB_00e2acb0;
            }
            goto LAB_00e2c5cc;
          }
LAB_00e2acb0:
          uVar16 = (uint)plVar41;
          uVar21 = uVar16 >> 5 & 0x1f;
          plVar41 = (long *)((ulong)plVar41 >> 0xe);
          uVar15 = (uVar16 >> 10 & 0xf) + 4;
          uVar20 = (ulong)(uVar19 - 0xe);
          *(uint *)((long)pplVar40 + 0x84) = (uVar16 & 0x1f) + 0x101;
          *(uint *)(pplVar40 + 0x11) = uVar21 + 1;
          *(uint *)(pplVar40 + 0x10) = uVar15;
          if (((uVar16 & 0x1f) < 0x1e) && (uVar21 < 0x1e)) {
            uVar14 = 0;
            *(undefined4 *)((long)pplVar40 + 0x8c) = 0;
            *(undefined4 *)(pplVar40 + 1) = 0x3f45;
            goto LAB_00e2ad4c;
          }
          uVar22 = 0x3f51;
          param_1[6] = (byte *)"too many length or distance symbols";
          pbVar39 = pbVar29;
          break;
        case 0x3f45:
          uVar15 = *(uint *)(pplVar40 + 0x10);
          uVar14 = (ulong)*(uint *)((long)pplVar40 + 0x8c);
          if (*(uint *)((long)pplVar40 + 0x8c) < uVar15) {
LAB_00e2ad4c:
            do {
              uVar19 = (uint)uVar20;
              pbVar39 = pbVar29;
              if (uVar19 < 3) {
                if ((int)uVar17 == 0) {
                  uVar15 = 0;
                  iVar32 = local_a4;
                  goto switchD_00e2a98c_caseD_3f50;
                }
                pbVar39 = pbVar29 + 1;
                uVar17 = (ulong)((int)uVar17 - 1);
                uVar19 = uVar19 + 8;
                plVar41 = (long *)(((ulong)*pbVar29 << (uVar20 & 0x3f)) + (long)plVar41);
              }
              uVar9 = *(ushort *)(&DAT_0055e51a + uVar14 * 2);
              uVar14 = uVar14 + 1;
              uVar12 = (ushort)plVar41;
              plVar41 = (long *)((ulong)plVar41 >> 3);
              uVar20 = (ulong)(uVar19 - 3);
              *(uint *)((long)pplVar40 + 0x8c) = (uint)uVar14;
              *(ushort *)((long)pplVar40 + (ulong)uVar9 * 2 + 0x98) = uVar12 & 7;
              pbVar29 = pbVar39;
            } while ((uint)uVar14 < uVar15);
          }
          if ((uint)uVar14 < 0x13) {
            uVar14 = uVar14 & 0xffffffff;
            do {
              lVar23 = uVar14 * 2;
              uVar14 = uVar14 + 1;
              *(undefined2 *)
               ((long)pplVar40 + (ulong)*(ushort *)(&DAT_0055e51a + lVar23) * 2 + 0x98) = 0;
            } while ((int)uVar14 != 0x13);
            *(undefined4 *)((long)pplVar40 + 0x8c) = 0x13;
          }
          *(undefined4 *)(pplVar40 + 0xf) = 7;
          pplVar40[0x12] = (long *)pplVar3;
          pplVar40[0xd] = (long *)pplVar3;
          local_a4 = inflate_table(0,pplVar40 + 0x13,0x13,pplVar5,pplVar40 + 0xf,pplVar4);
          if (local_a4 == 0) {
            uVar21 = 0;
            local_a4 = 0;
            *(undefined4 *)((long)pplVar40 + 0x8c) = 0;
            *(undefined4 *)(pplVar40 + 1) = 0x3f46;
            goto LAB_00e2b0b8;
          }
          uVar22 = 0x3f51;
          param_1[6] = (byte *)"invalid code lengths set";
          break;
        case 0x3f46:
          uVar21 = *(uint *)((long)pplVar40 + 0x8c);
LAB_00e2b0b8:
          iVar13 = *(int *)((long)pplVar40 + 0x84);
          uVar16 = *(int *)(pplVar40 + 0x11) + iVar13;
          if (uVar21 < uVar16) {
            plVar30 = pplVar40[0xd];
            uVar31 = ~(-1 << (ulong)(*(uint *)(pplVar40 + 0xf) & 0x1f));
            do {
              uVar24 = (ulong)(uVar31 & (uint)plVar41);
              bVar8 = *(byte *)((long)plVar30 + uVar24 * 4 + 1);
              uVar14 = (ulong)bVar8;
              uVar19 = (uint)uVar20;
              if (uVar19 < bVar8) {
                uVar37 = uVar17 & 0xffffffff;
                pbVar27 = pbVar39;
                do {
                  if ((int)uVar37 == 0) goto LAB_00e2c4e8;
                  pbVar29 = pbVar27 + 1;
                  uVar37 = (ulong)((int)uVar37 - 1);
                  uVar14 = uVar20 & 0x3f;
                  uVar20 = uVar20 + 8;
                  plVar41 = (long *)(((ulong)*pbVar27 << uVar14) + (long)plVar41);
                  uVar24 = (ulong)(uVar31 & (uint)plVar41);
                  uVar14 = (ulong)*(byte *)((long)plVar30 + uVar24 * 4 + 1);
                  pbVar27 = pbVar29;
                } while (uVar20 < uVar14);
                uVar20 = uVar20 & 0xffffffff;
                uVar17 = uVar37;
                uVar37 = uVar14;
                pbVar39 = pbVar29;
              }
              else {
                uVar37 = (ulong)(uint)bVar8;
              }
              uVar9 = *(ushort *)((long)plVar30 + uVar24 * 4 + 2);
              iVar32 = (int)uVar14;
              uVar19 = (uint)uVar20;
              if (0xf < uVar9) {
                if (uVar9 == 0x10) {
                  pbVar27 = pbVar39;
                  if (uVar19 < iVar32 + 2U) {
                    do {
                      uVar15 = (uint)uVar17;
                      if (uVar15 == 0) goto LAB_00e2c51c;
                      pbVar39 = pbVar27 + 1;
                      uVar17 = (ulong)(uVar15 - 1);
                      uVar14 = uVar20 & 0x3f;
                      uVar20 = uVar20 + 8;
                      plVar41 = (long *)(((ulong)*pbVar27 << uVar14) + (long)plVar41);
                      pbVar27 = pbVar39;
                    } while (uVar20 < iVar32 + 2U);
                  }
                  plVar41 = (long *)((ulong)plVar41 >> (uVar37 & 0x3f));
                  uVar19 = (int)uVar20 - iVar32;
                  uVar20 = (ulong)uVar19;
                  if (uVar21 != 0) {
                    uVar20 = (ulong)(uVar19 - 2);
                    uVar15 = ((uint)plVar41 & 3) + 3;
                    plVar41 = (long *)((ulong)plVar41 >> 2);
                    uVar35 = *(undefined2 *)((long)pplVar40 + (ulong)(uVar21 - 1) * 2 + 0x98);
                    goto LAB_00e2b280;
                  }
                }
                else {
                  if (uVar9 == 0x11) {
                    pbVar27 = pbVar39;
                    if (uVar19 < iVar32 + 3U) {
                      do {
                        uVar15 = (uint)uVar17;
                        if (uVar15 == 0) goto LAB_00e2c518;
                        pbVar27 = pbVar39 + 1;
                        uVar17 = (ulong)(uVar15 - 1);
                        uVar14 = uVar20 & 0x3f;
                        uVar20 = uVar20 + 8;
                        plVar41 = (long *)(((ulong)*pbVar39 << uVar14) + (long)plVar41);
                        pbVar39 = pbVar27;
                      } while (uVar20 < iVar32 + 3U);
                      uVar19 = (uint)uVar20;
                    }
                    uVar20 = (ulong)plVar41 >> (uVar37 & 0x3f);
                    uVar35 = 0;
                    uVar15 = ((uint)uVar20 & 7) + 3;
                    plVar41 = (long *)(uVar20 >> 3);
                    uVar20 = (ulong)((uVar19 - iVar32) - 3);
                    pbVar39 = pbVar27;
                  }
                  else {
                    pbVar27 = pbVar39;
                    if (uVar19 < iVar32 + 7U) {
                      do {
                        uVar15 = (uint)uVar17;
                        if (uVar15 == 0) goto LAB_00e2c518;
                        pbVar27 = pbVar39 + 1;
                        uVar17 = (ulong)(uVar15 - 1);
                        uVar14 = uVar20 & 0x3f;
                        uVar20 = uVar20 + 8;
                        plVar41 = (long *)(((ulong)*pbVar39 << uVar14) + (long)plVar41);
                        pbVar39 = pbVar27;
                      } while (uVar20 < iVar32 + 7U);
                      uVar19 = (uint)uVar20;
                    }
                    uVar20 = (ulong)plVar41 >> (uVar37 & 0x3f);
                    uVar35 = 0;
                    uVar15 = ((uint)uVar20 & 0x7f) + 0xb;
                    plVar41 = (long *)(uVar20 >> 7);
                    uVar20 = (ulong)((uVar19 - iVar32) - 7);
                    pbVar39 = pbVar27;
                  }
LAB_00e2b280:
                  if (uVar15 + uVar21 <= uVar16) {
                    if ((uVar15 < 0x10) || (CARRY4(uVar21,uVar15 - 1))) {
LAB_00e2b370:
                      do {
                        uVar14 = (ulong)uVar21;
                        uVar21 = uVar21 + 1;
                        uVar15 = uVar15 - 1;
                        *(undefined2 *)((long)pplVar40 + uVar14 * 2 + 0x98) = uVar35;
                      } while (uVar15 != 0);
                    }
                    else {
                      uVar19 = uVar15 & 0xf0;
                      uVar42 = CONCAT26(uVar35,CONCAT24(uVar35,CONCAT22(uVar35,uVar35)));
                      uVar43 = CONCAT26(uVar35,CONCAT24(uVar35,CONCAT22(uVar35,uVar35)));
                      *(undefined8 *)((long)pplVar40 + (ulong)uVar21 * 2 + 0xa0) = uVar43;
                      *(undefined8 *)((long)pplVar40 + (ulong)uVar21 * 2 + 0x98) = uVar42;
                      *(undefined8 *)((long)pplVar40 + (ulong)uVar21 * 2 + 0xb0) = uVar43;
                      *(undefined8 *)((long)pplVar40 + (ulong)uVar21 * 2 + 0xa8) = uVar42;
                      if (uVar19 != 0x10) {
                        uVar1 = uVar21 + 0x10;
                        *(undefined8 *)((long)pplVar40 + (ulong)uVar1 * 2 + 0xa0) = uVar43;
                        *(undefined8 *)((long)pplVar40 + (ulong)uVar1 * 2 + 0x98) = uVar42;
                        *(undefined8 *)((long)pplVar40 + (ulong)uVar1 * 2 + 0xb0) = uVar43;
                        *(undefined8 *)((long)pplVar40 + (ulong)uVar1 * 2 + 0xa8) = uVar42;
                        if (uVar19 != 0x20) {
                          uVar1 = uVar21 + 0x20;
                          *(undefined8 *)((long)pplVar40 + (ulong)uVar1 * 2 + 0xa0) = uVar43;
                          *(undefined8 *)((long)pplVar40 + (ulong)uVar1 * 2 + 0x98) = uVar42;
                          *(undefined8 *)((long)pplVar40 + (ulong)uVar1 * 2 + 0xb0) = uVar43;
                          *(undefined8 *)((long)pplVar40 + (ulong)uVar1 * 2 + 0xa8) = uVar42;
                          if (uVar19 != 0x30) {
                            uVar1 = uVar21 + 0x30;
                            *(undefined8 *)((long)pplVar40 + (ulong)uVar1 * 2 + 0xa0) = uVar43;
                            *(undefined8 *)((long)pplVar40 + (ulong)uVar1 * 2 + 0x98) = uVar42;
                            *(undefined8 *)((long)pplVar40 + (ulong)uVar1 * 2 + 0xb0) = uVar43;
                            *(undefined8 *)((long)pplVar40 + (ulong)uVar1 * 2 + 0xa8) = uVar42;
                            if (uVar19 != 0x40) {
                              uVar1 = uVar21 + 0x40;
                              *(undefined8 *)((long)pplVar40 + (ulong)uVar1 * 2 + 0xa0) = uVar43;
                              *(undefined8 *)((long)pplVar40 + (ulong)uVar1 * 2 + 0x98) = uVar42;
                              *(undefined8 *)((long)pplVar40 + (ulong)uVar1 * 2 + 0xb0) = uVar43;
                              *(undefined8 *)((long)pplVar40 + (ulong)uVar1 * 2 + 0xa8) = uVar42;
                              if (uVar19 != 0x50) {
                                uVar1 = uVar21 + 0x50;
                                *(undefined8 *)((long)pplVar40 + (ulong)uVar1 * 2 + 0xa0) = uVar43;
                                *(undefined8 *)((long)pplVar40 + (ulong)uVar1 * 2 + 0x98) = uVar42;
                                *(undefined8 *)((long)pplVar40 + (ulong)uVar1 * 2 + 0xb0) = uVar43;
                                *(undefined8 *)((long)pplVar40 + (ulong)uVar1 * 2 + 0xa8) = uVar42;
                                if (uVar19 != 0x60) {
                                  uVar1 = uVar21 + 0x60;
                                  *(undefined8 *)((long)pplVar40 + (ulong)uVar1 * 2 + 0xa0) = uVar43
                                  ;
                                  *(undefined8 *)((long)pplVar40 + (ulong)uVar1 * 2 + 0x98) = uVar42
                                  ;
                                  *(undefined8 *)((long)pplVar40 + (ulong)uVar1 * 2 + 0xb0) = uVar43
                                  ;
                                  *(undefined8 *)((long)pplVar40 + (ulong)uVar1 * 2 + 0xa8) = uVar42
                                  ;
                                  if (uVar19 != 0x70) {
                                    uVar1 = uVar21 + 0x70;
                                    *(undefined8 *)((long)pplVar40 + (ulong)uVar1 * 2 + 0xa0) =
                                         uVar43;
                                    *(undefined8 *)((long)pplVar40 + (ulong)uVar1 * 2 + 0x98) =
                                         uVar42;
                                    *(undefined8 *)((long)pplVar40 + (ulong)uVar1 * 2 + 0xb0) =
                                         uVar43;
                                    *(undefined8 *)((long)pplVar40 + (ulong)uVar1 * 2 + 0xa8) =
                                         uVar42;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      uVar21 = uVar21 + uVar19;
                      if (uVar15 != uVar19) {
                        uVar15 = uVar15 & 0xf;
                        goto LAB_00e2b370;
                      }
                    }
                    *(uint *)((long)pplVar40 + 0x8c) = uVar21;
                    goto LAB_00e2b38c;
                  }
                }
                uVar22 = 0x3f51;
                param_1[6] = (byte *)"invalid bit length repeat";
                goto LAB_00e2a958;
              }
              plVar41 = (long *)((ulong)plVar41 >> (uVar37 & 0x3f));
              uVar20 = (ulong)(uVar19 - iVar32);
              *(uint *)((long)pplVar40 + 0x8c) = uVar21 + 1;
              *(ushort *)((long)pplVar40 + (ulong)uVar21 * 2 + 0x98) = uVar9;
              uVar21 = uVar21 + 1;
LAB_00e2b38c:
            } while (uVar21 < uVar16);
          }
          uVar15 = (uint)uVar17;
          if (*(short *)(pplVar40 + 0x53) != 0) {
            pplVar40[0x12] = (long *)pplVar3;
            pplVar40[0xd] = (long *)pplVar3;
            *(undefined4 *)(pplVar40 + 0xf) = 9;
            local_a4 = inflate_table(1,pplVar40 + 0x13,iVar13,pplVar5,pplVar40 + 0xf,pplVar4);
            if (local_a4 == 0) {
              pplVar40[0xe] = pplVar40[0x12];
              *(undefined4 *)((long)pplVar40 + 0x7c) = 6;
              local_a4 = inflate_table(2,(long)pplVar40 +
                                         (ulong)*(uint *)((long)pplVar40 + 0x84) * 2 + 0x98,
                                       *(undefined4 *)(pplVar40 + 0x11),pplVar5,
                                       (long)pplVar40 + 0x7c,pplVar4);
              if (local_a4 == 0) {
                local_a4 = 0;
                *(undefined4 *)pplVar25 = 0x3f47;
                pbVar27 = pbVar39;
                if (param_2 != 6) goto switchD_00e2a98c_caseD_3f47;
                goto LAB_00e2c51c;
              }
              pcVar26 = "invalid distances set";
            }
            else {
              pcVar26 = "invalid literal/lengths set";
            }
            param_1[6] = (byte *)pcVar26;
            *(undefined4 *)pplVar25 = 0x3f51;
            goto LAB_00e2a95c;
          }
          uVar22 = 0x3f51;
          param_1[6] = (byte *)"invalid code -- missing end-of-block";
          break;
        case 0x3f47:
switchD_00e2a98c_caseD_3f47:
          *(undefined4 *)pplVar25 = 0x3f48;
        case 0x3f48:
          uVar19 = (uint)uVar20;
          if (((uint)uVar17 < 6) || (uVar18 < 0x102)) {
            plVar30 = pplVar40[0xd];
            *(undefined4 *)((long)pplVar40 + 0x1bec) = 0;
            uVar15 = -1 << (ulong)(*(uint *)(pplVar40 + 0xf) & 0x1f);
            uVar24 = (ulong)((uint)plVar41 & (uVar15 ^ 0xffffffff));
            bVar8 = *(byte *)((long)plVar30 + uVar24 * 4 + 1);
            uVar14 = (ulong)bVar8;
            if (uVar19 < bVar8) {
              uVar37 = uVar17 & 0xffffffff;
              pbVar27 = pbVar39;
              do {
                if ((int)uVar37 == 0) goto LAB_00e2c4e8;
                pbVar29 = pbVar27 + 1;
                uVar37 = (ulong)((int)uVar37 - 1);
                uVar14 = uVar20 & 0x3f;
                uVar20 = uVar20 + 8;
                plVar41 = (long *)(((ulong)*pbVar27 << uVar14) + (long)plVar41);
                uVar24 = (ulong)(~uVar15 & (uint)plVar41);
                uVar14 = (ulong)*(byte *)((long)plVar30 + uVar24 * 4 + 1);
                pbVar27 = pbVar29;
              } while (uVar20 < uVar14);
              uVar20 = uVar20 & 0xffffffff;
              uVar17 = uVar37;
              uVar37 = uVar14;
              pbVar39 = pbVar29;
            }
            else {
              uVar37 = (ulong)(uint)bVar8;
            }
            uVar19 = (uint)uVar20;
            pbVar27 = (byte *)((long)plVar30 + uVar24 * 4);
            bVar8 = *pbVar27;
            uVar9 = *(ushort *)(pbVar27 + 2);
            uVar15 = (uint)uVar14;
            if ((bVar8 == 0) || ((bVar8 & 0xf0) != 0)) {
              uVar21 = 0;
            }
            else {
              uVar21 = -1 << (ulong)(uVar15 + bVar8 & 0x1f);
              uVar36 = (ulong)((((uint)plVar41 & (uVar21 ^ 0xffffffff)) >> (ulong)(uVar15 & 0x1f)) +
                              (uint)uVar9);
              bVar8 = *(byte *)((long)plVar30 + uVar36 * 4 + 1);
              uVar33 = (ulong)bVar8;
              uVar24 = uVar17;
              pbVar27 = pbVar39;
              if (uVar19 < uVar15 + bVar8) {
                uVar24 = uVar17 & 0xffffffff;
                pbVar29 = pbVar39;
                do {
                  if ((int)uVar24 == 0) goto LAB_00e2c4e8;
                  pbVar27 = pbVar29 + 1;
                  uVar24 = (ulong)((int)uVar24 - 1);
                  uVar33 = uVar20 & 0x3f;
                  uVar20 = uVar20 + 8;
                  plVar41 = (long *)(((ulong)*pbVar29 << uVar33) + (long)plVar41);
                  uVar36 = (ulong)((((uint)plVar41 & ~uVar21) >> (ulong)(uVar15 & 0x1f)) +
                                  (uint)uVar9);
                  uVar33 = (ulong)*(byte *)((long)plVar30 + uVar36 * 4 + 1);
                  pbVar29 = pbVar27;
                } while (uVar20 < uVar14 + uVar33);
                uVar19 = (uint)uVar20;
              }
              pbVar39 = (byte *)((long)plVar30 + uVar36 * 4);
              plVar41 = (long *)((ulong)plVar41 >> (uVar37 & 0x3f));
              uVar19 = uVar19 - uVar15;
              uVar9 = *(ushort *)(pbVar39 + 2);
              bVar8 = *pbVar39;
              uVar17 = uVar24;
              uVar37 = uVar33;
              pbVar39 = pbVar27;
              uVar21 = uVar15;
              uVar15 = (uint)uVar33;
            }
            plVar41 = (long *)((ulong)plVar41 >> (uVar37 & 0x3f));
            uVar20 = (ulong)(uVar19 - uVar15);
            *(uint *)((long)pplVar40 + 0x5c) = (uint)uVar9;
            *(uint *)((long)pplVar40 + 0x1bec) = uVar21 + uVar15;
            if (bVar8 == 0) {
              uVar22 = 0x3f4d;
              break;
            }
            if ((bVar8 >> 5 & 1) != 0) {
              *(undefined4 *)((long)pplVar40 + 0x1bec) = 0xffffffff;
              *(undefined4 *)(pplVar40 + 1) = 0x3f3f;
              goto LAB_00e2a95c;
            }
            if ((bVar8 >> 6 & 1) != 0) {
              uVar22 = 0x3f51;
              param_1[6] = (byte *)"invalid literal/length code";
              break;
            }
            uVar15 = bVar8 & 0xf;
            *(uint *)((long)pplVar40 + 100) = uVar15;
            *(undefined4 *)(pplVar40 + 1) = 0x3f49;
            if ((bVar8 & 0xf) == 0) {
LAB_00e2c07c:
              iVar13 = *(int *)((long)pplVar40 + 0x5c);
            }
            else {
LAB_00e2ad80:
              uVar19 = (uint)uVar20;
              if (uVar19 < uVar15) {
                uVar14 = uVar17 & 0xffffffff;
                pbVar29 = pbVar39;
                do {
                  if ((int)uVar14 == 0) goto LAB_00e2c4e8;
                  pbVar27 = pbVar29 + 1;
                  uVar14 = (ulong)((int)uVar14 - 1);
                  uVar24 = uVar20 & 0x3f;
                  uVar21 = (int)uVar20 + 8;
                  uVar20 = (ulong)uVar21;
                  plVar41 = (long *)(((ulong)*pbVar29 << uVar24) + (long)plVar41);
                  pbVar29 = pbVar27;
                } while (uVar21 < uVar15);
              }
              else {
                uVar14 = uVar17 & 0xffffffff;
                pbVar27 = pbVar39;
                uVar21 = uVar19;
              }
              uVar17 = uVar14;
              uVar20 = (ulong)(uVar21 - uVar15);
              iVar13 = *(int *)((long)pplVar40 + 0x5c) +
                       ((uint)plVar41 & (-1 << (ulong)(uVar15 & 0x1f) ^ 0xffffffffU));
              plVar41 = (long *)((ulong)plVar41 >> ((ulong)uVar15 & 0x3f));
              *(int *)((long)pplVar40 + 0x5c) = iVar13;
              *(uint *)((long)pplVar40 + 0x1bec) = *(int *)((long)pplVar40 + 0x1bec) + uVar15;
              pbVar39 = pbVar27;
            }
            *(int *)(pplVar40 + 0x37e) = iVar13;
            *(undefined4 *)(pplVar40 + 1) = 0x3f4a;
            uVar14 = uVar17;
            pbVar27 = pbVar39;
switchD_00e2a98c_caseD_3f4a:
            plVar30 = pplVar40[0xe];
            uVar15 = -1 << (ulong)(*(uint *)((long)pplVar40 + 0x7c) & 0x1f);
            uVar17 = (ulong)((uint)plVar41 & (uVar15 ^ 0xffffffff));
            bVar8 = *(byte *)((long)plVar30 + uVar17 * 4 + 1);
            uVar24 = (ulong)bVar8;
            uVar19 = (uint)uVar20;
            if (uVar19 < bVar8) {
              uVar37 = uVar14 & 0xffffffff;
              pbVar29 = pbVar27;
              do {
                uVar17 = uVar14;
                pbVar39 = pbVar27;
                if ((int)uVar37 == 0) goto LAB_00e2c4e8;
                pbVar39 = pbVar29 + 1;
                uVar37 = (ulong)((int)uVar37 - 1);
                uVar17 = uVar20 & 0x3f;
                uVar20 = uVar20 + 8;
                plVar41 = (long *)(((ulong)*pbVar29 << uVar17) + (long)plVar41);
                uVar17 = (ulong)(~uVar15 & (uint)plVar41);
                uVar24 = (ulong)*(byte *)((long)plVar30 + uVar17 * 4 + 1);
                pbVar29 = pbVar39;
              } while (uVar20 < uVar24);
              uVar20 = uVar20 & 0xffffffff;
              uVar14 = uVar37;
              uVar37 = uVar24;
              pbVar27 = pbVar39;
            }
            else {
              uVar37 = (ulong)(uint)bVar8;
            }
            uVar15 = (uint)uVar24;
            uVar19 = (uint)uVar20;
            pbVar39 = (byte *)((long)plVar30 + uVar17 * 4);
            bVar8 = *pbVar39;
            uVar9 = *(ushort *)(pbVar39 + 2);
            uVar17 = uVar14;
            pbVar39 = pbVar27;
            if ((bVar8 & 0xf0) == 0) {
              uVar21 = -1 << (ulong)(uVar15 + bVar8 & 0x1f);
              uVar36 = (ulong)((((uint)plVar41 & (uVar21 ^ 0xffffffff)) >> (ulong)(uVar15 & 0x1f)) +
                              (uint)uVar9);
              bVar8 = *(byte *)((long)plVar30 + uVar36 * 4 + 1);
              uVar33 = (ulong)bVar8;
              if (uVar19 < uVar15 + bVar8) {
                uVar17 = uVar14 & 0xffffffff;
                pbVar29 = pbVar27;
                do {
                  iVar13 = (int)uVar17;
                  uVar17 = uVar14;
                  pbVar39 = pbVar27;
                  if (iVar13 == 0) goto LAB_00e2c4e8;
                  pbVar39 = pbVar29 + 1;
                  uVar17 = (ulong)(iVar13 - 1);
                  uVar33 = uVar20 & 0x3f;
                  uVar20 = uVar20 + 8;
                  plVar41 = (long *)(((ulong)*pbVar29 << uVar33) + (long)plVar41);
                  uVar36 = (ulong)((((uint)plVar41 & ~uVar21) >> (ulong)(uVar15 & 0x1f)) +
                                  (uint)uVar9);
                  uVar33 = (ulong)*(byte *)((long)plVar30 + uVar36 * 4 + 1);
                  pbVar29 = pbVar39;
                } while (uVar20 < uVar24 + uVar33);
                uVar19 = (uint)uVar20;
              }
              pbVar27 = (byte *)((long)plVar30 + uVar36 * 4);
              plVar41 = (long *)((ulong)plVar41 >> (uVar37 & 0x3f));
              uVar19 = uVar19 - uVar15;
              uVar9 = *(ushort *)(pbVar27 + 2);
              bVar8 = *pbVar27;
              iVar13 = *(int *)((long)pplVar40 + 0x1bec) + uVar15;
              uVar15 = (uint)uVar33;
            }
            else {
              iVar13 = *(int *)((long)pplVar40 + 0x1bec);
              uVar33 = uVar37;
            }
            plVar41 = (long *)((ulong)plVar41 >> (uVar33 & 0x3f));
            uVar20 = (ulong)(uVar19 - uVar15);
            *(uint *)((long)pplVar40 + 0x1bec) = iVar13 + uVar15;
            if ((bVar8 >> 6 & 1) != 0) {
              uVar22 = 0x3f51;
              param_1[6] = (byte *)"invalid distance code";
              break;
            }
            uVar15 = bVar8 & 0xf;
            *(uint *)(pplVar40 + 0xc) = (uint)uVar9;
            *(uint *)((long)pplVar40 + 100) = uVar15;
            *(undefined4 *)(pplVar40 + 1) = 0x3f4b;
LAB_00e2c1ec:
            uVar19 = (uint)uVar20;
            pbVar27 = pbVar39;
            if (uVar15 != 0) {
              if (uVar19 < uVar15) {
                uVar14 = uVar17 & 0xffffffff;
                pbVar29 = pbVar39;
                do {
                  if ((int)uVar14 == 0) goto LAB_00e2c4e8;
                  pbVar27 = pbVar29 + 1;
                  uVar14 = (ulong)((int)uVar14 - 1);
                  uVar24 = uVar20 & 0x3f;
                  uVar21 = (int)uVar20 + 8;
                  uVar20 = (ulong)uVar21;
                  plVar41 = (long *)(((ulong)*pbVar29 << uVar24) + (long)plVar41);
                  pbVar29 = pbVar27;
                } while (uVar21 < uVar15);
              }
              else {
                uVar14 = uVar17 & 0xffffffff;
                uVar21 = uVar19;
              }
              uVar17 = uVar14;
              uVar19 = (uint)plVar41;
              uVar20 = (ulong)(uVar21 - uVar15);
              plVar41 = (long *)((ulong)plVar41 >> ((ulong)uVar15 & 0x3f));
              *(uint *)(pplVar40 + 0xc) =
                   *(int *)(pplVar40 + 0xc) +
                   (uVar19 & (-1 << (ulong)(uVar15 & 0x1f) ^ 0xffffffffU));
              *(uint *)((long)pplVar40 + 0x1bec) = *(int *)((long)pplVar40 + 0x1bec) + uVar15;
            }
            *(undefined4 *)pplVar25 = 0x3f4c;
            pbVar39 = pbVar27;
switchD_00e2a98c_caseD_3f4c:
            uVar15 = (uint)uVar17;
            pbVar27 = pbVar39;
            if (uVar18 != 0) {
              uVar19 = *(uint *)(pplVar40 + 0xc);
              if (local_94 - uVar18 < uVar19) {
                uVar19 = uVar19 - (local_94 - uVar18);
                if ((*(uint *)(pplVar40 + 8) < uVar19) && (*(int *)(pplVar40 + 0x37d) != 0)) {
                  uVar22 = 0x3f51;
                  param_1[6] = (byte *)"invalid distance too far back";
                  break;
                }
                uVar21 = *(uint *)((long)pplVar40 + 0x44);
                uVar15 = uVar19 - uVar21;
                if (uVar19 < uVar21 || uVar15 == 0) {
                  uVar21 = uVar21 - uVar19;
                }
                else {
                  uVar21 = *(int *)((long)pplVar40 + 0x3c) - uVar15;
                  uVar19 = uVar15;
                }
                uVar15 = *(uint *)((long)pplVar40 + 0x5c);
                pbVar27 = (byte *)((long)pplVar40[9] + (ulong)uVar21);
                uVar21 = uVar15;
                if (uVar19 <= uVar15) {
                  uVar21 = uVar19;
                }
              }
              else {
                uVar15 = *(uint *)((long)pplVar40 + 0x5c);
                pbVar27 = local_80 + -(ulong)uVar19;
                uVar21 = uVar15;
              }
              uVar19 = uVar18;
              if (uVar21 <= uVar18) {
                uVar19 = uVar21;
              }
              uVar14 = (ulong)(uVar19 - 1);
              *(uint *)((long)pplVar40 + 0x5c) = uVar15 - uVar19;
              uVar15 = uVar19;
              if ((uVar19 - 1 < 0x1f) ||
                 ((local_80 < pbVar27 + uVar14 + 1 && (pbVar27 < local_80 + uVar14 + 1)))) {
LAB_00e2c364:
                do {
                  uVar15 = uVar15 - 1;
                  pbVar29 = local_80 + 1;
                  *local_80 = *pbVar27;
                  local_80 = pbVar29;
                  pbVar27 = pbVar27 + 1;
                } while (uVar15 != 0);
              }
              else {
                uVar37 = uVar14 + 1 & 0x1ffffffe0;
                pbVar29 = local_80 + uVar37;
                puVar34 = (undefined8 *)(pbVar27 + 0x10);
                puVar38 = (undefined8 *)(local_80 + 0x10);
                uVar24 = uVar37;
                do {
                  puVar11 = puVar34 + -1;
                  uVar42 = puVar34[-2];
                  uVar44 = puVar34[1];
                  uVar43 = *puVar34;
                  puVar34 = puVar34 + 4;
                  uVar24 = uVar24 - 0x20;
                  puVar38[-1] = *puVar11;
                  puVar38[-2] = uVar42;
                  puVar38[1] = uVar44;
                  *puVar38 = uVar43;
                  puVar38 = puVar38 + 4;
                } while (uVar24 != 0);
                local_80 = pbVar29;
                pbVar27 = pbVar27 + uVar37;
                uVar15 = uVar19 - (int)uVar37;
                if (uVar14 + 1 != uVar37) goto LAB_00e2c364;
              }
              uVar18 = uVar18 - uVar19;
              local_80 = pbVar29;
              if (*(int *)((long)pplVar40 + 0x5c) != 0) goto LAB_00e2a95c;
              uVar22 = 0x3f48;
              break;
            }
            goto LAB_00e2c51c;
          }
          *(uint *)(param_1 + 4) = uVar18;
          *param_1 = pbVar39;
          param_1[3] = local_80;
          *(uint *)(param_1 + 1) = (uint)uVar17;
          pplVar40[10] = plVar41;
          *(uint *)(pplVar40 + 0xb) = uVar19;
          inflate_fast(param_1,local_94);
          local_80 = param_1[3];
          uVar18 = *(uint *)(param_1 + 4);
          pbVar39 = *param_1;
          uVar17 = (ulong)*(uint *)(param_1 + 1);
          plVar41 = pplVar40[10];
          uVar20 = (ulong)*(uint *)(pplVar40 + 0xb);
          if (*(int *)(pplVar40 + 1) == 0x3f3f) {
            *(undefined4 *)((long)pplVar40 + 0x1bec) = 0xffffffff;
          }
          goto LAB_00e2a95c;
        case 0x3f49:
          uVar15 = *(uint *)((long)pplVar40 + 100);
          if (uVar15 != 0) goto LAB_00e2ad80;
          goto LAB_00e2c07c;
        case 0x3f4a:
          goto switchD_00e2a98c_caseD_3f4a;
        case 0x3f4b:
          uVar15 = *(uint *)((long)pplVar40 + 100);
          goto LAB_00e2c1ec;
        case 0x3f4c:
          goto switchD_00e2a98c_caseD_3f4c;
        case 0x3f4d:
          if (uVar18 != 0) {
            uVar18 = uVar18 - 1;
            *local_80 = (byte)*(undefined4 *)((long)pplVar40 + 0x5c);
            *(undefined4 *)(pplVar40 + 1) = 0x3f48;
            local_80 = local_80 + 1;
            goto LAB_00e2a95c;
          }
          goto LAB_00e2c51c;
        case 0x3f4e:
          uVar16 = *(uint *)(pplVar40 + 2);
          if (uVar16 == 0) {
LAB_00e2bd64:
            *(undefined4 *)pplVar25 = 0x3f4f;
            goto LAB_00e2bd70;
          }
          if (uVar19 < 0x20) {
            if (uVar15 == 0) goto LAB_00e2c5cc;
            uVar31 = uVar15 - 1;
            pbVar29 = pbVar39 + 1;
            plVar41 = (long *)(((ulong)*pbVar39 << (uVar20 & 0x3f)) + (long)plVar41);
            uVar14 = uVar20 + 8;
            if (uVar19 < 0x18) {
              uVar21 = (uint)uVar14;
              if (uVar31 == 0) goto LAB_00e2c5cc;
              uVar31 = uVar15 - 2;
              pbVar29 = pbVar39 + 2;
              plVar41 = (long *)(((ulong)pbVar39[1] << (uVar14 & 0x3f)) + (long)plVar41);
              uVar14 = uVar20 + 0x10;
              if (uVar19 < 0x10) {
                uVar21 = (uint)uVar14;
                if (uVar31 == 0) goto LAB_00e2c5cc;
                uVar31 = uVar15 - 3;
                pbVar29 = pbVar39 + 3;
                plVar41 = (long *)(((ulong)pbVar39[2] << (uVar14 & 0x3f)) + (long)plVar41);
                uVar14 = uVar20 + 0x18;
                if (uVar19 < 8) {
                  uVar21 = (uint)uVar14;
                  if (uVar31 == 0) goto LAB_00e2c5cc;
                  uVar31 = uVar15 - 4;
                  pbVar29 = pbVar39 + 4;
                  plVar41 = (long *)(((ulong)pbVar39[3] << (uVar14 & 0x3f)) + (long)plVar41);
                  uVar14 = uVar20 + 0x20;
                }
              }
            }
            uVar17 = (ulong)uVar31;
            uVar20 = uVar14 & 0xffffffff;
          }
          plVar30 = pplVar40[5];
          uVar14 = (ulong)(local_94 - uVar18);
          uVar19 = uVar16 & 4;
          param_1[5] = param_1[5] + uVar14;
          pplVar40[5] = (long *)((long)plVar30 + uVar14);
          if (((uVar16 >> 2 & 1) != 0) && (local_94 - uVar18 != 0)) {
            if (*(int *)(pplVar40 + 3) == 0) {
              plVar30 = (long *)adler32(pplVar40[4],(long)local_80 - uVar14);
            }
            else {
              plVar30 = (long *)crc32();
            }
            uVar16 = *(uint *)(pplVar40 + 2);
            uVar19 = uVar16 & 4;
            pplVar40[4] = plVar30;
            param_1[0xc] = (byte *)plVar30;
          }
          local_94 = uVar18;
          if (uVar19 == 0) {
LAB_00e2bd58:
            plVar41 = (long *)0x0;
            uVar20 = 0;
            goto LAB_00e2bd64;
          }
          uVar19 = ((uint)plVar41 & 0xff00ff00) >> 8 | ((uint)plVar41 & 0xff00ff) << 8;
          plVar30 = (long *)(ulong)(uVar19 >> 0x10 | uVar19 << 0x10);
          if (*(int *)(pplVar40 + 3) != 0) {
            plVar30 = plVar41;
          }
          if (plVar30 == pplVar40[4]) goto LAB_00e2bd58;
          uVar22 = 0x3f51;
          param_1[6] = (byte *)"incorrect data check";
          pbVar39 = pbVar29;
          goto LAB_00e2b49c;
        case 0x3f4f:
          uVar16 = *(uint *)(pplVar40 + 2);
LAB_00e2bd70:
          uVar19 = (uint)uVar20;
          uVar15 = (uint)uVar17;
          pbVar27 = pbVar29;
          if ((uVar16 != 0) && (*(int *)(pplVar40 + 3) != 0)) {
            if (0x1f < uVar19) {
LAB_00e2be1c:
              uVar15 = (uint)uVar17;
              if (plVar41 != (long *)(ulong)*(uint *)(pplVar40 + 5)) {
                uVar22 = 0x3f51;
                param_1[6] = (byte *)"incorrect length check";
                pbVar39 = pbVar27;
                break;
              }
              plVar41 = (long *)0x0;
              uVar19 = 0;
              goto LAB_00e2c564;
            }
            uVar21 = uVar19;
            if (uVar15 != 0) {
              uVar16 = uVar15 - 1;
              pbVar27 = pbVar29 + 1;
              plVar41 = (long *)(((ulong)*pbVar29 << (uVar20 & 0x3f)) + (long)plVar41);
              uVar14 = uVar20 + 8;
              if (uVar19 < 0x18) {
                uVar21 = (uint)uVar14;
                if (uVar16 == 0) goto LAB_00e2c5e8;
                uVar16 = uVar15 - 2;
                pbVar27 = pbVar29 + 2;
                plVar41 = (long *)(((ulong)pbVar29[1] << (uVar14 & 0x3f)) + (long)plVar41);
                uVar14 = uVar20 + 0x10;
                if (uVar19 < 0x10) {
                  uVar21 = (uint)uVar14;
                  if (uVar16 == 0) goto LAB_00e2c5e8;
                  uVar16 = uVar15 - 3;
                  pbVar27 = pbVar29 + 3;
                  plVar41 = (long *)(((ulong)pbVar29[2] << (uVar14 & 0x3f)) + (long)plVar41);
                  uVar14 = uVar20 + 0x18;
                  if (uVar19 < 8) {
                    uVar21 = (uint)uVar14;
                    if (uVar16 == 0) goto LAB_00e2c5e8;
                    uVar16 = uVar15 - 4;
                    pbVar27 = pbVar29 + 4;
                    plVar41 = (long *)(((ulong)pbVar29[3] << (uVar14 & 0x3f)) + (long)plVar41);
                    uVar14 = uVar20 + 0x20;
                  }
                }
              }
              uVar17 = (ulong)uVar16;
              uVar20 = uVar14 & 0xffffffff;
              goto LAB_00e2be1c;
            }
            goto LAB_00e2c5e8;
          }
LAB_00e2c564:
          *(undefined4 *)pplVar25 = 0x3f50;
          pbVar39 = pbVar27;
          iVar32 = 1;
        case 0x3f50:
          goto switchD_00e2a98c_caseD_3f50;
        case 0x3f51:
          goto switchD_00e2a98c_caseD_3f51;
        case 0x3f52:
          iVar13 = -4;
          goto LAB_00e2a920;
        }
LAB_00e2a958:
        *(undefined4 *)pplVar25 = uVar22;
LAB_00e2a95c:
        iVar13 = *(int *)pplVar25;
      }
    }
  }
  iVar13 = -2;
  goto LAB_00e2a920;
LAB_00e2c4e8:
  uVar19 = uVar19 + (int)uVar17 * 8;
  uVar15 = 0;
  pbVar39 = pbVar39 + (uVar17 & 0xffffffff);
  iVar32 = local_a4;
  goto switchD_00e2a98c_caseD_3f50;
LAB_00e2c518:
  uVar20 = uVar20 & 0xffffffff;
  pbVar27 = pbVar39;
LAB_00e2c51c:
  uVar19 = (uint)uVar20;
  pbVar39 = pbVar27;
  iVar32 = local_a4;
switchD_00e2a98c_caseD_3f50:
  *param_1 = pbVar39;
  *(uint *)(param_1 + 4) = uVar18;
  *(uint *)(param_1 + 1) = uVar15;
  param_1[3] = local_80;
  pplVar40[10] = plVar41;
  *(uint *)(pplVar40 + 0xb) = uVar19;
  if ((*(int *)((long)pplVar40 + 0x3c) != 0) ||
     (((local_94 != uVar18 && (*(uint *)pplVar25 < 0x3f51)) &&
      ((param_2 != 4 || (*(uint *)pplVar25 < 0x3f4e)))))) {
    iVar13 = FUN_00e2c768(param_1,local_80,local_94 - uVar18);
    if (iVar13 != 0) {
      iVar13 = -4;
      *(undefined4 *)pplVar25 = 0x3f52;
      goto LAB_00e2a920;
    }
    uVar15 = *(uint *)(param_1 + 1);
    uVar18 = *(uint *)(param_1 + 4);
  }
  local_94 = local_94 - uVar18;
  uVar20 = (ulong)local_94;
  uVar7 = uVar7 - uVar15;
  plVar41 = pplVar40[5];
  param_1[2] = param_1[2] + uVar7;
  param_1[5] = param_1[5] + uVar20;
  pplVar40[5] = (long *)((long)plVar41 + uVar20);
  if (((*(byte *)(pplVar40 + 2) >> 2 & 1) != 0) && (local_94 != 0)) {
    if (*(int *)(pplVar40 + 3) == 0) {
      plVar41 = (long *)adler32(pplVar40[4],(long)param_1[3] - uVar20,local_94);
    }
    else {
      plVar41 = (long *)crc32();
    }
    param_1[0xc] = (byte *)plVar41;
    *pplVar2 = plVar41;
  }
  iVar6 = *(int *)(pplVar40 + 1);
  iVar28 = 0x100;
  if (iVar6 != 0x3f42 && iVar6 != 0x3f47) {
    iVar28 = 0;
  }
  iVar13 = -5;
  if ((uVar7 | local_94) != 0 && param_2 != 4 || iVar32 != 0) {
    iVar13 = iVar32;
  }
  *(uint *)(param_1 + 0xb) =
       *(int *)(pplVar40 + 0xb) + (uint)(*(int *)((long)pplVar40 + 0xc) != 0) * 0x40 +
       (uint)(iVar6 == 0x3f3f) * 0x80 + iVar28;
LAB_00e2a920:
  if (*(long *)(lVar10 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar13);
}


