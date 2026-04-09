// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006d23a0
// Entry Point: 006d23a0
// Size: 3112 bytes
// Signature: undefined FUN_006d23a0(void)


void FUN_006d23a0(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  size_t sVar2;
  void *pvVar3;
  byte bVar4;
  byte bVar5;
  undefined uVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  ulong *puVar13;
  ulong uVar14;
  void *pvVar15;
  ulong uVar16;
  ulong *puVar17;
  void *pvVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong *puVar21;
  long lVar22;
  ulong *puVar23;
  long lVar24;
  ulong uVar25;
  undefined8 uVar26;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  undefined6 uStack_78;
  undefined2 local_72;
  undefined6 uStack_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
LAB_006d23d8:
  puVar20 = param_2 + -6;
  puVar13 = param_2 + -3;
  puVar21 = param_1;
LAB_006d2408:
  param_1 = puVar21;
  uVar14 = (long)param_2 - (long)param_1;
  switch(((long)uVar14 >> 4) * -0x5555555555555555) {
  case 0:
  case 1:
    break;
  case 2:
    bVar4 = *(byte *)param_1;
    bVar12 = *(byte *)(param_2 + -6);
    uVar14 = (ulong)(bVar12 >> 1);
    if ((bVar12 & 1) != 0) {
      uVar14 = param_2[-5];
    }
    uVar16 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar16 = param_1[1];
    }
    sVar2 = uVar14;
    if (uVar16 <= uVar14) {
      sVar2 = uVar16;
    }
    if (sVar2 == 0) {
LAB_006d2ef4:
      if (uVar14 <= uVar16) break;
      pvVar18 = (void *)param_1[2];
    }
    else {
      pvVar15 = (void *)param_2[-4];
      pvVar18 = (void *)param_1[2];
      if ((bVar12 & 1) == 0) {
        pvVar15 = (void *)((long)param_2 + -0x2f);
      }
      pvVar3 = pvVar18;
      if ((bVar4 & 1) == 0) {
        pvVar3 = (void *)((long)param_1 + 1);
      }
      iVar10 = memcmp(pvVar3,pvVar15,sVar2);
      if (iVar10 == 0) goto LAB_006d2ef4;
      if (-1 < iVar10) break;
    }
    uVar6 = *(undefined *)((long)param_1 + 1);
    uStack_70 = (undefined6)(param_1[1] >> 0x10);
    uStack_a8 = param_1[4];
    local_b0 = param_1[3];
    local_a0 = (void *)param_1[5];
    uStack_78 = (undefined6)*(undefined8 *)((long)param_1 + 2);
    local_72 = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 2) >> 0x30);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    uVar16 = param_2[-6];
    uVar14 = param_2[-4];
    param_1[1] = param_2[-5];
    *param_1 = uVar16;
    param_1[2] = uVar14;
    *(undefined2 *)(param_2 + -6) = 0;
    uVar16 = param_2[-2];
    uVar14 = param_2[-3];
    param_1[5] = param_2[-1];
    param_1[4] = uVar16;
    param_1[3] = uVar14;
    if ((*(byte *)(param_2 + -6) & 1) != 0) {
      operator_delete((void *)param_2[-4]);
    }
    *(byte *)(param_2 + -6) = bVar4;
    *(undefined *)((long)param_2 + -0x2f) = uVar6;
    param_2[-4] = (ulong)pvVar18;
    param_2[-5] = CONCAT62(uStack_70,local_72);
    *(ulong *)((long)param_2 + -0x2e) = CONCAT26(local_72,uStack_78);
    param_2[-1] = (ulong)local_a0;
    param_2[-2] = uStack_a8;
    *puVar13 = local_b0;
    break;
  case 3:
    FUN_006d2fc8(param_1,param_1 + 6,puVar20);
    break;
  case 4:
    FUN_006d34d0(param_1,param_1 + 6,param_1 + 0xc,puVar20);
    break;
  case 5:
    FUN_006d3858(param_1,param_1 + 6,param_1 + 0xc,param_1 + 0x12,puVar20);
    break;
  default:
    if (0x14f < (long)uVar14) {
      if (uVar14 < 0xbb51) {
        puVar21 = param_1 + (ulong)(((uint)uVar14 & 0xffff) / 0x60) * 6;
        iVar10 = FUN_006d2fc8(param_1,puVar21,puVar20);
      }
      else {
        puVar21 = param_1 + (uVar14 / 0x60) * 6;
        iVar10 = FUN_006d3858(param_1,param_1 + (uVar14 / 0xc0) * 6,puVar21,
                              puVar21 + (uVar14 / 0xc0) * 6,puVar20);
      }
      bVar12 = *(byte *)param_1;
      bVar4 = *(byte *)puVar21;
      uVar14 = (ulong)(bVar12 >> 1);
      if ((bVar12 & 1) != 0) {
        uVar14 = param_1[1];
      }
      uVar16 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar16 = puVar21[1];
      }
      sVar2 = uVar14;
      if (uVar16 <= uVar14) {
        sVar2 = uVar16;
      }
      puVar19 = puVar20;
      if (sVar2 == 0) {
LAB_006d2564:
        if (uVar14 <= uVar16) {
LAB_006d24f0:
          puVar23 = param_2 + -0xc;
          do {
            puVar19 = puVar23;
            if (puVar19 == param_1) {
              puVar21 = param_1 + 6;
              bVar4 = *(byte *)(param_2 + -6);
              uVar16 = (ulong)(bVar4 >> 1);
              if ((bVar4 & 1) != 0) {
                uVar16 = param_2[-5];
              }
              sVar2 = uVar14;
              if (uVar16 <= uVar14) {
                sVar2 = uVar16;
              }
              if (sVar2 == 0) {
LAB_006d296c:
                if (uVar16 < uVar14) goto LAB_006d2a98;
              }
              else {
                pvVar15 = (void *)param_1[2];
                if ((bVar12 & 1) == 0) {
                  pvVar15 = (void *)((long)param_1 + 1);
                }
                pvVar18 = (void *)((long)param_2 + -0x2f);
                if ((bVar4 & 1) != 0) {
                  pvVar18 = (void *)param_2[-4];
                }
                iVar10 = memcmp(pvVar18,pvVar15,sVar2);
                if (iVar10 == 0) goto LAB_006d296c;
                if (iVar10 < 0) goto LAB_006d2a98;
              }
              if (puVar21 == puVar20) goto switchD_006d2c5c_caseD_0;
              puVar21 = param_1 + 0xc;
              goto LAB_006d29a8;
            }
            bVar5 = *(byte *)puVar19;
            uVar25 = (ulong)(bVar5 >> 1);
            if ((bVar5 & 1) != 0) {
              uVar25 = puVar19[1];
            }
            sVar2 = uVar25;
            if (uVar16 <= uVar25) {
              sVar2 = uVar16;
            }
            if (sVar2 == 0) {
LAB_006d24fc:
              iVar11 = 0;
              if (uVar16 < uVar25) break;
            }
            else {
              pvVar15 = (void *)puVar19[2];
              if ((bVar5 & 1) == 0) {
                pvVar15 = (void *)((long)puVar19 + 1);
              }
              pvVar18 = (void *)((long)puVar21 + 1);
              if ((bVar4 & 1) != 0) {
                pvVar18 = (void *)puVar21[2];
              }
              iVar11 = memcmp(pvVar18,pvVar15,sVar2);
              if (iVar11 == 0) goto LAB_006d24fc;
            }
            puVar23 = puVar19 + -6;
          } while (-1 < iVar11);
          uVar14 = param_1[2];
          uVar6 = *(undefined *)((long)param_1 + 1);
          uStack_70 = (undefined6)(param_1[1] >> 0x10);
          uStack_a8 = param_1[4];
          local_b0 = param_1[3];
          local_a0 = (void *)param_1[5];
          param_1[1] = 0;
          param_1[2] = 0;
          uStack_78 = (undefined6)*(undefined8 *)((long)param_1 + 2);
          local_72 = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 2) >> 0x30);
          *param_1 = 0;
          uVar25 = *puVar19;
          uVar16 = puVar19[2];
          param_1[1] = puVar19[1];
          *param_1 = uVar25;
          param_1[2] = uVar16;
          uVar25 = puVar19[3];
          *(undefined2 *)puVar19 = 0;
          uVar16 = puVar19[5];
          param_1[4] = puVar19[4];
          param_1[3] = uVar25;
          param_1[5] = uVar16;
          if ((*(byte *)puVar19 & 1) != 0) {
            operator_delete((void *)puVar19[2]);
          }
          *(byte *)puVar19 = bVar12;
          *(undefined *)((long)puVar19 + 1) = uVar6;
          iVar10 = iVar10 + 1;
          puVar19[1] = CONCAT62(uStack_70,local_72);
          puVar19[2] = uVar14;
          *(ulong *)((long)puVar19 + 2) = CONCAT26(local_72,uStack_78);
          puVar19[5] = (ulong)local_a0;
          puVar19[4] = uStack_a8;
          puVar19[3] = local_b0;
        }
      }
      else {
        pvVar15 = (void *)param_1[2];
        pvVar18 = (void *)puVar21[2];
        if ((bVar12 & 1) == 0) {
          pvVar15 = (void *)((long)param_1 + 1);
        }
        if ((bVar4 & 1) == 0) {
          pvVar18 = (void *)((long)puVar21 + 1);
        }
        iVar11 = memcmp(pvVar18,pvVar15,sVar2);
        if (iVar11 == 0) goto LAB_006d2564;
        if (-1 < iVar11) goto LAB_006d24f0;
      }
      puVar23 = param_1 + 6;
      if (puVar23 < puVar19) {
LAB_006d2660:
        bVar12 = *(byte *)puVar21;
        uVar14 = (ulong)(bVar12 >> 1);
        if ((bVar12 & 1) != 0) {
          uVar14 = puVar21[1];
        }
        do {
          bVar4 = *(byte *)puVar23;
          uVar16 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            uVar16 = puVar23[1];
          }
          sVar2 = uVar16;
          if (uVar14 <= uVar16) {
            sVar2 = uVar14;
          }
          if (sVar2 == 0) {
LAB_006d267c:
            if (uVar16 <= uVar14) goto LAB_006d26cc;
          }
          else {
            pvVar15 = (void *)puVar23[2];
            if ((bVar4 & 1) == 0) {
              pvVar15 = (void *)((long)puVar23 + 1);
            }
            pvVar18 = (void *)((long)puVar21 + 1);
            if ((bVar12 & 1) != 0) {
              pvVar18 = (void *)puVar21[2];
            }
            iVar11 = memcmp(pvVar18,pvVar15,sVar2);
            if (iVar11 == 0) goto LAB_006d267c;
            if (-1 < iVar11) goto LAB_006d26cc;
          }
          puVar23 = puVar23 + 6;
        } while( true );
      }
      if (puVar23 != puVar21) goto LAB_006d27c0;
      goto LAB_006d28b8;
    }
    FUN_006d2fc8(param_1,param_1 + 6,param_1 + 0xc);
    if (param_1 + 0x12 == param_2) break;
    lVar22 = 0;
    puVar21 = param_1 + 0x12;
    puVar20 = param_1 + 0xc;
    goto LAB_006d2d7c;
  }
  goto switchD_006d2c5c_caseD_0;
LAB_006d29a8:
  bVar4 = *(byte *)(puVar21 + -6);
  uVar16 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar16 = puVar21[-5];
  }
  sVar2 = uVar14;
  if (uVar16 <= uVar14) {
    sVar2 = uVar16;
  }
  if (sVar2 == 0) {
LAB_006d298c:
    if (uVar16 < uVar14) {
      pvVar18 = (void *)puVar21[-4];
LAB_006d29fc:
      uVar6 = *(undefined *)((long)puVar21 + -0x2f);
      uStack_70 = (undefined6)(puVar21[-5] >> 0x10);
      local_a0 = (void *)puVar21[-1];
      uStack_a8 = puVar21[-2];
      local_b0 = puVar21[-3];
      uStack_78 = (undefined6)*(undefined8 *)((long)puVar21 + -0x2e);
      local_72 = (undefined2)((ulong)*(undefined8 *)((long)puVar21 + -0x2e) >> 0x30);
      puVar21[-5] = 0;
      puVar21[-4] = 0;
      puVar21[-6] = 0;
      uVar16 = param_2[-5];
      uVar14 = *puVar20;
      puVar21[-4] = param_2[-4];
      puVar21[-5] = uVar16;
      puVar21[-6] = uVar14;
      *(undefined2 *)puVar20 = 0;
      uVar16 = param_2[-2];
      uVar14 = *puVar13;
      puVar21[-1] = param_2[-1];
      puVar21[-2] = uVar16;
      puVar21[-3] = uVar14;
      if ((*(byte *)puVar20 & 1) != 0) {
        operator_delete((void *)param_2[-4]);
      }
      *(byte *)(param_2 + -6) = bVar4;
      *(undefined *)((long)param_2 + -0x2f) = uVar6;
      param_2[-4] = (ulong)pvVar18;
      param_2[-5] = CONCAT62(uStack_70,local_72);
      *(ulong *)((long)param_2 + -0x2e) = CONCAT26(local_72,uStack_78);
      param_2[-1] = (ulong)local_a0;
      param_2[-2] = uStack_a8;
      *puVar13 = local_b0;
LAB_006d2a98:
      if (puVar21 != puVar20) {
        puVar19 = puVar20;
LAB_006d2ae4:
        bVar12 = *(byte *)param_1;
        uVar14 = (ulong)(bVar12 >> 1);
        if ((bVar12 & 1) != 0) {
          uVar14 = param_1[1];
        }
        do {
          bVar4 = *(byte *)puVar21;
          uVar16 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            uVar16 = puVar21[1];
          }
          sVar2 = uVar14;
          if (uVar16 <= uVar14) {
            sVar2 = uVar16;
          }
          if (sVar2 == 0) {
LAB_006d2afc:
            if (uVar16 < uVar14) goto LAB_006d2b4c;
          }
          else {
            pvVar18 = (void *)puVar21[2];
            pvVar15 = (void *)((long)param_1 + 1);
            if ((bVar12 & 1) != 0) {
              pvVar15 = (void *)param_1[2];
            }
            if ((bVar4 & 1) == 0) {
              pvVar18 = (void *)((long)puVar21 + 1);
            }
            iVar10 = memcmp(pvVar18,pvVar15,sVar2);
            if (iVar10 == 0) goto LAB_006d2afc;
            if (iVar10 < 0) goto LAB_006d2b4c;
          }
          puVar21 = puVar21 + 6;
        } while( true );
      }
      goto switchD_006d2c5c_caseD_0;
    }
  }
  else {
    pvVar18 = (void *)puVar21[-4];
    pvVar15 = (void *)((long)param_1 + 1);
    if ((bVar12 & 1) != 0) {
      pvVar15 = (void *)param_1[2];
    }
    pvVar3 = (void *)((long)puVar21 + -0x2f);
    if ((bVar4 & 1) != 0) {
      pvVar3 = pvVar18;
    }
    iVar10 = memcmp(pvVar3,pvVar15,sVar2);
    if (iVar10 == 0) goto LAB_006d298c;
    if (iVar10 < 0) goto LAB_006d29fc;
  }
  bVar9 = puVar21 == puVar20;
  puVar21 = puVar21 + 6;
  if (bVar9) goto switchD_006d2c5c_caseD_0;
  goto LAB_006d29a8;
LAB_006d2b4c:
  puVar19 = puVar19 + -3;
  do {
    puVar23 = puVar19;
    bVar5 = *(byte *)(puVar23 + -3);
    uVar16 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      uVar16 = puVar23[-2];
    }
    sVar2 = uVar14;
    if (uVar16 <= uVar14) {
      sVar2 = uVar16;
    }
    if (sVar2 == 0) {
LAB_006d2b54:
      if (uVar14 <= uVar16) break;
      iVar10 = -1;
    }
    else {
      pvVar15 = (void *)((long)param_1 + 1);
      if ((bVar12 & 1) != 0) {
        pvVar15 = (void *)param_1[2];
      }
      pvVar18 = (void *)((long)puVar23 + -0x17);
      if ((bVar5 & 1) != 0) {
        pvVar18 = (void *)puVar23[-1];
      }
      iVar10 = memcmp(pvVar18,pvVar15,sVar2);
      if (iVar10 == 0) goto LAB_006d2b54;
    }
    puVar19 = puVar23 + -6;
  } while (iVar10 < 0);
  puVar19 = puVar23 + -3;
  if (puVar19 <= puVar21) goto LAB_006d2408;
  uVar6 = *(undefined *)((long)puVar21 + 1);
  uStack_78 = (undefined6)*(undefined8 *)((long)puVar21 + 2);
  local_a0 = (void *)puVar21[5];
  uStack_a8 = puVar21[4];
  local_b0 = puVar21[3];
  local_72 = (undefined2)puVar21[1];
  uStack_70 = (undefined6)(puVar21[1] >> 0x10);
  *puVar21 = 0;
  puVar21[1] = 0;
  uVar14 = puVar21[2];
  puVar21[2] = 0;
  uVar25 = puVar23[-2];
  uVar16 = *puVar19;
  puVar21[2] = puVar23[-1];
  puVar21[1] = uVar25;
  *puVar21 = uVar16;
  *(undefined2 *)(puVar23 + -3) = 0;
  uVar25 = puVar23[1];
  uVar16 = *puVar23;
  puVar21[5] = puVar23[2];
  puVar21[4] = uVar25;
  puVar21[3] = uVar16;
  if ((*(byte *)(puVar23 + -3) & 1) != 0) {
    operator_delete((void *)puVar23[-1]);
  }
  *(byte *)(puVar23 + -3) = bVar4;
  puVar21 = puVar21 + 6;
  *(undefined *)((long)puVar23 + -0x17) = uVar6;
  puVar23[-2] = CONCAT62(uStack_70,local_72);
  puVar23[-1] = uVar14;
  *(ulong *)((long)puVar23 + -0x16) = CONCAT26(local_72,uStack_78);
  puVar23[2] = (ulong)local_a0;
  puVar23[1] = uStack_a8;
  *puVar23 = local_b0;
  goto LAB_006d2ae4;
LAB_006d26cc:
  puVar19 = puVar19 + -3;
  do {
    puVar17 = puVar19;
    bVar5 = *(byte *)(puVar17 + -3);
    uVar16 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      uVar16 = puVar17[-2];
    }
    sVar2 = uVar16;
    if (uVar14 <= uVar16) {
      sVar2 = uVar14;
    }
    if (sVar2 == 0) {
LAB_006d26d4:
      iVar11 = 0;
      if (uVar14 < uVar16) break;
    }
    else {
      pvVar15 = (void *)((long)puVar17 + -0x17);
      if ((bVar5 & 1) != 0) {
        pvVar15 = (void *)puVar17[-1];
      }
      pvVar18 = (void *)((long)puVar21 + 1);
      if ((bVar12 & 1) != 0) {
        pvVar18 = (void *)puVar21[2];
      }
      iVar11 = memcmp(pvVar18,pvVar15,sVar2);
      if (iVar11 == 0) goto LAB_006d26d4;
    }
    puVar19 = puVar17 + -6;
  } while (-1 < iVar11);
  puVar19 = puVar17 + -3;
  if (puVar19 < puVar23) goto LAB_006d27ac;
  uVar6 = *(undefined *)((long)puVar23 + 1);
  uStack_78 = (undefined6)*(undefined8 *)((long)puVar23 + 2);
  local_a0 = (void *)puVar23[5];
  uStack_a8 = puVar23[4];
  local_b0 = puVar23[3];
  local_72 = (undefined2)puVar23[1];
  uStack_70 = (undefined6)(puVar23[1] >> 0x10);
  *puVar23 = 0;
  puVar23[1] = 0;
  uVar14 = puVar23[2];
  puVar23[2] = 0;
  uVar25 = puVar17[-2];
  uVar16 = *puVar19;
  puVar23[2] = puVar17[-1];
  puVar23[1] = uVar25;
  *puVar23 = uVar16;
  *(undefined2 *)(puVar17 + -3) = 0;
  uVar25 = puVar17[1];
  uVar16 = *puVar17;
  puVar23[5] = puVar17[2];
  puVar23[4] = uVar25;
  puVar23[3] = uVar16;
  if ((*(byte *)(puVar17 + -3) & 1) != 0) {
    operator_delete((void *)puVar17[-1]);
  }
  *(byte *)(puVar17 + -3) = bVar4;
  bVar9 = puVar23 != puVar21;
  *(undefined *)((long)puVar17 + -0x17) = uVar6;
  iVar10 = iVar10 + 1;
  puVar23 = puVar23 + 6;
  puVar1 = puVar19;
  if (bVar9) {
    puVar1 = puVar21;
  }
  puVar17[-2] = CONCAT62(uStack_70,local_72);
  puVar17[-1] = uVar14;
  *(ulong *)((long)puVar17 + -0x16) = CONCAT26(local_72,uStack_78);
  puVar17[2] = (ulong)local_a0;
  puVar17[1] = uStack_a8;
  *puVar17 = local_b0;
  puVar21 = puVar1;
  goto LAB_006d2660;
LAB_006d27ac:
  if (puVar23 == puVar21) goto LAB_006d28b8;
LAB_006d27c0:
  bVar12 = *(byte *)puVar21;
  bVar4 = *(byte *)puVar23;
  uVar14 = (ulong)(bVar12 >> 1);
  if ((bVar12 & 1) != 0) {
    uVar14 = puVar21[1];
  }
  uVar16 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar16 = puVar23[1];
  }
  sVar2 = uVar14;
  if (uVar16 <= uVar14) {
    sVar2 = uVar16;
  }
  if (sVar2 == 0) {
LAB_006d281c:
    if (uVar14 <= uVar16) goto LAB_006d28b8;
    pvVar18 = (void *)puVar23[2];
  }
  else {
    pvVar15 = (void *)puVar21[2];
    pvVar18 = (void *)puVar23[2];
    if ((bVar12 & 1) == 0) {
      pvVar15 = (void *)((long)puVar21 + 1);
    }
    pvVar3 = pvVar18;
    if ((bVar4 & 1) == 0) {
      pvVar3 = (void *)((long)puVar23 + 1);
    }
    iVar11 = memcmp(pvVar3,pvVar15,sVar2);
    if (iVar11 == 0) goto LAB_006d281c;
    if (-1 < iVar11) goto LAB_006d28b8;
  }
  uVar6 = *(undefined *)((long)puVar23 + 1);
  uStack_70 = (undefined6)(puVar23[1] >> 0x10);
  uStack_a8 = puVar23[4];
  local_b0 = puVar23[3];
  local_a0 = (void *)puVar23[5];
  uStack_78 = (undefined6)*(undefined8 *)((long)puVar23 + 2);
  local_72 = (undefined2)((ulong)*(undefined8 *)((long)puVar23 + 2) >> 0x30);
  puVar23[1] = 0;
  puVar23[2] = 0;
  *puVar23 = 0;
  uVar16 = *puVar21;
  uVar14 = puVar21[2];
  puVar23[1] = puVar21[1];
  *puVar23 = uVar16;
  puVar23[2] = uVar14;
  *(undefined2 *)puVar21 = 0;
  uVar16 = puVar21[4];
  uVar14 = puVar21[3];
  puVar23[5] = puVar21[5];
  puVar23[4] = uVar16;
  puVar23[3] = uVar14;
  if ((*(byte *)puVar21 & 1) != 0) {
    operator_delete((void *)puVar21[2]);
  }
  *(byte *)puVar21 = bVar4;
  iVar10 = iVar10 + 1;
  *(undefined *)((long)puVar21 + 1) = uVar6;
  puVar21[1] = CONCAT62(uStack_70,local_72);
  puVar21[2] = (ulong)pvVar18;
  *(ulong *)((long)puVar21 + 2) = CONCAT26(local_72,uStack_78);
  puVar21[4] = uStack_a8;
  puVar21[3] = local_b0;
  puVar21[5] = (ulong)local_a0;
LAB_006d28b8:
  if (iVar10 == 0) {
    uVar14 = FUN_006d3cf4(param_1,puVar23);
    uVar16 = FUN_006d3cf4(puVar23 + 6,param_2);
    if ((uVar16 & 1) != 0) goto LAB_006d2c3c;
    puVar21 = puVar23 + 6;
    if ((uVar14 & 1) != 0) goto LAB_006d2408;
  }
  if (((long)param_2 - (long)puVar23 >> 4) * -0x5555555555555555 <=
      ((long)puVar23 - (long)param_1 >> 4) * -0x5555555555555555) {
    FUN_006d23a0(puVar23 + 6,param_2);
    param_2 = puVar23;
    goto LAB_006d23d8;
  }
  FUN_006d23a0(param_1,puVar23);
  puVar21 = puVar23 + 6;
  goto LAB_006d2408;
LAB_006d2c3c:
  param_2 = puVar23;
  if ((uVar14 & 1) != 0) goto switchD_006d2c5c_caseD_0;
  goto LAB_006d23d8;
LAB_006d2d7c:
  puVar13 = puVar21;
  bVar12 = *(byte *)puVar13;
  bVar4 = *(byte *)puVar20;
  uVar14 = (ulong)(bVar12 >> 1);
  if ((bVar12 & 1) != 0) {
    uVar14 = puVar13[1];
  }
  uVar16 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar16 = puVar20[1];
  }
  sVar2 = uVar14;
  if (uVar16 <= uVar14) {
    sVar2 = uVar16;
  }
  if (sVar2 == 0) {
LAB_006d2de0:
    if (uVar16 < uVar14) {
LAB_006d2de8:
      local_a0 = (void *)puVar13[2];
      bVar12 = 0;
      uStack_a8 = puVar13[1];
      local_b0 = *puVar13;
      local_88 = puVar13[5];
      uStack_90 = puVar13[4];
      local_98 = puVar13[3];
      puVar13[1] = 0;
      puVar13[2] = 0;
      *puVar13 = 0;
      lVar24 = lVar22;
      do {
        if ((bVar12 & 1) != 0) {
          operator_delete(*(void **)((long)param_1 + lVar24 + 0xa0));
        }
        uVar26 = *(undefined8 *)((long)param_1 + lVar24 + 0x60);
        *(undefined2 *)((long)param_1 + lVar24 + 0x60) = 0;
        *(undefined8 *)((long)param_1 + lVar24 + 0x98) =
             *(undefined8 *)((long)param_1 + lVar24 + 0x68);
        *(undefined8 *)((long)param_1 + lVar24 + 0x90) = uVar26;
        *(undefined8 *)((long)param_1 + lVar24 + 0xa0) =
             *(undefined8 *)((long)param_1 + lVar24 + 0x70);
        *(undefined8 *)((long)param_1 + lVar24 + 0xb0) =
             *(undefined8 *)((long)param_1 + lVar24 + 0x80);
        *(undefined8 *)((long)param_1 + lVar24 + 0xa8) =
             *(undefined8 *)((long)param_1 + lVar24 + 0x78);
        *(undefined8 *)((long)param_1 + lVar24 + 0xb8) =
             *(undefined8 *)((long)param_1 + lVar24 + 0x88);
        if (lVar24 == -0x60) {
          bVar12 = *(byte *)param_1;
          puVar21 = param_1;
          goto joined_r0x006d2eec;
        }
        bVar12 = *(byte *)((long)param_1 + lVar24 + 0x30);
        uVar14 = local_b0 >> 1 & 0x7f;
        if ((local_b0 & 1) != 0) {
          uVar14 = uStack_a8;
        }
        uVar16 = (ulong)(bVar12 >> 1);
        if ((bVar12 & 1) != 0) {
          uVar16 = *(ulong *)((long)param_1 + lVar24 + 0x38);
        }
        sVar2 = uVar14;
        if (uVar16 <= uVar14) {
          sVar2 = uVar16;
        }
        if (sVar2 == 0) {
LAB_006d2e1c:
          if (uVar14 <= uVar16) goto LAB_006d2ed0;
        }
        else {
          pvVar15 = (void *)((ulong)&local_b0 | 1);
          if ((local_b0 & 1) != 0) {
            pvVar15 = local_a0;
          }
          pvVar18 = (void *)((long)param_1 + lVar24 + 0x31);
          if ((bVar12 & 1) != 0) {
            pvVar18 = *(void **)((long)param_1 + lVar24 + 0x40);
          }
          iVar10 = memcmp(pvVar18,pvVar15,sVar2);
          if (iVar10 == 0) goto LAB_006d2e1c;
          if (-1 < iVar10) goto LAB_006d2ed0;
        }
        lVar8 = lVar24 + 0x60;
        lVar24 = lVar24 + -0x30;
        bVar12 = *(byte *)((long)param_1 + lVar8);
      } while( true );
    }
  }
  else {
    pvVar15 = (void *)puVar13[2];
    pvVar18 = (void *)puVar20[2];
    if ((bVar12 & 1) == 0) {
      pvVar15 = (void *)((long)puVar13 + 1);
    }
    if ((bVar4 & 1) == 0) {
      pvVar18 = (void *)((long)puVar20 + 1);
    }
    iVar10 = memcmp(pvVar18,pvVar15,sVar2);
    if (iVar10 == 0) goto LAB_006d2de0;
    if (iVar10 < 0) goto LAB_006d2de8;
  }
  goto LAB_006d2d6c;
LAB_006d2ed0:
  puVar21 = (ulong *)((long)param_1 + lVar24 + 0x60);
  bVar12 = *(byte *)puVar21;
joined_r0x006d2eec:
  if ((bVar12 & 1) != 0) {
    operator_delete((void *)puVar21[2]);
  }
  puVar21[2] = (ulong)local_a0;
  puVar21[1] = uStack_a8;
  *puVar21 = local_b0;
  *(ulong *)((long)param_1 + lVar24 + 0x88) = local_88;
  *(ulong *)((long)param_1 + lVar24 + 0x80) = uStack_90;
  *(ulong *)((long)param_1 + lVar24 + 0x78) = local_98;
LAB_006d2d6c:
  lVar22 = lVar22 + 0x30;
  puVar21 = puVar13 + 6;
  puVar20 = puVar13;
  if (puVar13 + 6 == param_2) {
switchD_006d2c5c_caseD_0:
    if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  goto LAB_006d2d7c;
}


