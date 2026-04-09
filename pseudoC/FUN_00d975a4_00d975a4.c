// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d975a4
// Entry Point: 00d975a4
// Size: 16160 bytes
// Signature: undefined FUN_00d975a4(void)


/* WARNING: Type propagation algorithm not settling */

void FUN_00d975a4(code **param_1,int param_2,ulong param_3,uint param_4)

{
  code **ppcVar1;
  code **ppcVar2;
  code **ppcVar3;
  code **ppcVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ushort *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  char cVar16;
  byte bVar17;
  char cVar18;
  byte bVar19;
  ushort uVar20;
  ushort uVar21;
  uint uVar22;
  long lVar23;
  short sVar24;
  bool bVar25;
  int iVar26;
  undefined4 uVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  ulong uVar32;
  char *pcVar33;
  long lVar34;
  code *pcVar35;
  undefined4 *puVar36;
  int iVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  int iVar41;
  int iVar42;
  uint uVar43;
  int iVar44;
  ulong uVar45;
  uint uVar46;
  byte *pbVar47;
  ulong uVar48;
  int iVar49;
  uint uVar50;
  code *pcVar51;
  char *pcVar52;
  undefined *puVar53;
  code *pcVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  long lVar58;
  ulong uVar59;
  byte *pbVar60;
  uint uVar61;
  ulong uVar62;
  uint *puVar63;
  ulong uVar64;
  byte *pbVar65;
  undefined4 uVar66;
  uint uVar67;
  char *pcVar68;
  ulong uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  code **ppcVar76;
  ulong uVar77;
  uint uVar78;
  undefined8 uVar79;
  uint local_1c4;
  uint local_170;
  ulong local_168;
  ulong local_e0;
  undefined8 local_c0;
  code *pcStack_b8;
  uint local_b0 [4];
  long local_a0;
  
  lVar23 = tpidr_el0;
  local_a0 = *(long *)(lVar23 + 0x28);
  ppcVar1 = param_1 + 0x7a5d;
  if (*(int *)(param_1 + 0x7a6c) != 0) {
    (**param_1)(param_1[6]);
    *(undefined4 *)(param_1 + 0x7a6c) = 0;
  }
  uVar32 = (ulong)*(uint *)((long)param_1 + 0x3d354);
  if ((*(uint *)((long)param_1 + 0x3d34c) | *(uint *)((long)param_1 + 0x3d354)) != 0)
  goto LAB_00d97658;
  if (*(int *)(param_1 + 0x7a66) == 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      pcVar51 = param_1[0x7a68];
      ppcVar2 = param_1 + 0x65ee;
      uVar32 = (ulong)pcVar51 & 0xffffffff;
      iVar49 = (int)pcVar51;
      if (pcVar51 == (code *)0x0) {
        iVar26 = (*param_1[2])(param_1[6]);
        if (iVar26 != 0) {
          uVar27 = (*param_1[2])(param_1[6]);
          *(undefined4 *)(param_1 + 0x9b) = uVar27;
          iVar26 = (*param_1[4])(param_1[6],(long)param_1 + 0x326dc);
          if ((iVar26 != 0) &&
             (*(uint *)((long)param_1 + (ulong)(iVar26 - 2) * 4 + 0x326dc) == *(uint *)ppcVar2)) {
            (*param_1[3])(param_1[6]);
          }
          uVar32 = (ulong)*(uint *)(param_1 + 0x65f1);
          ppcVar76 = param_1 + 0x7a5e;
          uVar20 = *(ushort *)(param_1 + uVar32 * 4 + 0x677e);
          iVar26 = *(int *)((long)param_1 + 0x32f74) + 1;
          *(int *)((long)param_1 + 0x32f74) = iVar26;
          uVar28 = (*(uint *)ppcVar76 >> 0xb) * (uint)uVar20;
          *(uint *)ppcVar76 = uVar28;
          *(ushort *)(param_1 + uVar32 * 4 + 0x677e) = uVar20 + (short)(0x800 - uVar20 >> 5);
          if (uVar28 >> 0x18 == 0) {
            *(uint *)ppcVar76 = uVar28 * 0x100;
            FUN_00d9cea4(ppcVar76);
            uVar32 = (ulong)*(uint *)(param_1 + 0x65f1);
            iVar26 = *(int *)((long)param_1 + 0x32f74);
          }
          *(undefined4 *)(param_1 + 0x65f1) = *(undefined4 *)(&DAT_0054913c + uVar32 * 4);
          uVar28 = (*param_1[1])(param_1[6],-iVar26);
          pcVar51 = param_1[0x677d];
          uVar28 = uVar28 & 0xff | 0x100;
          do {
            uVar32 = (ulong)(uVar28 >> 8);
            uVar20 = *(ushort *)(pcVar51 + uVar32 * 2);
            uVar57 = (*(uint *)ppcVar76 >> 0xb) * (uint)uVar20;
            if ((uVar28 >> 7 & 1) == 0) {
              *(uint *)ppcVar76 = uVar57;
              *(ushort *)(pcVar51 + uVar32 * 2) = uVar20 + (short)(0x800 - uVar20 >> 5);
            }
            else {
              uVar48 = (ulong)uVar57;
              uVar57 = *(uint *)ppcVar76 - uVar57;
              param_1[0x7a5f] = param_1[0x7a5f] + uVar48;
              *(uint *)(param_1 + 0x7a5e) = uVar57;
              *(ushort *)(pcVar51 + uVar32 * 2) = uVar20 - (uVar20 >> 5);
            }
            if (uVar57 >> 0x18 == 0) {
              *(uint *)ppcVar76 = uVar57 << 8;
              FUN_00d9cea4(ppcVar76);
            }
            uVar28 = uVar28 << 1;
          } while (uVar28 < 0x10000);
          uVar32 = (ulong)(iVar49 + 1);
          *(int *)((long)param_1 + 0x32f74) = *(int *)((long)param_1 + 0x32f74) + -1;
          goto LAB_00d97850;
        }
        uVar32 = 0;
      }
      else {
LAB_00d97850:
        iVar26 = (*param_1[2])(param_1[6]);
        if (iVar26 != 0) {
          lVar7 = (long)param_1 + 0x326dc;
          ppcVar76 = param_1 + 0x65ef;
          ppcVar3 = param_1 + 0x7a5e;
          ppcVar4 = param_1 + 0x7a5f;
          lVar8 = (long)param_1 + 0x324dc;
          local_1c4 = 0;
          do {
            uVar28 = (uint)uVar32;
            if (*(int *)ppcVar1 == 0) {
              uVar57 = *(uint *)((long)param_1 + 0x4cc);
              if (*(uint *)(param_1 + 0x99) != uVar57) {
                iVar26 = *(int *)((long)param_1 + (ulong)uVar57 * 0x30 + 0x4f4);
                uVar78 = *(uint *)(param_1 + (ulong)uVar57 * 6 + 0x9f);
                uVar57 = iVar26 - uVar57;
                *(int *)((long)param_1 + 0x4cc) = iVar26;
                goto LAB_00d98728;
              }
              param_1[0x99] = (code *)0x0;
              if (*(int *)((long)param_1 + 0x32f74) == 0) {
                uVar27 = (*param_1[2])(param_1[6]);
                *(undefined4 *)(param_1 + 0x9b) = uVar27;
                uVar29 = (*param_1[4])(param_1[6],lVar7);
                if (uVar29 == 0) {
                  uVar32 = 0;
                }
                else {
                  uVar57 = *(uint *)((long)param_1 + (ulong)(uVar29 - 2) * 4 + 0x326dc);
                  uVar32 = (ulong)uVar57;
                  if (uVar57 == *(uint *)ppcVar2) {
                    lVar34 = (*param_1[3])(param_1[6]);
                    uVar78 = *(uint *)(param_1 + 0x9b);
                    if (0x110 < uVar78) {
                      uVar78 = 0x111;
                    }
                    if (uVar57 < uVar78) {
                      do {
                        if (*(char *)(lVar34 + -1 + uVar32) !=
                            *(char *)(((lVar34 + -1) -
                                      (ulong)(*(int *)((long)param_1 +
                                                      (ulong)(uVar29 - 1) * 4 + 0x326dc) + 1)) +
                                     uVar32)) goto LAB_00d97d88;
                        uVar32 = uVar32 + 1;
                      } while (uVar78 != (uint)uVar32);
                      uVar32 = (ulong)uVar78;
                    }
                  }
                }
LAB_00d97d88:
                uVar55 = (uint)uVar32;
                *(int *)((long)param_1 + 0x32f74) = *(int *)((long)param_1 + 0x32f74) + 1;
                uVar57 = *(uint *)(param_1 + 0x9b);
              }
              else {
                uVar55 = *(uint *)(param_1 + 0x9a);
                uVar29 = *(uint *)((long)param_1 + 0x4d4);
                uVar57 = *(uint *)(param_1 + 0x9b);
              }
              if (uVar57 < 2) goto LAB_00d986e0;
              if (0x110 < uVar57) {
                uVar57 = 0x111;
              }
              uVar32 = (ulong)uVar57;
              pcVar33 = (char *)(*param_1[3])(param_1[6]);
              pbVar47 = (byte *)(pcVar33 + -1);
              bVar17 = *pbVar47;
              local_c0 = *ppcVar76;
              pcStack_b8 = param_1[0x65f0];
              if (bVar17 == pbVar47[-(ulong)(*(uint *)ppcVar76 + 1)]) {
                lVar34 = -(ulong)(*(uint *)ppcVar76 + 1);
                uVar46 = (uint)(*pcVar33 == pcVar33[lVar34]) << 1;
                if ((*pcVar33 == pcVar33[lVar34]) && (2 < uVar57)) {
                  lVar58 = 0;
                  do {
                    if (pcVar33[lVar58 + 1] != pcVar33[lVar58 + lVar34 + 1]) {
                      uVar46 = (int)lVar58 + 2;
                      break;
                    }
                    lVar58 = lVar58 + 1;
                    uVar46 = uVar57;
                  } while (uVar32 - 2 != lVar58);
                }
              }
              else {
                uVar46 = 0;
              }
              local_b0[0] = uVar46;
              uVar48 = (ulong)(*(int *)((long)param_1 + 0x32f7c) + 1);
              uVar70 = (uint)bVar17;
              if ((bVar17 == pbVar47[-uVar48]) && (lVar34 = -uVar48, *pcVar33 == pcVar33[lVar34])) {
                if (uVar57 < 3) {
                  local_b0[1] = 2;
                }
                else {
                  lVar58 = 0;
                  do {
                    if (pcVar33[lVar58 + 1] != pcVar33[lVar58 + lVar34 + 1]) {
                      local_b0[1] = (int)lVar58 + 2;
                      break;
                    }
                    lVar58 = lVar58 + 1;
                    local_b0[1] = uVar57;
                  } while (uVar32 - 2 != lVar58);
                }
                uVar74 = (uint)(uVar46 < local_b0[1]);
                uVar48 = (ulong)(*(int *)(param_1 + 0x65f0) + 1);
                if (uVar70 != pbVar47[-uVar48]) goto LAB_00d985f4;
LAB_00d985a4:
                if (*pcVar33 != pcVar33[-uVar48]) goto LAB_00d985f4;
                if (uVar57 < 3) {
                  local_b0[2] = 2;
                }
                else {
                  lVar34 = 0;
                  do {
                    if (pcVar33[lVar34 + 1] != pcVar33[lVar34 + -uVar48 + 1]) {
                      local_b0[2] = (int)lVar34 + 2;
                      break;
                    }
                    lVar34 = lVar34 + 1;
                    local_b0[2] = uVar57;
                  } while (uVar32 - 2 != lVar34);
                }
                uVar78 = 2;
                if (local_b0[2] <= local_b0[uVar74]) {
                  uVar78 = uVar74;
                }
              }
              else {
                uVar74 = 0;
                local_b0[1] = 0;
                uVar48 = (ulong)(*(int *)(param_1 + 0x65f0) + 1);
                if (uVar70 == pbVar47[-uVar48]) goto LAB_00d985a4;
LAB_00d985f4:
                local_b0[2] = 0;
                uVar78 = uVar74;
              }
              uVar56 = local_b0[2];
              uVar74 = local_b0[1];
              uVar48 = (ulong)(*(int *)((long)param_1 + 0x32f84) + 1);
              if ((bVar17 == pbVar47[-uVar48]) && (lVar34 = -uVar48, *pcVar33 == pcVar33[lVar34])) {
                if (uVar57 < 3) {
                  uVar32 = 2;
                }
                else {
                  lVar58 = 0;
                  do {
                    if (pcVar33[lVar58 + 1] != pcVar33[lVar58 + lVar34 + 1]) {
                      uVar32 = (ulong)((int)lVar58 + 2);
                      break;
                    }
                    lVar58 = lVar58 + 1;
                  } while (uVar32 - 2 != lVar58);
                }
                local_b0[3] = (uint)uVar32;
                uVar72 = 3;
                if ((uint)uVar32 <= local_b0[uVar78]) {
                  uVar72 = uVar78;
                }
                uVar57 = local_b0[uVar72];
                uVar50 = *(uint *)ppcVar2;
                uVar78 = uVar72;
                if (uVar50 <= uVar57) goto LAB_00d99754;
LAB_00d986b0:
                if (uVar55 < uVar50) {
                  bVar19 = pbVar47[-(ulong)((int)local_c0 + 1)];
                  if (((uVar55 < 2) && (bVar17 != bVar19)) && (uVar57 < 2)) goto LAB_00d986e0;
                  uVar78 = *(uint *)(param_1 + 0x65f1);
                  uVar48 = (ulong)uVar78;
                  uVar62 = (ulong)(*(uint *)((long)param_1 + 0x33be4) & uVar28);
                  *(uint *)(param_1 + 0x9c) = uVar78;
                  uVar20 = *(ushort *)((long)param_1 + uVar62 * 2 + uVar48 * 0x20 + 0x33bf0);
                  iVar26 = *(int *)((long)param_1 + ((ulong)(uVar20 >> 2) & 0x3ffc) + 0x324dc);
                  if (uVar78 < 7) {
                    iVar30 = 0;
                    uVar70 = uVar70 | 0x100;
                    do {
                      uVar78 = uVar70 >> 8;
                      uVar50 = uVar70 >> 7;
                      uVar70 = uVar70 << 1;
                      iVar30 = *(int *)((long)param_1 +
                                       (ulong)((-(uVar50 & 1) & 0x7f0 ^
                                               (uint)*(ushort *)
                                                      (param_1[0x677d] +
                                                       (ulong)(((uint)((byte)pcVar33[-2] >>
                                                                      (ulong)(8 - *(uint *)((long)
                                                  param_1 + 0x33bd4) & 0x1f)) +
                                                  ((*(uint *)(param_1 + 0x677c) & uVar28) <<
                                                  (ulong)(*(uint *)((long)param_1 + 0x33bd4) & 0x1f)
                                                  )) * 0x300) * 2 + (ulong)uVar78 * 2)) >> 4) * 4 +
                                       0x324dc) + iVar30;
                    } while (uVar70 < 0x10000);
                  }
                  else {
                    iVar30 = FUN_00d9cff8(param_1[0x677d] +
                                          (ulong)(((uint)((byte)pcVar33[-2] >>
                                                         (ulong)(8 - *(uint *)((long)param_1 +
                                                                              0x33bd4) & 0x1f)) +
                                                  ((*(uint *)(param_1 + 0x677c) & uVar28) <<
                                                  (ulong)(*(uint *)((long)param_1 + 0x33bd4) & 0x1f)
                                                  )) * 0x300) * 2,uVar70,bVar19,lVar8);
                  }
                  uVar78 = 0xffffffff;
                  uVar21 = *(ushort *)((long)param_1 + uVar48 * 2 + 0x33d70);
                  *(undefined4 *)((long)param_1 + 0x514) = 0;
                  *(undefined4 *)(param_1 + 0xa5) = 0xffffffff;
                  uVar59 = (ulong)(uVar21 >> 4);
                  iVar12 = *(int *)((long)param_1 + (ulong)(uVar20 >> 4 ^ 0x7f) * 4 + 0x324dc);
                  uVar70 = iVar30 + iVar26;
                  iVar26 = *(int *)((long)param_1 + (uVar59 << 2 ^ 0x1fc) + 0x324dc);
                  *(uint *)((long)param_1 + 0x50c) = uVar70;
                  iVar26 = iVar26 + iVar12;
                  if (bVar17 == bVar19) {
                    uVar50 = *(int *)((long)param_1 +
                                     ((ulong)(*(ushort *)((long)param_1 + uVar48 * 2 + 0x33d88) >> 2
                                             ) & 0x3ffc) + 0x324dc) + iVar26 +
                             *(int *)((long)param_1 +
                                     ((ulong)(*(ushort *)
                                               ((long)param_1 + uVar62 * 2 + uVar48 * 0x20 + 0x33dd0
                                               ) >> 2) & 0x3ffc) + 0x324dc);
                    if (uVar50 < uVar70) {
                      uVar78 = 0;
                      *(uint *)((long)param_1 + 0x50c) = uVar50;
                      *(undefined4 *)(param_1 + 0xa5) = 0;
                    }
                    else {
                      uVar78 = 0xffffffff;
                    }
                  }
                  if (uVar57 <= uVar55) {
                    uVar57 = uVar55;
                  }
                  if (1 < uVar57) {
                    *(undefined4 *)((long)param_1 + 0x524) = 0;
                    *(code **)((long)param_1 + 0x504) = param_1[0x65f0];
                    *(code **)((long)param_1 + 0x4fc) = *ppcVar76;
                    puVar36 = (undefined4 *)((long)param_1 + (ulong)uVar57 * 0x30 + 0x4dc);
                    uVar78 = uVar57;
                    do {
                      uVar78 = uVar78 - 1;
                      *puVar36 = 0x40000000;
                      puVar36 = puVar36 + -0xc;
                    } while ((uVar78 & 0xfffffffe) != 0);
                    if (1 < uVar46) {
                      iVar30 = *(int *)((long)param_1 +
                                       ((ulong)(*(ushort *)((long)param_1 + uVar48 * 2 + 0x33d88) >>
                                               2) & 0x3ffc) + 0x324dc);
                      iVar37 = *(int *)((long)param_1 +
                                       ((ulong)(*(ushort *)
                                                 ((long)param_1 +
                                                 uVar62 * 2 + uVar48 * 0x20 + 0x33dd0) >> 2) &
                                        0x3ffc ^ 0x1fc) + 0x324dc);
                      puVar63 = (uint *)((long)param_1 + (ulong)uVar46 * 0x30 + 0x4dc);
                      uVar78 = uVar46;
                      do {
                        uVar70 = iVar30 + iVar26 + iVar37 +
                                 *(int *)((long)param_1 +
                                         (ulong)(uVar78 - 2) * 4 + uVar62 * 0x440 + 0x38ea0);
                        if (uVar70 < *puVar63) {
                          *puVar63 = uVar70;
                          *(undefined8 *)(puVar63 + 6) = 0;
                          puVar63[2] = 0;
                        }
                        uVar78 = uVar78 - 1;
                        puVar63 = puVar63 + -0xc;
                      } while ((uVar78 & 0xfffffffe) != 0);
                    }
                    if (1 < uVar74) {
                      iVar30 = *(int *)((long)param_1 +
                                       ((ulong)(*(ushort *)((long)param_1 + uVar48 * 2 + 0x33d88) >>
                                               2) & 0x3ffc ^ 0x1fc) + 0x324dc);
                      iVar37 = *(int *)((long)param_1 +
                                       ((ulong)(*(ushort *)((long)param_1 + uVar48 * 2 + 0x33da0) >>
                                               2) & 0x3ffc) + 0x324dc);
                      puVar63 = (uint *)((long)param_1 + (ulong)uVar74 * 0x30 + 0x4dc);
                      do {
                        uVar78 = iVar30 + iVar26 + iVar37 +
                                 *(int *)((long)param_1 +
                                         (ulong)(uVar74 - 2) * 4 + uVar62 * 0x440 + 0x38ea0);
                        if (uVar78 < *puVar63) {
                          *puVar63 = uVar78;
                          *(undefined8 *)(puVar63 + 6) = 0x100000000;
                          puVar63[2] = 0;
                        }
                        uVar74 = uVar74 - 1;
                        puVar63 = puVar63 + -0xc;
                      } while ((uVar74 & 0xfffffffe) != 0);
                    }
                    if (1 < uVar56) {
                      iVar30 = *(int *)((long)param_1 +
                                       ((ulong)(*(ushort *)((long)param_1 + uVar48 * 2 + 0x33d88) >>
                                               2) & 0x3ffc ^ 0x1fc) + 0x324dc);
                      iVar37 = *(int *)((long)param_1 +
                                       ((ulong)(*(ushort *)((long)param_1 + uVar48 * 2 + 0x33da0) >>
                                               2) & 0x3ffc ^ 0x1fc) + 0x324dc);
                      iVar41 = *(int *)((long)param_1 +
                                       ((ulong)(*(ushort *)((long)param_1 + uVar48 * 2 + 0x33db8) >>
                                               2) & 0x3ffc) + 0x324dc);
                      puVar63 = (uint *)((long)param_1 + (ulong)uVar56 * 0x30 + 0x4dc);
                      do {
                        uVar78 = iVar30 + iVar26 + iVar37 + iVar41 +
                                 *(int *)((long)param_1 +
                                         (ulong)(uVar56 - 2) * 4 + uVar62 * 0x440 + 0x38ea0);
                        if (uVar78 < *puVar63) {
                          *puVar63 = uVar78;
                          *(undefined8 *)(puVar63 + 6) = 0x200000000;
                          puVar63[2] = 0;
                        }
                        uVar56 = uVar56 - 1;
                        puVar63 = puVar63 + -0xc;
                      } while ((uVar56 & 0xfffffffe) != 0);
                    }
                    if (1 < (uint)uVar32) {
                      iVar30 = *(int *)((long)param_1 +
                                       ((ulong)(*(ushort *)((long)param_1 + uVar48 * 2 + 0x33d88) >>
                                               2) & 0x3ffc ^ 0x1fc) + 0x324dc);
                      iVar37 = *(int *)((long)param_1 +
                                       ((ulong)(*(ushort *)((long)param_1 + uVar48 * 2 + 0x33da0) >>
                                               2) & 0x3ffc ^ 0x1fc) + 0x324dc);
                      iVar41 = *(int *)((long)param_1 +
                                       ((ulong)(*(ushort *)((long)param_1 + uVar48 * 2 + 0x33db8) >>
                                               2) & 0x3ffc ^ 0x1fc) + 0x324dc);
                      puVar63 = (uint *)((long)param_1 + uVar32 * 0x30 + 0x4dc);
                      do {
                        uVar78 = iVar30 + iVar26 + iVar37 + iVar41 +
                                 *(int *)((long)param_1 +
                                         (ulong)((int)uVar32 - 2) * 4 + uVar62 * 0x440 + 0x38ea0);
                        if (uVar78 < *puVar63) {
                          *puVar63 = uVar78;
                          *(undefined8 *)(puVar63 + 6) = 0x300000000;
                          puVar63[2] = 0;
                        }
                        uVar32 = uVar32 - 1;
                        puVar63 = puVar63 + -0xc;
                      } while ((uVar32 & 0xfffffffe) != 0);
                    }
                    uVar78 = 2;
                    if (1 < uVar46) {
                      uVar78 = uVar46 + 1;
                    }
                    if (uVar78 <= uVar55) {
                      iVar26 = *(int *)((long)param_1 + uVar59 * 4 + 0x324dc);
                      uVar55 = 0xfffffffe;
                      do {
                        uVar55 = uVar55 + 2;
                      } while (*(uint *)((long)param_1 + (ulong)uVar55 * 4 + 0x326dc) < uVar78);
                      while( true ) {
                        uVar46 = uVar78 - 2;
                        if (4 < uVar78) {
                          uVar46 = 3;
                        }
                        uVar70 = *(uint *)((long)param_1 + (ulong)(uVar55 + 1) * 4 + 0x326dc);
                        if (uVar70 < 0x80) {
                          iVar30 = *(int *)((long)param_1 +
                                           (ulong)uVar70 * 4 + (ulong)uVar46 * 0x200 + 0x3338c);
                        }
                        else {
                          uVar74 = 6;
                          if (-1 < (int)(uVar70 - 0x80000)) {
                            uVar74 = 0x12;
                          }
                          iVar30 = *(int *)((long)param_1 +
                                           ((ulong)*(byte *)((long)param_1 +
                                                            (ulong)(uVar70 >> (ulong)uVar74) +
                                                            0x304dc) + (ulong)uVar74 * 2) * 4 +
                                           (ulong)uVar46 * 0x100 + 0x32f8c) +
                                   *(int *)((long)param_1 + (ulong)(uVar70 & 0xf) * 4 + 0x33b8c);
                        }
                        uVar46 = iVar26 + iVar12 +
                                 *(int *)((long)param_1 +
                                         (ulong)(uVar78 - 2) * 4 + uVar62 * 0x440 + 0x34658) +
                                 iVar30;
                        if (uVar46 < *(uint *)((long)param_1 + (ulong)uVar78 * 0x30 + 0x4dc)) {
                          *(uint *)((long)param_1 + (ulong)uVar78 * 0x30 + 0x4dc) = uVar46;
                          *(undefined4 *)((long)param_1 + (ulong)uVar78 * 0x30 + 0x4f4) = 0;
                          *(uint *)(param_1 + (ulong)uVar78 * 6 + 0x9f) = uVar70 + 4;
                          *(undefined4 *)((long)param_1 + (ulong)uVar78 * 0x30 + 0x4e4) = 0;
                          uVar46 = *(uint *)((long)param_1 + (ulong)uVar55 * 4 + 0x326dc);
                        }
                        else {
                          uVar46 = *(uint *)((long)param_1 + (ulong)uVar55 * 4 + 0x326dc);
                        }
                        if ((uVar78 == uVar46) && (uVar55 = uVar55 + 2, uVar55 == uVar29)) break;
                        uVar78 = uVar78 + 1;
                      }
                    }
                    if (uVar57 == 1) {
                      local_168 = 1;
                    }
                    else {
                      uVar48 = 0;
                      uVar78 = 0xffe;
                      iVar26 = 1;
                      uVar32 = (ulong)uVar57;
                      uVar57 = uVar28;
                      local_170 = uVar28;
                      do {
                        local_170 = local_170 + 1;
                        uVar55 = (uint)uVar48;
                        uVar27 = (*param_1[2])(param_1[6]);
                        *(undefined4 *)(param_1 + 0x9b) = uVar27;
                        uVar29 = (*param_1[4])(param_1[6],lVar7);
                        if (uVar29 == 0) {
                          uVar62 = 0;
                        }
                        else {
                          uVar46 = *(uint *)((long)param_1 + (ulong)(uVar29 - 2) * 4 + 0x326dc);
                          uVar62 = (ulong)uVar46;
                          if (uVar46 == *(uint *)ppcVar2) {
                            lVar34 = (*param_1[3])(param_1[6]);
                            uVar70 = *(uint *)(param_1 + 0x9b);
                            if (0x110 < uVar70) {
                              uVar70 = 0x111;
                            }
                            if (uVar46 < uVar70) {
                              do {
                                if (*(char *)(lVar34 + -1 + uVar62) !=
                                    *(char *)(((lVar34 + -1) -
                                              (ulong)(*(int *)((long)param_1 +
                                                              (ulong)(uVar29 - 1) * 4 + 0x326dc) + 1
                                                     )) + uVar62)) goto LAB_00d99fb0;
                                uVar62 = uVar62 + 1;
                              } while (uVar70 != (uint)uVar62);
                              uVar62 = (ulong)uVar70;
                            }
                          }
                        }
LAB_00d99fb0:
                        uVar46 = uVar55 + 1;
                        uVar48 = (ulong)uVar46;
                        uVar70 = (uint)uVar62;
                        *(int *)((long)param_1 + 0x32f74) = *(int *)((long)param_1 + 0x32f74) + 1;
                        if (*(uint *)ppcVar2 <= uVar70) {
                          uVar57 = *(uint *)((long)param_1 + uVar48 * 0x30 + 0x4f4);
                          *(uint *)((long)param_1 + 0x4d4) = uVar29;
                          uVar27 = *(undefined4 *)(param_1 + uVar48 * 6 + 0x9f);
                          *(uint *)(param_1 + 0x9a) = uVar70;
                          *(uint *)(param_1 + 0x99) = uVar46;
                          do {
                            uVar32 = (ulong)uVar57;
                            if (*(int *)((long)param_1 + uVar48 * 0x30 + 0x4e4) == 0) {
                              uVar66 = *(undefined4 *)(param_1 + (ulong)uVar57 * 6 + 0x9f);
                              uVar78 = *(uint *)((long)param_1 + uVar32 * 0x30 + 0x4f4);
                            }
                            else {
                              iVar26 = *(int *)(param_1 + uVar48 * 6 + 0x9d);
                              uVar78 = uVar57 - 1;
                              *(undefined4 *)((long)param_1 + uVar32 * 0x30 + 0x4e4) = 0;
                              if (iVar26 == 0) {
                                uVar66 = 0xffffffff;
                              }
                              else {
                                uVar66 = 0xffffffff;
                                uVar79 = *(undefined8 *)((long)param_1 + uVar48 * 0x30 + 0x4ec);
                                *(undefined4 *)((long)param_1 + (ulong)uVar78 * 0x30 + 0x4e4) = 0;
                                *(undefined8 *)((long)param_1 + (ulong)uVar78 * 0x30 + 0x4f4) =
                                     uVar79;
                              }
                            }
                            *(undefined4 *)(param_1 + (ulong)uVar57 * 6 + 0x9f) = uVar27;
                            *(int *)((long)param_1 + uVar32 * 0x30 + 0x4f4) = (int)uVar48;
                            bVar25 = uVar57 != 0;
                            uVar48 = uVar32;
                            uVar57 = uVar78;
                            uVar27 = uVar66;
                          } while (bVar25);
                          goto LAB_00d9b46c;
                        }
                        uVar74 = *(uint *)((long)param_1 + uVar48 * 0x30 + 0x4f4);
                        if (*(int *)((long)param_1 + uVar48 * 0x30 + 0x4e4) == 0) {
                          uVar56 = *(uint *)(param_1 + (ulong)uVar74 * 6 + 0x9c);
LAB_00d9a07c:
                          uVar62 = (ulong)uVar56;
                          if (uVar74 == uVar55) {
LAB_00d9a088:
                            if (*(int *)(param_1 + uVar48 * 6 + 0x9f) == 0) {
                              uVar50 = *(uint *)(&DAT_0054916c + uVar62 * 4);
                            }
                            else {
                              uVar50 = *(uint *)(&DAT_0054913c + uVar62 * 4);
                            }
                          }
                          else {
                            uVar56 = *(uint *)(param_1 + uVar48 * 6 + 0x9f);
                            if (3 < uVar56) {
                              uVar50 = *(uint *)(&DAT_005491cc + uVar62 * 4);
                              uVar59 = (ulong)uVar74;
                              goto LAB_00d9a168;
                            }
                            uVar50 = *(uint *)(&DAT_0054919c + uVar62 * 4);
                            uVar59 = (ulong)uVar74;
LAB_00d9a0cc:
                            local_c0 = (code *)CONCAT44(local_c0._4_4_,
                                                        *(undefined4 *)
                                                         ((long)param_1 +
                                                         (ulong)uVar56 * 4 + uVar59 * 0x30 + 0x4fc))
                            ;
                            uVar74 = 1;
                            if (uVar56 != 0) {
                              do {
                                *(undefined4 *)((long)&local_c0 + (ulong)uVar74 * 4) =
                                     *(undefined4 *)
                                      ((long)param_1 +
                                      (ulong)(uVar74 - 1) * 4 + uVar59 * 0x30 + 0x4fc);
                                uVar74 = uVar74 + 1;
                              } while (uVar74 <= uVar56);
                              if (3 < uVar74) goto LAB_00d9a190;
                            }
                            memcpy((void *)((long)&local_c0 + (ulong)uVar74 * 4),
                                   (void *)((long)param_1 +
                                           ((ulong)uVar74 + uVar59 * 0xc) * 4 + 0x4fc),
                                   (ulong)(3 - uVar74) * 4 + 4);
                          }
                        }
                        else {
                          uVar74 = uVar74 - 1;
                          if (*(int *)(param_1 + uVar48 * 6 + 0x9d) == 0) {
                            uVar56 = *(uint *)(&DAT_0054913c +
                                              (ulong)*(uint *)(param_1 + (ulong)uVar74 * 6 + 0x9c) *
                                              4);
                            goto LAB_00d9a07c;
                          }
                          uVar59 = (ulong)*(uint *)((long)param_1 + uVar48 * 0x30 + 0x4ec);
                          uVar56 = *(uint *)(param_1 + uVar48 * 6 + 0x9e);
                          puVar53 = &DAT_0054919c;
                          if (3 < uVar56) {
                            puVar53 = &DAT_005491cc;
                          }
                          uVar62 = (ulong)*(uint *)(&DAT_0054913c +
                                                   (ulong)*(uint *)(puVar53 +
                                                                   (ulong)*(uint *)(param_1 +
                                                                                   uVar59 * 6 + 0x9c
                                                                                   ) * 4) * 4);
                          if (uVar74 == uVar55) goto LAB_00d9a088;
                          uVar50 = *(uint *)(&DAT_0054919c + uVar62 * 4);
                          if (uVar56 < 4) goto LAB_00d9a0cc;
LAB_00d9a168:
                          local_c0 = (code *)CONCAT44(local_c0._4_4_,uVar56 - 4);
                          uVar79 = *(undefined8 *)((long)param_1 + uVar59 * 0x30 + 0x4fc);
                          *(undefined4 *)((undefined8 *)((ulong)&local_c0 | 4) + 1) =
                               *(undefined4 *)((long)param_1 + uVar59 * 0x30 + 0x504);
                          *(undefined8 *)((ulong)&local_c0 | 4) = uVar79;
                        }
LAB_00d9a190:
                        pcVar51 = local_c0;
                        pcVar54 = param_1[3];
                        pcVar35 = param_1[6];
                        uVar74 = uVar57 + 1;
                        iVar12 = *(int *)((long)param_1 + uVar48 * 0x30 + 0x4dc);
                        *(uint *)(param_1 + uVar48 * 6 + 0x9c) = uVar50;
                        *(code **)((long)param_1 + uVar48 * 0x30 + 0x504) = pcStack_b8;
                        *(code **)((long)param_1 + uVar48 * 0x30 + 0x4fc) = local_c0;
                        pbVar47 = (byte *)(*pcVar54)(pcVar35);
                        uVar56 = *(uint *)((long)param_1 + 0x33be4);
                        uVar62 = (ulong)uVar50;
                        uVar72 = *(uint *)((long)param_1 + 0x33bd4);
                        uVar11 = *(uint *)(param_1 + 0x677c);
                        uVar59 = (ulong)(uVar56 & uVar74);
                        uVar20 = *(ushort *)((long)param_1 + uVar59 * 2 + uVar62 * 0x20 + 0x33bf0);
                        iVar30 = (uint)(pbVar47[-2] >> (ulong)(8 - uVar72 & 0x1f)) +
                                 ((uVar11 & uVar74) << (ulong)(uVar72 & 0x1f));
                        uVar69 = (ulong)((int)pcVar51 + 1);
                        pbVar60 = pbVar47 + -1;
                        pcVar35 = param_1[0x677d];
                        uVar73 = (uint)pbVar60[-uVar69];
                        uVar71 = (uint)*pbVar60;
                        if (uVar50 < 7) {
                          iVar37 = 0;
                          uVar50 = uVar71 | 0x100;
                          do {
                            uVar31 = uVar50 >> 8;
                            uVar39 = uVar50 >> 7;
                            uVar50 = uVar50 << 1;
                            iVar37 = *(int *)((long)param_1 +
                                             (ulong)((-(uVar39 & 1) & 0x7f0 ^
                                                     (uint)*(ushort *)
                                                            (pcVar35 +
                                                            (ulong)uVar31 * 2 +
                                                            (ulong)(uint)(iVar30 * 0x300) * 2)) >> 4
                                                    ) * 4 + 0x324dc) + iVar37;
                          } while (uVar50 < 0x10000);
                        }
                        else {
                          iVar37 = 0;
                          uVar50 = 0x100;
                          uVar31 = uVar71 | 0x100;
                          uVar39 = uVar73;
                          do {
                            iVar41 = uVar50 + (uVar31 >> 8);
                            uVar5 = uVar50 & uVar39 << 1;
                            uVar38 = uVar31 << 1;
                            uVar50 = uVar50 & ((uVar39 ^ uVar31) << 1 ^ 0xffffffff);
                            iVar37 = *(int *)((long)param_1 +
                                             (ulong)((-(uVar31 >> 7 & 1) & 0x7f0 ^
                                                     (uint)*(ushort *)
                                                            (pcVar35 +
                                                            (ulong)(iVar41 + uVar5) * 2 +
                                                            (ulong)(uint)(iVar30 * 0x300) * 2)) >> 4
                                                    ) * 4 + 0x324dc) + iVar37;
                            uVar31 = uVar38;
                            uVar39 = uVar39 << 1;
                          } while (uVar38 < 0x10000);
                        }
                        uVar50 = uVar55 + 2;
                        uVar64 = (ulong)uVar50;
                        uVar31 = *(int *)((long)param_1 + ((ulong)(uVar20 >> 2) & 0x3ffc) + 0x324dc)
                                 + iVar12 + iVar37;
                        puVar63 = (uint *)((long)param_1 + uVar64 * 0x30 + 0x4dc);
                        uVar39 = *(uint *)((long)param_1 + uVar64 * 0x30 + 0x4dc);
                        bVar25 = uVar31 < uVar39;
                        if (bVar25) {
                          *puVar63 = uVar31;
                          *(uint *)((long)param_1 + uVar64 * 0x30 + 0x4f4) = uVar46;
                          *(undefined4 *)(param_1 + uVar64 * 6 + 0x9f) = 0xffffffff;
                          *(undefined4 *)((long)param_1 + uVar64 * 0x30 + 0x4e4) = 0;
                          uVar39 = uVar31;
                        }
                        uVar77 = (ulong)(*(ushort *)((long)param_1 + uVar62 * 2 + 0x33d70) >> 4);
                        iVar12 = *(int *)((long)param_1 + (ulong)(uVar20 >> 4 ^ 0x7f) * 4 + 0x324dc)
                                 + iVar12;
                        iVar30 = *(int *)((long)param_1 + (uVar77 << 2 ^ 0x1fc) + 0x324dc) + iVar12;
                        if (((uVar73 == uVar71) &&
                            ((uVar46 <= *(uint *)((long)param_1 + uVar64 * 0x30 + 0x4f4) ||
                             (*(int *)(param_1 + uVar64 * 6 + 0x9f) != 0)))) &&
                           (uVar5 = *(int *)((long)param_1 +
                                            ((ulong)(*(ushort *)
                                                      ((long)param_1 + uVar62 * 2 + 0x33d88) >> 2) &
                                            0x3ffc) + 0x324dc) + iVar30 +
                                    *(int *)((long)param_1 +
                                            ((ulong)(*(ushort *)
                                                      ((long)param_1 +
                                                      uVar59 * 2 + uVar62 * 0x20 + 0x33dd0) >> 2) &
                                            0x3ffc) + 0x324dc), uVar5 <= uVar39)) {
                          bVar25 = true;
                          *puVar63 = uVar5;
                          *(uint *)((long)param_1 + uVar64 * 0x30 + 0x4f4) = uVar46;
                          *(undefined4 *)(param_1 + uVar64 * 6 + 0x9f) = 0;
                          *(undefined4 *)((long)param_1 + uVar64 * 0x30 + 0x4e4) = 0;
                        }
                        uVar5 = *(uint *)(param_1 + 0x9b);
                        uVar39 = 0xffe - uVar55;
                        if (uVar5 <= 0xffe - uVar55) {
                          uVar39 = uVar5;
                        }
                        local_168 = uVar32;
                        if (1 < uVar39) {
                          uVar75 = *(uint *)ppcVar2;
                          uVar38 = uVar75;
                          if (uVar39 <= uVar75) {
                            uVar38 = uVar39;
                          }
                          if ((bVar25) || (uVar73 == uVar71)) goto LAB_00d9a6a0;
                          uVar71 = uVar75 + 1;
                          uVar73 = uVar39;
                          if (uVar71 <= uVar39) {
                            uVar73 = uVar75 + 1;
                          }
                          if (uVar73 < 2) goto LAB_00d9a6a0;
                          lVar34 = 0;
                          uVar73 = uVar5;
                          if (uVar78 <= uVar5) {
                            uVar73 = uVar78;
                          }
                          if (uVar71 <= uVar73) {
                            uVar73 = uVar71;
                          }
                          do {
                            if (pbVar47[lVar34] != pbVar47[lVar34 - uVar69]) {
                              uVar73 = (int)lVar34 + 1;
                              break;
                            }
                            lVar34 = lVar34 + 1;
                          } while ((ulong)uVar73 - 1 != lVar34);
                          if (uVar73 - 1 < 2) goto LAB_00d9a6a0;
                          uVar64 = (ulong)*(uint *)(&DAT_0054913c + uVar62 * 4);
                          uVar71 = (uVar73 - 1) + uVar50;
                          uVar69 = (ulong)(uVar56 & uVar57 + 2);
                          lVar34 = uVar69 * 2 + uVar64 * 0x20;
                          iVar37 = *(int *)((long)param_1 +
                                           ((ulong)(*(ushort *)((long)param_1 + lVar34 + 0x33bf0) >>
                                                   2) & 0x3ffc ^ 0x1fc) + 0x324dc);
                          iVar41 = *(int *)((long)param_1 +
                                           ((ulong)(*(ushort *)
                                                     ((long)param_1 + uVar64 * 2 + 0x33d70) >> 2) &
                                            0x3ffc ^ 0x1fc) + 0x324dc);
                          if ((uint)uVar32 < uVar71) {
                            local_168 = (ulong)(uVar46 + uVar73);
                            uVar40 = local_168 - uVar32;
                            if (1 < uVar40) {
                              uVar45 = local_168 - uVar32 & 0xfffffffffffffffe;
                              lVar58 = uVar32 * 0x30;
                              uVar32 = (uVar40 & 0xfffffffffffffffe) + uVar32;
                              puVar36 = (undefined4 *)((long)param_1 + lVar58 + 0x53c);
                              do {
                                uVar45 = uVar45 - 2;
                                puVar36[-0xc] = 0x40000000;
                                *puVar36 = 0x40000000;
                                puVar36 = puVar36 + 0x18;
                              } while (uVar45 != 0);
                              if (uVar40 == (uVar40 & 0xfffffffffffffffe)) goto LAB_00d9a5f0;
                            }
                            lVar58 = local_168 - uVar32;
                            puVar36 = (undefined4 *)((long)param_1 + uVar32 * 0x30 + 0x50c);
                            do {
                              lVar58 = lVar58 + -1;
                              *puVar36 = 0x40000000;
                              puVar36 = puVar36 + 0xc;
                            } while (lVar58 != 0);
                          }
LAB_00d9a5f0:
                          uVar57 = iVar37 + uVar31 + iVar41 +
                                   *(int *)((long)param_1 +
                                           (ulong)(uVar73 - 3) * 4 + uVar69 * 0x440 + 0x38ea0) +
                                   *(int *)((long)param_1 +
                                           ((ulong)(*(ushort *)
                                                     ((long)param_1 + uVar64 * 2 + 0x33d88) >> 2) &
                                           0x3ffc) + 0x324dc) +
                                   *(int *)((long)param_1 +
                                           ((ulong)(*(ushort *)((long)param_1 + lVar34 + 0x33dd0) >>
                                                   2) & 0x3ffc ^ 0x1fc) + 0x324dc);
                          if (uVar57 < *(uint *)((long)param_1 + (ulong)uVar71 * 0x30 + 0x4dc)) {
                            *(uint *)((long)param_1 + (ulong)uVar71 * 0x30 + 0x4dc) = uVar57;
                            *(uint *)((long)param_1 + (ulong)uVar71 * 0x30 + 0x4f4) = uVar50;
                            *(undefined4 *)(param_1 + (ulong)uVar71 * 6 + 0x9f) = 0;
                            *(undefined8 *)((long)param_1 + (ulong)uVar71 * 0x30 + 0x4e4) = 1;
                          }
LAB_00d9a6a0:
                          lVar34 = 0;
                          uVar57 = uVar5;
                          if (uVar75 <= uVar5) {
                            uVar57 = uVar75;
                          }
                          if (uVar78 <= uVar57) {
                            uVar57 = uVar78;
                          }
                          uVar50 = uVar5;
                          if (uVar78 <= uVar5) {
                            uVar50 = uVar78;
                          }
                          local_e0 = 2;
                          uVar32 = (ulong)((int)pcVar51 + 1);
                          pbVar65 = pbVar60 + -uVar32;
                          if (*pbVar60 != *pbVar65) goto LAB_00d9acf0;
LAB_00d9a774:
                          if (*pbVar47 == pbVar65[1]) {
                            if (uVar38 < 3) {
                              uVar71 = uVar55 + 3;
                              uVar32 = 2;
                            }
                            else {
                              lVar58 = 0;
                              do {
                                if (pbVar47[lVar58 + 1] != pbVar47[lVar58 + (1 - uVar32)]) {
                                  uVar71 = (int)(lVar58 + 2U) + uVar46;
                                  uVar32 = lVar58 + 2U;
                                  goto joined_r0x00d9a818;
                                }
                                lVar58 = lVar58 + 1;
                              } while ((ulong)uVar57 - 2 != lVar58);
                              uVar71 = uVar57 + uVar46;
                              uVar32 = (ulong)uVar57;
                            }
joined_r0x00d9a818:
                            uVar64 = (ulong)uVar71;
                            uVar27 = (undefined4)uVar32;
                            uVar69 = local_168;
                            if ((uint)local_168 < uVar71) {
                              uVar40 = uVar64 - local_168;
                              uVar69 = uVar64;
                              if (1 < uVar40) {
                                uVar64 = (uVar46 + uVar27) - local_168 & 0xfffffffffffffffe;
                                lVar58 = local_168 * 0x30;
                                local_168 = (uVar40 & 0xfffffffffffffffe) + local_168;
                                puVar36 = (undefined4 *)((long)param_1 + lVar58 + 0x53c);
                                do {
                                  uVar64 = uVar64 - 2;
                                  puVar36[-0xc] = 0x40000000;
                                  *puVar36 = 0x40000000;
                                  puVar36 = puVar36 + 0x18;
                                } while (uVar64 != 0);
                                if (uVar40 == (uVar40 & 0xfffffffffffffffe)) goto LAB_00d9a880;
                              }
                              lVar58 = (uVar46 + uVar27) - local_168;
                              puVar36 = (undefined4 *)((long)param_1 + local_168 * 0x30 + 0x50c);
                              do {
                                lVar58 = lVar58 + -1;
                                *puVar36 = 0x40000000;
                                puVar36 = puVar36 + 0xc;
                              } while (lVar58 != 0);
                            }
LAB_00d9a880:
                            uVar20 = *(ushort *)((long)param_1 + uVar62 * 2 + 0x33d88) >> 4;
                            iVar37 = (int)lVar34;
                            if (lVar34 == 0) {
                              iVar44 = *(int *)((long)param_1 + (ulong)uVar20 * 4 + 0x324dc);
                              iVar41 = *(int *)((long)param_1 +
                                               ((ulong)(*(ushort *)
                                                         ((long)param_1 +
                                                         uVar59 * 2 + uVar62 * 0x20 + 0x33dd0) >> 2)
                                                & 0x3ffc ^ 0x1fc) + 0x324dc);
                            }
                            else {
                              iVar44 = *(int *)((long)param_1 + (ulong)(uVar20 ^ 0x7f) * 4 + 0x324dc
                                               );
                              uVar20 = *(ushort *)((long)param_1 + uVar62 * 2 + 0x33da0) >> 4;
                              if (lVar34 == 1) {
                                iVar41 = *(int *)((long)param_1 + (ulong)uVar20 * 4 + 0x324dc);
                              }
                              else {
                                iVar41 = *(int *)((long)param_1 +
                                                 (ulong)(uVar20 ^ 0x7f) * 4 + 0x324dc) + iVar44;
                                iVar44 = *(int *)((long)param_1 +
                                                 ((ulong)((2U - iVar37 & 0x7f0 ^
                                                          (uint)*(ushort *)
                                                                 ((long)param_1 +
                                                                 uVar62 * 2 + 0x33db8)) >> 2) &
                                                 0x3ffc) + 0x324dc);
                              }
                            }
                            uVar32 = uVar32 & 0xffffffff;
                            iVar41 = iVar44 + iVar30 + iVar41;
                            uVar64 = uVar32;
                            do {
                              uVar40 = (ulong)(uint)(iVar26 + (int)uVar64);
                              uVar73 = *(int *)((long)param_1 +
                                               (ulong)((int)uVar64 - 2) * 4 + uVar59 * 0x440 +
                                               0x38ea0) + iVar41;
                              if (uVar73 < *(uint *)((long)param_1 + uVar40 * 0x30 + 0x4dc)) {
                                *(uint *)((long)param_1 + uVar40 * 0x30 + 0x4dc) = uVar73;
                                *(uint *)((long)param_1 + uVar40 * 0x30 + 0x4f4) = uVar46;
                                *(int *)(param_1 + uVar40 * 6 + 0x9f) = iVar37;
                                *(undefined4 *)((long)param_1 + uVar40 * 0x30 + 0x4e4) = 0;
                              }
                              uVar64 = uVar64 - 1;
                            } while ((uVar64 & 0xfffffffe) != 0);
                            uVar73 = uVar27 + 1;
                            uVar64 = (ulong)uVar73;
                            uVar31 = uVar73 + uVar75;
                            uVar67 = (uint)local_e0;
                            if (lVar34 == 0) {
                              uVar67 = uVar27 + 1;
                            }
                            local_e0 = (ulong)uVar67;
                            uVar67 = uVar39;
                            if (uVar31 <= uVar39) {
                              uVar67 = uVar31;
                            }
                            uVar40 = uVar64;
                            if (uVar73 < uVar67) {
                              uVar67 = uVar50;
                              if (uVar31 <= uVar50) {
                                uVar67 = uVar31;
                              }
                              uVar43 = uVar5;
                              if (uVar78 <= uVar5) {
                                uVar43 = uVar78;
                              }
                              if (uVar31 <= uVar43) {
                                uVar43 = uVar31;
                              }
                              do {
                                uVar40 = uVar64;
                                if (pbVar60[uVar64] != pbVar65[uVar64]) break;
                                uVar64 = uVar64 + 1;
                                uVar40 = (ulong)uVar67;
                              } while (uVar43 != uVar64);
                            }
                            iVar44 = (int)uVar40;
                            uVar73 = iVar44 - uVar73;
                            local_168 = uVar69;
                            if (1 < uVar73) {
                              iVar42 = 0;
                              uVar67 = 0x100;
                              uVar31 = uVar27 + uVar74;
                              iVar13 = *(int *)((long)param_1 +
                                               ((ulong)(*(ushort *)
                                                         ((long)param_1 +
                                                         (ulong)(uVar31 & uVar56) * 2 +
                                                         (ulong)*(uint *)(&DAT_0054919c + uVar62 * 4
                                                                         ) * 0x20 + 0x33bf0) >> 2) &
                                               0x3ffc) + 0x324dc);
                              iVar14 = *(int *)((long)param_1 +
                                               (ulong)(uVar27 - 2) * 4 + uVar59 * 0x440 + 0x38ea0);
                              uVar43 = pbVar60[uVar32] | 0x100;
                              uVar61 = (uint)pbVar65[uVar32];
                              do {
                                iVar6 = uVar67 + (uVar43 >> 8);
                                uVar10 = uVar67 & uVar61 << 1;
                                uVar22 = uVar43 << 1;
                                uVar67 = uVar67 & ((uVar61 ^ uVar43) << 1 ^ 0xffffffff);
                                iVar42 = *(int *)((long)param_1 +
                                                 (ulong)((-(uVar43 >> 7 & 1) & 0x7f0 ^
                                                         (uint)*(ushort *)
                                                                (pcVar35 +
                                                                (ulong)(iVar6 + uVar10) * 2 +
                                                                (ulong)(((uint)(pbVar60[uVar27 - 1]
                                                                               >> (ulong)(8 - uVar72
                                                                                         & 0x1f)) +
                                                                        ((uVar31 & uVar11) <<
                                                                        (ulong)(uVar72 & 0x1f))) *
                                                                       0x300) * 2)) >> 4) * 4 +
                                                 0x324dc) + iVar42;
                                uVar43 = uVar22;
                                uVar61 = uVar61 << 1;
                              } while (uVar22 < 0x10000);
                              uVar32 = (ulong)*(uint *)(&DAT_0054913c +
                                                       (ulong)*(uint *)(&DAT_0054919c + uVar62 * 4)
                                                       * 4);
                              uVar64 = (ulong)(uVar31 + 1 & uVar56);
                              iVar6 = *(int *)((long)param_1 +
                                              ((ulong)(*(ushort *)
                                                        ((long)param_1 +
                                                        uVar64 * 2 + uVar32 * 0x20 + 0x33bf0) >> 2)
                                               & 0x3ffc ^ 0x1fc) + 0x324dc);
                              uVar31 = uVar73 + uVar71 + 1;
                              iVar15 = *(int *)((long)param_1 +
                                               ((ulong)(*(ushort *)
                                                         ((long)param_1 + uVar32 * 2 + 0x33d70) >> 2
                                                       ) & 0x3ffc ^ 0x1fc) + 0x324dc);
                              if ((uint)uVar69 < uVar31) {
                                local_168 = (ulong)(iVar44 + uVar46);
                                uVar40 = local_168 - uVar69;
                                if (1 < uVar40) {
                                  uVar45 = (uVar46 + iVar44) - uVar69;
                                  lVar58 = uVar69 * 0x30;
                                  uVar69 = (uVar40 & 0xfffffffffffffffe) + uVar69;
                                  uVar45 = uVar45 & 0xfffffffffffffffe;
                                  puVar36 = (undefined4 *)((long)param_1 + lVar58 + 0x53c);
                                  do {
                                    uVar45 = uVar45 - 2;
                                    puVar36[-0xc] = 0x40000000;
                                    *puVar36 = 0x40000000;
                                    puVar36 = puVar36 + 0x18;
                                  } while (uVar45 != 0);
                                  if (uVar40 == (uVar40 & 0xfffffffffffffffe)) goto LAB_00d9ac38;
                                }
                                lVar58 = (uVar46 + iVar44) - uVar69;
                                puVar36 = (undefined4 *)((long)param_1 + uVar69 * 0x30 + 0x50c);
                                do {
                                  lVar58 = lVar58 + -1;
                                  *puVar36 = 0x40000000;
                                  puVar36 = puVar36 + 0xc;
                                } while (lVar58 != 0);
                              }
LAB_00d9ac38:
                              uVar73 = iVar14 + iVar41 + iVar13 + iVar42 + iVar6 + iVar15 +
                                       *(int *)((long)param_1 +
                                               (ulong)(uVar73 - 2) * 4 + uVar64 * 0x440 + 0x38ea0) +
                                       *(int *)((long)param_1 +
                                               ((ulong)(*(ushort *)
                                                         ((long)param_1 + uVar32 * 2 + 0x33d88) >> 2
                                                       ) & 0x3ffc) + 0x324dc) +
                                       *(int *)((long)param_1 +
                                               ((ulong)(*(ushort *)
                                                         ((long)param_1 +
                                                         uVar64 * 2 + uVar32 * 0x20 + 0x33dd0) >> 2)
                                                & 0x3ffc ^ 0x1fc) + 0x324dc);
                              if (uVar73 < *(uint *)((long)param_1 + (ulong)uVar31 * 0x30 + 0x4dc))
                              {
                                *(uint *)((long)param_1 + (ulong)uVar31 * 0x30 + 0x4dc) = uVar73;
                                *(uint *)((long)param_1 + (ulong)uVar31 * 0x30 + 0x4f4) = uVar71 + 1
                                ;
                                *(undefined4 *)(param_1 + (ulong)uVar31 * 6 + 0x9f) = 0;
                                *(uint *)((long)param_1 + (ulong)uVar31 * 0x30 + 0x4ec) = uVar46;
                                *(undefined8 *)((long)param_1 + (ulong)uVar31 * 0x30 + 0x4e4) =
                                     0x100000001;
                                *(int *)(param_1 + (ulong)uVar31 * 6 + 0x9e) = iVar37;
                              }
                            }
                          }
LAB_00d9acf0:
                          lVar34 = lVar34 + 1;
                          if (lVar34 != 4) goto LAB_00d9a758;
                          uVar57 = uVar70;
                          if (uVar38 < uVar70) {
                            uVar29 = 0;
                            do {
                              uVar32 = (ulong)uVar29;
                              uVar29 = uVar29 + 2;
                              puVar63 = (uint *)((long)param_1 + uVar32 * 4 + 0x326dc);
                            } while (*puVar63 < uVar38);
                            *puVar63 = uVar38;
                            uVar57 = uVar38;
                          }
                          if ((uint)local_e0 <= uVar57) {
                            iVar30 = *(int *)((long)param_1 + uVar77 * 4 + 0x324dc);
                            uVar32 = local_168;
                            if ((uint)local_168 < uVar57 + uVar46) {
                              uVar57 = uVar70;
                              if (uVar5 <= uVar70) {
                                uVar57 = uVar5;
                              }
                              if (uVar75 <= uVar57) {
                                uVar57 = uVar75;
                              }
                              if (uVar78 <= uVar57) {
                                uVar57 = uVar78;
                              }
                              uVar32 = (ulong)(uVar57 + uVar46);
                              uVar69 = uVar32 - local_168;
                              if (1 < uVar69) {
                                uVar57 = uVar70;
                                if (uVar5 <= uVar70) {
                                  uVar57 = uVar5;
                                }
                                if (uVar75 <= uVar57) {
                                  uVar57 = uVar75;
                                }
                                if (uVar78 <= uVar57) {
                                  uVar57 = uVar78;
                                }
                                uVar64 = (uVar57 + uVar46) - local_168 & 0xfffffffffffffffe;
                                lVar34 = local_168 * 0x30;
                                local_168 = (uVar69 & 0xfffffffffffffffe) + local_168;
                                puVar36 = (undefined4 *)((long)param_1 + lVar34 + 0x53c);
                                do {
                                  uVar64 = uVar64 - 2;
                                  puVar36[-0xc] = 0x40000000;
                                  *puVar36 = 0x40000000;
                                  puVar36 = puVar36 + 0x18;
                                } while (uVar64 != 0);
                                if (uVar69 == (uVar69 & 0xfffffffffffffffe)) goto LAB_00d9ae40;
                              }
                              if (uVar5 <= uVar70) {
                                uVar70 = uVar5;
                              }
                              if (uVar75 <= uVar70) {
                                uVar70 = uVar75;
                              }
                              if (uVar78 <= uVar70) {
                                uVar70 = uVar78;
                              }
                              lVar34 = (uVar70 + uVar46) - local_168;
                              puVar36 = (undefined4 *)((long)param_1 + local_168 * 0x30 + 0x50c);
                              do {
                                lVar34 = lVar34 + -1;
                                *puVar36 = 0x40000000;
                                puVar36 = puVar36 + 0xc;
                              } while (lVar34 != 0);
                            }
LAB_00d9ae40:
                            local_168 = uVar32;
                            uVar57 = 0xfffffffe;
                            do {
                              uVar70 = uVar57;
                              uVar57 = uVar70 + 2;
                            } while (*(uint *)((long)param_1 + (ulong)uVar57 * 4 + 0x326dc) <
                                     (uint)local_e0);
                            uVar70 = *(uint *)((long)param_1 + (ulong)(uVar70 + 3) * 4 + 0x326dc);
                            uVar32 = (ulong)uVar70;
                            iVar37 = 6;
                            if (-1 < (int)(uVar70 - 0x80000)) {
                              iVar37 = 0x12;
                            }
                            uVar56 = *(uint *)ppcVar2;
                            uVar70 = (uint)*(byte *)((long)param_1 +
                                                    (ulong)(uVar70 >> iVar37) + 0x304dc) +
                                     iVar37 * 2;
                            uVar69 = local_e0;
                            do {
                              uVar50 = uVar57;
                              do {
                                uVar57 = (uint)uVar32;
                                uVar72 = 0;
                                iVar41 = (int)uVar69;
                                iVar37 = (int)local_e0;
                                while( true ) {
                                  uVar11 = iVar41 + -2 + uVar72;
                                  uVar69 = (ulong)uVar11;
                                  if (4 < iVar41 + uVar72) {
                                    uVar11 = 3;
                                  }
                                  if (uVar57 < 0x80) {
                                    iVar44 = *(int *)((long)param_1 +
                                                     uVar32 * 4 + (ulong)uVar11 * 0x200 + 0x3338c);
                                  }
                                  else {
                                    iVar44 = *(int *)((long)param_1 +
                                                     (ulong)(uVar57 & 0xf) * 4 + 0x33b8c) +
                                             *(int *)((long)param_1 +
                                                     (ulong)uVar70 * 4 + (ulong)uVar11 * 0x100 +
                                                     0x32f8c);
                                  }
                                  uVar64 = (ulong)(uVar55 + iVar41 + uVar72 + 1);
                                  uVar11 = iVar30 + iVar12 +
                                           *(int *)((long)param_1 +
                                                   uVar69 * 4 + uVar59 * 0x440 + 0x34658) + iVar44;
                                  if (uVar11 < *(uint *)((long)param_1 + uVar64 * 0x30 + 0x4dc)) {
                                    *(uint *)((long)param_1 + uVar64 * 0x30 + 0x4dc) = uVar11;
                                    *(uint *)((long)param_1 + uVar64 * 0x30 + 0x4f4) = uVar46;
                                    *(uint *)(param_1 + uVar64 * 6 + 0x9f) = uVar57 + 4;
                                    *(undefined4 *)((long)param_1 + uVar64 * 0x30 + 0x4e4) = 0;
                                  }
                                  if (iVar41 + uVar72 ==
                                      *(uint *)((long)param_1 + (ulong)uVar50 * 4 + 0x326dc)) break;
                                  uVar72 = uVar72 + 1;
                                }
                                uVar71 = iVar41 + uVar72;
                                uVar69 = (ulong)(uVar71 + 1);
                                local_e0 = (ulong)(iVar37 + uVar72 + 1);
                                uVar73 = uVar56 + 1 + iVar41 + uVar72;
                                uVar31 = uVar39;
                                if (uVar73 <= uVar39) {
                                  uVar31 = uVar73;
                                }
                                uVar32 = uVar69;
                                uVar64 = local_e0;
                                if (uVar71 + 1 < uVar31) {
                                  do {
                                    uVar32 = uVar64;
                                    if (pbVar60[uVar32] != pbVar60[uVar32 - (uVar57 + 1)]) break;
                                    uVar32 = uVar32 + 1;
                                    uVar64 = uVar32;
                                  } while (uVar32 < uVar31);
                                }
                                iVar44 = (int)uVar32;
                                uVar73 = ~uVar72 + (iVar44 - iVar41);
                                if (1 < uVar73) {
                                  uVar31 = local_170 + iVar41 + uVar72;
                                  uVar5 = *(uint *)((long)param_1 + 0x33be4) & uVar31;
                                  iVar42 = 0;
                                  iVar13 = *(int *)((long)param_1 +
                                                   ((ulong)(*(ushort *)
                                                             ((long)param_1 +
                                                             (ulong)uVar5 * 2 +
                                                             (ulong)*(uint *)(&DAT_005491cc +
                                                                             uVar62 * 4) * 0x20 +
                                                             0x33bf0) >> 2) & 0x3ffc) + 0x324dc);
                                  uVar38 = 0x100;
                                  uVar75 = pbVar60[uVar71] | 0x100;
                                  uVar71 = (uint)pbVar60[(ulong)uVar71 - (ulong)(uVar57 + 1)];
                                  do {
                                    iVar14 = uVar38 + (uVar75 >> 8);
                                    uVar67 = uVar38 & uVar71 << 1;
                                    uVar43 = uVar75 << 1;
                                    uVar38 = uVar38 & ((uVar71 ^ uVar75) << 1 ^ 0xffffffff);
                                    iVar42 = *(int *)((long)param_1 +
                                                     (ulong)((-(uVar75 >> 7 & 1) & 0x7f0 ^
                                                             (uint)*(ushort *)
                                                                    (pcVar35 +
                                                                    (ulong)(iVar14 + uVar67) * 2 +
                                                                    (ulong)(((uint)(pbVar60[(iVar41 
                                                  + uVar72) - 1] >>
                                                  (ulong)(8 - *(uint *)((long)param_1 + 0x33bd4) &
                                                         0x1f)) +
                                                  ((*(uint *)(param_1 + 0x677c) & uVar31) <<
                                                  (ulong)(*(uint *)((long)param_1 + 0x33bd4) & 0x1f)
                                                  )) * 0x300) * 2)) >> 4) * 4 + 0x324dc) + iVar42;
                                    uVar75 = uVar43;
                                    uVar71 = uVar71 << 1;
                                  } while (uVar43 < 0x10000);
                                  uVar64 = (ulong)*(uint *)(&DAT_0054913c +
                                                           (ulong)*(uint *)(&DAT_005491cc +
                                                                           uVar62 * 4) * 4);
                                  uVar77 = (ulong)(uVar5 + 1 & *(uint *)((long)param_1 + 0x33be4));
                                  lVar34 = uVar77 * 2 + uVar64 * 0x20;
                                  iVar14 = uVar55 + iVar41 + uVar72 + 2;
                                  uVar73 = uVar73 + iVar14;
                                  iVar6 = *(int *)((long)param_1 +
                                                  ((ulong)(*(ushort *)
                                                            ((long)param_1 + lVar34 + 0x33bf0) >> 2)
                                                   & 0x3ffc ^ 0x1fc) + 0x324dc);
                                  iVar15 = *(int *)((long)param_1 +
                                                   ((ulong)(*(ushort *)
                                                             ((long)param_1 + uVar64 * 2 + 0x33d70)
                                                           >> 2) & 0x3ffc ^ 0x1fc) + 0x324dc);
                                  uVar32 = local_168;
                                  if ((uint)local_168 < uVar73) {
                                    uVar32 = (ulong)(iVar44 + uVar46);
                                    uVar40 = uVar32 - local_168;
                                    if (1 < uVar40) {
                                      uVar45 = (uVar46 + iVar44) - local_168 & 0xfffffffffffffffe;
                                      lVar58 = local_168 * 0x30;
                                      local_168 = (uVar40 & 0xfffffffffffffffe) + local_168;
                                      puVar36 = (undefined4 *)((long)param_1 + lVar58 + 0x53c);
                                      do {
                                        uVar45 = uVar45 - 2;
                                        puVar36[-0xc] = 0x40000000;
                                        *puVar36 = 0x40000000;
                                        puVar36 = puVar36 + 0x18;
                                      } while (uVar45 != 0);
                                      if (uVar40 == (uVar40 & 0xfffffffffffffffe))
                                      goto LAB_00d9b240;
                                    }
                                    lVar58 = (uVar46 + iVar44) - local_168;
                                    puVar36 = (undefined4 *)
                                              ((long)param_1 + local_168 * 0x30 + 0x50c);
                                    do {
                                      lVar58 = lVar58 + -1;
                                      *puVar36 = 0x40000000;
                                      puVar36 = puVar36 + 0xc;
                                    } while (lVar58 != 0);
                                  }
LAB_00d9b240:
                                  local_168 = uVar32;
                                  uVar11 = iVar13 + uVar11 + iVar42 + iVar6 + iVar15 +
                                           *(int *)((long)param_1 +
                                                   (ulong)(((iVar44 - iVar41) - uVar72) - 3) * 4 +
                                                   uVar77 * 0x440 + 0x38ea0) +
                                           *(int *)((long)param_1 +
                                                   ((ulong)(*(ushort *)
                                                             ((long)param_1 + uVar64 * 2 + 0x33d88)
                                                           >> 2) & 0x3ffc) + 0x324dc) +
                                           *(int *)((long)param_1 +
                                                   ((ulong)(*(ushort *)
                                                             ((long)param_1 + lVar34 + 0x33dd0) >> 2
                                                           ) & 0x3ffc ^ 0x1fc) + 0x324dc);
                                  if (uVar11 < *(uint *)((long)param_1 +
                                                        (ulong)uVar73 * 0x30 + 0x4dc)) {
                                    *(uint *)((long)param_1 + (ulong)uVar73 * 0x30 + 0x4dc) = uVar11
                                    ;
                                    *(int *)((long)param_1 + (ulong)uVar73 * 0x30 + 0x4f4) = iVar14;
                                    *(undefined4 *)(param_1 + (ulong)uVar73 * 6 + 0x9f) = 0;
                                    *(uint *)((long)param_1 + (ulong)uVar73 * 0x30 + 0x4ec) = uVar46
                                    ;
                                    *(undefined8 *)((long)param_1 + (ulong)uVar73 * 0x30 + 0x4e4) =
                                         0x100000001;
                                    *(uint *)(param_1 + (ulong)uVar73 * 6 + 0x9e) = uVar57 + 4;
                                  }
                                }
                                uVar57 = uVar50 + 2;
                                if (uVar57 == uVar29) goto LAB_00d99eb0;
                                uVar11 = *(uint *)((long)param_1 + (ulong)(uVar50 + 3) * 4 + 0x326dc
                                                  );
                                uVar32 = (ulong)uVar11;
                                uVar50 = uVar57;
                              } while (uVar11 < 0x80);
                              iVar44 = 6;
                              if (-1 < (int)(uVar11 - 0x80000)) {
                                iVar44 = 0x12;
                              }
                              uVar70 = (uint)*(byte *)((long)param_1 +
                                                      (ulong)(uVar11 >> iVar44) + 0x304dc) +
                                       iVar44 * 2;
                              local_e0 = (ulong)(iVar37 + uVar72 + 1);
                              uVar69 = (ulong)(iVar41 + uVar72 + 1);
                            } while( true );
                          }
                        }
LAB_00d99eb0:
                        uVar78 = uVar78 - 1;
                        iVar26 = iVar26 + 1;
                        uVar32 = local_168;
                        uVar57 = uVar74;
                      } while (iVar26 != (int)local_168);
                    }
                    *(int *)(param_1 + 0x99) = (int)local_168;
                    uVar57 = *(uint *)((long)param_1 + local_168 * 0x30 + 0x4f4);
                    uVar27 = *(undefined4 *)(param_1 + local_168 * 6 + 0x9f);
                    do {
                      uVar32 = (ulong)uVar57;
                      if (*(int *)((long)param_1 + local_168 * 0x30 + 0x4e4) == 0) {
                        uVar66 = *(undefined4 *)(param_1 + (ulong)uVar57 * 6 + 0x9f);
                        uVar78 = *(uint *)((long)param_1 + uVar32 * 0x30 + 0x4f4);
                      }
                      else {
                        iVar26 = *(int *)(param_1 + local_168 * 6 + 0x9d);
                        uVar78 = uVar57 - 1;
                        *(undefined4 *)((long)param_1 + uVar32 * 0x30 + 0x4e4) = 0;
                        if (iVar26 == 0) {
                          uVar66 = 0xffffffff;
                        }
                        else {
                          uVar66 = 0xffffffff;
                          uVar79 = *(undefined8 *)((long)param_1 + local_168 * 0x30 + 0x4ec);
                          *(undefined4 *)((long)param_1 + (ulong)uVar78 * 0x30 + 0x4e4) = 0;
                          *(undefined8 *)((long)param_1 + (ulong)uVar78 * 0x30 + 0x4f4) = uVar79;
                        }
                      }
                      *(undefined4 *)(param_1 + (ulong)uVar57 * 6 + 0x9f) = uVar27;
                      *(int *)((long)param_1 + uVar32 * 0x30 + 0x4f4) = (int)local_168;
                      bVar25 = uVar57 != 0;
                      local_168 = uVar32;
                      uVar57 = uVar78;
                      uVar27 = uVar66;
                    } while (bVar25);
LAB_00d9b46c:
                    uVar57 = *(uint *)((long)param_1 + 0x4f4);
                    uVar78 = *(uint *)(param_1 + 0x9f);
                    *(uint *)((long)param_1 + 0x4cc) = uVar57;
                    goto LAB_00d98728;
                  }
                }
                else {
                  iVar26 = uVar55 - 1;
                  uVar78 = *(int *)((long)param_1 + (ulong)(uVar29 - 1) * 4 + 0x326dc) + 4;
                  uVar57 = uVar55;
                  if (iVar26 != 0) goto LAB_00d98710;
                }
LAB_00d99944:
                uVar57 = 1;
              }
              else {
                uVar32 = 0;
                local_b0[3] = 0;
                uVar57 = local_b0[uVar78];
                uVar50 = *(uint *)ppcVar2;
                if (uVar57 < uVar50) goto LAB_00d986b0;
LAB_00d99754:
                if (uVar57 - 1 == 0) goto LAB_00d99944;
                *(uint *)((long)param_1 + 0x32f74) =
                     *(int *)((long)param_1 + 0x32f74) + (uVar57 - 1);
                (*param_1[5])(param_1[6]);
              }
LAB_00d98728:
              bVar25 = uVar57 == 1;
              uVar32 = (ulong)(*(uint *)((long)param_1 + 0x33be4) & uVar28);
              if ((!bVar25) || (uVar78 != 0xffffffff)) goto LAB_00d9887c;
              lVar34 = uVar32 * 2 + (ulong)*(uint *)(param_1 + 0x65f1) * 0x20;
              uVar20 = *(ushort *)((long)param_1 + lVar34 + 0x33bf0);
              uVar57 = (*(uint *)ppcVar3 >> 0xb) * (uint)uVar20;
              *(uint *)ppcVar3 = uVar57;
              *(ushort *)((long)param_1 + lVar34 + 0x33bf0) = uVar20 + (short)(0x800 - uVar20 >> 5);
              if (uVar57 >> 0x18 == 0) {
                *(uint *)ppcVar3 = uVar57 * 0x100;
                FUN_00d9cea4(ppcVar3);
              }
              lVar34 = (*param_1[3])(param_1[6]);
              pbVar47 = (byte *)(lVar34 - (ulong)*(uint *)((long)param_1 + 0x32f74));
              iVar26 = (uint)(pbVar47[-1] >> (ulong)(8 - *(uint *)((long)param_1 + 0x33bd4) & 0x1f))
                       + ((*(uint *)(param_1 + 0x677c) & uVar28) <<
                         (ulong)(*(uint *)((long)param_1 + 0x33bd4) & 0x1f));
              pcVar51 = param_1[0x677d];
              if (*(uint *)(param_1 + 0x65f1) < 7) {
                uVar57 = *pbVar47 | 0x100;
                do {
                  uVar32 = (ulong)(uVar57 >> 8);
                  uVar20 = *(ushort *)(pcVar51 + uVar32 * 2 + (ulong)(uint)(iVar26 * 0x300) * 2);
                  uVar78 = (*(uint *)ppcVar3 >> 0xb) * (uint)uVar20;
                  if ((uVar57 >> 7 & 1) == 0) {
                    *(uint *)ppcVar3 = uVar78;
                    *(ushort *)(pcVar51 + uVar32 * 2 + (ulong)(uint)(iVar26 * 0x300) * 2) =
                         uVar20 + (short)(0x800 - uVar20 >> 5);
                  }
                  else {
                    uVar48 = (ulong)uVar78;
                    uVar78 = *(uint *)ppcVar3 - uVar78;
                    *ppcVar4 = *ppcVar4 + uVar48;
                    *(uint *)ppcVar3 = uVar78;
                    *(ushort *)(pcVar51 + uVar32 * 2 + (ulong)(uint)(iVar26 * 0x300) * 2) =
                         uVar20 - (uVar20 >> 5);
                  }
                  if (uVar78 >> 0x18 == 0) {
                    *(uint *)ppcVar3 = uVar78 << 8;
                    FUN_00d9cea4(ppcVar3);
                  }
                  uVar57 = uVar57 << 1;
                } while (uVar57 < 0x10000);
              }
              else {
                uVar57 = 0x100;
                uVar78 = *pbVar47 | 0x100;
                uVar29 = (uint)pbVar47[~(ulong)*(uint *)ppcVar76];
                do {
                  uVar32 = (ulong)(uVar57 + (uVar78 >> 8) + (uVar29 << 1 & uVar57));
                  uVar20 = *(ushort *)(pcVar51 + uVar32 * 2 + (ulong)(uint)(iVar26 * 0x300) * 2);
                  uVar55 = (*(uint *)ppcVar3 >> 0xb) * (uint)uVar20;
                  if ((uVar78 >> 7 & 1) == 0) {
                    *(uint *)ppcVar3 = uVar55;
                    *(ushort *)(pcVar51 + uVar32 * 2 + (ulong)(uint)(iVar26 * 0x300) * 2) =
                         uVar20 + (short)(0x800 - uVar20 >> 5);
                  }
                  else {
                    uVar48 = (ulong)uVar55;
                    uVar55 = *(uint *)ppcVar3 - uVar55;
                    *ppcVar4 = *ppcVar4 + uVar48;
                    *(uint *)ppcVar3 = uVar55;
                    *(ushort *)(pcVar51 + uVar32 * 2 + (ulong)(uint)(iVar26 * 0x300) * 2) =
                         uVar20 - (uVar20 >> 5);
                  }
                  if (uVar55 >> 0x18 == 0) {
                    *(uint *)ppcVar3 = uVar55 << 8;
                    FUN_00d9cea4(ppcVar3);
                  }
                  uVar55 = uVar78 << 1;
                  uVar57 = uVar57 & ((uVar78 ^ uVar29) << 1 ^ 0xffffffff);
                  uVar78 = uVar55;
                  uVar29 = uVar29 << 1;
                } while (uVar55 < 0x10000);
              }
              uVar57 = 1;
              *(undefined4 *)(param_1 + 0x65f1) =
                   *(undefined4 *)(&DAT_0054913c + (ulong)*(uint *)(param_1 + 0x65f1) * 4);
            }
            else {
              if (*(int *)((long)param_1 + 0x32f74) == 0) {
                uVar27 = (*param_1[2])(param_1[6]);
                *(undefined4 *)(param_1 + 0x9b) = uVar27;
                uVar29 = (*param_1[4])(param_1[6],lVar7);
                if (uVar29 == 0) {
                  uVar32 = 0;
                }
                else {
                  uVar57 = *(uint *)((long)param_1 + (ulong)(uVar29 - 2) * 4 + 0x326dc);
                  uVar32 = (ulong)uVar57;
                  if (uVar57 == *(uint *)ppcVar2) {
                    lVar34 = (*param_1[3])(param_1[6]);
                    uVar78 = *(uint *)(param_1 + 0x9b);
                    if (0x110 < uVar78) {
                      uVar78 = 0x111;
                    }
                    if (uVar57 < uVar78) {
                      do {
                        if (*(char *)(lVar34 + -1 + uVar32) !=
                            *(char *)(((lVar34 + -1) -
                                      (ulong)(*(int *)((long)param_1 +
                                                      (ulong)(uVar29 - 1) * 4 + 0x326dc) + 1)) +
                                     uVar32)) goto LAB_00d97a94;
                        uVar32 = uVar32 + 1;
                      } while (uVar78 != (uint)uVar32);
                      uVar32 = (ulong)uVar78;
                    }
                  }
                }
LAB_00d97a94:
                *(int *)((long)param_1 + 0x32f74) = *(int *)((long)param_1 + 0x32f74) + 1;
                uVar55 = *(uint *)(param_1 + 0x9b);
                if (1 < uVar55) goto LAB_00d97aac;
LAB_00d986e0:
                uVar57 = 1;
                uVar78 = 0xffffffff;
                goto LAB_00d98728;
              }
              uVar32 = (ulong)*(uint *)(param_1 + 0x9a);
              uVar29 = *(uint *)((long)param_1 + 0x4d4);
              uVar55 = *(uint *)(param_1 + 0x9b);
              if (uVar55 < 2) goto LAB_00d986e0;
LAB_00d97aac:
              uVar46 = (uint)uVar32;
              if (0x110 < uVar55) {
                uVar55 = 0x111;
              }
              uVar48 = (ulong)uVar55;
              pcVar33 = (char *)(*param_1[3])(param_1[6]);
              pcVar52 = pcVar33 + -1;
              cVar16 = *pcVar52;
              lVar34 = -(ulong)(*(uint *)ppcVar76 + 1);
              if (uVar55 < 3) {
                if ((cVar16 == pcVar52[-(ulong)(*(uint *)ppcVar76 + 1)]) &&
                   (*pcVar33 == pcVar33[lVar34])) {
                  uVar78 = 2;
                  if (2 < *(uint *)ppcVar2) {
                    uVar57 = 0;
                    goto LAB_00d97b70;
                  }
                  uVar78 = 0;
LAB_00d97fc4:
                  iVar26 = 1;
                  uVar57 = 2;
                }
                else {
                  uVar78 = 0;
                  uVar57 = 1;
LAB_00d97b70:
                  uVar48 = (ulong)(*(int *)((long)param_1 + 0x32f7c) + 1);
                  if ((cVar16 == pcVar52[-uVar48]) && (*pcVar33 == pcVar33[-uVar48])) {
                    if (*(uint *)ppcVar2 < 3) {
                      uVar78 = 1;
                      goto LAB_00d97fc4;
                    }
                    uVar70 = 2;
                    if (uVar57 == 0) {
                      uVar70 = uVar78;
                    }
                    uVar48 = (ulong)(*(int *)(param_1 + 0x65f0) + 1);
                    cVar18 = pcVar52[-uVar48];
                  }
                  else {
                    uVar57 = 0;
                    uVar48 = (ulong)(*(int *)(param_1 + 0x65f0) + 1);
                    cVar18 = pcVar52[-uVar48];
                    uVar70 = uVar78;
                  }
                  uVar74 = uVar57;
                  if ((cVar16 == cVar18) && (*pcVar33 == pcVar33[-uVar48])) {
                    if (*(uint *)ppcVar2 < 3) {
                      iVar26 = 1;
                      uVar78 = 2;
                      uVar57 = 2;
                      goto LAB_00d98710;
                    }
                    bVar25 = 1 < uVar70;
                    uVar70 = 2;
                    uVar74 = 2;
                    if (bVar25) {
                      uVar74 = uVar57;
                    }
                  }
                  uVar48 = (ulong)(*(int *)((long)param_1 + 0x32f84) + 1);
                  if ((cVar16 != pcVar52[-uVar48]) || (*pcVar33 != pcVar33[-uVar48]))
                  goto LAB_00d98058;
                  if (2 < *(uint *)ppcVar2) {
                    uVar78 = 3;
                    if (1 < uVar70) {
                      uVar78 = uVar74;
                    }
                    uVar56 = *(uint *)ppcVar2;
                    uVar57 = 2;
                    goto joined_r0x00d97cd0;
                  }
                  iVar26 = 1;
                  uVar78 = 3;
                  uVar57 = 2;
                }
LAB_00d98710:
                *(int *)((long)param_1 + 0x32f74) = *(int *)((long)param_1 + 0x32f74) + iVar26;
                (*param_1[5])(param_1[6]);
                goto LAB_00d98728;
              }
              if ((cVar16 != pcVar52[-(ulong)(*(uint *)ppcVar76 + 1)]) ||
                 (*pcVar33 != pcVar33[lVar34])) {
                uVar56 = 0;
                uVar62 = (ulong)(*(int *)((long)param_1 + 0x32f7c) + 1);
                if (cVar16 == pcVar52[-uVar62]) {
LAB_00d97bec:
                  if (*pcVar33 != pcVar33[-uVar62]) goto LAB_00d97f10;
                  lVar34 = 0;
                  do {
                    if (pcVar33[lVar34 + 1] != pcVar33[lVar34 + -uVar62 + 1]) {
                      uVar57 = (int)lVar34 + 2;
                      break;
                    }
                    lVar34 = lVar34 + 1;
                    uVar57 = uVar55;
                  } while (uVar48 - 2 != lVar34);
                  if (*(uint *)ppcVar2 <= uVar57) {
                    uVar78 = 1;
                    uVar56 = uVar57;
                    goto LAB_00d982e0;
                  }
                  uVar78 = (uint)(uVar56 < uVar57);
                  if (uVar57 <= uVar56) {
                    uVar57 = uVar56;
                  }
                  uVar62 = (ulong)(*(int *)(param_1 + 0x65f0) + 1);
                  cVar18 = pcVar52[-uVar62];
                  uVar56 = uVar57;
                }
                else {
LAB_00d97f10:
                  uVar78 = 0;
                  uVar62 = (ulong)(*(int *)(param_1 + 0x65f0) + 1);
                  cVar18 = pcVar52[-uVar62];
                }
                uVar74 = uVar78;
                uVar70 = uVar56;
                if ((cVar16 == cVar18) && (*pcVar33 == pcVar33[-uVar62])) {
                  lVar34 = 0;
                  do {
                    if (pcVar33[lVar34 + 1] != pcVar33[lVar34 + -uVar62 + 1]) {
                      uVar57 = (int)lVar34 + 2;
                      break;
                    }
                    lVar34 = lVar34 + 1;
                    uVar57 = uVar55;
                  } while (uVar48 - 2 != lVar34);
                  if (*(uint *)ppcVar2 <= uVar57) {
                    uVar78 = 2;
                    uVar56 = uVar57;
                    goto LAB_00d982e0;
                  }
                  uVar70 = uVar57;
                  if (uVar57 <= uVar56) {
                    uVar70 = uVar56;
                  }
                  uVar74 = 2;
                  if (uVar57 <= uVar56) {
                    uVar74 = uVar78;
                  }
                }
                uVar62 = (ulong)(*(int *)((long)param_1 + 0x32f84) + 1);
                if ((cVar16 == pcVar52[-uVar62]) && (lVar34 = -uVar62, *pcVar33 == pcVar33[lVar34]))
                {
                  lVar58 = 0;
                  do {
                    if (pcVar33[lVar58 + 1] != pcVar33[lVar58 + lVar34 + 1]) {
                      uVar56 = (int)lVar58 + 2;
                      break;
                    }
                    lVar58 = lVar58 + 1;
                    uVar56 = uVar55;
                  } while (uVar48 - 2 != lVar58);
                  if (*(uint *)ppcVar2 <= uVar56) {
                    uVar78 = 3;
                    goto LAB_00d982e0;
                  }
                  uVar57 = uVar56;
                  if (uVar56 <= uVar70) {
                    uVar57 = uVar70;
                  }
                  uVar78 = 3;
                  if (uVar56 <= uVar70) {
                    uVar78 = uVar74;
                  }
                  if (uVar46 < *(uint *)ppcVar2) goto LAB_00d98064;
LAB_00d9829c:
                  iVar26 = uVar46 - 1;
                  uVar78 = *(int *)((long)param_1 + (ulong)(uVar29 - 1) * 4 + 0x326dc) + 4;
                  uVar57 = uVar46;
                  if (iVar26 != 0) goto LAB_00d98710;
                  uVar57 = 1;
                }
                else {
LAB_00d98058:
                  uVar56 = *(uint *)ppcVar2;
                  uVar78 = uVar74;
                  uVar57 = uVar70;
joined_r0x00d97cd0:
                  if (uVar56 <= uVar46) goto LAB_00d9829c;
LAB_00d98064:
                  if (uVar46 < 2) {
                    uVar70 = 0;
                  }
                  else {
                    uVar70 = *(uint *)((long)param_1 + (ulong)(uVar29 - 1) * 4 + 0x326dc);
                    if (2 < uVar29) {
                      uVar48 = (ulong)uVar29;
                      do {
                        uVar29 = *(uint *)((long)param_1 + (ulong)((int)uVar48 - 4) * 4 + 0x326dc);
                        uVar46 = (uint)uVar32;
                        if ((uVar46 != uVar29 + 1) ||
                           (uVar74 = *(uint *)((long)param_1 + uVar48 * 4 + 0x326d0),
                           uVar70 >> 7 <= uVar74)) break;
                        uVar48 = uVar48 - 2;
                        uVar32 = (ulong)uVar29;
                        uVar70 = uVar74;
                        uVar46 = uVar29;
                      } while (2 < (uint)uVar48);
                    }
                    if (0x7f < uVar70 && uVar46 == 2) {
                      uVar46 = 1;
                    }
                  }
                  if ((1 < uVar57) &&
                     (((uVar46 <= uVar57 + 1 || ((uVar46 <= uVar57 + 2 && (0x1ff < uVar70)))) ||
                      ((uVar46 <= uVar57 + 3 && (0x7fff < uVar70)))))) {
                    iVar26 = uVar57 - 1;
                    goto LAB_00d98710;
                  }
                  uVar57 = 1;
                  uVar78 = 0xffffffff;
                  if ((1 < uVar46) && (2 < uVar55)) {
                    uVar27 = (*param_1[2])(param_1[6]);
                    *(undefined4 *)(param_1 + 0x9b) = uVar27;
                    iVar26 = (*param_1[4])(param_1[6],lVar7);
                    if (iVar26 == 0) {
                      param_1[0x9a] = (code *)0x0;
                      *(int *)((long)param_1 + 0x32f74) = *(int *)((long)param_1 + 0x32f74) + 1;
                    }
                    else {
                      uVar57 = *(uint *)((long)param_1 + (ulong)(iVar26 - 2) * 4 + 0x326dc);
                      uVar32 = (ulong)uVar57;
                      if (uVar57 == *(uint *)ppcVar2) {
                        lVar34 = (*param_1[3])(param_1[6]);
                        uVar78 = *(uint *)(param_1 + 0x9b);
                        if (0x110 < uVar78) {
                          uVar78 = 0x111;
                        }
                        if (uVar57 < uVar78) {
                          do {
                            if (*(char *)(lVar34 + -1 + uVar32) !=
                                *(char *)(((lVar34 + -1) -
                                          (ulong)(*(int *)((long)param_1 +
                                                          (ulong)(iVar26 - 1) * 4 + 0x326dc) + 1)) +
                                         uVar32)) goto LAB_00d9820c;
                            uVar32 = uVar32 + 1;
                          } while (uVar78 != (uint)uVar32);
                          uVar32 = (ulong)uVar78;
                        }
                      }
LAB_00d9820c:
                      uVar29 = (uint)uVar32;
                      *(int *)((long)param_1 + 0x4d4) = iVar26;
                      *(uint *)(param_1 + 0x9a) = uVar29;
                      *(int *)((long)param_1 + 0x32f74) = *(int *)((long)param_1 + 0x32f74) + 1;
                      if (1 < uVar29) {
                        uVar55 = *(uint *)((long)param_1 + (ulong)(iVar26 - 1) * 4 + 0x326dc);
                        if ((uVar29 < uVar46) || (uVar70 <= uVar55)) {
                          uVar74 = uVar46 + 1;
                          uVar57 = 1;
                          uVar78 = 0xffffffff;
                          if ((uVar74 <= uVar29 && uVar29 != uVar74) ||
                             (uVar29 == uVar74 && uVar55 >> 7 <= uVar70)) goto LAB_00d98728;
                          if (((uVar46 < 3) || (uVar29 + 1 < uVar46)) || (uVar70 >> 7 <= uVar55))
                          goto LAB_00d98328;
                        }
                        uVar57 = 1;
                        uVar78 = 0xffffffff;
                        goto LAB_00d98728;
                      }
                    }
LAB_00d98328:
                    pcVar33 = (char *)(*param_1[3])(param_1[6]);
                    uVar32 = (ulong)(uVar46 - 1);
                    pcVar52 = pcVar33 + -1;
                    cVar16 = *pcVar52;
                    lVar34 = -(ulong)(*(uint *)ppcVar76 + 1);
                    if (uVar46 - 1 < 3) {
                      if (((((cVar16 == pcVar52[-(ulong)(*(uint *)ppcVar76 + 1)]) &&
                            (*pcVar33 == pcVar33[lVar34])) ||
                           ((uVar32 = (ulong)(*(int *)((long)param_1 + 0x32f7c) + 1),
                            cVar16 == pcVar52[-uVar32] && (*pcVar33 == pcVar33[-uVar32])))) ||
                          ((cVar16 == pcVar52[-(ulong)(*(int *)(param_1 + 0x65f0) + 1)] &&
                           (*pcVar33 == pcVar33[-(ulong)(*(int *)(param_1 + 0x65f0) + 1)])))) ||
                         ((uVar32 = (ulong)(*(int *)((long)param_1 + 0x32f84) + 1),
                          cVar16 == pcVar52[-uVar32] && (*pcVar33 == pcVar33[-uVar32]))))
                      goto LAB_00d986e0;
LAB_00d98564:
                      uVar78 = uVar70 + 4;
                      iVar26 = uVar46 - 2;
                      uVar57 = uVar46;
                      if (iVar26 != 0) goto LAB_00d98710;
                      bVar25 = false;
                      uVar57 = 2;
                      goto LAB_00d982f4;
                    }
                    if ((cVar16 == pcVar52[-(ulong)(*(uint *)ppcVar76 + 1)]) &&
                       (*pcVar33 == pcVar33[lVar34])) {
                      lVar58 = uVar32 - 2;
                      pcVar68 = pcVar33;
                      do {
                        pcVar68 = pcVar68 + 1;
                        if (*pcVar68 != pcVar68[lVar34]) goto LAB_00d98450;
                        lVar58 = lVar58 + -1;
                        uVar57 = 1;
                        uVar78 = 0xffffffff;
                      } while (lVar58 != 0);
                    }
                    else {
LAB_00d98450:
                      uVar48 = (ulong)(*(int *)((long)param_1 + 0x32f7c) + 1);
                      if ((cVar16 == pcVar52[-uVar48]) &&
                         (lVar34 = -uVar48, *pcVar33 == pcVar33[lVar34])) {
                        lVar58 = uVar32 - 2;
                        pcVar68 = pcVar33;
                        do {
                          pcVar68 = pcVar68 + 1;
                          if (*pcVar68 != pcVar68[lVar34]) goto LAB_00d984ac;
                          lVar58 = lVar58 + -1;
                          uVar57 = 1;
                          uVar78 = 0xffffffff;
                        } while (lVar58 != 0);
                      }
                      else {
LAB_00d984ac:
                        if ((cVar16 == pcVar52[-(ulong)(*(int *)(param_1 + 0x65f0) + 1)]) &&
                           (lVar34 = -(ulong)(*(int *)(param_1 + 0x65f0) + 1),
                           *pcVar33 == pcVar33[lVar34])) {
                          lVar58 = uVar32 - 2;
                          pcVar68 = pcVar33;
                          do {
                            pcVar68 = pcVar68 + 1;
                            if (*pcVar68 != pcVar68[lVar34]) goto LAB_00d98508;
                            lVar58 = lVar58 + -1;
                            uVar57 = 1;
                            uVar78 = 0xffffffff;
                          } while (lVar58 != 0);
                        }
                        else {
LAB_00d98508:
                          uVar48 = (ulong)(*(int *)((long)param_1 + 0x32f84) + 1);
                          if ((cVar16 != pcVar52[-uVar48]) ||
                             (lVar34 = -uVar48, *pcVar33 != pcVar33[lVar34])) goto LAB_00d98564;
                          lVar58 = uVar32 - 2;
                          do {
                            pcVar33 = pcVar33 + 1;
                            if (*pcVar33 != pcVar33[lVar34]) goto LAB_00d98564;
                            lVar58 = lVar58 + -1;
                            uVar57 = 1;
                            uVar78 = 0xffffffff;
                          } while (lVar58 != 0);
                        }
                      }
                    }
                  }
                }
                goto LAB_00d98728;
              }
              lVar58 = 0;
              do {
                if (pcVar33[lVar58 + 1] != pcVar33[lVar58 + lVar34 + 1]) {
                  uVar56 = (int)lVar58 + 2;
                  break;
                }
                lVar58 = lVar58 + 1;
                uVar56 = uVar55;
              } while (uVar48 - 2 != lVar58);
              if (uVar56 < *(uint *)ppcVar2) {
                uVar62 = (ulong)(*(int *)((long)param_1 + 0x32f7c) + 1);
                if (cVar16 == pcVar52[-uVar62]) goto LAB_00d97bec;
                goto LAB_00d97f10;
              }
              uVar78 = 0;
LAB_00d982e0:
              iVar26 = uVar56 - 1;
              uVar57 = uVar56;
              if (iVar26 != 0) goto LAB_00d98710;
              bVar25 = true;
              uVar57 = 1;
LAB_00d982f4:
              uVar32 = (ulong)(*(uint *)((long)param_1 + 0x33be4) & uVar28);
LAB_00d9887c:
              lVar34 = uVar32 * 2 + (ulong)*(uint *)(param_1 + 0x65f1) * 0x20;
              uVar20 = *(ushort *)((long)param_1 + lVar34 + 0x33bf0);
              uVar29 = (*(uint *)ppcVar3 >> 0xb) * (uint)uVar20;
              uVar55 = *(uint *)ppcVar3 - uVar29;
              *ppcVar4 = *ppcVar4 + uVar29;
              *(uint *)ppcVar3 = uVar55;
              *(ushort *)((long)param_1 + lVar34 + 0x33bf0) = uVar20 - (uVar20 >> 5);
              if (uVar55 >> 0x18 == 0) {
                *(uint *)ppcVar3 = uVar55 * 0x100;
                FUN_00d9cea4(ppcVar3);
              }
              uVar48 = (ulong)*(uint *)(param_1 + 0x65f1);
              puVar9 = (ushort *)((long)param_1 + uVar48 * 2 + 0x33d70);
              uVar20 = *puVar9;
              uVar29 = (*(uint *)ppcVar3 >> 0xb) * (uint)uVar20;
              if (uVar78 < 4) {
                uVar55 = *(uint *)ppcVar3 - uVar29;
                *(uint *)ppcVar3 = uVar55;
                *ppcVar4 = *ppcVar4 + uVar29;
                *puVar9 = uVar20 - (uVar20 >> 5);
                if (uVar55 >> 0x18 == 0) {
                  *(uint *)ppcVar3 = uVar55 * 0x100;
                  FUN_00d9cea4(ppcVar3);
                }
                if (uVar78 == 0) {
                  uVar48 = (ulong)*(uint *)(param_1 + 0x65f1);
                  uVar20 = *(ushort *)((long)param_1 + uVar48 * 2 + 0x33d88);
                  uVar78 = (*(uint *)ppcVar3 >> 0xb) * (uint)uVar20;
                  *(ushort *)((long)param_1 + uVar48 * 2 + 0x33d88) =
                       uVar20 + (short)(0x800 - uVar20 >> 5);
                  if (uVar78 >> 0x18 == 0) {
                    *(uint *)ppcVar3 = uVar78 * 0x100;
                    FUN_00d9cea4(ppcVar3);
                    uVar48 = (ulong)*(uint *)(param_1 + 0x65f1);
                    uVar78 = *(uint *)ppcVar3;
                  }
                  puVar9 = (ushort *)((long)param_1 + uVar32 * 2 + uVar48 * 0x20 + 0x33dd0);
                  uVar20 = *puVar9;
                  uVar29 = (uVar78 >> 0xb) * (uint)uVar20;
                  if (bVar25) {
                    sVar24 = (short)(0x800 - uVar20 >> 5);
                  }
                  else {
                    uVar48 = (ulong)uVar29;
                    uVar29 = uVar78 - uVar29;
                    sVar24 = -(uVar20 >> 5);
                    *ppcVar4 = *ppcVar4 + uVar48;
                  }
                  *(uint *)ppcVar3 = uVar29;
                  *puVar9 = uVar20 + sVar24;
                  if (uVar29 >> 0x18 == 0) {
                    *(uint *)ppcVar3 = uVar29 << 8;
                    FUN_00d9cea4(ppcVar3);
                  }
joined_r0x00d99100:
                  if (!bVar25) goto LAB_00d98a18;
LAB_00d99104:
                  uVar78 = *(uint *)(param_1 + 0x65f1);
                  puVar53 = &DAT_0054916c;
                }
                else {
                  uVar20 = *(ushort *)
                            ((long)param_1 + (ulong)*(uint *)(param_1 + 0x65f1) * 2 + 0x33d88);
                  uVar29 = (*(uint *)ppcVar3 >> 0xb) * (uint)uVar20;
                  uVar55 = *(uint *)ppcVar3 - uVar29;
                  uVar27 = *(undefined4 *)((long)param_1 + (ulong)uVar78 * 4 + 0x32f78);
                  *ppcVar4 = *ppcVar4 + uVar29;
                  *(uint *)ppcVar3 = uVar55;
                  *(ushort *)((long)param_1 + (ulong)*(uint *)(param_1 + 0x65f1) * 2 + 0x33d88) =
                       uVar20 - (uVar20 >> 5);
                  if (uVar55 >> 0x18 == 0) {
                    *(uint *)ppcVar3 = uVar55 * 0x100;
                    FUN_00d9cea4(ppcVar3);
                  }
                  uVar48 = (ulong)*(uint *)(param_1 + 0x65f1);
                  puVar9 = (ushort *)((long)param_1 + uVar48 * 2 + 0x33da0);
                  uVar20 = *puVar9;
                  uVar29 = (*(uint *)ppcVar3 >> 0xb) * (uint)uVar20;
                  if (uVar78 != 1) {
                    uVar55 = *(uint *)ppcVar3 - uVar29;
                    *ppcVar4 = *ppcVar4 + uVar29;
                    *puVar9 = uVar20 - (uVar20 >> 5);
                    if (uVar55 >> 0x18 == 0) {
                      *(uint *)ppcVar3 = uVar55 * 0x100;
                      FUN_00d9cea4(ppcVar3);
                      uVar48 = (ulong)*(uint *)(param_1 + 0x65f1);
                      uVar55 = *(uint *)ppcVar3;
                    }
                    puVar9 = (ushort *)((long)param_1 + uVar48 * 2 + 0x33db8);
                    uVar20 = *puVar9;
                    uVar29 = (uVar55 >> 0xb) * (uint)uVar20;
                    if (uVar78 == 2) {
                      sVar24 = (short)(0x800 - uVar20 >> 5);
                    }
                    else {
                      uVar48 = (ulong)uVar29;
                      uVar29 = uVar55 - uVar29;
                      sVar24 = -(uVar20 >> 5);
                      *ppcVar4 = *ppcVar4 + uVar48;
                    }
                    *(uint *)ppcVar3 = uVar29;
                    *puVar9 = uVar20 + sVar24;
                    if (uVar29 >> 0x18 == 0) {
                      *(uint *)ppcVar3 = uVar29 << 8;
                      FUN_00d9cea4(ppcVar3);
                    }
                    if (uVar78 == 3) {
                      *(undefined4 *)((long)param_1 + 0x32f84) = *(undefined4 *)(param_1 + 0x65f0);
                    }
                    *(undefined4 *)(param_1 + 0x65f0) = *(undefined4 *)((long)param_1 + 0x32f7c);
                    uVar66 = *(undefined4 *)(param_1 + 0x65ef);
                    *(undefined4 *)(param_1 + 0x65ef) = uVar27;
                    *(undefined4 *)((long)param_1 + 0x32f7c) = uVar66;
                    goto joined_r0x00d99100;
                  }
                  *(uint *)ppcVar3 = uVar29;
                  *puVar9 = uVar20 + (short)(0x800 - uVar20 >> 5);
                  if (uVar29 >> 0x18 == 0) {
                    *(uint *)ppcVar3 = uVar29 * 0x100;
                    FUN_00d9cea4(ppcVar3);
                  }
                  uVar66 = *(undefined4 *)(param_1 + 0x65ef);
                  *(undefined4 *)(param_1 + 0x65ef) = uVar27;
                  *(undefined4 *)((long)param_1 + 0x32f7c) = uVar66;
                  if (bVar25) goto LAB_00d99104;
LAB_00d98a18:
                  FUN_00d9c6e4((long)param_1 + 0x38a9c,ppcVar3,uVar57 - 2,uVar32,
                               *(int *)ppcVar1 == 0,lVar8);
                  uVar78 = *(uint *)(param_1 + 0x65f1);
                  puVar53 = &DAT_0054919c;
                }
                *(undefined4 *)(param_1 + 0x65f1) = *(undefined4 *)(puVar53 + (ulong)uVar78 * 4);
              }
              else {
                *(uint *)ppcVar3 = uVar29;
                *puVar9 = uVar20 + (short)(0x800 - uVar20 >> 5);
                if (uVar29 >> 0x18 == 0) {
                  *(uint *)ppcVar3 = uVar29 * 0x100;
                  FUN_00d9cea4(ppcVar3);
                  uVar48 = (ulong)*(uint *)(param_1 + 0x65f1);
                }
                uVar29 = uVar57 - 2;
                *(undefined4 *)(param_1 + 0x65f1) = *(undefined4 *)(&DAT_005491cc + uVar48 * 4);
                FUN_00d9c6e4((long)param_1 + 0x34254,ppcVar3,uVar29,uVar32,*(int *)ppcVar1 == 0,
                             lVar8);
                uVar55 = uVar78 - 4;
                if (uVar55 < 0x80) {
                  uVar78 = (uint)*(byte *)((long)param_1 + (ulong)uVar55 + 0x304dc);
                }
                else {
                  uVar46 = 6;
                  if (-1 < (int)(uVar78 - 0x80004)) {
                    uVar46 = 0x12;
                  }
                  uVar78 = (uint)*(byte *)((long)param_1 +
                                          (ulong)(uVar55 >> (ulong)uVar46) + 0x304dc) + uVar46 * 2;
                }
                if (4 < uVar57) {
                  uVar29 = 3;
                }
                uVar32 = (ulong)uVar29;
                puVar9 = (ushort *)((long)param_1 + uVar32 * 0x80 + 0x33f52);
                uVar20 = *puVar9;
                uVar29 = (*(uint *)ppcVar3 >> 0xb) * (uint)uVar20;
                if ((uVar78 >> 5 & 1) == 0) {
                  *puVar9 = uVar20 + (short)(0x800 - uVar20 >> 5);
                }
                else {
                  uVar48 = (ulong)uVar29;
                  uVar29 = *(uint *)ppcVar3 - uVar29;
                  *ppcVar4 = *ppcVar4 + uVar48;
                  *puVar9 = uVar20 - (uVar20 >> 5);
                }
                if (uVar29 >> 0x18 == 0) {
                  *(uint *)ppcVar3 = uVar29 << 8;
                  FUN_00d9cea4(ppcVar3);
                  uVar29 = *(uint *)ppcVar3;
                }
                uVar70 = uVar78 >> 5 & 1 | 2;
                puVar9 = (ushort *)((long)param_1 + (ulong)uVar70 * 2 + uVar32 * 0x80 + 0x33f50);
                uVar20 = *puVar9;
                uVar46 = (uVar29 >> 0xb) * (uint)uVar20;
                if ((uVar78 >> 4 & 1) == 0) {
                  *puVar9 = uVar20 + (short)(0x800 - uVar20 >> 5);
                }
                else {
                  uVar48 = (ulong)uVar46;
                  uVar46 = uVar29 - uVar46;
                  *ppcVar4 = *ppcVar4 + uVar48;
                  *puVar9 = uVar20 - (uVar20 >> 5);
                }
                if (uVar46 >> 0x18 == 0) {
                  *(uint *)ppcVar3 = uVar46 << 8;
                  FUN_00d9cea4(ppcVar3);
                  uVar46 = *(uint *)ppcVar3;
                }
                uVar29 = uVar78 >> 4 & 1 | uVar70 << 1;
                puVar9 = (ushort *)((long)param_1 + (ulong)uVar29 * 2 + uVar32 * 0x80 + 0x33f50);
                uVar20 = *puVar9;
                uVar70 = (uVar46 >> 0xb) * (uint)uVar20;
                if ((uVar78 >> 3 & 1) == 0) {
                  *puVar9 = uVar20 + (short)(0x800 - uVar20 >> 5);
                }
                else {
                  uVar48 = (ulong)uVar70;
                  uVar70 = uVar46 - uVar70;
                  *ppcVar4 = *ppcVar4 + uVar48;
                  *puVar9 = uVar20 - (uVar20 >> 5);
                }
                if (uVar70 >> 0x18 == 0) {
                  *(uint *)ppcVar3 = uVar70 << 8;
                  FUN_00d9cea4(ppcVar3);
                  uVar70 = *(uint *)ppcVar3;
                }
                uVar29 = uVar78 >> 3 & 1 | uVar29 << 1;
                puVar9 = (ushort *)((long)param_1 + (ulong)uVar29 * 2 + uVar32 * 0x80 + 0x33f50);
                uVar20 = *puVar9;
                uVar46 = (uVar70 >> 0xb) * (uint)uVar20;
                if ((uVar78 >> 2 & 1) == 0) {
                  *puVar9 = uVar20 + (short)(0x800 - uVar20 >> 5);
                }
                else {
                  uVar48 = (ulong)uVar46;
                  uVar46 = uVar70 - uVar46;
                  *ppcVar4 = *ppcVar4 + uVar48;
                  *puVar9 = uVar20 - (uVar20 >> 5);
                }
                if (uVar46 >> 0x18 == 0) {
                  *(uint *)ppcVar3 = uVar46 << 8;
                  FUN_00d9cea4(ppcVar3);
                  uVar46 = *(uint *)ppcVar3;
                }
                uVar29 = uVar78 >> 2 & 1 | uVar29 << 1;
                uVar74 = uVar78 >> 1;
                puVar9 = (ushort *)((long)param_1 + (ulong)uVar29 * 2 + uVar32 * 0x80 + 0x33f50);
                uVar20 = *puVar9;
                uVar70 = (uVar46 >> 0xb) * (uint)uVar20;
                if ((uVar74 & 1) == 0) {
                  *puVar9 = uVar20 + (short)(0x800 - uVar20 >> 5);
                }
                else {
                  uVar48 = (ulong)uVar70;
                  uVar70 = uVar46 - uVar70;
                  *ppcVar4 = *ppcVar4 + uVar48;
                  *puVar9 = uVar20 - (uVar20 >> 5);
                }
                if (uVar70 >> 0x18 == 0) {
                  *(uint *)ppcVar3 = uVar70 << 8;
                  FUN_00d9cea4(ppcVar3);
                  uVar70 = *(uint *)ppcVar3;
                }
                puVar9 = (ushort *)
                         ((long)param_1 +
                         (ulong)(uVar78 >> 1 & 1 | uVar29 << 1) * 2 + uVar32 * 0x80 + 0x33f50);
                uVar20 = *puVar9;
                uVar29 = (uVar70 >> 0xb) * (uint)uVar20;
                if ((uVar78 & 1) == 0) {
                  *(uint *)ppcVar3 = uVar29;
                  *puVar9 = uVar20 + (short)(0x800 - uVar20 >> 5);
                }
                else {
                  uVar32 = (ulong)uVar29;
                  uVar29 = uVar70 - uVar29;
                  *ppcVar4 = *ppcVar4 + uVar32;
                  *(uint *)ppcVar3 = uVar29;
                  *puVar9 = uVar20 - (uVar20 >> 5);
                }
                if (uVar29 >> 0x18 == 0) {
                  *(uint *)ppcVar3 = uVar29 << 8;
                  FUN_00d9cea4(ppcVar3);
                }
                if (3 < uVar78) {
                  uVar46 = uVar74 - 1;
                  uVar29 = (uVar78 & 1 | 2) << (ulong)(uVar46 & 0x1f);
                  uVar70 = uVar55 - uVar29;
                  if (uVar78 < 0xe) {
                    lVar34 = (ulong)uVar78 * -2 + (ulong)uVar29 * 2;
                    puVar9 = (ushort *)((long)param_1 + lVar34 + 0x34150);
                    lVar34 = lVar34 + 0x3414e;
                    uVar20 = *puVar9;
                    uVar78 = (*(uint *)ppcVar3 >> 0xb) * (uint)uVar20;
                    if ((uVar70 & 1) == 0) {
                      sVar24 = (short)(0x800 - uVar20 >> 5);
                    }
                    else {
                      sVar24 = -(uVar20 >> 5);
                      uVar32 = (ulong)uVar78;
                      uVar78 = *(uint *)ppcVar3 - uVar78;
                      *ppcVar4 = *ppcVar4 + uVar32;
                    }
                    *(uint *)ppcVar3 = uVar78;
                    *puVar9 = uVar20 + sVar24;
                    if (uVar78 >> 0x18 == 0) {
                      *(uint *)ppcVar3 = uVar78 << 8;
                      FUN_00d9cea4(ppcVar3);
                    }
                    if (uVar46 != 1) {
                      uVar29 = uVar70 & 1 | 2;
                      uVar20 = *(ushort *)((long)param_1 + (ulong)uVar29 * 2 + lVar34);
                      uVar78 = (*(uint *)ppcVar3 >> 0xb) * (uint)uVar20;
                      if ((uVar70 >> 1 & 1) == 0) {
                        sVar24 = (short)(0x800 - uVar20 >> 5);
                      }
                      else {
                        sVar24 = -(uVar20 >> 5);
                        uVar32 = (ulong)uVar78;
                        uVar78 = *(uint *)ppcVar3 - uVar78;
                        *ppcVar4 = *ppcVar4 + uVar32;
                      }
                      *(uint *)ppcVar3 = uVar78;
                      *(ushort *)((long)param_1 + (ulong)uVar29 * 2 + lVar34) = uVar20 + sVar24;
                      if (uVar78 >> 0x18 == 0) {
                        *(uint *)ppcVar3 = uVar78 << 8;
                        FUN_00d9cea4(ppcVar3);
                      }
                      if (uVar46 != 2) {
                        uVar78 = uVar70 >> 1 & 1 | uVar29 << 1;
                        uVar20 = *(ushort *)((long)param_1 + (ulong)uVar78 * 2 + lVar34);
                        uVar29 = (*(uint *)ppcVar3 >> 0xb) * (uint)uVar20;
                        if ((uVar70 >> 2 & 1) == 0) {
                          sVar24 = (short)(0x800 - uVar20 >> 5);
                        }
                        else {
                          sVar24 = -(uVar20 >> 5);
                          uVar32 = (ulong)uVar29;
                          uVar29 = *(uint *)ppcVar3 - uVar29;
                          *ppcVar4 = *ppcVar4 + uVar32;
                        }
                        *(uint *)ppcVar3 = uVar29;
                        *(ushort *)((long)param_1 + (ulong)uVar78 * 2 + lVar34) = uVar20 + sVar24;
                        if (uVar29 >> 0x18 == 0) {
                          *(uint *)ppcVar3 = uVar29 << 8;
                          FUN_00d9cea4(ppcVar3);
                        }
                        if (uVar46 != 3) {
                          uVar78 = uVar70 >> 2 & 1 | uVar78 << 1;
                          uVar20 = *(ushort *)((long)param_1 + (ulong)uVar78 * 2 + lVar34);
                          uVar29 = (*(uint *)ppcVar3 >> 0xb) * (uint)uVar20;
                          if ((uVar70 >> 3 & 1) == 0) {
                            sVar24 = (short)(0x800 - uVar20 >> 5);
                          }
                          else {
                            sVar24 = -(uVar20 >> 5);
                            uVar32 = (ulong)uVar29;
                            uVar29 = *(uint *)ppcVar3 - uVar29;
                            *ppcVar4 = *ppcVar4 + uVar32;
                          }
                          *(uint *)ppcVar3 = uVar29;
                          *(ushort *)((long)param_1 + (ulong)uVar78 * 2 + lVar34) = uVar20 + sVar24;
                          if (uVar29 >> 0x18 == 0) {
                            *(uint *)ppcVar3 = uVar29 << 8;
                            FUN_00d9cea4(ppcVar3);
                          }
                          if (uVar46 != 4) {
                            uVar32 = (ulong)(uVar70 >> 3 & 1 | uVar78 << 1);
                            uVar20 = *(ushort *)((long)param_1 + uVar32 * 2 + lVar34);
                            uVar78 = (*(uint *)ppcVar3 >> 0xb) * (uint)uVar20;
                            if ((uVar70 >> 4 & 1) == 0) {
                              sVar24 = (short)(0x800 - uVar20 >> 5);
                            }
                            else {
                              sVar24 = -(uVar20 >> 5);
                              uVar48 = (ulong)uVar78;
                              uVar78 = *(uint *)ppcVar3 - uVar78;
                              *ppcVar4 = *ppcVar4 + uVar48;
                            }
                            *(uint *)ppcVar3 = uVar78;
                            *(ushort *)((long)param_1 + uVar32 * 2 + lVar34) = uVar20 + sVar24;
                            if (uVar78 >> 0x18 == 0) {
                              *(uint *)ppcVar3 = uVar78 << 8;
                              FUN_00d9cea4(ppcVar3);
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    uVar74 = uVar74 - 6;
                    do {
                      uVar78 = *(uint *)ppcVar3;
                      uVar29 = uVar78 >> 1;
                      *(uint *)ppcVar3 = uVar29;
                      *ppcVar4 = *ppcVar4 +
                                 (uVar29 & -((uVar70 >> 4) >> (ulong)(uVar74 & 0x1f) & 1));
                      if (uVar78 >> 0x19 == 0) {
                        *(uint *)ppcVar3 = uVar29 << 8;
                        FUN_00d9cea4(ppcVar3);
                      }
                      uVar74 = uVar74 - 1;
                    } while (uVar74 != 0xffffffff);
                    uVar20 = *(ushort *)((long)param_1 + 0x34236);
                    uVar78 = (*(uint *)ppcVar3 >> 0xb) * (uint)uVar20;
                    if ((uVar70 & 1) == 0) {
                      sVar24 = (short)(0x800 - uVar20 >> 5);
                    }
                    else {
                      sVar24 = -(uVar20 >> 5);
                      uVar32 = (ulong)uVar78;
                      uVar78 = *(uint *)ppcVar3 - uVar78;
                      *ppcVar4 = *ppcVar4 + uVar32;
                    }
                    *(ushort *)((long)param_1 + 0x34236) = uVar20 + sVar24;
                    if (uVar78 >> 0x18 == 0) {
                      *(uint *)ppcVar3 = uVar78 << 8;
                      FUN_00d9cea4(ppcVar3);
                      uVar78 = *(uint *)ppcVar3;
                    }
                    uVar46 = uVar70 & 1 | 2;
                    puVar9 = (ushort *)((long)param_1 + (ulong)uVar46 * 2 + 0x34234);
                    uVar20 = *puVar9;
                    uVar29 = (uVar78 >> 0xb) * (uint)uVar20;
                    if ((uVar70 >> 1 & 1) == 0) {
                      sVar24 = (short)(0x800 - uVar20 >> 5);
                    }
                    else {
                      uVar32 = (ulong)uVar29;
                      uVar29 = uVar78 - uVar29;
                      sVar24 = -(uVar20 >> 5);
                      *ppcVar4 = *ppcVar4 + uVar32;
                    }
                    *puVar9 = uVar20 + sVar24;
                    if (uVar29 >> 0x18 == 0) {
                      *(uint *)ppcVar3 = uVar29 << 8;
                      FUN_00d9cea4(ppcVar3);
                      uVar29 = *(uint *)ppcVar3;
                    }
                    uVar78 = uVar70 >> 1 & 1 | uVar46 << 1;
                    puVar9 = (ushort *)((long)param_1 + (ulong)uVar78 * 2 + 0x34234);
                    uVar20 = *puVar9;
                    uVar46 = (uVar29 >> 0xb) * (uint)uVar20;
                    if ((uVar70 >> 2 & 1) == 0) {
                      sVar24 = (short)(0x800 - uVar20 >> 5);
                    }
                    else {
                      uVar32 = (ulong)uVar46;
                      uVar46 = uVar29 - uVar46;
                      sVar24 = -(uVar20 >> 5);
                      *ppcVar4 = *ppcVar4 + uVar32;
                    }
                    *puVar9 = uVar20 + sVar24;
                    if (uVar46 >> 0x18 == 0) {
                      *(uint *)ppcVar3 = uVar46 << 8;
                      FUN_00d9cea4(ppcVar3);
                      uVar46 = *(uint *)ppcVar3;
                    }
                    puVar9 = (ushort *)
                             ((long)param_1 + (ulong)(uVar70 >> 2 & 1 | uVar78 << 1) * 2 + 0x34234);
                    uVar20 = *puVar9;
                    uVar78 = (uVar46 >> 0xb) * (uint)uVar20;
                    if ((uVar70 >> 3 & 1) == 0) {
                      sVar24 = (short)(0x800 - uVar20 >> 5);
                    }
                    else {
                      uVar32 = (ulong)uVar78;
                      uVar78 = uVar46 - uVar78;
                      sVar24 = -(uVar20 >> 5);
                      *ppcVar4 = *ppcVar4 + uVar32;
                    }
                    *(uint *)ppcVar3 = uVar78;
                    *puVar9 = uVar20 + sVar24;
                    if (uVar78 >> 0x18 == 0) {
                      *(uint *)ppcVar3 = uVar78 << 8;
                      FUN_00d9cea4(ppcVar3);
                    }
                    *(int *)((long)param_1 + 0x33bcc) = *(int *)((long)param_1 + 0x33bcc) + 1;
                  }
                }
                *(undefined4 *)((long)param_1 + 0x32f84) = *(undefined4 *)(param_1 + 0x65f0);
                *(code **)((long)param_1 + 0x32f7c) = param_1[0x65ef];
                *(uint *)(param_1 + 0x65ef) = uVar55;
                *(int *)(param_1 + 0x7a69) = *(int *)(param_1 + 0x7a69) + 1;
              }
            }
            uVar32 = (ulong)(uVar57 + uVar28);
            iVar26 = *(int *)((long)param_1 + 0x32f74) - uVar57;
            *(int *)((long)param_1 + 0x32f74) = iVar26;
            if (iVar26 != 0) goto LAB_00d97944;
            if (*(int *)ppcVar1 == 0) {
              if (0x7f < *(uint *)(param_1 + 0x7a69)) {
                FUN_00d969e4(param_1);
              }
              if (0xf < *(uint *)((long)param_1 + 0x33bcc)) {
                lVar34 = 0;
                uVar20 = *(ushort *)((long)param_1 + 0x34236);
                do {
                  uVar46 = (uint)lVar34;
                  uVar29 = uVar46 >> 1 & 1;
                  uVar55 = uVar46 >> 2 & 1;
                  uVar78 = uVar29 | (uVar46 & 1 | 2) << 1;
                  *(int *)((long)param_1 + lVar34 * 4 + 0x33b8c) =
                       *(int *)((long)param_1 +
                               (ulong)((-uVar29 & 0x7f0 ^
                                       (uint)*(ushort *)
                                              ((long)param_1 + (ulong)(uVar46 & 1 | 2) * 2 + 0x34234
                                              )) >> 4) * 4 + 0x324dc) +
                       *(int *)((long)param_1 +
                               (ulong)((-(uVar46 & 1) & 0x7f0 ^ (uint)uVar20) >> 4) * 4 + 0x324dc) +
                       *(int *)((long)param_1 +
                               (ulong)((-uVar55 & 0x7f0 ^
                                       (uint)*(ushort *)
                                              ((long)param_1 + (ulong)uVar78 * 2 + 0x34234)) >> 4) *
                               4 + 0x324dc) +
                       *(int *)((long)param_1 +
                               ((ulong)((-(uVar46 >> 3 & 1) & 0x7f0 ^
                                        (uint)*(ushort *)
                                               ((long)param_1 +
                                               (ulong)(uVar55 | uVar78 << 1) * 2 + 0x34234)) >> 2) &
                               0x3ffc) + 0x324dc);
                  lVar34 = lVar34 + 1;
                } while (lVar34 != 0x10);
                *(undefined4 *)((long)param_1 + 0x33bcc) = 0;
              }
            }
            iVar26 = (*param_1[2])(param_1[6]);
            if (iVar26 == 0) {
              iVar26 = 2;
            }
            else {
              uVar28 = (uVar57 + uVar28) - iVar49;
              if (param_2 == 0) {
                if (uVar28 < 0x8000) goto LAB_00d97944;
                local_1c4 = *(uint *)((long)param_1 + 0x3d354);
                param_1[0x7a68] = param_1[0x7a68] + uVar28;
                if (local_1c4 == 0) {
                  if (*(int *)(param_1 + 0x7a66) == 0) {
                    if (*(int *)(param_1 + 0x18) != 0) goto LAB_00d99704;
                    local_1c4 = 0;
                    iVar26 = 1;
                  }
                  else {
                    *(undefined4 *)((long)param_1 + 0x3d354) = 9;
                    if (*(int *)(param_1 + 0x18) == 0) {
                      local_1c4 = 9;
                    }
                    else {
LAB_00d99704:
                      local_1c4 = 8;
                      *(undefined4 *)((long)param_1 + 0x3d354) = 8;
                    }
                    iVar26 = 1;
                    *(undefined4 *)((long)param_1 + 0x3d34c) = 1;
                  }
                }
                else {
                  iVar26 = 1;
                }
              }
              else if ((uVar28 + 0x112c < param_4) &&
                      (param_1[0x7a60] +
                       (long)(param_1[0x7a65] + (long)param_1[0x7a61] +
                             (0x2000 - (long)param_1[0x7a63])) < (code *)(param_3 & 0xffffffff))) {
LAB_00d97944:
                iVar26 = 0;
              }
              else {
                iVar26 = 2;
              }
            }
          } while (iVar26 == 0);
          if (iVar26 != 2) {
            uVar32 = (ulong)local_1c4;
            goto LAB_00d97658;
          }
        }
        param_1[0x7a68] = param_1[0x7a68] + (uint)((int)uVar32 - iVar49);
      }
      uVar32 = FUN_00d9c1c0(param_1,uVar32);
      goto LAB_00d97658;
    }
LAB_00d97648:
    uVar32 = 8;
    *(undefined4 *)((long)param_1 + 0x3d354) = 8;
  }
  else {
    uVar32 = 9;
    *(undefined4 *)((long)param_1 + 0x3d354) = 9;
    if (*(int *)(param_1 + 0x18) != 0) goto LAB_00d97648;
  }
  *(undefined4 *)((long)param_1 + 0x3d34c) = 1;
LAB_00d97658:
  if (*(long *)(lVar23 + 0x28) == local_a0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar32);
LAB_00d9a758:
  uVar32 = (ulong)(*(int *)((long)&local_c0 + lVar34 * 4) + 1);
  pbVar65 = pbVar60 + -uVar32;
  if (*pbVar60 == *pbVar65) goto LAB_00d9a774;
  goto LAB_00d9acf0;
}


