// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e30e5c
// Entry Point: 00e30e5c
// Size: 2956 bytes
// Signature: undefined FUN_00e30e5c(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined8 param_9)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00e30e5c(long param_1,undefined8 *param_2,ulong *param_3,long param_4,ulong param_5,
                long param_6,ulong param_7,long param_8,ulong param_9)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  byte local_118 [8];
  ulong local_110;
  long local_108;
  ulong local_100;
  byte local_f8;
  undefined7 uStack_f7;
  ulong uStack_f0;
  ulong local_e8;
  ulong uStack_e0;
  uint local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  ulong local_c8;
  ulong uStack_c0;
  ulong local_b8;
  ulong uStack_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  int local_78;
  int iStack_74;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) {
    iVar3 = -0x66;
    goto LAB_00e31990;
  }
  lVar9 = call_zseek64(param_1,*(undefined8 *)(param_1 + 0x60),
                       *(long *)(param_1 + 0x78) + *(long *)(param_1 + 0x88),0);
  if ((lVar9 == 0) &&
     (iVar3 = FUN_00e32cbc(param_1,*(undefined8 *)(param_1 + 0x60),&local_108), iVar3 == 0)) {
    iVar3 = 0;
    if (local_108 != 0x2014b50) {
      iVar3 = -0x67;
    }
  }
  else {
    iVar3 = -1;
  }
  uVar16 = *(undefined8 *)(param_1 + 0x60);
  iVar4 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar16,&local_f8,1);
  if (iVar4 == 1) {
    uVar13 = (ulong)local_f8;
    uVar14 = uVar13 << 8;
LAB_00e30f30:
    iVar4 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar16,&local_f8,1);
    if (iVar4 == 1) {
      uVar14 = (ulong)local_f8 << 8;
    }
    else {
      iVar4 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16);
      if (iVar4 != 0) goto LAB_00e30f70;
    }
    uVar14 = uVar14 | uVar13;
  }
  else {
    iVar4 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16);
    uVar13 = 0;
    if (iVar4 == 0) {
      uVar14 = 0;
      goto LAB_00e30f30;
    }
LAB_00e30f70:
    uVar14 = 0;
    iVar3 = -1;
  }
  uVar16 = *(undefined8 *)(param_1 + 0x60);
  local_f8 = (byte)uVar14;
  uStack_f7 = (undefined7)(uVar14 >> 8);
  iVar4 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar16,&local_100,1);
  if (iVar4 == 1) {
    uVar13 = local_100 & 0xff;
    uVar14 = uVar13 << 8;
LAB_00e30fc8:
    iVar4 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar16,&local_100,1);
    if (iVar4 == 1) {
      uVar14 = (local_100 & 0xff) << 8;
    }
    else {
      iVar4 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16);
      if (iVar4 != 0) goto LAB_00e31008;
    }
    uStack_f0 = uVar14 | uVar13;
  }
  else {
    iVar4 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16);
    uVar13 = 0;
    if (iVar4 == 0) {
      uVar14 = 0;
      goto LAB_00e30fc8;
    }
LAB_00e31008:
    uStack_f0 = 0;
    iVar3 = -1;
  }
  uVar16 = *(undefined8 *)(param_1 + 0x60);
  iVar4 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar16,&local_100,1);
  if (iVar4 == 1) {
    uVar13 = local_100 & 0xff;
    uVar14 = uVar13 << 8;
LAB_00e31060:
    iVar4 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar16,&local_100,1);
    if (iVar4 == 1) {
      uVar14 = (local_100 & 0xff) << 8;
    }
    else {
      iVar4 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16);
      if (iVar4 != 0) goto LAB_00e310a0;
    }
    local_e8 = uVar14 | uVar13;
  }
  else {
    iVar4 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16);
    uVar13 = 0;
    if (iVar4 == 0) {
      uVar14 = 0;
      goto LAB_00e31060;
    }
LAB_00e310a0:
    local_e8 = 0;
    iVar3 = -1;
  }
  uVar16 = *(undefined8 *)(param_1 + 0x60);
  iVar4 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar16,&local_100,1);
  if (iVar4 == 1) {
    uVar13 = local_100 & 0xff;
    uVar14 = uVar13 << 8;
LAB_00e310fc:
    iVar4 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar16,&local_100,1);
    if (iVar4 == 1) {
      uVar14 = (local_100 & 0xff) << 8;
    }
    else {
      iVar4 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16);
      if (iVar4 != 0) goto LAB_00e3113c;
    }
    uStack_e0 = uVar14 | uVar13;
  }
  else {
    iVar4 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16);
    uVar13 = 0;
    if (iVar4 == 0) {
      uVar14 = 0;
      goto LAB_00e310fc;
    }
LAB_00e3113c:
    uStack_e0 = 0;
    iVar3 = -1;
  }
  uVar5 = FUN_00e32cbc(param_1,*(undefined8 *)(param_1 + 0x60),&local_d8);
  auVar17 = NEON_ushl(ZEXT416(local_d8),_DAT_004c4730,4);
  auVar18._4_4_ = local_d8;
  auVar18._0_4_ = local_d8;
  auVar18._8_4_ = local_d8;
  auVar18._12_4_ = local_d8;
  auVar18 = NEON_ushl(auVar18,_DAT_004c3240,4);
  auVar19._4_12_ = auVar18._4_12_;
  auVar19._0_4_ = auVar17._0_4_;
  local_78 = (local_d8 >> 0x15 & 0xf) - 1;
  iStack_74 = (local_d8 >> 0x19) + 0x7bc;
  auVar17._0_8_ =
       CONCAT17(auVar18[7] & SUB161(_DAT_004c3b30,7),
                CONCAT16(auVar18[6] & SUB161(_DAT_004c3b30,6),
                         CONCAT15(auVar18[5] & SUB161(_DAT_004c3b30,5),
                                  CONCAT14(auVar18[4] & SUB161(_DAT_004c3b30,4),
                                           CONCAT13(auVar17[3] & SUB161(_DAT_004c3b30,3),
                                                    CONCAT12(auVar17[2] & SUB161(_DAT_004c3b30,2),
                                                             CONCAT11(auVar17[1] &
                                                                      SUB161(_DAT_004c3b30,1),
                                                                      auVar17[0] &
                                                                      SUB161(_DAT_004c3b30,0))))))))
  ;
  auVar17[8] = auVar18[8] & SUB161(_DAT_004c3b30,8);
  auVar17[9] = auVar18[9] & SUB161(_DAT_004c3b30,9);
  auVar17[10] = auVar18[10] & SUB161(_DAT_004c3b30,10);
  auVar17[11] = auVar18[11] & SUB161(_DAT_004c3b30,0xb);
  auVar17[12] = auVar18[12] & SUB161(_DAT_004c3b30,0xc);
  auVar17[13] = auVar18[13] & SUB161(_DAT_004c3b30,0xd);
  auVar17[14] = auVar18[14] & SUB161(_DAT_004c3b30,0xe);
  auVar17[15] = auVar18[15] & SUB161(_DAT_004c3b30,0xf);
  uStack_80 = auVar17._8_8_;
  local_88 = auVar17._0_8_;
  uVar6 = FUN_00e32cbc(auVar17,auVar19,0xfffffffbffffffff,local_d8,param_1,
                       *(undefined8 *)(param_1 + 0x60),&uStack_d0);
  uVar7 = FUN_00e32cbc(param_1,*(undefined8 *)(param_1 + 0x60),&local_110);
  local_c8 = local_110;
  uVar8 = FUN_00e32cbc(param_1,*(undefined8 *)(param_1 + 0x60),&local_110);
  uVar16 = *(undefined8 *)(param_1 + 0x60);
  if ((uVar8 | uVar7 | uVar6 | uVar5) != 0) {
    iVar3 = -1;
  }
  uStack_c0 = local_110;
  iVar4 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar16,&local_100,1);
  if (iVar4 == 1) {
    uVar13 = local_100 & 0xff;
    uVar14 = uVar13 << 8;
LAB_00e31268:
    iVar4 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar16,&local_100,1);
    if (iVar4 == 1) {
      uVar14 = (local_100 & 0xff) << 8;
    }
    else {
      iVar4 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16);
      if (iVar4 != 0) {
        uVar13 = 0;
        iVar3 = -1;
        goto LAB_00e312b8;
      }
    }
    uVar13 = uVar14 | uVar13;
  }
  else {
    iVar4 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16);
    uVar13 = 0;
    if (iVar4 == 0) {
      uVar14 = 0;
      goto LAB_00e31268;
    }
    iVar3 = -1;
  }
LAB_00e312b8:
  uVar16 = *(undefined8 *)(param_1 + 0x60);
  local_b8 = uVar13;
  iVar4 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar16,&local_100,1);
  if (iVar4 == 1) {
    uVar13 = local_100 & 0xff;
    uVar14 = uVar13 << 8;
LAB_00e31304:
    iVar4 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar16,&local_100,1);
    if (iVar4 == 1) {
      uVar14 = (local_100 & 0xff) << 8;
    }
    else {
      iVar4 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16);
      if (iVar4 != 0) goto LAB_00e31344;
    }
    uStack_b0 = uVar14 | uVar13;
  }
  else {
    iVar4 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16);
    uVar13 = 0;
    if (iVar4 == 0) {
      uVar14 = 0;
      goto LAB_00e31304;
    }
LAB_00e31344:
    uStack_b0 = 0;
    iVar3 = -1;
  }
  uVar16 = *(undefined8 *)(param_1 + 0x60);
  iVar4 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar16,&local_100,1);
  if (iVar4 == 1) {
    uVar13 = local_100 & 0xff;
    uVar14 = uVar13 << 8;
LAB_00e3139c:
    iVar4 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar16,&local_100,1);
    if (iVar4 == 1) {
      uVar14 = (local_100 & 0xff) << 8;
    }
    else {
      iVar4 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16);
      if (iVar4 != 0) goto LAB_00e313dc;
    }
    local_a8 = uVar14 | uVar13;
  }
  else {
    iVar4 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16);
    uVar13 = 0;
    if (iVar4 == 0) {
      uVar14 = 0;
      goto LAB_00e3139c;
    }
LAB_00e313dc:
    local_a8 = 0;
    iVar3 = -1;
  }
  uVar16 = *(undefined8 *)(param_1 + 0x60);
  iVar4 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar16,&local_100,1);
  if (iVar4 == 1) {
    uVar13 = local_100 & 0xff;
    uVar14 = uVar13 << 8;
LAB_00e31434:
    iVar4 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar16,&local_100,1);
    if (iVar4 == 1) {
      uVar14 = (local_100 & 0xff) << 8;
    }
    else {
      iVar4 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16);
      if (iVar4 != 0) goto LAB_00e31474;
    }
    uStack_a0 = uVar14 | uVar13;
  }
  else {
    iVar4 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16);
    uVar13 = 0;
    if (iVar4 == 0) {
      uVar14 = 0;
      goto LAB_00e31434;
    }
LAB_00e31474:
    uStack_a0 = 0;
    iVar3 = -1;
  }
  uVar16 = *(undefined8 *)(param_1 + 0x60);
  iVar4 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar16,&local_100,1);
  if (iVar4 == 1) {
    uVar13 = local_100 & 0xff;
    uVar14 = uVar13 << 8;
LAB_00e314cc:
    iVar4 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar16,&local_100,1);
    if (iVar4 == 1) {
      uVar14 = (local_100 & 0xff) << 8;
    }
    else {
      iVar4 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16);
      if (iVar4 != 0) goto LAB_00e3150c;
    }
    local_98 = uVar14 | uVar13;
  }
  else {
    iVar4 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16);
    uVar13 = 0;
    if (iVar4 == 0) {
      uVar14 = 0;
      goto LAB_00e314cc;
    }
LAB_00e3150c:
    local_98 = 0;
    iVar3 = -1;
  }
  uVar5 = FUN_00e32cbc(param_1,*(undefined8 *)(param_1 + 0x60),&uStack_90);
  uVar6 = FUN_00e32cbc(param_1,*(undefined8 *)(param_1 + 0x60),&local_110);
  uVar13 = local_b8;
  if ((uVar6 | uVar5) != 0) {
    iVar3 = -1;
  }
  local_100 = local_110;
  if ((param_4 != 0) && (iVar3 == 0)) {
    uVar14 = param_5;
    if (local_b8 < param_5) {
      *(undefined *)(param_4 + local_b8) = 0;
      uVar14 = local_b8;
    }
    iVar3 = 0;
    if ((param_5 != 0) && (local_b8 != 0)) {
      uVar10 = (**(code **)(param_1 + 8))
                         (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x60),param_4,
                          uVar14);
      iVar3 = -(uint)(uVar10 != uVar14);
    }
    uVar13 = uVar13 - uVar14;
  }
  uVar14 = uStack_b0;
  if ((param_6 == 0) || (iVar3 != 0)) {
    lVar9 = uStack_b0 + uVar13;
  }
  else {
    uVar10 = uStack_b0;
    if (param_7 <= uStack_b0) {
      uVar10 = param_7;
    }
    if (uVar13 == 0) {
      iVar3 = 0;
      uVar15 = 0;
    }
    else {
      lVar9 = call_zseek64(param_1,*(undefined8 *)(param_1 + 0x60),uVar13,1);
      iVar3 = -(uint)(lVar9 != 0);
      uVar15 = 0;
      if (lVar9 != 0) {
        uVar15 = uVar13;
      }
    }
    if (((param_7 != 0) && (uVar14 != 0)) &&
       (uVar13 = (**(code **)(param_1 + 8))
                           (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x60),param_6,
                            uVar10), uVar13 != uVar10)) {
      iVar3 = -1;
    }
    lVar9 = (uVar14 - uVar10) + uVar15;
  }
  if ((iVar3 == 0) && (uStack_b0 != 0)) {
    lVar12 = lVar9 - uStack_b0;
    if (lVar12 == 0) {
      lVar9 = 0;
      iVar3 = 0;
    }
    else {
      lVar11 = call_zseek64(param_1,*(undefined8 *)(param_1 + 0x60),lVar12,1);
      iVar3 = -(uint)(lVar11 != 0);
      lVar9 = 0;
      if (lVar11 != 0) {
        lVar9 = lVar12;
      }
      if (uStack_b0 == 0) goto LAB_00e318c8;
    }
    uVar13 = 0;
    do {
      uVar16 = *(undefined8 *)(param_1 + 0x60);
      iVar4 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar16,local_118,1);
      if (iVar4 == 1) {
        uVar14 = (ulong)local_118[0];
        uVar10 = uVar14 << 8;
LAB_00e3170c:
        iVar4 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar16,local_118,1);
        if (iVar4 == 1) {
          uVar10 = (ulong)local_118[0] << 8;
        }
        else {
          iVar4 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16);
          if (iVar4 != 0) goto LAB_00e3174c;
        }
        uVar10 = uVar10 | uVar14;
      }
      else {
        iVar4 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16);
        uVar14 = 0;
        if (iVar4 == 0) {
          uVar10 = 0;
          goto LAB_00e3170c;
        }
LAB_00e3174c:
        uVar10 = 0;
        iVar3 = -1;
      }
      uVar16 = *(undefined8 *)(param_1 + 0x60);
      iVar4 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar16,local_118,1);
      if (iVar4 == 1) {
        uVar14 = (ulong)local_118[0];
        uVar15 = uVar14 << 8;
LAB_00e317b0:
        iVar4 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar16,local_118,1);
        if (iVar4 == 1) {
          uVar15 = (ulong)local_118[0] << 8;
LAB_00e31800:
          uVar14 = uVar15 | uVar14;
        }
        else {
          iVar4 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16);
          if (iVar4 == 0) goto LAB_00e31800;
          uVar14 = 0;
          iVar3 = -1;
        }
        if (uVar10 != 1) goto LAB_00e31694;
LAB_00e3180c:
        if ((uStack_c0 == 0xffffffff) &&
           (iVar4 = FUN_00e32e68(param_1,*(undefined8 *)(param_1 + 0x60),&uStack_c0), iVar4 != 0)) {
          iVar3 = -1;
        }
        if ((local_c8 == 0xffffffff) &&
           (iVar4 = FUN_00e32e68(param_1,*(undefined8 *)(param_1 + 0x60),&local_c8), iVar4 != 0)) {
          iVar3 = -1;
        }
        if ((local_100 == 0xffffffff) &&
           (iVar4 = FUN_00e32e68(param_1,*(undefined8 *)(param_1 + 0x60),&local_100), iVar4 != 0)) {
          iVar3 = -1;
        }
        if (uStack_a0 == 0xffffffff) {
          iVar4 = FUN_00e32cbc(param_1,*(undefined8 *)(param_1 + 0x60),local_118);
          bVar2 = iVar4 == 0;
          goto LAB_00e316ac;
        }
      }
      else {
        iVar4 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16);
        uVar14 = 0;
        if (iVar4 == 0) {
          uVar15 = 0;
          goto LAB_00e317b0;
        }
        iVar3 = -1;
        if (uVar10 == 1) goto LAB_00e3180c;
LAB_00e31694:
        lVar12 = call_zseek64(param_1,*(undefined8 *)(param_1 + 0x60),uVar14,1);
        bVar2 = lVar12 == 0;
LAB_00e316ac:
        if (!bVar2) {
          iVar3 = -1;
        }
      }
      uVar13 = uVar13 + uVar14 + 4;
    } while (uVar13 < uStack_b0);
  }
LAB_00e318c8:
  uVar13 = local_a8;
  if ((param_8 != 0) && (iVar3 == 0)) {
    uVar14 = param_9;
    if (local_a8 < param_9) {
      *(undefined *)(param_8 + local_a8) = 0;
      uVar14 = local_a8;
    }
    if (lVar9 == 0) {
      iVar3 = 0;
    }
    else {
      lVar9 = call_zseek64(param_1,*(undefined8 *)(param_1 + 0x60),lVar9,1);
      iVar3 = -(uint)(lVar9 != 0);
    }
    if (((param_9 != 0) && (uVar13 != 0)) &&
       (uVar13 = (**(code **)(param_1 + 8))
                           (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x60),param_8,
                            uVar14), uVar13 != uVar14)) {
      iVar3 = -1;
    }
  }
  if ((param_2 != (undefined8 *)0x0) && (iVar3 == 0)) {
    param_2[0xd] = uStack_90;
    param_2[0xc] = local_98;
    param_2[0xf] = uStack_80;
    param_2[0xe] = local_88;
    param_2[5] = uStack_d0;
    param_2[4] = CONCAT44(uStack_d4,local_d8);
    param_2[7] = uStack_c0;
    param_2[6] = local_c8;
    param_2[9] = uStack_b0;
    param_2[8] = local_b8;
    param_2[0xb] = uStack_a0;
    param_2[10] = local_a8;
    param_2[0x10] = CONCAT44(iStack_74,local_78);
    param_2[1] = uStack_f0;
    *param_2 = CONCAT71(uStack_f7,local_f8);
    param_2[3] = uStack_e0;
    param_2[2] = local_e8;
  }
  if ((param_3 != (ulong *)0x0) && (iVar3 == 0)) {
    *param_3 = local_100;
  }
LAB_00e31990:
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}


