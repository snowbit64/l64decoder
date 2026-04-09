// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00ad9ae0
// Entry Point: 00ad9ae0
// Size: 9552 bytes
// Signature: undefined FUN_00ad9ae0(void)


int FUN_00ad9ae0(uint param_1,ulong param_2,int *param_3,uint *param_4)

{
  int **ppiVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int *piVar11;
  void *pvVar12;
  size_t sVar13;
  char *__dest;
  char *__dest_00;
  size_t sVar14;
  char *pcVar15;
  void *pvVar16;
  undefined8 *puVar17;
  int *piVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  undefined8 uVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  int iVar28;
  int *piVar29;
  undefined4 *puVar30;
  ulong uVar31;
  void **ppvVar32;
  int **ppiVar33;
  undefined8 *puVar34;
  ulong uVar35;
  ulong uVar36;
  undefined4 uVar37;
  ulong uVar38;
  ulong uVar39;
  undefined8 extraout_x14;
  undefined8 extraout_x14_00;
  undefined8 extraout_x14_01;
  undefined8 extraout_x14_02;
  undefined8 extraout_x14_03;
  undefined8 extraout_x14_04;
  undefined8 extraout_x14_05;
  undefined8 extraout_x14_06;
  undefined8 extraout_x14_07;
  undefined8 extraout_x14_08;
  uint uVar40;
  int *extraout_x16;
  int *extraout_x16_00;
  int *extraout_x16_01;
  int *extraout_x16_02;
  int *extraout_x16_03;
  int *extraout_x16_04;
  int *extraout_x16_05;
  int *extraout_x16_06;
  int *extraout_x16_07;
  int *extraout_x16_08;
  int iVar41;
  long lVar42;
  ulong uVar43;
  long lVar44;
  int iVar45;
  int *piVar46;
  ulong uVar47;
  uint *puVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  void *local_520;
  ulong local_508;
  long *local_4f8;
  ulong local_4f0;
  int *piStack_4e8;
  undefined8 local_4e0;
  void *local_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  char *local_4c0;
  ulong uStack_4b8;
  int *local_4b0;
  undefined8 local_4a8;
  void *local_4a0;
  ulong uStack_498;
  void *local_490;
  undefined8 local_488;
  undefined8 local_480;
  char acStack_470 [1024];
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  memset(param_4,0,0x4a0);
  puVar10 = (uint *)calloc(1,0x30);
  *(uint **)(param_4 + 0x126) = puVar10;
  if (puVar10 == (uint *)0x0) {
    iVar9 = 3;
    goto LAB_00ad9d98;
  }
  uVar47 = param_2 >> 2;
  *puVar10 = param_1;
  *(ulong *)(puVar10 + 2) = param_2;
  if ((param_1 & 1) == 0) {
    piVar11 = (int *)calloc(1,param_2);
    puVar10[6] = (uint)uVar47;
    *(int **)(puVar10 + 4) = piVar11;
    if (piVar11 == (int *)0x0) {
      free(puVar10);
      iVar9 = 3;
      *(undefined8 *)(param_4 + 0x126) = 0;
      goto LAB_00ad9d98;
    }
    memcpy(piVar11,param_3,param_2);
    param_3 = piVar11;
  }
  else {
    *(int **)(puVar10 + 4) = param_3;
    puVar10[6] = (uint)uVar47;
  }
  local_480 = 0;
  uStack_498 = 0;
  local_4a0 = (void *)0x0;
  local_488 = 0;
  local_490 = (void *)0x0;
  uStack_4b8 = 0;
  local_4c0 = (char *)0x0;
  local_4a8 = 0;
  local_4b0 = (int *)0x0;
  uStack_4c8 = 0;
  local_4d0 = 0;
  iVar9 = 9;
  piStack_4e8 = (int *)0x0;
  local_4f0 = 0;
  local_4d8 = (void *)0x0;
  local_4e0 = 0;
  if ((0x13 < param_2) && ((param_2 & 3) == 0)) {
    local_4f0 = uVar47;
    piStack_4e8 = param_3;
    if (*param_3 == 0x7230203) {
      *param_4 = (uint)*(ushort *)((long)param_3 + 10);
      if (0x17 < param_2) {
        uVar23 = 0;
        uVar43 = 0;
        uVar24 = 5;
        do {
          uVar20 = param_3[uVar24];
          if (uVar20 < 0x10000) {
            iVar9 = 0x10;
            goto switchD_00adbf98_caseD_d;
          }
          if ((uVar20 & 0xffff) == 0x41) {
            uVar23 = uVar23 + 1;
            uStack_498 = (ulong)uVar23;
          }
          uVar40 = (int)uVar43 + 1;
          uVar43 = (ulong)uVar40;
          uVar24 = (ulong)((uVar20 >> 0x10) + (int)uVar24);
        } while (uVar24 < uVar47);
        if (uVar40 != 0) {
          uStack_4b8 = uVar43;
          piVar11 = (int *)calloc(uVar43,200);
          local_4b0 = piVar11;
          if (piVar11 != (int *)0x0) {
            if (uVar40 < 2) {
              uVar25 = 0;
LAB_00ad9e6c:
              lVar26 = uVar43 - uVar25;
              piVar46 = piVar11 + uVar25 * 0x32 + 0x18;
              do {
                piVar46[-0x17] = -1;
                lVar26 = lVar26 + -1;
                piVar46[-0x14] = -1;
                *piVar46 = -1;
                piVar46[2] = -1;
                piVar46[6] = -1;
                piVar46[8] = -1;
                piVar46[10] = -1;
                piVar46[0x12] = -1;
                piVar46 = piVar46 + 0x32;
              } while (lVar26 != 0);
            }
            else {
              uVar25 = uVar43 & 0xfffffffe;
              uVar24 = uVar43 & 0xfffffffe;
              piVar46 = piVar11 + 0x33;
              do {
                piVar46[-0x32] = -1;
                uVar24 = uVar24 - 2;
                *piVar46 = -1;
                piVar46[-0x2f] = -1;
                piVar46[3] = -1;
                piVar46[-0x1b] = -1;
                piVar46[0x17] = -1;
                piVar46[-0x19] = -1;
                piVar46[0x19] = -1;
                piVar46[-0x15] = -1;
                piVar46[0x1d] = -1;
                piVar46[-0x13] = -1;
                piVar46[0x1f] = -1;
                piVar46[-0x11] = -1;
                piVar46[0x21] = -1;
                piVar46[-9] = -1;
                piVar46[0x29] = -1;
                piVar46 = piVar46 + 100;
              } while (uVar24 != 0);
              if (uVar25 != uVar43) goto LAB_00ad9e6c;
            }
            local_4c0 = (char *)0x0;
            uStack_4c8 = CONCAT44(uStack_4c8._4_4_,0xffffffff);
            if (uVar23 == 0) {
              pvVar12 = (void *)0x0;
            }
            else {
              pvVar12 = calloc((ulong)uVar23,0x18);
              local_490 = pvVar12;
              if (pvVar12 == (void *)0x0) goto LAB_00ad9edc;
            }
            uVar8 = 0;
            uVar40 = 0;
            iVar9 = 0;
            uVar20 = 0;
            iVar19 = 0;
            uVar23 = 0;
            uVar21 = 0;
            uVar24 = 5;
            iVar41 = -1;
            uVar6 = 0xffffffff;
            pcVar15 = (char *)0x0;
            do {
              uVar3 = param_3[uVar24];
              piVar46 = piVar11 + (ulong)uVar23 * 0x32;
              uVar25 = (ulong)uVar23;
              uVar2 = uVar3 & 0xffff;
              uVar4 = uVar3 >> 0x10;
              piVar46[1] = uVar2;
              iVar45 = (int)uVar24;
              piVar46[5] = iVar45;
              piVar46[6] = uVar4;
              __dest_00 = pcVar15;
              switch(uVar2) {
              case 2:
                sVar14 = strlen((char *)(param_3 + uVar24 + 1));
                sVar13 = strlen(pcVar15);
                __dest_00 = (char *)calloc(sVar14 + sVar13 + 1,8);
                if (__dest_00 == (char *)0x0) goto LAB_00ad9edc;
                __dest = strcpy(__dest_00,pcVar15);
                strcat(__dest,(char *)(param_3 + uVar24 + 1));
                free(pcVar15);
                local_4c0 = __dest_00;
                break;
              case 3:
                if (uVar47 <= iVar45 + 1) goto LAB_00ada5ec;
                uVar8 = param_3[iVar45 + 1];
                local_4d0 = CONCAT44(local_4d0._4_4_,uVar8);
                if (uVar47 <= iVar45 + 2) goto LAB_00ada5ec;
                local_4d0 = CONCAT44(param_3[iVar45 + 2],uVar8);
                if (0x3ffff < uVar3) {
                  if (uVar47 <= iVar45 + 3) goto LAB_00ada5ec;
                  iVar41 = param_3[iVar45 + 3];
                  uStack_4c8 = CONCAT44(uStack_4c8._4_4_,iVar41);
                  if (0x4ffff < uVar3) {
                    sVar14 = strlen((char *)(param_3 + uVar24 + 4));
                    __dest_00 = (char *)calloc(sVar14 + 1,8);
                    if (__dest_00 == (char *)0x0) goto LAB_00ad9edc;
                    strcpy(__dest_00,(char *)(param_3 + uVar24 + 4));
                    local_4c0 = __dest_00;
                  }
                }
                break;
              case 4:
              case 8:
              case 9:
              case 10:
              case 0xb:
              case 0xc:
              case 0xd:
              case 0xe:
              case 0x10:
              case 0x11:
              case 0x12:
              case 0x28:
              case 0x2f:
              case 0x35:
              case 0x37:
              case 0x39:
              case 0x3a:
              case 0x3c:
              case 0x3e:
              case 0x3f:
              case 0x40:
              case 0x42:
              case 0x43:
              case 0x44:
              case 0x45:
              case 0x46:
              case 0x47:
              case 0x48:
              case 0x49:
              case 0x4a:
              case 0x4b:
              case 0x4c:
              case 0x4d:
              case 0x4e:
              case 0x4f:
              case 0x50:
              case 0x51:
              case 0x52:
              case 0x53:
              case 0x54:
              case 0x55:
              case 0x56:
              case 0x57:
              case 0x58:
              case 0x59:
              case 0x5a:
              case 0x5b:
              case 0x5c:
              case 0x5d:
              case 0x5e:
              case 0x5f:
              case 0x60:
              case 0x61:
              case 0x62:
              case 99:
              case 100:
              case 0x65:
              case 0x66:
              case 0x67:
              case 0x68:
              case 0x69:
              case 0x6a:
              case 0x6b:
              case 0x6c:
              case 0x6d:
              case 0x6e:
              case 0x6f:
              case 0x70:
              case 0x71:
              case 0x72:
              case 0x73:
              case 0x74:
              case 0x75:
              case 0x76:
              case 0x77:
              case 0x78:
              case 0x79:
              case 0x7a:
              case 0x7b:
              case 0x7c:
              case 0x7d:
              case 0x7e:
              case 0x7f:
              case 0x80:
              case 0x81:
              case 0x82:
              case 0x83:
              case 0x84:
              case 0x85:
              case 0x86:
              case 0x87:
              case 0x88:
              case 0x89:
              case 0x8a:
              case 0x8b:
              case 0x8c:
              case 0x8d:
              case 0x8e:
              case 0x8f:
              case 0x90:
              case 0x91:
              case 0x92:
              case 0x93:
              case 0x94:
              case 0x95:
              case 0x96:
              case 0x97:
              case 0x98:
              case 0x99:
              case 0x9a:
              case 0x9b:
              case 0x9c:
              case 0x9d:
              case 0x9e:
              case 0x9f:
              case 0xa0:
              case 0xa1:
              case 0xa2:
              case 0xa3:
              case 0xa4:
              case 0xa5:
              case 0xa6:
              case 0xa7:
              case 0xa8:
              case 0xa9:
              case 0xaa:
              case 0xab:
              case 0xac:
              case 0xad:
              case 0xae:
              case 0xaf:
              case 0xb0:
              case 0xb1:
              case 0xb2:
              case 0xb3:
              case 0xb4:
              case 0xb5:
              case 0xb6:
              case 0xb7:
              case 0xb8:
              case 0xb9:
              case 0xba:
              case 0xbb:
              case 0xbc:
              case 0xbd:
              case 0xbe:
              case 0xbf:
              case 0xc0:
              case 0xc1:
              case 0xc2:
              case 0xc3:
              case 0xc4:
              case 0xc5:
              case 0xc6:
              case 199:
              case 200:
              case 0xc9:
              case 0xca:
              case 0xcb:
              case 0xcc:
              case 0xcd:
              case 0xce:
              case 0xcf:
              case 0xd0:
              case 0xd1:
              case 0xd2:
              case 0xd3:
              case 0xd4:
              case 0xd5:
              case 0xd6:
              case 0xd7:
              case 0xd8:
              case 0xd9:
              case 0xda:
              case 0xdb:
              case 0xdc:
              case 0xdd:
              case 0xde:
              case 0xdf:
              case 0xe0:
              case 0xe1:
              case 0xe2:
              case 0xe3:
              case 0xe4:
              case 0xe5:
              case 0xe6:
              case 0xe7:
              case 0xe8:
              case 0xe9:
              case 0xea:
              case 0xeb:
              case 0xec:
              case 0xed:
              case 0xee:
              case 0xef:
              case 0xf0:
              case 0xf1:
              case 0xf2:
              case 0xf3:
              case 0xf4:
              case 0xf5:
              case 0xf6:
              case 0xf7:
                break;
              case 5:
              case 6:
                iVar28 = iVar45;
                if (uVar2 == 6) {
                  iVar28 = iVar45 + 1;
                }
                *(int **)(piVar11 + uVar25 * 0x32 + 0x12) = param_3 + (iVar28 + 2);
                break;
              case 7:
                uVar20 = uVar20 + 1;
                local_4e0 = CONCAT44(local_4e0._4_4_,uVar20);
                break;
              case 0xf:
                iVar19 = iVar19 + 1;
                local_4a8 = CONCAT44(local_4a8._4_4_,iVar19);
                break;
              case 0x13:
              case 0x14:
              case 0x15:
              case 0x16:
              case 0x17:
              case 0x18:
              case 0x1a:
              case 0x1f:
              case 0x21:
              case 0x22:
              case 0x23:
              case 0x24:
              case 0x25:
              case 0x26:
                goto switchD_00ad9f80_caseD_13;
              case 0x19:
                if (iVar45 + 1 < uVar47) {
                  *piVar46 = param_3[iVar45 + 1];
                  if (iVar45 + 2 < uVar47) {
                    piVar11[uVar25 * 0x32 + 10] = param_3[iVar45 + 2];
                    if (iVar45 + 3 < uVar47) {
                      piVar11[uVar25 * 0x32 + 0xb] = param_3[iVar45 + 3];
                      if (iVar45 + 4 < uVar47) {
                        piVar11[uVar25 * 0x32 + 0xc] = param_3[iVar45 + 4];
                        if (iVar45 + 5 < uVar47) {
                          piVar11[uVar25 * 0x32 + 0xd] = param_3[iVar45 + 5];
                          if (iVar45 + 6 < uVar47) {
                            piVar11[uVar25 * 0x32 + 0xe] = param_3[iVar45 + 6];
                            if (iVar45 + 7 < uVar47) {
                              piVar11[uVar25 * 0x32 + 0xf] = param_3[iVar45 + 7];
                              if (iVar45 + 8 < uVar47) {
                                piVar46 = piVar11 + uVar25 * 0x32;
                                piVar46[0x10] = param_3[iVar45 + 8];
                                goto LAB_00ada4a8;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto LAB_00ada5ec;
              case 0x1b:
                if (iVar45 + 1 < uVar47) {
                  *piVar46 = param_3[iVar45 + 1];
                  if (iVar45 + 2 < uVar47) {
                    piVar46 = piVar11 + uVar25 * 0x32;
                    piVar46[0x11] = param_3[iVar45 + 2];
                    goto LAB_00ada4e0;
                  }
                }
                goto LAB_00ada5ec;
              case 0x1c:
                if (iVar45 + 1 < uVar47) {
                  *piVar46 = param_3[iVar45 + 1];
                  if (iVar45 + 2 < uVar47) {
                    piVar11[uVar25 * 0x32 + 8] = param_3[iVar45 + 2];
                    if (iVar45 + 3 < uVar47) {
                      piVar46 = piVar11 + uVar25 * 0x32;
                      piVar46[9] = param_3[iVar45 + 3];
                      goto LAB_00ada4a8;
                    }
                  }
                }
                goto LAB_00ada5ec;
              case 0x1d:
                if (iVar45 + 1 < uVar47) {
                  *piVar46 = param_3[iVar45 + 1];
                  if (iVar45 + 2 < uVar47) {
                    piVar46 = piVar11 + uVar25 * 0x32;
                    piVar46[8] = param_3[iVar45 + 2];
                    goto LAB_00ada4e0;
                  }
                }
                goto LAB_00ada5ec;
              case 0x1e:
                piVar11[uVar25 * 0x32 + 0x2c] = uVar4 - 2;
switchD_00ad9f80_caseD_13:
                if (uVar47 <= iVar45 + 1) goto LAB_00ada5ec;
                *piVar46 = param_3[iVar45 + 1];
                *(undefined *)(piVar11 + uVar25 * 0x32 + 7) = 1;
                break;
              case 0x20:
                if (uVar47 <= iVar45 + 1) goto LAB_00ada5ec;
                *piVar46 = param_3[iVar45 + 1];
                if (uVar47 <= iVar45 + 2) goto LAB_00ada5ec;
                piVar11[uVar25 * 0x32 + 4] = param_3[iVar45 + 2];
                if (uVar47 <= iVar45 + 3) goto LAB_00ada5ec;
                piVar46 = piVar11 + uVar25 * 0x32;
                piVar46[3] = param_3[iVar45 + 3];
LAB_00ada4a8:
                *(undefined *)(piVar46 + 7) = 1;
                break;
              case 0x27:
                if (uVar47 <= iVar45 + 1) goto LAB_00ada5ec;
                *piVar46 = param_3[iVar45 + 1];
                if (uVar47 <= iVar45 + 2) goto LAB_00ada5ec;
                piVar46 = piVar11 + uVar25 * 0x32;
                piVar46[4] = param_3[iVar45 + 2];
LAB_00ada4e0:
                *(undefined *)(piVar46 + 7) = 1;
                break;
              case 0x29:
              case 0x2a:
              case 0x2b:
              case 0x2c:
              case 0x2d:
              case 0x2e:
              case 0x30:
              case 0x31:
              case 0x32:
              case 0x33:
              case 0x34:
              case 0x3d:
                if (iVar45 + 1 < uVar47) {
                  piVar11[uVar25 * 0x32 + 2] = param_3[iVar45 + 1];
                  if (iVar45 + 2 < uVar47) {
                    iVar28 = param_3[iVar45 + 2];
                    goto LAB_00ad9fd4;
                  }
                }
                goto LAB_00ada5ec;
              case 0x36:
                if (uVar47 <= iVar45 + 2) goto LAB_00ada5ec;
                iVar28 = param_3[iVar45 + 2];
                uVar6 = uVar23;
LAB_00ad9fd4:
                *piVar46 = iVar28;
                break;
              case 0x38:
                goto switchD_00ad9f80_caseD_38;
              case 0x3b:
                if (uVar47 <= iVar45 + 1) goto LAB_00ada5ec;
                piVar11[uVar25 * 0x32 + 3] = param_3[iVar45 + 1];
                if (uVar47 <= iVar45 + 2) goto LAB_00ada5ec;
                *piVar46 = param_3[iVar45 + 2];
                if (uVar47 <= iVar45 + 3) goto LAB_00ada5ec;
                piVar11[uVar25 * 0x32 + 4] = param_3[iVar45 + 3];
                break;
              case 0x41:
                if (uVar47 <= iVar45 + 1) goto LAB_00ada5ec;
                uVar24 = (ulong)uVar21;
                *(int *)((long)pvVar12 + uVar24 * 0x18 + 4) = param_3[iVar45 + 1];
                if (uVar47 <= iVar45 + 2) goto LAB_00ada5ec;
                *(int *)((long)pvVar12 + uVar24 * 0x18) = param_3[iVar45 + 2];
                if (uVar47 <= iVar45 + 3) goto LAB_00ada5ec;
                uVar2 = uVar4 - 4;
                *(int *)((long)pvVar12 + uVar24 * 0x18 + 8) = param_3[iVar45 + 3];
                *(uint *)((long)pvVar12 + uVar24 * 0x18 + 0xc) = uVar2;
                if (uVar2 != 0) {
                  pvVar16 = calloc((ulong)uVar2,4);
                  *(void **)((long)pvVar12 + uVar24 * 0x18 + 0x10) = pvVar16;
                  if (pvVar16 == (void *)0x0) goto LAB_00ad9edc;
                  uVar24 = 0;
                  do {
                    uVar38 = (ulong)((int)uVar24 + iVar45 + 4);
                    if (uVar47 <= uVar38) goto LAB_00ada5ec;
                    piVar46 = piVar11;
                    uVar39 = uVar43;
                    do {
                      if (*piVar46 == param_3[uVar38]) {
                        if (piVar46[1] == 0x2b) {
                          if (uVar47 <= piVar46[5] + 3) goto LAB_00ada5ec;
                          *(int *)((long)pvVar16 + uVar24 * 4) = param_3[piVar46[5] + 3];
                        }
                        break;
                      }
                      piVar46 = piVar46 + 0x32;
                      uVar39 = uVar39 - 1;
                    } while (uVar39 != 0);
                    uVar24 = uVar24 + 1;
                  } while (uVar24 < uVar2);
                }
                uVar21 = uVar21 + 1;
                break;
              case 0xf8:
                if (uVar6 != 0xffffffff) {
                  if (uVar47 <= piVar11[(ulong)uVar6 * 0x32 + 5] + 2) goto LAB_00ada5ec;
                  uVar40 = uVar40 + 1;
                  local_4a8 = CONCAT44(uVar40,(uint)local_4a8);
                  piVar11[(ulong)uVar6 * 0x32] = param_3[piVar11[(ulong)uVar6 * 0x32 + 5] + 2];
                }
switchD_00ad9f80_caseD_38:
                uVar6 = 0xffffffff;
                break;
              default:
                if ((uVar2 == 0x1178) || (uVar2 == 0x14dd)) goto switchD_00ad9f80_caseD_13;
              }
              if (*(char *)(piVar11 + uVar25 * 0x32 + 7) != '\0') {
                iVar9 = iVar9 + 1;
                local_488 = CONCAT44(local_488._4_4_,iVar9);
              }
              uVar24 = (ulong)(uVar4 + iVar45);
              uVar23 = uVar23 + 1;
              pcVar15 = __dest_00;
            } while (uVar24 < uVar47);
            if (uVar20 != 0) {
              uVar25 = (ulong)uVar20;
              local_4d8 = calloc(uVar25,0x10);
              uVar23 = 0;
              piVar46 = piVar11 + 5;
              uVar24 = uVar43;
              do {
                if (piVar46[-4] == 7) {
                  if (uVar20 <= uVar23) {
                    iVar9 = 7;
                    goto switchD_00adbf98_caseD_d;
                  }
                  iVar9 = *piVar46;
                  uVar38 = (ulong)(iVar9 + 1);
                  if (uVar47 <= uVar38) goto LAB_00ada5ec;
                  uVar39 = (ulong)uVar23;
                  uVar23 = uVar23 + 1;
                  piVar18 = (int *)((long)local_4d8 + uVar39 * 0x10);
                  *piVar18 = param_3[uVar38];
                  *(int **)(piVar18 + 2) = param_3 + (iVar9 + 2);
                }
                piVar46 = piVar46 + 0x32;
                uVar24 = uVar24 - 1;
              } while (uVar24 != 0);
              if ((local_4d8 != (void *)0x0) && (uVar20 != 0)) {
                puVar17 = (undefined8 *)((long)local_4d8 + 8);
                do {
                  if (*(int *)(puVar17 + -1) == iVar41) {
                    *(undefined8 *)(param_4 + 10) = *puVar17;
                    break;
                  }
                  puVar17 = puVar17 + 2;
                  uVar25 = uVar25 - 1;
                } while (uVar25 != 0);
              }
            }
            if (__dest_00 != (char *)0x0) {
              sVar14 = strlen(__dest_00);
              pcVar15 = (char *)calloc(sVar14 + 1,8);
              if (pcVar15 == (char *)0x0) goto LAB_00ad9edc;
              pcVar15 = strcpy(pcVar15,__dest_00);
              *(char **)(param_4 + 0xc) = pcVar15;
            }
            if (uVar40 == 0) goto LAB_00adaafc;
            pvVar12 = calloc((ulong)uVar40,0x28);
            local_4a0 = pvVar12;
            if (pvVar12 != (void *)0x0) {
              lVar26 = 0;
              uVar47 = 0;
              uVar24 = uVar43 - 1;
LAB_00ada6c4:
              uVar25 = uVar47;
              if (piVar11[uVar47 * 0x32 + 1] == 0x36 && uVar47 < uVar43) {
                piVar46 = piVar11 + uVar47 * 0x32;
                iVar9 = 0x36;
                piVar18 = piVar11 + uVar47 * 0x32 + 0x33;
                uVar38 = uVar47;
                do {
                  if (iVar9 == 0xf8) {
                    lVar44 = 0;
                    lVar42 = lVar26 * 0x28;
                    uVar20 = 0;
                    uVar23 = 0;
                    iVar9 = piVar11[uVar47 * 0x32];
                    uVar37 = 0xf8;
                    puVar48 = (uint *)((long)pvVar12 + lVar42 + 0x18);
                    *puVar48 = 0;
                    *(int *)((long)pvVar12 + lVar42) = iVar9;
                    puVar10 = (uint *)((long)pvVar12 + lVar42 + 4);
                    *puVar10 = 0;
                    uVar47 = uVar24;
                    goto LAB_00ada754;
                  }
                  uVar25 = uVar43;
                  if (uVar24 == uVar38) break;
                  iVar9 = *piVar18;
                  uVar25 = uVar38 + 1;
                  piVar46 = piVar46 + 0x32;
                  piVar18 = piVar18 + 0x32;
                  uVar38 = uVar25;
                } while (iVar9 != 0x38);
              }
              goto LAB_00ada6b8;
            }
          }
          goto LAB_00ad9edc;
        }
      }
LAB_00ada5ec:
      iVar9 = 0xb;
      goto switchD_00adbf98_caseD_d;
    }
    iVar9 = 10;
  }
  *param_4 = (uint)*(ushort *)((long)param_3 + 10);
  goto switchD_00adbf98_caseD_d;
LAB_00ada754:
  switch(uVar37) {
  case 0x38:
    goto switchD_00ada76c_caseD_38;
  case 0x39:
    uVar20 = uVar20 + 1;
    *puVar10 = uVar20;
    if (uVar38 != uVar47) goto LAB_00ada780;
    goto switchD_00ada76c_caseD_38;
  default:
    goto switchD_00ada76c_caseD_3a;
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
    uVar23 = uVar23 + 1;
    break;
  case 0x3f:
  case 0x40:
    uVar23 = uVar23 + 2;
  }
  *puVar48 = uVar23;
switchD_00ada76c_caseD_3a:
  if (uVar38 == uVar47) goto switchD_00ada76c_caseD_38;
LAB_00ada780:
  uVar37 = *(undefined4 *)((long)piVar18 + lVar44);
  lVar44 = lVar44 + 200;
  uVar47 = uVar47 - 1;
  goto LAB_00ada754;
switchD_00ada76c_caseD_38:
  if (uVar20 != 0) {
    pvVar16 = calloc((ulong)uVar20,4);
    *(void **)((long)pvVar12 + lVar26 * 0x28 + 8) = pvVar16;
    if (pvVar16 == (void *)0x0) goto LAB_00ad9edc;
  }
  if (uVar23 != 0) {
    pvVar16 = calloc((ulong)uVar23,4);
    *(void **)((long)pvVar12 + lVar26 * 0x28 + 0x20) = pvVar16;
    if (pvVar16 == (void *)0x0) goto LAB_00ad9edc;
  }
  param_3 = piStack_4e8;
  iVar9 = 0xf8;
  ppiVar33 = (int **)((long)pvVar12 + lVar26 * 0x28 + 0x20);
  ppiVar1 = (int **)((long)pvVar12 + lVar26 * 0x28 + 8);
  *puVar48 = 0;
  *puVar10 = 0;
  uVar47 = uVar24;
  do {
    switch(iVar9) {
    case 0x38:
      goto switchD_00ada848_caseD_38;
    case 0x39:
      if ((piStack_4e8 == (int *)0x0) || (local_4f0 <= piVar46[5] + 3)) goto LAB_00ada5ec;
      (*ppiVar1)[*puVar10] = piStack_4e8[piVar46[5] + 3];
      *puVar10 = *puVar10 + 1;
      if (uVar38 != uVar47) goto LAB_00ada884;
      goto switchD_00ada848_caseD_38;
    default:
      goto switchD_00ada848_caseD_3a;
    case 0x3c:
    case 0x3d:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
      if (piStack_4e8 == (int *)0x0) goto LAB_00ada5ec;
      uVar23 = piVar46[5] + 3;
      break;
    case 0x3e:
      if (piStack_4e8 == (int *)0x0) goto LAB_00ada5ec;
      uVar23 = piVar46[5] + 2;
      break;
    case 0x3f:
    case 0x40:
      if ((piStack_4e8 != (int *)0x0) && (piVar46[5] + 2 < local_4f0)) {
        piVar18 = *ppiVar33;
        piVar18[*puVar48] = piStack_4e8[piVar46[5] + 2];
        uVar23 = *puVar48;
        iVar9 = piVar46[5];
        *puVar48 = uVar23 + 1;
        if (iVar9 + 3 < local_4f0) {
          piVar18[uVar23 + 1] = piStack_4e8[iVar9 + 3];
          goto LAB_00ada870;
        }
      }
      goto LAB_00ada5ec;
    }
    if (local_4f0 <= uVar23) goto LAB_00ada5ec;
    (*ppiVar33)[*puVar48] = piStack_4e8[uVar23];
LAB_00ada870:
    *puVar48 = *puVar48 + 1;
switchD_00ada848_caseD_3a:
    if (uVar38 == uVar47) break;
LAB_00ada884:
    iVar9 = piVar46[0x33];
    piVar46 = piVar46 + 0x32;
    uVar47 = uVar47 - 1;
  } while( true );
switchD_00ada848_caseD_38:
  if (*puVar10 == 0) {
    uVar23 = 0;
  }
  else {
    qsort(*ppiVar1,(ulong)*puVar10,4,FUN_00ade530);
    uVar23 = *puVar10;
    uVar47 = (ulong)uVar23;
    if (uVar23 != 0) {
      piVar18 = *ppiVar1;
      lVar44 = 0;
      piVar46 = piVar18;
      do {
        if (piVar18[lVar44] != *piVar46) {
          lVar44 = lVar44 + 1;
          piVar18[lVar44] = *piVar46;
        }
        uVar47 = uVar47 - 1;
        piVar46 = piVar46 + 1;
      } while (uVar47 != 0);
      uVar23 = (int)lVar44 + 1;
    }
  }
  *puVar10 = uVar23;
  if (*puVar48 == 0) {
    uVar23 = 0;
  }
  else {
    qsort(*ppiVar33,(ulong)*puVar48,4,FUN_00ade530);
    uVar23 = *puVar48;
    uVar47 = (ulong)uVar23;
    if (uVar23 != 0) {
      piVar18 = *ppiVar33;
      lVar44 = 0;
      piVar46 = piVar18;
      do {
        if (piVar18[lVar44] != *piVar46) {
          lVar44 = lVar44 + 1;
          piVar18[lVar44] = *piVar46;
        }
        uVar47 = uVar47 - 1;
        piVar46 = piVar46 + 1;
      } while (uVar47 != 0);
      uVar23 = (int)lVar44 + 1;
    }
  }
  lVar26 = lVar26 + 1;
  *puVar48 = uVar23;
  uVar25 = uVar38;
LAB_00ada6b8:
  uVar47 = uVar25 + 1;
  if (uVar43 <= uVar47) goto LAB_00adaa40;
  goto LAB_00ada6c4;
LAB_00adaa40:
  uVar23 = local_4a8._4_4_;
  uVar47 = (ulong)local_4a8._4_4_;
  qsort(pvVar12,uVar47,0x28,FUN_00ade520);
  if (uVar23 != 0) {
    uVar24 = 0;
    do {
      pvVar12 = local_4a0;
      uVar23 = *(uint *)((long)local_4a0 + uVar24 * 0x28 + 4);
      if (uVar23 != 0) {
        pvVar16 = calloc((ulong)uVar23,8);
        uVar25 = 0;
        uVar38 = 0;
        ppvVar32 = (void **)((long)pvVar12 + uVar24 * 0x28 + 0x10);
        *ppvVar32 = pvVar16;
        pvVar16 = pvVar12;
        do {
          piVar11 = (int *)((long)pvVar16 + uVar25 * 0x28);
          while (*piVar11 != *(int *)(*(long *)((long)pvVar12 + uVar24 * 0x28 + 8) + uVar38 * 4)) {
            uVar25 = uVar25 + 1;
            piVar11 = piVar11 + 10;
            iVar9 = 0xc;
            if (uVar47 <= uVar25) goto switchD_00adbf98_caseD_d;
          }
          *(int **)((long)*ppvVar32 + uVar38 * 8) = piVar11;
          uVar38 = uVar38 + 1;
          pvVar16 = local_4a0;
        } while (uVar38 != uVar23);
      }
      uVar24 = uVar24 + 1;
      param_3 = piStack_4e8;
    } while (uVar24 != uVar47);
  }
LAB_00adaafc:
  piVar11 = local_4b0;
  if ((param_3 != (int *)0x0) && (local_4b0 != (int *)0x0)) {
    uVar47 = 0;
    do {
      if (local_4b0[uVar47 * 0x32 + 1] == 0x48 || local_4b0[uVar47 * 0x32 + 1] == 6) {
        uVar24 = (ulong)(local_4b0[uVar47 * 0x32 + 5] + 1);
        if ((local_4f0 <= uVar24) ||
           (uVar25 = (ulong)(local_4b0[uVar47 * 0x32 + 5] + 2), local_4f0 <= uVar25))
        goto LAB_00ada5ec;
        iVar9 = param_3[uVar25];
        puVar10 = (uint *)(local_4b0 + 0x2c);
        uVar25 = uVar43;
        do {
          if (puVar10[-0x2c] == param_3[uVar24]) {
            if (iVar9 == -1) {
              iVar9 = 4;
              goto switchD_00adbf98_caseD_d;
            }
            uVar23 = *puVar10;
            if (uVar23 <= iVar9 + 1U) {
              uVar23 = iVar9 + 1;
            }
            *puVar10 = uVar23;
            break;
          }
          puVar10 = puVar10 + 0x32;
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
      }
      uVar47 = uVar47 + 1;
    } while (uVar47 != uVar43);
    uVar47 = 0;
    do {
      uVar23 = piVar11[uVar47 * 0x32 + 0x2c];
      if (uVar23 != 0) {
        pvVar12 = calloc((ulong)uVar23,8);
        *(void **)(piVar11 + uVar47 * 0x32 + 0x2e) = pvVar12;
        if (pvVar12 == (void *)0x0) goto LAB_00ad9edc;
        pvVar12 = calloc((ulong)uVar23,0x60);
        *(void **)(piVar11 + uVar47 * 0x32 + 0x30) = pvVar12;
        if (pvVar12 == (void *)0x0) goto LAB_00ad9edc;
      }
      uVar47 = (ulong)((int)uVar47 + 1);
    } while (uVar47 < uVar43);
  }
  if ((param_3 != (int *)0x0) && (local_4b0 != (int *)0x0)) {
    uVar47 = 0;
    do {
      if (local_4b0[uVar47 * 0x32 + 1] - 5U < 2) {
        if (piStack_4e8 == (int *)0x0) goto LAB_00ada5ec;
        uVar24 = (ulong)(local_4b0[uVar47 * 0x32 + 5] + 1);
        if (local_4f0 <= uVar24) goto LAB_00ada5ec;
        piVar11 = local_4b0;
        uVar25 = uVar43;
        do {
          if (*piVar11 == piStack_4e8[uVar24]) {
            if (local_4b0[uVar47 * 0x32 + 1] == 6) {
              uVar24 = (ulong)(local_4b0[uVar47 * 0x32 + 5] + 2);
              if (local_4f0 <= uVar24) goto LAB_00ada5ec;
              puVar17 = (undefined8 *)
                        (*(long *)(piVar11 + 0x2e) + (ulong)(uint)piStack_4e8[uVar24] * 8);
            }
            else {
              puVar17 = (undefined8 *)(piVar11 + 0x12);
            }
            *puVar17 = *(undefined8 *)(local_4b0 + uVar47 * 0x32 + 0x12);
            break;
          }
          piVar11 = piVar11 + 0x32;
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
      }
      uVar47 = uVar47 + 1;
    } while (uVar47 != uVar43);
  }
  uVar47 = 0;
  do {
    iVar19 = local_4b0[uVar47 * 0x32 + 1];
    if ((iVar19 - 0x47U < 2 || iVar19 - 0x1600U < 2) || (iVar19 == 0x14c)) {
      iVar41 = local_4b0[uVar47 * 0x32 + 5];
      iVar9 = iVar41;
      if (iVar19 == 0x48) {
        iVar9 = iVar41 + 1;
      }
      if ((piStack_4e8 == (int *)0x0) || (local_4f0 <= iVar9 + 2)) goto LAB_00ada5ec;
      uVar23 = piStack_4e8[iVar9 + 2];
      if (uVar23 < 0x2c && (1L << ((ulong)uVar23 & 0x3f) & 0x80e410468fdU) != 0 ||
          uVar23 - 0x1602 < 2) {
        if (local_4f0 <= iVar41 + 1) goto LAB_00ada5ec;
        piVar11 = local_4b0;
        uVar24 = uVar43;
        do {
          if (*piVar11 == piStack_4e8[iVar41 + 1]) {
            if (iVar19 == 0x48) {
              if (local_4f0 <= iVar41 + 2) goto LAB_00ada5ec;
              piVar11 = (int *)(*(long *)(piVar11 + 0x30) +
                               (ulong)(uint)piStack_4e8[iVar41 + 2] * 0x60);
            }
            else {
              piVar11 = piVar11 + 0x14;
            }
            switch((ulong)uVar23) {
            case 0:
              *(undefined *)piVar11 = 1;
            case 1:
            case 8:
            case 9:
            case 10:
            case 0xc:
            case 0xf:
            case 0x10:
            case 0x11:
            case 0x13:
            case 0x14:
            case 0x15:
            case 0x16:
            case 0x17:
            case 0x19:
            case 0x1a:
            case 0x1b:
            case 0x1c:
            case 0x1d:
            case 0x1f:
            case 0x20:
            case 0x24:
            case 0x25:
            case 0x26:
            case 0x27:
            case 0x28:
            case 0x29:
            case 0x2a:
              goto switchD_00adadf8_caseD_1;
            case 2:
              *(undefined *)((long)piVar11 + 1) = 1;
              goto switchD_00adadf8_caseD_1;
            case 3:
              *(undefined *)((long)piVar11 + 2) = 1;
              goto switchD_00adadf8_caseD_1;
            case 4:
              *(undefined *)((long)piVar11 + 3) = 1;
              goto switchD_00adadf8_caseD_1;
            case 5:
              *(undefined *)(piVar11 + 1) = 1;
              goto switchD_00adadf8_caseD_1;
            case 6:
              if (local_4f0 <= iVar9 + 3) goto LAB_00ada5ec;
              piVar11[0x14] = piStack_4e8[iVar9 + 3];
              goto switchD_00adadf8_caseD_1;
            case 7:
              if (local_4f0 <= iVar9 + 3) goto LAB_00ada5ec;
              piVar11[0x15] = piStack_4e8[iVar9 + 3];
              goto switchD_00adadf8_caseD_1;
            case 0xb:
              *(undefined *)((long)piVar11 + 5) = 1;
              if (local_4f0 <= iVar9 + 3) goto LAB_00ada5ec;
              piVar11[0x16] = piStack_4e8[iVar9 + 3];
              goto switchD_00adadf8_caseD_1;
            case 0xd:
              *(undefined *)((long)piVar11 + 6) = 1;
              goto switchD_00adadf8_caseD_1;
            case 0xe:
              *(undefined *)((long)piVar11 + 7) = 1;
              goto switchD_00adadf8_caseD_1;
            case 0x12:
              *(undefined *)((long)piVar11 + 9) = 1;
              goto switchD_00adadf8_caseD_1;
            case 0x18:
              *(undefined *)(piVar11 + 2) = 1;
              goto switchD_00adadf8_caseD_1;
            case 0x1e:
              uVar23 = iVar9 + 3;
              if (local_4f0 <= uVar23) goto LAB_00ada5ec;
              iVar9 = piStack_4e8[uVar23];
              piVar11[9] = uVar23;
              piVar11[10] = iVar9;
              goto switchD_00adadf8_caseD_1;
            case 0x21:
              uVar23 = iVar9 + 3;
              if (local_4f0 <= uVar23) goto LAB_00ada5ec;
              iVar9 = piStack_4e8[uVar23];
              piVar11[5] = uVar23;
              piVar11[6] = iVar9;
              goto switchD_00adadf8_caseD_1;
            case 0x22:
              uVar23 = iVar9 + 3;
              if (local_4f0 <= uVar23) goto LAB_00ada5ec;
              iVar9 = piStack_4e8[uVar23];
              piVar11[3] = uVar23;
              piVar11[4] = iVar9;
              goto switchD_00adadf8_caseD_1;
            case 0x23:
              uVar23 = iVar9 + 3;
              if (local_4f0 <= uVar23) goto LAB_00ada5ec;
              iVar9 = piStack_4e8[uVar23];
              piVar11[0xb] = uVar23;
              piVar11[0xc] = iVar9;
              goto switchD_00adadf8_caseD_1;
            case 0x2b:
              uVar23 = iVar9 + 3;
              if (local_4f0 <= uVar23) goto LAB_00ada5ec;
              iVar9 = piStack_4e8[uVar23];
              piVar11[7] = uVar23;
              piVar11[8] = iVar9;
              goto switchD_00adadf8_caseD_1;
            }
            if (uVar23 == 0x1602) {
              uVar23 = iVar9 + 3;
              if (local_4f0 <= uVar23) goto LAB_00ada5ec;
              iVar9 = piStack_4e8[uVar23];
              piVar11[0xd] = uVar23;
              piVar11[0xe] = iVar9;
            }
            else if (uVar23 == 0x1603) {
              piVar11[0x10] = iVar9 + 3U;
              *(int **)(piVar11 + 0x12) = piStack_4e8 + (iVar9 + 3U);
            }
            goto switchD_00adadf8_caseD_1;
          }
          piVar11 = piVar11 + 0x32;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
        iVar9 = 0xc;
        if ((iVar19 != 0x47) || (uVar23 != 0)) goto switchD_00adbf98_caseD_d;
      }
    }
switchD_00adadf8_caseD_1:
    uVar47 = (ulong)((int)uVar47 + 1);
  } while (uVar47 < uVar43);
  param_4[0x14] = 0;
  param_4[8] = uVar8;
  param_4[9] = local_4d0._4_4_;
  memset(param_4 + 0x16,0,0x400);
  uVar47 = local_488;
  lVar26 = 0x58;
  do {
    *(undefined4 *)((long)param_4 + lVar26) = 0xffffffff;
    lVar26 = lVar26 + 0x10;
  } while (lVar26 != 0x458);
  uVar23 = (uint)local_488;
  uVar24 = local_488 & 0xffffffff;
  uVar49 = extraout_x14;
  piVar11 = extraout_x16;
  if ((uint)local_488 != 0) {
    lVar26 = *(long *)(param_4 + 0x126);
    *(ulong *)(lVar26 + 0x20) = uVar24;
    puVar17 = (undefined8 *)calloc(uVar24,0x168);
    *(undefined8 **)(lVar26 + 0x28) = puVar17;
    if (puVar17 != (undefined8 *)0x0) {
      if (uVar23 < 2) {
        uVar47 = 0;
LAB_00adafe4:
        puVar17 = puVar17 + uVar47 * 0x2d;
        lVar26 = uVar24 - uVar47;
        do {
          *puVar17 = 0xffffffffffffffff;
          lVar26 = lVar26 + -1;
          *(undefined4 *)(puVar17 + 3) = 0xffffffff;
          puVar17 = puVar17 + 0x2d;
        } while (lVar26 != 0);
      }
      else {
        uVar47 = uVar47 & 0xfffffffe;
        uVar25 = uVar47;
        puVar34 = puVar17;
        do {
          *puVar34 = 0xffffffffffffffff;
          uVar25 = uVar25 - 2;
          puVar34[0x2d] = 0xffffffffffffffff;
          *(undefined4 *)(puVar34 + 3) = 0xffffffff;
          *(undefined4 *)(puVar34 + 0x30) = 0xffffffff;
          puVar34 = puVar34 + 0x5a;
        } while (uVar25 != 0);
        if (uVar47 != uVar24) goto LAB_00adafe4;
      }
      lVar26 = 0;
      lVar44 = 0;
      uVar47 = 0;
      uVar49 = extraout_x14_00;
      piVar11 = extraout_x16_00;
      do {
        if (*(char *)((long)local_4b0 + lVar26 + 0x1c) != '\0') {
          iVar9 = FUN_00ade540(&local_4f0,(long)local_4b0 + lVar26,0,
                               *(long *)(*(long *)(param_4 + 0x126) + 0x28) + lVar44 * 0x168);
          if (iVar9 != 0) goto switchD_00adbf98_caseD_d;
          lVar44 = lVar44 + 1;
          uVar49 = extraout_x14_01;
          piVar11 = extraout_x16_01;
          uVar43 = uStack_4b8;
        }
        uVar47 = uVar47 + 1;
        lVar26 = lVar26 + 200;
      } while (uVar47 < uVar43);
      goto LAB_00adb06c;
    }
LAB_00ad9edc:
    iVar9 = 3;
    goto switchD_00adbf98_caseD_d;
  }
LAB_00adb06c:
  piVar46 = local_4b0;
  param_4[0x10] = 0;
  if (uVar43 != 0) {
    uVar23 = 0;
    piVar18 = local_4b0 + 0x1a;
    uVar47 = uVar43;
    do {
      if ((((piVar18[-0x19] == 0x3b) && ((uint)piVar18[-0x16] < 0xd)) &&
          ((1 << (ulong)(piVar18[-0x16] & 0x1f) & 0x1005U) != 0)) &&
         ((piVar18[-2] != -1 && (*piVar18 != -1)))) {
        uVar23 = uVar23 + 1;
        param_4[0x10] = uVar23;
      }
      piVar18 = piVar18 + 0x32;
      uVar47 = uVar47 - 1;
    } while (uVar47 != 0);
    if (uVar23 != 0) {
      uVar47 = (ulong)uVar23;
      pvVar12 = calloc(uVar47,0x248);
      *(void **)(param_4 + 0x12) = pvVar12;
      if (pvVar12 == (void *)0x0) goto LAB_00ad9edc;
      do {
        *(undefined4 *)((long)pvVar12 + 0x22c) = 0xffffffff;
        uVar47 = uVar47 - 1;
        *(undefined8 *)((long)pvVar12 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)((long)pvVar12 + 0x18) = 0xffffffffffffffff;
        pvVar12 = (void *)((long)pvVar12 + 0x248);
      } while (uVar47 != 0);
      lVar26 = 0;
      uVar47 = 0;
      uVar49 = 0;
      do {
        piVar11 = (int *)(ulong)(uint)piVar46[uVar47 * 0x32 + 1];
        if ((piVar46[uVar47 * 0x32 + 1] == 0x3b) &&
           (piVar11 = (int *)0x0,
           (uint)piVar46[uVar47 * 0x32 + 4] < 0xd &&
           (1 << (ulong)(piVar46[uVar47 * 0x32 + 4] & 0x1f) & 0x1005U) != 0)) {
          piVar11 = piVar46 + uVar47 * 0x32;
          iVar19 = piVar11[0x18];
          if (iVar19 != -1) {
            piVar11 = piVar46 + uVar47 * 0x32;
            iVar41 = piVar11[0x1a];
            if (iVar41 != -1) {
              lVar44 = *(long *)(*(long *)(param_4 + 0x126) + 0x20);
              if (lVar44 == 0) goto LAB_00adbdd0;
              piVar18 = *(int **)(*(long *)(param_4 + 0x126) + 0x28);
              lVar42 = lVar44;
              piVar11 = piVar18;
              while (*piVar11 != piVar46[uVar47 * 0x32 + 3]) {
                piVar11 = piVar11 + 0x5a;
                lVar42 = lVar42 + -1;
                iVar9 = 0xc;
                if (lVar42 == 0) goto switchD_00adbf98_caseD_d;
              }
              if (piVar11[1] == 0x20) {
                iVar45 = piVar11[6];
                piVar11 = piVar46;
                while (*piVar11 != piVar46[uVar47 * 0x32 + 3]) {
                  piVar11 = piVar11 + 0x32;
                  uVar43 = uVar43 - 1;
                  iVar9 = 0xc;
                  if (uVar43 == 0) goto switchD_00adbf98_caseD_d;
                }
                while (*piVar18 != piVar11[3]) {
                  lVar44 = lVar44 + -1;
                  piVar18 = piVar18 + 0x5a;
                  iVar9 = 0xc;
                  if (lVar44 == 0) goto switchD_00adbf98_caseD_d;
                }
              }
              else {
                iVar45 = 0x7fffffff;
                piVar18 = piVar11;
              }
              lVar44 = *(long *)(param_4 + 0x12);
              piVar29 = piVar46 + uVar47 * 0x32;
              piVar11 = (int *)(lVar44 + lVar26 * 0x248);
              *piVar11 = *piVar29;
              uVar22 = *(undefined8 *)(piVar29 + 0x12);
              piVar11[4] = iVar41;
              *(undefined8 *)(piVar11 + 2) = uVar22;
              iVar9 = piVar29[0x1c];
              piVar11[0x89] = 1;
              piVar11[5] = iVar9;
              piVar11[6] = iVar19;
              iVar9 = piVar29[0x22];
              *(int **)(piVar11 + 0x8e) = piVar18;
              piVar11[0x8b] = iVar9;
              if (iVar45 == 0xc) {
                *(undefined4 *)(lVar44 + lVar26 * 0x248 + 0x1c) = 7;
              }
              if ((piVar18[7] & 0xff0000U) == 0x10000) {
                lVar42 = lVar44 + lVar26 * 0x248;
                uVar50 = *(undefined8 *)(piVar18 + 0x11);
                uVar22 = *(undefined8 *)(piVar18 + 0xf);
                *(undefined8 *)(lVar42 + 0x34) = *(undefined8 *)(piVar18 + 0x13);
                *(undefined8 *)(lVar42 + 0x2c) = uVar50;
                *(undefined8 *)(lVar42 + 0x24) = uVar22;
                if (((piVar18[7] ^ 0xffffffffU) & 0x50000) != 0) goto LAB_00adb2a8;
LAB_00adb2bc:
                lVar42 = lVar44 + lVar26 * 0x248;
                uVar50 = *(undefined8 *)(piVar18 + 0x11);
                uVar22 = *(undefined8 *)(piVar18 + 0xf);
                *(undefined8 *)(lVar42 + 0x34) = *(undefined8 *)(piVar18 + 0x13);
                *(undefined8 *)(lVar42 + 0x2c) = uVar50;
                *(undefined8 *)(lVar42 + 0x24) = uVar22;
                iVar9 = piVar18[0x15];
              }
              else {
                if (((piVar18[7] ^ 0xffffffffU) & 0x50000) == 0) goto LAB_00adb2bc;
LAB_00adb2a8:
                iVar9 = piVar18[0x15];
              }
              if (iVar9 != 0) {
                lVar42 = lVar44 + lVar26 * 0x248;
                *(int *)(lVar42 + 0x1a0) = iVar9;
                uVar43 = 0;
                do {
                  uVar24 = uVar43 + 1;
                  iVar9 = piVar18[uVar43 + 0x16];
                  *(int *)(lVar42 + 0x1a4 + uVar43 * 4) = iVar9;
                  piVar11[0x89] = piVar11[0x89] * iVar9;
                  uVar43 = uVar24;
                } while (uVar24 < (uint)piVar18[0x15]);
              }
              lVar44 = lVar44 + lVar26 * 0x248;
              lVar26 = lVar26 + 1;
              *(int *)(lVar44 + 0x240) = piVar46[uVar47 * 0x32 + 0x19];
              piVar11 = (int *)(ulong)(uint)piVar46[uVar47 * 0x32 + 0x17];
              *(int *)(lVar44 + 0x244) = piVar46[uVar47 * 0x32 + 0x17];
              uVar43 = uStack_4b8;
            }
          }
        }
        uVar47 = uVar47 + 1;
        piVar46 = local_4b0;
      } while (uVar47 < uVar43);
      if (param_4[0x10] != 0) {
        qsort(*(void **)(param_4 + 0x12),(ulong)param_4[0x10],0x248,FUN_00aded34);
        uVar23 = param_4[0x10];
        uVar47 = (ulong)uVar23;
        uVar49 = extraout_x14_02;
        piVar11 = extraout_x16_02;
        if (uVar23 != 0) {
          lVar26 = *(long *)(param_4 + 0x12);
          uVar49 = 0;
          piVar11 = (int *)0x0;
          uVar43 = uVar47;
          do {
            switch(*(int *)(lVar26 + 0x1c)) {
            case 0:
switchD_00adb624_caseD_0:
              *(undefined4 *)(lVar26 + 0x20) = 1;
              break;
            case 1:
switchD_00adb624_caseD_1:
              *(undefined4 *)(lVar26 + 0x20) = 5;
              break;
            case 2:
            case 4:
switchD_00adb624_caseD_2:
              *(undefined4 *)(lVar26 + 0x20) = 4;
              break;
            case 3:
            case 5:
            case 7:
            case 9:
switchD_00adb624_caseD_3:
              *(undefined4 *)(lVar26 + 0x20) = 8;
              break;
            case 6:
            case 8:
switchD_00adb624_caseD_6:
              *(undefined4 *)(lVar26 + 0x20) = 2;
              break;
            default:
              if (*(int *)(lVar26 + 0x1c) == 0x3b9d13f0) goto switchD_00adb624_caseD_2;
              break;
            case -1:
              uVar20 = (uint)*(byte *)(*(long *)(lVar26 + 0x238) + 0x1e);
              if (uVar20 * 0x10000 < 0x50000) {
                if (uVar20 == 1) {
                  if (*(int *)(lVar26 + 0x24) == 6) {
                    *(undefined4 *)(lVar26 + 0x1c) = 10;
                  }
                  else {
                    if (*(int *)(lVar26 + 0x24) == 5) goto LAB_00adb6bc;
                    if (*(int *)(lVar26 + 0x34) == 2) {
                      *(undefined4 *)(lVar26 + 0x1c) = 3;
                      goto switchD_00adb624_caseD_3;
                    }
                    if (*(int *)(lVar26 + 0x34) == 1) {
                      *(undefined4 *)(lVar26 + 0x1c) = 2;
                      *(undefined4 *)(lVar26 + 0x20) = 4;
                    }
                  }
                }
                else if (uVar20 == 2) {
                  *(undefined4 *)(lVar26 + 0x1c) = 0;
                  goto switchD_00adb624_caseD_0;
                }
              }
              else if (uVar20 == 5) {
                if (*(int *)(lVar26 + 0x24) != 5) {
                  *(undefined4 *)(lVar26 + 0x1c) = 1;
                  goto switchD_00adb624_caseD_1;
                }
LAB_00adb6bc:
                if (*(int *)(lVar26 + 0x34) == 1) {
                  *(undefined4 *)(lVar26 + 0x1c) = 4;
                  *(undefined4 *)(lVar26 + 0x20) = 4;
                }
                else if (*(int *)(lVar26 + 0x34) == 2) {
                  *(undefined4 *)(lVar26 + 0x1c) = 5;
                  goto switchD_00adb624_caseD_3;
                }
              }
              else if (uVar20 == 8) {
                uVar20 = *(uint *)(*(long *)(lVar26 + 0x238) + 0x20);
                if ((uVar20 & 1) != 0) {
                  *(undefined4 *)(lVar26 + 0x1c) = 6;
                  goto switchD_00adb624_caseD_6;
                }
                if ((uVar20 >> 1 & 1) != 0) {
                  *(undefined4 *)(lVar26 + 0x1c) = 7;
                  goto switchD_00adb624_caseD_3;
                }
              }
              else if (uVar20 == 0x10) {
                *(undefined4 *)(lVar26 + 0x1c) = 0x3b9d13f0;
                *(undefined4 *)(lVar26 + 0x20) = 4;
              }
            }
            lVar26 = lVar26 + 0x248;
            uVar43 = uVar43 - 1;
          } while (uVar43 != 0);
          ppiVar33 = (int **)(param_4 + 0x12);
          if (uVar23 != 0) {
            uVar43 = 0;
            uVar24 = uVar47;
            do {
              piVar46 = *ppiVar33;
              if (piVar46[uVar43 * 0x92 + 7] == 7) {
                if (piVar46[uVar43 * 0x92 + 0x8b] == -1) {
                  pcVar15 = *(char **)(piVar46 + uVar43 * 0x92 + 2);
                  if (pcVar15 == (char *)0x0) {
                    sVar14 = 0;
                  }
                  else {
                    sVar14 = strlen(pcVar15);
                  }
                  memset(acStack_470,0,0x400);
                  __memcpy_chk(acStack_470,*(char **)(piVar46 + uVar43 * 0x92 + 2),sVar14,0x400);
                  __strcat_chk(acStack_470,"@count",0x400);
                  uVar23 = param_4[0x10];
                  uVar24 = (ulong)uVar23;
                  uVar49 = extraout_x14_06;
                  piVar11 = extraout_x16_06;
                  if (uVar23 != 0) {
                    piVar18 = *ppiVar33;
                    uVar25 = uVar24;
LAB_00adbd98:
                    if (((piVar18[7] != 7) || (*(char **)(piVar18 + 2) == (char *)0x0)) ||
                       (iVar9 = strcmp(acStack_470,*(char **)(piVar18 + 2)),
                       uVar49 = extraout_x14_07, piVar11 = extraout_x16_07, iVar9 != 0))
                    goto LAB_00adbd8c;
                    uVar47 = (ulong)uVar23;
LAB_00adbdbc:
                    *(int **)(piVar46 + uVar43 * 0x92 + 0x8c) = piVar18;
                    goto LAB_00adbcb4;
                  }
                  uVar47 = 0;
                }
                else {
                  uVar23 = (uint)uVar47;
                  if (uVar23 < 2) {
                    uVar23 = 1;
                  }
                  uVar25 = (ulong)uVar23;
                  piVar18 = piVar46;
                  do {
                    if ((piVar18[7] == 7) && (piVar46[uVar43 * 0x92 + 0x8b] == *piVar18))
                    goto LAB_00adbdbc;
                    uVar25 = uVar25 - 1;
                    piVar18 = piVar18 + 0x92;
                  } while (uVar25 != 0);
                }
              }
LAB_00adbcb4:
              uVar43 = uVar43 + 1;
            } while (uVar43 < uVar47);
            if ((int)uVar24 != 0) {
              uVar47 = 0;
              do {
                piVar46 = *ppiVar33;
                if ((piVar46[uVar47 * 0x92 + 7] & 0xfffffffeU) == 6) {
                  piVar11 = piVar46 + uVar47 * 0x92 + 0x10;
                  piVar46[uVar47 * 0x92 + 0x61] = piVar46[uVar47 * 0x92 + 0x61] | 1;
                  iVar9 = FUN_00aded5c(&local_4f0,param_4,
                                       *(undefined8 *)(piVar46 + uVar47 * 0x92 + 0x8e),piVar11);
                  if (iVar9 != 0) goto switchD_00adbf98_caseD_d;
                  uVar43 = uStack_498 & 0xffffffff;
                  if ((int)uStack_498 != 0) {
                    lVar26 = 0;
                    uVar24 = 0;
                    do {
                      if (piVar46[uVar47 * 0x92] == *(int *)((long)local_490 + lVar26 + 8)) {
                        iVar9 = FUN_00adf054(&local_4f0,param_4,(long)local_490 + lVar26,0,
                                             0xffffffff,piVar11);
                        if (iVar9 != 0) goto switchD_00adbf98_caseD_d;
                        uVar43 = uStack_498 & 0xffffffff;
                      }
                      uVar24 = uVar24 + 1;
                      lVar26 = lVar26 + 0x18;
                    } while (uVar24 < uVar43);
                  }
                  uVar23 = piVar46[uVar47 * 0x92 + 7];
                  *(undefined8 *)(piVar46 + uVar47 * 0x92 + 0x12) =
                       *(undefined8 *)(piVar46 + uVar47 * 0x92 + 2);
                  FUN_00adf1a0(1,0,uVar23 == 7,piVar11);
                  uVar49 = extraout_x14_08;
                  piVar11 = extraout_x16_08;
                  if (uVar23 == 7) {
                    *(undefined8 *)(piVar46 + uVar47 * 0x92 + 0x16) = 0;
                  }
                }
                uVar47 = uVar47 + 1;
              } while (uVar47 < param_4[0x10]);
            }
          }
        }
      }
    }
  }
  uVar47 = uStack_4b8;
  local_4f8 = (long *)(param_4 + 0x12);
  if (uStack_4b8 != 0) {
    piVar46 = local_4b0 + 4;
    uVar43 = uStack_4b8;
    do {
      if ((piVar46[-3] == 0x3b) && (*piVar46 == 9)) {
        param_4[0x122] = param_4[0x122] + 1;
      }
      piVar46 = piVar46 + 0x32;
      uVar43 = uVar43 - 1;
    } while (uVar43 != 0);
  }
  if (param_4[0x122] != 0) {
    pvVar12 = calloc((ulong)param_4[0x122],0x160);
    *(void **)(param_4 + 0x124) = pvVar12;
    if (pvVar12 == (void *)0x0) goto LAB_00ad9edc;
    uVar49 = extraout_x14_03;
    piVar11 = extraout_x16_03;
    if (uVar47 != 0) {
      uVar23 = 0;
      uVar43 = 0;
      do {
        if ((local_4b0[uVar43 * 0x32 + 1] == 0x3b) && (local_4b0[uVar43 * 0x32 + 4] == 9)) {
          lVar26 = *(long *)(*(long *)(param_4 + 0x126) + 0x20);
          piVar46 = *(int **)(*(long *)(param_4 + 0x126) + 0x28);
          piVar11 = piVar46;
          lVar44 = lVar26;
          do {
            if (*piVar11 == local_4b0[uVar43 * 0x32 + 3]) goto LAB_00adb4a0;
            lVar44 = lVar44 + -1;
            piVar11 = piVar11 + 0x5a;
          } while (lVar44 != 0);
          piVar11 = (int *)0x0;
LAB_00adb4a0:
          if (local_4b0 == (int *)0x0) goto LAB_00adbdd0;
          iVar19 = *piVar11;
          piVar29 = local_4b0;
          piVar18 = local_4b0;
          uVar24 = uVar47;
          if (piVar11[1] == 0x20) {
            while (*piVar18 != iVar19) {
              piVar18 = piVar18 + 0x32;
              uVar24 = uVar24 - 1;
              iVar9 = 0xc;
              if (uVar24 == 0) goto switchD_00adbf98_caseD_d;
            }
            iVar19 = piVar18[3];
            if (lVar26 == 0) goto LAB_00adbdd0;
            while (piVar11 = piVar46, *piVar46 != iVar19) {
              lVar26 = lVar26 + -1;
              piVar46 = piVar46 + 0x5a;
              iVar9 = 0xc;
              if (lVar26 == 0) goto switchD_00adbf98_caseD_d;
            }
          }
          while (*piVar29 != iVar19) {
            uVar47 = uVar47 - 1;
            iVar9 = 0xc;
            piVar29 = piVar29 + 0x32;
            if (uVar47 == 0) goto switchD_00adbf98_caseD_d;
          }
          piVar46 = (int *)(*(long *)(param_4 + 0x124) + (ulong)uVar23 * 0x160);
          *piVar46 = local_4b0[uVar43 * 0x32];
          iVar9 = FUN_00aded5c(&local_4f0,param_4,piVar11,piVar46);
          if (iVar9 != 0) goto switchD_00adbf98_caseD_d;
          FUN_00adf1a0(1,0,0,piVar46);
          uVar23 = uVar23 + 1;
          uVar49 = extraout_x14_04;
          piVar11 = extraout_x16_04;
          uVar47 = uStack_4b8;
        }
        uVar43 = uVar43 + 1;
      } while (uVar43 < uVar47);
    }
  }
  if ((uint)local_4a8 != 0) {
    param_4[5] = (uint)local_4a8;
    pvVar12 = calloc(local_4a8 & 0xffffffff,0x88);
    *(void **)(param_4 + 6) = pvVar12;
    if (pvVar12 == (void *)0x0) goto LAB_00ad9edc;
    uVar47 = (ulong)param_4[0x10];
    if (param_4[0x10] == 0) {
      pvVar12 = (void *)0x0;
    }
    else {
      pvVar12 = calloc(uVar47,4);
      if (pvVar12 == (void *)0x0) goto LAB_00ad9edc;
      lVar26 = 0;
      puVar30 = (undefined4 *)*local_4f8;
      do {
        uVar37 = *puVar30;
        puVar30 = puVar30 + 0x92;
        *(undefined4 *)((long)pvVar12 + lVar26) = uVar37;
        lVar26 = lVar26 + 4;
      } while (uVar47 * 4 - lVar26 != 0);
      qsort(pvVar12,uVar47,4,FUN_00ade530);
    }
    uVar43 = (ulong)param_4[0x122];
    if (param_4[0x122] == 0) {
      pvVar16 = (void *)0x0;
    }
    else {
      pvVar16 = calloc(uVar43,4);
      if (pvVar16 == (void *)0x0) goto LAB_00ad9edc;
      lVar26 = 0;
      puVar30 = *(undefined4 **)(param_4 + 0x124);
      do {
        uVar37 = *puVar30;
        puVar30 = puVar30 + 0x58;
        *(undefined4 *)((long)pvVar16 + lVar26) = uVar37;
        lVar26 = lVar26 + 4;
      } while (uVar43 * 4 - lVar26 != 0);
      qsort(pvVar16,uVar43,4,FUN_00ade530);
    }
    if (((uint)local_4a8 != 0) && (uStack_4b8 != 0)) {
      uVar24 = 0;
      local_508 = 0;
      uVar25 = uStack_4b8;
      uVar23 = (uint)local_4a8;
      do {
        piVar11 = piStack_4e8;
        uVar38 = local_4f0;
        if (local_4b0[uVar24 * 0x32 + 1] != 0xf) goto LAB_00adbadc;
        if (piStack_4e8 == (int *)0x0) goto LAB_00ada5ec;
        uVar23 = local_4b0[uVar24 * 0x32 + 5];
        uVar25 = (ulong)(uVar23 + 1);
        if (local_4f0 <= uVar25) goto LAB_00ada5ec;
        lVar26 = *(long *)(param_4 + 6);
        uVar39 = (ulong)(uVar23 + 2);
        uVar23 = piStack_4e8[uVar25];
        *(uint *)(lVar26 + local_508 * 0x88 + 0xc) = uVar23;
        if (local_4f0 <= uVar39) goto LAB_00ada5ec;
        *(int *)(lVar26 + local_508 * 0x88 + 8) = piStack_4e8[uVar39];
        switch(uVar23) {
        case 0x1493:
          uVar37 = 0x40;
          break;
        case 0x1494:
          uVar37 = 0x80;
          break;
        case 0x1495:
        case 0x1496:
        case 0x1497:
        case 0x1498:
        case 0x1499:
        case 0x149a:
        case 0x149b:
        case 0x149c:
        case 0x149d:
        case 0x149e:
        case 0x149f:
        case 0x14a0:
        case 0x14a1:
        case 0x14a2:
        case 0x14a3:
        case 0x14a4:
        case 0x14a5:
        case 0x14a6:
        case 0x14a7:
        case 0x14a8:
        case 0x14a9:
        case 0x14aa:
        case 0x14ab:
        case 0x14ac:
        case 0x14ad:
        case 0x14ae:
        case 0x14af:
        case 0x14b0:
        case 0x14b1:
        case 0x14b2:
        case 0x14b3:
        case 0x14b4:
        case 0x14b5:
        case 0x14b6:
        case 0x14b7:
        case 0x14b8:
        case 0x14b9:
        case 0x14ba:
        case 0x14bb:
        case 0x14bc:
        case 0x14bd:
        case 0x14be:
        case 0x14bf:
        case 0x14c0:
          goto switchD_00adb838_caseD_1495;
        case 0x14c1:
          uVar37 = 0x100;
          break;
        case 0x14c2:
          uVar37 = 0x1000;
          break;
        case 0x14c3:
          uVar37 = 0x200;
          break;
        case 0x14c4:
          uVar37 = 0x400;
          break;
        case 0x14c5:
          uVar37 = 0x800;
          break;
        case 0x14c6:
          uVar37 = 0x2000;
          break;
        default:
          if (uVar23 < 6) {
            uVar37 = 1;
            switch(uVar23) {
            case 1:
              uVar37 = 2;
              break;
            case 2:
              uVar37 = 4;
              break;
            case 3:
              uVar37 = 8;
              break;
            case 4:
              uVar37 = 0x10;
              break;
            case 5:
              uVar37 = 0x20;
            }
            break;
          }
          goto switchD_00adb838_caseD_1495;
        }
        *(undefined4 *)(lVar26 + local_508 * 0x88 + 0x10) = uVar37;
switchD_00adb838_caseD_1495:
        uVar23 = local_4b0[uVar24 * 0x32 + 5];
        iVar9 = local_4b0[uVar24 * 0x32 + 6];
        if (local_4f0 <= iVar9 + uVar23 + 3) goto LAB_00ada5ec;
        uVar25 = 0;
        ppiVar33 = (int **)(lVar26 + local_508 * 0x88);
        local_508 = local_508 + 1;
        uVar20 = 4;
        do {
          uVar40 = uVar20;
          if ((uint)(iVar9 << 2) == uVar25) goto LAB_00ada5ec;
          lVar26 = uVar25 + (ulong)(uVar23 + 3) * 4;
          uVar25 = uVar25 + 1;
          uVar20 = uVar40 + 1;
        } while (*(char *)((long)piStack_4e8 + lVar26) != '\0');
        if ((int)uVar25 == 0) goto LAB_00ada5ec;
        uVar20 = (int)uVar25 + 3U >> 2;
        uVar21 = (iVar9 - uVar20) - 3;
        uVar25 = (ulong)uVar21;
        *ppiVar33 = piStack_4e8 + (ulong)uVar23 + 3;
        if (uVar21 == 0) {
          local_520 = (void *)0x0;
        }
        else {
          local_520 = calloc(uVar25,4);
          if (local_520 == (void *)0x0) goto LAB_00ad9edc;
          lVar26 = 0;
          uVar27 = (ulong)(uVar23 + uVar20 + 3);
          uVar35 = uVar25 - 1;
          uVar39 = 0;
          if (uVar27 <= uVar38) {
            uVar39 = uVar38 - uVar27;
          }
          if (uVar35 <= uVar39) {
            uVar39 = uVar35;
          }
          uVar39 = uVar39 + 1;
          uVar40 = uVar40 >> 2;
          if (8 < uVar39) {
            lVar26 = 0;
            uVar20 = uVar23 + uVar20 + 3;
            uVar27 = 0;
            if (uVar20 <= uVar38) {
              uVar27 = uVar38 - uVar20;
            }
            if (uVar35 <= uVar27) {
              uVar27 = uVar35;
            }
            if ((!CARRY4(uVar20,(uint)uVar27)) && (uVar27 >> 0x20 == 0)) {
              uVar27 = 8;
              if ((uVar39 & 7) != 0) {
                uVar27 = uVar39 & 7;
              }
              uVar36 = (ulong)(uVar23 + uVar40 + 3);
              uVar35 = 0;
              if (uVar36 <= uVar38) {
                uVar35 = uVar38 - uVar36;
              }
              uVar31 = (ulong)((iVar9 - uVar40) - 3) - 1;
              if (uVar31 <= uVar35) {
                uVar35 = uVar31;
              }
              lVar26 = uVar39 - uVar27;
              lVar44 = ~uVar35 + uVar27;
              puVar17 = (undefined8 *)((long)local_520 + 0x10);
              do {
                puVar34 = (undefined8 *)(piVar11 + uVar36);
                lVar44 = lVar44 + 8;
                uVar36 = (ulong)((int)uVar36 + 8);
                uVar49 = *puVar34;
                uVar50 = puVar34[3];
                uVar22 = puVar34[2];
                puVar17[-1] = puVar34[1];
                puVar17[-2] = uVar49;
                puVar17[1] = uVar50;
                *puVar17 = uVar22;
                puVar17 = puVar17 + 4;
              } while (lVar44 != 0);
            }
          }
          lVar44 = lVar26 - (ulong)((iVar9 - uVar40) - 3);
          uVar23 = uVar23 + (int)lVar26 + uVar40 + 3;
          piVar46 = (int *)((long)local_520 + lVar26 * 4);
          do {
            uVar39 = (ulong)uVar23;
            if (uVar38 <= uVar39) goto LAB_00ada5ec;
            bVar7 = lVar44 != -1;
            lVar44 = lVar44 + 1;
            uVar23 = uVar23 + 1;
            *piVar46 = piVar11[uVar39];
            piVar46 = piVar46 + 1;
          } while (bVar7);
        }
        iVar9 = FUN_00adf518(&local_4f0,param_4,ppiVar33,uVar25,local_520);
        if (iVar9 != 0) goto switchD_00adbf98_caseD_d;
        free(local_520);
        iVar9 = FUN_00adf8b0(&local_4f0,param_4,ppiVar33,uVar47,pvVar12,uVar43,pvVar16);
        if (iVar9 != 0) goto switchD_00adbf98_caseD_d;
        uVar25 = uStack_4b8;
        uVar23 = (uint)local_4a8;
LAB_00adbadc:
      } while ((local_508 < uVar23) && (uVar24 = uVar24 + 1, uVar24 < uVar25));
    }
    free(pvVar12);
    free(pvVar16);
    uVar49 = extraout_x14_05;
    piVar11 = extraout_x16_05;
  }
  if (param_4[5] != 0) {
    puVar17 = *(undefined8 **)(param_4 + 6);
    *(undefined8 *)(param_4 + 2) = *puVar17;
    param_4[4] = *(uint *)(puVar17 + 1);
    *(undefined8 *)(param_4 + 0xe) = *(undefined8 *)((long)puVar17 + 0xc);
    param_4[0x116] = *(uint *)((long)puVar17 + 0x14);
    *(undefined8 *)(param_4 + 0x118) = puVar17[3];
    param_4[0x11a] = *(uint *)(puVar17 + 4);
    *(undefined8 *)(param_4 + 0x11c) = puVar17[5];
    param_4[0x11e] = *(uint *)(puVar17 + 6);
    *(undefined8 *)(param_4 + 0x120) = puVar17[7];
  }
  uVar23 = param_4[0x10];
  uVar47 = (ulong)uVar23;
  if (uVar23 != 0) {
    lVar26 = *local_4f8;
    if (uVar23 == 1) {
      uVar24 = 0;
    }
    else {
      uVar24 = uVar47 & 0xfffffffe;
      lVar44 = lVar26;
      uVar43 = uVar24;
      do {
        uVar23 = (uint)uVar49;
        if (*(int *)(lVar44 + 0x1c) == 7) {
          uVar23 = *(uint *)(lVar44 + 0x60);
        }
        if (*(int *)(lVar44 + 0x264) == 7) {
          piVar11 = (int *)(ulong)*(uint *)(lVar44 + 0x2a8);
        }
        if ((*(int *)(lVar44 + 0x1c) == 7) && ((uVar23 >> 7 & 1) != 0)) {
          *(undefined4 *)(lVar44 + 0x20) = 4;
        }
        uVar49 = 0;
        if (((uint)(*(int *)(lVar44 + 0x264) == 7) & ((uint)piVar11 & 0x80) >> 7) != 0) {
          *(undefined4 *)(lVar44 + 0x268) = 4;
        }
        uVar43 = uVar43 - 2;
        lVar44 = lVar44 + 0x490;
      } while (uVar43 != 0);
      if (uVar24 == uVar47) goto LAB_00adbbec;
    }
    lVar44 = uVar47 - uVar24;
    pcVar15 = (char *)(lVar26 + uVar24 * 0x248 + 0x60);
    do {
      if ((*(int *)(pcVar15 + -0x44) == 7) && (*pcVar15 < '\0')) {
        *(undefined4 *)(pcVar15 + -0x40) = 4;
      }
      pcVar15 = pcVar15 + 0x248;
      lVar44 = lVar44 + -1;
    } while (lVar44 != 0);
  }
LAB_00adbbec:
  iVar9 = FUN_00adde2c(param_4);
  if (iVar9 != 0) goto switchD_00adbf98_caseD_d;
  if (((piStack_4e8 != (int *)0x0) && (local_4b0 != (int *)0x0)) && (uStack_4b8 != 0)) {
    uVar47 = 0;
LAB_00adbf10:
    if (local_4b0[uVar47 * 0x32 + 1] != 0x10) goto switchD_00adbf98_caseD_1;
    piVar11 = local_4b0 + uVar47 * 0x32 + 5;
    iVar19 = *piVar11;
    if (local_4f0 <= iVar19 + 1) goto LAB_00ada5ec;
    uVar43 = (ulong)param_4[5];
    if (param_4[5] == 0) {
      iVar9 = 0x13;
      goto switchD_00adbf98_caseD_d;
    }
    piVar46 = (int *)(*(long *)(param_4 + 6) + 0x80);
    while (piVar46[-0x1e] != piStack_4e8[iVar19 + 1]) {
      piVar46 = piVar46 + 0x22;
      uVar43 = uVar43 - 1;
      iVar9 = 0x13;
      if (uVar43 == 0) goto switchD_00adbf98_caseD_d;
    }
    if (local_4f0 <= iVar19 + 2) goto LAB_00ada5ec;
    iVar41 = piStack_4e8[iVar19 + 2];
    iVar9 = 0x14;
    switch(iVar41) {
    case 0:
      uVar43 = (ulong)(iVar19 + 3);
      if (local_4f0 <= uVar43) goto LAB_00ada5ec;
      piVar46 = piVar46 + -1;
      break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
      goto switchD_00adbf98_caseD_1;
    case 0xd:
    case 0x20:
      goto switchD_00adbf98_caseD_d;
    case 0x11:
      if (local_4f0 <= iVar19 + 3) goto LAB_00ada5ec;
      piVar46[-4] = piStack_4e8[iVar19 + 3];
      if (local_4f0 <= *piVar11 + 4) goto LAB_00ada5ec;
      piVar46[-3] = piStack_4e8[*piVar11 + 4];
      uVar43 = (ulong)(*piVar11 + 5);
      if (local_4f0 <= uVar43) goto LAB_00ada5ec;
      piVar46 = piVar46 + -2;
      break;
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
      uVar43 = (ulong)(iVar19 + 3);
      if (local_4f0 <= uVar43) goto LAB_00ada5ec;
      break;
    default:
      if (iVar41 < 0x1496) {
        if ((iVar41 == 0x115e) || (iVar41 == 0x13a3)) goto switchD_00adbf98_caseD_1;
        goto switchD_00adbf98_caseD_d;
      }
      if ((iVar41 != 0x1496) && (iVar41 != 0x14b2)) goto switchD_00adbf98_caseD_d;
      goto switchD_00adbf98_caseD_1;
    }
    *piVar46 = piStack_4e8[uVar43];
switchD_00adbf98_caseD_1:
    iVar9 = 0;
    uVar47 = uVar47 + 1;
    if (uVar47 == uStack_4b8) goto LAB_00ad9c4c;
    goto LAB_00adbf10;
  }
  iVar9 = 0;
  goto LAB_00ad9c4c;
LAB_00adbd8c:
  piVar18 = piVar18 + 0x92;
  uVar25 = uVar25 - 1;
  uVar47 = uVar24;
  if (uVar25 == 0) goto LAB_00adbcb4;
  goto LAB_00adbd98;
LAB_00adbdd0:
  iVar9 = 0xc;
switchD_00adbf98_caseD_d:
  spvReflectDestroyShaderModule(param_4);
LAB_00ad9c4c:
  if (local_4b0 != (int *)0x0) {
    if (uStack_4b8 != 0) {
      lVar26 = 0;
      uVar47 = 1;
      while( true ) {
        piVar11 = local_4b0;
        pvVar12 = *(void **)((long)local_4b0 + lVar26 + 0xb8);
        if (pvVar12 != (void *)0x0) {
          free(pvVar12);
          *(undefined8 *)((long)piVar11 + lVar26 + 0xb8) = 0;
        }
        pvVar12 = *(void **)((long)piVar11 + lVar26 + 0xc0);
        if (pvVar12 != (void *)0x0) {
          free(pvVar12);
          *(undefined8 *)((long)piVar11 + lVar26 + 0xc0) = 0;
        }
        if (uStack_4b8 <= uVar47) break;
        uVar47 = uVar47 + 1;
        lVar26 = lVar26 + 200;
      }
    }
    if (local_4a8._4_4_ != 0) {
      uVar47 = 0;
      lVar26 = 0;
      do {
        free(*(void **)((long)local_4a0 + lVar26 + 8));
        *(undefined8 *)((long)local_4a0 + lVar26 + 8) = 0;
        free(*(void **)((long)local_4a0 + lVar26 + 0x10));
        *(undefined8 *)((long)local_4a0 + lVar26 + 0x10) = 0;
        free(*(void **)((long)local_4a0 + lVar26 + 0x20));
        uVar47 = uVar47 + 1;
        *(undefined8 *)((long)local_4a0 + lVar26 + 0x20) = 0;
        lVar26 = lVar26 + 0x28;
      } while (uVar47 < local_4a8 >> 0x20);
    }
    if ((int)uStack_498 != 0) {
      uVar47 = 0;
      lVar26 = 0x10;
      do {
        free(*(void **)((long)local_490 + lVar26));
        uVar47 = uVar47 + 1;
        *(undefined8 *)((long)local_490 + lVar26) = 0;
        lVar26 = lVar26 + 0x18;
      } while (uVar47 < (uStack_498 & 0xffffffff));
    }
    free(local_4b0);
    local_4b0 = (int *)0x0;
    free(local_4d8);
    local_4d8 = (void *)0x0;
    free(local_4c0);
    local_4c0 = (char *)0x0;
    free(local_4a0);
    local_4a0 = (void *)0x0;
    free(local_490);
    local_490 = (void *)0x0;
    uStack_4b8 = 0;
  }
LAB_00ad9d98:
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return iVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


