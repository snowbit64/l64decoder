// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e4589c
// Entry Point: 00e4589c
// Size: 3756 bytes
// Signature: undefined FUN_00e4589c(void)


/* WARNING: Type propagation algorithm not settling */

void FUN_00e4589c(long param_1,int *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  void **ppvVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  ushort uVar10;
  char cVar11;
  ushort uVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  float fVar16;
  undefined2 uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  undefined8 uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  float *pfVar26;
  int iVar27;
  long lVar28;
  uint uVar29;
  long lVar30;
  long lVar31;
  char *pcVar32;
  byte *pbVar33;
  void *pvVar34;
  uint uVar35;
  uint uVar36;
  undefined2 *puVar37;
  int *piVar38;
  undefined8 *puVar39;
  undefined (*pauVar40) [16];
  int iVar41;
  long lVar42;
  undefined *puVar43;
  short *psVar44;
  float *pfVar45;
  ushort *puVar46;
  int iVar47;
  ulong uVar48;
  undefined2 *puVar49;
  long lVar50;
  byte *pbVar51;
  ulong uVar52;
  ulong uVar53;
  uint uVar54;
  long lVar55;
  ulong uVar56;
  ulong uVar57;
  ulong uVar58;
  int iVar59;
  float fVar60;
  float fVar61;
  undefined auVar62 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  int local_9fc;
  undefined auStack_9f8 [4];
  int local_9f4;
  undefined local_9f0 [256];
  undefined8 local_8f0 [16];
  undefined2 local_870;
  int local_470 [256];
  long local_70;
  
  lVar15 = tpidr_el0;
  local_70 = *(long *)(lVar15 + 0x28);
  uVar22 = FUN_00e4c234(param_1,param_3,auStack_9f8,param_4,&local_9fc,&local_9f4);
  if ((int)uVar22 == 0) goto LAB_00e466cc;
  lVar55 = *(long *)(param_1 + 0x1e8);
  iVar41 = *param_3;
  lVar30 = param_1 + (long)local_9f4 * 6;
  iVar8 = *param_4;
  uVar48 = (ulong)*(uint *)(param_1 + 4);
  uVar57 = (ulong)*(byte *)(lVar30 + 0x1f5);
  iVar27 = *(int *)(param_1 + (ulong)*(byte *)(lVar30 + 500) * 4 + 0xa0);
  plVar2 = (long *)(lVar55 + uVar57 * 0x30 + 8);
  if (0 < (int)*(uint *)(param_1 + 4)) {
    lVar50 = 0;
    do {
      local_470[lVar50] = 0;
      uVar48 = (ulong)*(byte *)(lVar55 + uVar57 * 0x30 + (ulong)*(byte *)(*plVar2 + lVar50 * 3 + 2)
                               + 0x11);
      if (*(short *)(param_1 + uVar48 * 2 + 0xc4) == 0) {
        uVar22 = 0;
        *(undefined4 *)(param_1 + 0x9c) = 0x15;
        goto LAB_00e466cc;
      }
      iVar18 = *(int *)(param_1 + 0x6f8);
      if (iVar18 < 0) {
LAB_00e459a0:
        local_470[lVar50] = 1;
      }
      else {
        lVar42 = *(long *)(param_1 + 0x148);
        if (iVar18 == 0) {
          *(undefined4 *)(param_1 + 0x6f4) = 0;
          do {
            iVar18 = FUN_00e4c7e4(param_1);
            if (iVar18 == -1) {
              local_470[lVar50] = 1;
              *(undefined4 *)(param_1 + 0x6f8) = 0xffffffff;
              goto LAB_00e459a4;
            }
            uVar54 = *(uint *)(param_1 + 0x6f8);
            uVar29 = *(int *)(param_1 + 0x6f4) + (iVar18 << (ulong)(uVar54 & 0x1f));
            iVar18 = uVar54 + 8;
            *(uint *)(param_1 + 0x6f4) = uVar29;
            *(int *)(param_1 + 0x6f8) = iVar18;
          } while ((int)(uVar54 + 7) < 0 != SCARRY4(uVar54,7));
        }
        else {
          uVar29 = *(uint *)(param_1 + 0x6f4);
        }
        *(uint *)(param_1 + 0x6f4) = uVar29 >> 1;
        *(int *)(param_1 + 0x6f8) = iVar18 + -1;
        if ((uVar29 & 1) == 0) goto LAB_00e459a0;
        pbVar51 = (byte *)(lVar42 + uVar48 * 0x63c);
        uVar29 = *(uint *)(&DAT_004c579c + (ulong)pbVar51[0x634] * 4);
        cVar11 = (&DAT_004c5180)[uVar29 >> 5];
        puVar49 = *(undefined2 **)(param_1 + lVar50 * 8 + 0x500);
        uVar17 = FUN_00e4c5b8(param_1,cVar11 + 4);
        *puVar49 = uVar17;
        uVar17 = FUN_00e4c5b8(param_1,cVar11 + 4);
        puVar49[1] = uVar17;
        if (*pbVar51 != 0) {
          uVar53 = 0;
          uVar56 = 2;
          do {
            lVar28 = lVar42 + uVar48 * 0x63c;
            uVar58 = (ulong)*(byte *)(lVar28 + uVar53 + 1);
            lVar28 = lVar28 + uVar58;
            bVar9 = *(byte *)(lVar28 + 0x31);
            uVar54 = (uint)*(byte *)(lVar28 + 0x21);
            if (bVar9 == 0) {
              uVar19 = 0;
            }
            else {
              lVar28 = *(long *)(param_1 + 0xb8);
              uVar52 = (ulong)*(byte *)(lVar42 + uVar48 * 0x63c + uVar58 + 0x41);
              if (*(int *)(param_1 + 0x6f8) < 10) {
                if (*(int *)(param_1 + 0x6f8) == 0) {
                  *(undefined4 *)(param_1 + 0x6f4) = 0;
                }
                do {
                  if (((*(int *)(param_1 + 0x6ec) != 0) && (*(char *)(param_1 + 0x6e4) == '\0')) ||
                     (iVar18 = FUN_00e4c7e4(param_1), iVar18 == -1)) break;
                  uVar19 = *(uint *)(param_1 + 0x6f8);
                  *(int *)(param_1 + 0x6f4) =
                       *(int *)(param_1 + 0x6f4) + (iVar18 << (ulong)(uVar19 & 0x1f));
                  *(uint *)(param_1 + 0x6f8) = uVar19 + 8;
                } while ((int)uVar19 < 0x11);
              }
              uVar12 = *(ushort *)
                        (lVar28 + uVar52 * 0x848 + ((ulong)*(uint *)(param_1 + 0x6f4) & 0x3ff) * 2 +
                        0x30);
              if ((short)uVar12 < 0) {
                uVar19 = FUN_00e4cf68(param_1,lVar28 + uVar52 * 0x848);
              }
              else {
                uVar35 = (uint)*(byte *)(*(long *)(lVar28 + uVar52 * 0x848 + 8) + (ulong)uVar12);
                iVar23 = *(int *)(param_1 + 0x6f8) - uVar35;
                iVar18 = 0;
                if (-1 < iVar23) {
                  iVar18 = iVar23;
                }
                uVar19 = (uint)uVar12;
                if (-1 >= iVar23) {
                  uVar19 = 0xffffffff;
                }
                *(uint *)(param_1 + 0x6f4) = *(uint *)(param_1 + 0x6f4) >> (ulong)(uVar35 & 0x1f);
                *(int *)(param_1 + 0x6f8) = iVar18;
              }
              if (*(char *)(lVar28 + uVar52 * 0x848 + 0x1b) != '\0') {
                uVar19 = *(uint *)(*(long *)(lVar28 + uVar52 * 0x848 + 0x838) +
                                  (long)(int)uVar19 * 4);
              }
            }
            if (uVar54 != 0) {
              uVar35 = 0;
              uVar56 = (ulong)(int)uVar56;
              do {
                uVar12 = *(ushort *)
                          (lVar42 + uVar48 * 0x63c + uVar58 * 0x10 +
                           (long)(int)(uVar19 & ~(-1 << (ulong)(bVar9 & 0x1f))) * 2 + 0x52);
                if ((short)uVar12 < 0) {
                  uVar17 = 0;
                }
                else {
                  lVar28 = *(long *)(param_1 + 0xb8);
                  if (*(int *)(param_1 + 0x6f8) < 10) {
                    if (*(int *)(param_1 + 0x6f8) == 0) {
                      *(undefined4 *)(param_1 + 0x6f4) = 0;
                    }
                    do {
                      if (((*(int *)(param_1 + 0x6ec) != 0) && (*(char *)(param_1 + 0x6e4) == '\0'))
                         || (iVar18 = FUN_00e4c7e4(param_1), iVar18 == -1)) break;
                      uVar20 = *(uint *)(param_1 + 0x6f8);
                      *(int *)(param_1 + 0x6f4) =
                           *(int *)(param_1 + 0x6f4) + (iVar18 << (ulong)(uVar20 & 0x1f));
                      *(uint *)(param_1 + 0x6f8) = uVar20 + 8;
                    } while ((int)uVar20 < 0x11);
                  }
                  uVar52 = (ulong)uVar12;
                  uVar12 = *(ushort *)
                            (lVar28 + uVar52 * 0x848 +
                             ((ulong)*(uint *)(param_1 + 0x6f4) & 0x3ff) * 2 + 0x30);
                  if ((short)uVar12 < 0) {
                    uVar20 = FUN_00e4cf68(param_1,lVar28 + uVar52 * 0x848);
                  }
                  else {
                    uVar36 = (uint)*(byte *)(*(long *)(lVar28 + uVar52 * 0x848 + 8) + (ulong)uVar12)
                    ;
                    iVar23 = *(int *)(param_1 + 0x6f8) - uVar36;
                    iVar18 = 0;
                    if (-1 < iVar23) {
                      iVar18 = iVar23;
                    }
                    uVar20 = (uint)uVar12;
                    if (-1 >= iVar23) {
                      uVar20 = 0xffffffff;
                    }
                    *(uint *)(param_1 + 0x6f4) =
                         *(uint *)(param_1 + 0x6f4) >> (ulong)(uVar36 & 0x1f);
                    *(int *)(param_1 + 0x6f8) = iVar18;
                  }
                  if (*(char *)(lVar28 + uVar52 * 0x848 + 0x1b) != '\0') {
                    uVar20 = *(uint *)(*(long *)(lVar28 + uVar52 * 0x848 + 0x838) +
                                      (long)(int)uVar20 * 4);
                  }
                  uVar17 = (undefined2)uVar20;
                }
                uVar19 = (int)uVar19 >> (bVar9 & 0x1f);
                uVar35 = uVar35 + 1;
                puVar49[uVar56] = uVar17;
                uVar56 = uVar56 + 1;
              } while (uVar35 != uVar54);
              uVar56 = uVar56 & 0xffffffff;
            }
            uVar53 = uVar53 + 1;
          } while (uVar53 < *pbVar51);
        }
        if (*(int *)(param_1 + 0x6f8) == -1) goto LAB_00e459a0;
        local_870 = 0x101;
        uVar54 = *(uint *)(lVar42 + uVar48 * 0x63c + 0x638);
        uVar53 = (ulong)uVar54;
        if (2 < (int)uVar54) {
          lVar28 = lVar42 + uVar48 * 0x63c;
          lVar31 = uVar53 - 2;
          puVar46 = puVar49 + 2;
          puVar43 = (undefined *)((ulong)&local_870 | 2);
          do {
            uVar56 = (ulong)*(byte *)(lVar28 + 0x444);
            uVar58 = (ulong)*(byte *)(lVar28 + 0x445);
            lVar3 = lVar42 + uVar48 * 0x63c + 0x152;
            iVar23 = (int)(short)puVar49[uVar58] - (int)(short)puVar49[uVar56];
            uVar19 = (uint)*(ushort *)(lVar3 + uVar56 * 2);
            iVar18 = -iVar23;
            if (-1 < iVar23) {
              iVar18 = iVar23;
            }
            iVar47 = *(ushort *)(lVar3 + uVar58 * 2) - uVar19;
            uVar12 = *puVar46;
            iVar13 = 0;
            if (iVar47 != 0) {
              iVar13 = (int)(iVar18 * (*(ushort *)(lVar28 + 0x156) - uVar19)) / iVar47;
            }
            iVar18 = -iVar13;
            if (-1 < iVar23) {
              iVar18 = iVar13;
            }
            iVar18 = iVar18 + (short)puVar49[uVar56];
            if ((short)uVar12 == 0) {
              *puVar43 = 0;
LAB_00e45db4:
              *puVar46 = (ushort)iVar18;
            }
            else {
              iVar13 = uVar29 - iVar18;
              *(undefined *)((long)&local_870 + uVar58) = 1;
              *(undefined *)((long)&local_870 + uVar56) = 1;
              iVar23 = iVar13;
              if (iVar18 <= iVar13) {
                iVar23 = iVar18;
              }
              *puVar43 = 1;
              iVar47 = (int)(short)uVar12;
              if (iVar47 + iVar23 * -2 < 0 != SBORROW4((int)(short)uVar12,iVar23 * 2)) {
                iVar23 = iVar47 >> 1;
                if ((uVar12 & 1) != 0) {
                  iVar23 = -(iVar47 + 1U >> 1);
                }
                iVar18 = iVar18 + iVar23;
                goto LAB_00e45db4;
              }
              if (iVar13 <= iVar18) {
                iVar18 = (iVar18 - iVar47) + iVar13 + -1;
                goto LAB_00e45db4;
              }
            }
            puVar43 = puVar43 + 1;
            lVar31 = lVar31 + -1;
            puVar46 = puVar46 + 1;
            lVar28 = lVar28 + 2;
          } while (lVar31 != 0);
        }
        if (0 < (int)uVar54) {
          if (uVar54 < 8) {
            uVar56 = 0;
          }
          else {
            if (uVar54 < 0x10) {
              uVar48 = 0;
            }
            else {
              uVar56 = uVar53 & 0xfffffff0;
              pauVar40 = (undefined (*) [16])&local_870;
              puVar37 = puVar49 + 8;
              uVar48 = uVar56;
              do {
                auVar62 = NEON_cmeq(*pauVar40,0,1);
                if ((auVar62 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                  puVar37[-8] = 0xffff;
                }
                if ((auVar62 & (undefined  [16])0x100) != (undefined  [16])0x0) {
                  puVar37[-7] = 0xffff;
                }
                if ((auVar62 & (undefined  [16])0x10000) != (undefined  [16])0x0) {
                  puVar37[-6] = 0xffff;
                }
                if ((auVar62 & (undefined  [16])0x1000000) != (undefined  [16])0x0) {
                  puVar37[-5] = 0xffff;
                }
                if ((auVar62 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
                  puVar37[-4] = 0xffff;
                }
                if ((auVar62 & (undefined  [16])0x10000000000) != (undefined  [16])0x0) {
                  puVar37[-3] = 0xffff;
                }
                if ((auVar62 & (undefined  [16])0x1000000000000) != (undefined  [16])0x0) {
                  puVar37[-2] = 0xffff;
                }
                if ((auVar62 & (undefined  [16])0x100000000000000) != (undefined  [16])0x0) {
                  puVar37[-1] = 0xffff;
                }
                if ((auVar62 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                  *puVar37 = 0xffff;
                }
                if ((auVar62 & (undefined  [16])0x100) != (undefined  [16])0x0) {
                  puVar37[1] = 0xffff;
                }
                if ((auVar62 & (undefined  [16])0x10000) != (undefined  [16])0x0) {
                  puVar37[2] = 0xffff;
                }
                if ((auVar62 & (undefined  [16])0x1000000) != (undefined  [16])0x0) {
                  puVar37[3] = 0xffff;
                }
                if ((auVar62 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
                  puVar37[4] = 0xffff;
                }
                if ((auVar62 & (undefined  [16])0x10000000000) != (undefined  [16])0x0) {
                  puVar37[5] = 0xffff;
                }
                if ((auVar62 & (undefined  [16])0x1000000000000) != (undefined  [16])0x0) {
                  puVar37[6] = 0xffff;
                }
                if ((auVar62 & (undefined  [16])0x100000000000000) != (undefined  [16])0x0) {
                  puVar37[7] = 0xffff;
                }
                uVar48 = uVar48 - 0x10;
                pauVar40 = pauVar40 + 1;
                puVar37 = puVar37 + 0x10;
              } while (uVar48 != 0);
              if (uVar56 == uVar53) goto LAB_00e459a4;
              uVar48 = uVar56;
              if ((uVar54 >> 3 & 1) == 0) goto LAB_00e46114;
            }
            uVar56 = uVar53 & 0xfffffff8;
            lVar42 = uVar48 - uVar56;
            puVar39 = (undefined8 *)((long)&local_870 + uVar48);
            puVar37 = puVar49 + uVar48 + 4;
            do {
              uVar48 = NEON_cmeq(*puVar39,0,1);
              if ((uVar48 & 1) != 0) {
                puVar37[-4] = 0xffff;
              }
              if ((uVar48 & 0x100) != 0) {
                puVar37[-3] = 0xffff;
              }
              if ((uVar48 & 0x10000) != 0) {
                puVar37[-2] = 0xffff;
              }
              if ((uVar48 & 0x1000000) != 0) {
                puVar37[-1] = 0xffff;
              }
              if ((uVar48 & 0x100000000) != 0) {
                *puVar37 = 0xffff;
              }
              if ((uVar48 & 0x10000000000) != 0) {
                puVar37[1] = 0xffff;
              }
              if ((uVar48 & 0x1000000000000) != 0) {
                puVar37[2] = 0xffff;
              }
              if ((uVar48 & 0x100000000000000) != 0) {
                puVar37[3] = 0xffff;
              }
              lVar42 = lVar42 + 8;
              puVar39 = puVar39 + 1;
              puVar37 = puVar37 + 8;
            } while (lVar42 != 0);
            if (uVar56 == uVar53) goto LAB_00e459a4;
          }
LAB_00e46114:
          lVar42 = uVar53 - uVar56;
          puVar49 = puVar49 + uVar56;
          pcVar32 = (char *)((long)&local_870 + uVar56);
          do {
            if (*pcVar32 == '\0') {
              *puVar49 = 0xffff;
            }
            puVar49 = puVar49 + 1;
            lVar42 = lVar42 + -1;
            pcVar32 = pcVar32 + 1;
          } while (lVar42 != 0);
        }
      }
LAB_00e459a4:
      uVar48 = (ulong)*(int *)(param_1 + 4);
      lVar50 = lVar50 + 1;
    } while (lVar50 < (long)uVar48);
  }
  __memcpy_chk(&local_870,local_470,
               -(uVar48 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar48 & 0xffffffff) << 2,0x400);
  puVar46 = (ushort *)(lVar55 + uVar57 * 0x30);
  uVar12 = *puVar46;
  uVar53 = (ulong)uVar12;
  if (uVar12 != 0) {
    pbVar51 = (byte *)(*plVar2 + 1);
    uVar56 = uVar53;
    do {
      bVar9 = pbVar51[-1];
      if ((local_470[bVar9] == 0) || (local_470[*pbVar51] == 0)) {
        local_470[*pbVar51] = 0;
        local_470[bVar9] = 0;
      }
      uVar56 = uVar56 - 1;
      pbVar51 = pbVar51 + 3;
    } while (uVar56 != 0);
  }
  uVar29 = iVar27 >> 1;
  pbVar51 = (byte *)(lVar55 + uVar57 * 0x30 + 0x10);
  if (*pbVar51 != 0) {
    uVar53 = 0;
    if ((int)uVar48 < 1) goto LAB_00e46268;
    do {
      piVar38 = local_470;
      uVar48 = uVar48 & 0xffffffff;
      pbVar33 = (byte *)(*plVar2 + 2);
      puVar39 = (undefined8 *)(param_1 + 0x378);
      iVar18 = 0;
      do {
        iVar23 = iVar18;
        if (uVar53 == *pbVar33) {
          if (*piVar38 == 0) {
            uVar22 = *puVar39;
            local_9f0[iVar18] = 0;
          }
          else {
            uVar22 = 0;
            local_9f0[iVar18] = 1;
          }
          iVar23 = iVar18 + 1;
          local_8f0[iVar18] = uVar22;
        }
        puVar39 = puVar39 + 1;
        piVar38 = piVar38 + 1;
        uVar48 = uVar48 - 1;
        pbVar33 = pbVar33 + 3;
        iVar18 = iVar23;
      } while (uVar48 != 0);
      while( true ) {
        FUN_00e4d114(param_1,local_8f0,iVar23,(ulong)uVar29,
                     *(undefined *)(lVar55 + uVar57 * 0x30 + uVar53 + 0x20),local_9f0);
        uVar53 = uVar53 + 1;
        if (*pbVar51 <= uVar53) {
          uVar53 = (ulong)*puVar46;
          goto LAB_00e462b8;
        }
        uVar48 = (ulong)*(uint *)(param_1 + 4);
        if (0 < (int)*(uint *)(param_1 + 4)) break;
LAB_00e46268:
        iVar23 = 0;
      }
    } while( true );
  }
LAB_00e462b8:
  if ((int)uVar53 != 0) {
    uVar54 = uVar29;
    if ((int)uVar29 < 2) {
      uVar54 = 1;
    }
    lVar50 = *plVar2;
    do {
      if (1 < iVar27) {
        pbVar51 = (byte *)(lVar50 + (uVar53 - 1) * 3);
        pfVar26 = *(float **)(param_1 + 0x378 + (ulong)*pbVar51 * 8);
        pfVar45 = *(float **)(param_1 + 0x378 + (ulong)pbVar51[1] * 8);
        uVar48 = (ulong)uVar54;
        do {
          fVar60 = *pfVar26;
          fVar63 = *pfVar45;
          fVar64 = fVar60;
          fVar61 = fVar60 + fVar63;
          fVar65 = fVar60;
          fVar16 = fVar60 - fVar63;
          if (0.0 < fVar63) {
            fVar64 = fVar60 - fVar63;
            fVar61 = fVar60;
            fVar65 = fVar60 + fVar63;
            fVar16 = fVar60;
          }
          if (0.0 < fVar60) {
            fVar65 = fVar64;
            fVar16 = fVar61;
          }
          uVar48 = uVar48 - 1;
          *pfVar26 = fVar16;
          *pfVar45 = fVar65;
          pfVar26 = pfVar26 + 1;
          pfVar45 = pfVar45 + 1;
        } while (uVar48 != 0);
      }
      bVar1 = 1 < (long)uVar53;
      uVar53 = uVar53 - 1;
    } while (bVar1);
  }
  iVar18 = *(int *)(param_1 + 4);
  if (0 < iVar18) {
    lVar50 = 0;
    do {
      lVar42 = param_1 + lVar50 * 8;
      ppvVar4 = (void **)(lVar42 + 0x378);
      if (*(int *)((long)&local_870 + lVar50 * 4) == 0) {
        uVar48 = (ulong)*(byte *)(lVar55 + uVar57 * 0x30 +
                                  (ulong)*(byte *)(*plVar2 + lVar50 * 3 + 2) + 0x11);
        if (*(short *)(param_1 + uVar48 * 2 + 0xc4) == 0) {
          *(undefined4 *)(param_1 + 0x9c) = 0x15;
        }
        else {
          lVar28 = *(long *)(param_1 + 0x148);
          psVar44 = *(short **)(lVar42 + 0x500);
          pvVar34 = *ppvVar4;
          lVar42 = lVar28 + uVar48 * 0x63c;
          uVar19 = *(uint *)(lVar42 + 0x638);
          uVar35 = (uint)*(byte *)(lVar42 + 0x634);
          uVar54 = uVar35 * (int)*psVar44;
          if ((int)uVar19 < 2) {
            uVar20 = 0;
          }
          else {
            uVar20 = 0;
            uVar53 = 1;
            do {
              uVar56 = (ulong)*(byte *)(lVar28 + uVar48 * 0x63c + uVar53 + 0x346);
              uVar12 = psVar44[uVar56];
              uVar36 = uVar54;
              uVar25 = uVar20;
              if (-1 < (short)uVar12) {
                uVar10 = *(ushort *)(lVar28 + uVar48 * 0x63c + uVar56 * 2 + 0x152);
                uVar36 = uVar12 * uVar35;
                uVar24 = (uint)uVar10;
                if (uVar20 != uVar24) {
                  iVar47 = uVar36 - uVar54;
                  iVar13 = uVar24 - uVar20;
                  iVar23 = -iVar47;
                  if (-1 < iVar47) {
                    iVar23 = iVar47;
                  }
                  iVar14 = 0;
                  if (iVar13 != 0) {
                    iVar14 = iVar47 / iVar13;
                  }
                  iVar5 = -iVar14;
                  if (-1 < iVar14) {
                    iVar5 = iVar14;
                  }
                  uVar25 = (uint)uVar10;
                  uVar6 = uVar29;
                  if ((int)uVar24 <= (int)uVar29) {
                    uVar6 = uVar25;
                  }
                  if ((int)uVar20 < (int)uVar6) {
                    lVar42 = (ulong)uVar20 * 4;
                    *(float *)((long)pvVar34 + lVar42) =
                         *(float *)(&DAT_0055faec + (ulong)(uVar54 & 0xff) * 4) *
                         *(float *)((long)pvVar34 + lVar42);
                    if ((int)(uVar20 + 1) < (int)uVar6) {
                      iVar59 = 0;
                      iVar21 = ~uVar20 + uVar6;
                      pfVar26 = (float *)((long)pvVar34 + (ulong)uVar20 * 4 + 4);
                      do {
                        iVar59 = iVar59 + (iVar23 - iVar5 * iVar13);
                        uVar20 = 0;
                        if (iVar13 <= iVar59) {
                          uVar20 = iVar47 >> 0x1f | 1;
                        }
                        uVar54 = uVar54 + iVar14 + uVar20;
                        iVar7 = 0;
                        if (iVar13 <= iVar59) {
                          iVar7 = iVar13;
                        }
                        iVar59 = iVar59 - iVar7;
                        iVar21 = iVar21 + -1;
                        *pfVar26 = *(float *)(&DAT_0055faec + (ulong)(uVar54 & 0xff) * 4) * *pfVar26
                        ;
                        pfVar26 = pfVar26 + 1;
                      } while (iVar21 != 0);
                    }
                  }
                }
              }
              uVar20 = uVar25;
              uVar54 = uVar36;
              uVar53 = uVar53 + 1;
            } while (uVar53 != uVar19);
          }
          if ((int)uVar20 < (int)uVar29) {
            uVar48 = (ulong)uVar20;
            fVar61 = *(float *)(&DAT_0055faec + (long)(int)uVar54 * 4);
            uVar53 = (long)(int)uVar29 - uVar48;
            if (7 < uVar53) {
              uVar58 = uVar53 & 0xfffffffffffffff8;
              puVar39 = (undefined8 *)((long)pvVar34 + uVar48 * 4 + 0x10);
              uVar56 = uVar58;
              do {
                uVar56 = uVar56 - 8;
                puVar39[-1] = CONCAT44(fVar61 * (float)((ulong)puVar39[-1] >> 0x20),
                                       fVar61 * (float)puVar39[-1]);
                puVar39[-2] = CONCAT44(fVar61 * (float)((ulong)puVar39[-2] >> 0x20),
                                       fVar61 * (float)puVar39[-2]);
                puVar39[1] = CONCAT44((float)((ulong)puVar39[1] >> 0x20) * fVar61,
                                      (float)puVar39[1] * fVar61);
                *puVar39 = CONCAT44((float)((ulong)*puVar39 >> 0x20) * fVar61,
                                    (float)*puVar39 * fVar61);
                puVar39 = puVar39 + 4;
              } while (uVar56 != 0);
              uVar48 = uVar58 + uVar48;
              if (uVar53 == uVar58) goto LAB_00e463a0;
            }
            lVar42 = (long)(int)uVar29 - uVar48;
            pfVar26 = (float *)((long)pvVar34 + uVar48 * 4);
            do {
              lVar42 = lVar42 + -1;
              *pfVar26 = fVar61 * *pfVar26;
              pfVar26 = pfVar26 + 1;
            } while (lVar42 != 0);
          }
        }
      }
      else {
        memset(*ppvVar4,0,-(ulong)(uVar29 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar29 << 2);
        iVar18 = *(int *)(param_1 + 4);
      }
LAB_00e463a0:
      lVar50 = lVar50 + 1;
    } while (lVar50 < iVar18);
    if (0 < iVar18) {
      lVar55 = 0;
      do {
        FUN_00e4dcb4(*(undefined8 *)(param_1 + lVar55 * 8 + 0x378),iVar27,param_1,
                     *(undefined *)(lVar30 + 500));
        lVar55 = lVar55 + 1;
      } while (lVar55 < *(int *)(param_1 + 4));
    }
  }
  do {
    iVar18 = FUN_00e4c7e4(param_1);
  } while (iVar18 != -1);
  if (*(char *)(param_1 + 0x6e5) == '\0') {
    iVar27 = *(int *)(param_1 + 0x708);
    if (iVar27 != 0) {
      if (iVar27 < iVar8 - iVar41) {
        *param_3 = iVar27 + iVar41;
        *(undefined4 *)(param_1 + 0x708) = 0;
        iVar41 = iVar27 + iVar41;
      }
      else {
        *(int *)(param_1 + 0x708) = iVar27 - (iVar8 - iVar41);
        *param_3 = iVar8;
        iVar41 = iVar8;
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x580) = -uVar29;
    *(undefined4 *)(param_1 + 0x584) = 1;
    *(undefined *)(param_1 + 0x6e5) = 0;
    *(int *)(param_1 + 0x708) = iVar27 - local_9fc;
  }
  if (*(int *)(param_1 + 0x6f0) == *(int *)(param_1 + 0x700)) {
    if ((*(int *)(param_1 + 0x584) != 0) && ((*(byte *)(param_1 + 0x6e3) >> 2 & 1) != 0)) {
      uVar54 = *(uint *)(param_1 + 0x580);
      uVar19 = *(uint *)(param_1 + 0x704);
      if (uVar19 < (local_9fc - iVar41) + uVar54) {
        iVar8 = 0;
        if (uVar54 <= uVar19) {
          iVar8 = uVar19 - uVar54;
        }
        uVar22 = 1;
        if (iVar8 + iVar41 <= local_9fc) {
          local_9fc = iVar8 + iVar41;
        }
        *param_2 = local_9fc;
        *(int *)(param_1 + 0x580) = *(int *)(param_1 + 0x580) + local_9fc;
        goto LAB_00e466cc;
      }
    }
    iVar27 = (iVar41 - uVar29) + *(int *)(param_1 + 0x704);
    *(undefined4 *)(param_1 + 0x584) = 1;
LAB_00e466b4:
    *(int *)(param_1 + 0x580) = (iVar8 - iVar41) + iVar27;
  }
  else if (*(int *)(param_1 + 0x584) != 0) {
    iVar27 = *(int *)(param_1 + 0x580);
    goto LAB_00e466b4;
  }
  uVar22 = 1;
  *param_2 = local_9fc;
LAB_00e466cc:
  if (*(long *)(lVar15 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar22);
  }
  return;
}


