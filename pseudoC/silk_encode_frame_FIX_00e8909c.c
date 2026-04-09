// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_encode_frame_FIX
// Entry Point: 00e8909c
// Size: 3704 bytes
// Signature: undefined silk_encode_frame_FIX(void)


undefined8
silk_encode_frame_FIX(long param_1,int *param_2,void **param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  short sVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  long lVar24;
  undefined *puVar25;
  undefined *puVar26;
  void *pvVar27;
  void *pvVar28;
  void **ppvVar29;
  byte *pbVar30;
  byte bVar31;
  bool bVar32;
  int iVar33;
  ulong uVar34;
  undefined *puVar35;
  undefined8 *puVar36;
  ulong uVar37;
  char *pcVar38;
  ulong uVar39;
  uint uVar40;
  ulong uVar41;
  int *piVar42;
  short *psVar43;
  long lVar44;
  int *piVar45;
  int iVar46;
  ulong uVar47;
  short sVar48;
  short sVar49;
  int iVar50;
  ulong uVar51;
  uint uVar52;
  uint uVar53;
  ulong uVar54;
  int iVar55;
  undefined8 uVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  undefined8 uVar61;
  int iVar62;
  int iVar63;
  undefined8 uVar64;
  int iVar65;
  undefined8 uVar66;
  undefined auVar67 [16];
  undefined auVar68 [16];
  undefined auVar69 [16];
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  undefined4 uVar74;
  undefined auVar75 [16];
  undefined auVar76 [16];
  undefined auVar77 [16];
  int iVar78;
  int iVar79;
  int iVar80;
  int iVar81;
  int iVar82;
  int iVar83;
  int iVar84;
  int iVar85;
  int iVar86;
  int iVar87;
  int iVar88;
  int iVar89;
  undefined auVar90 [16];
  undefined uVar91;
  undefined uVar92;
  undefined uVar93;
  undefined uVar94;
  undefined uVar95;
  undefined uVar96;
  undefined uVar97;
  undefined uVar98;
  undefined auVar99 [16];
  undefined auVar100 [16];
  undefined auVar101 [16];
  undefined auVar102 [16];
  undefined auVar103 [16];
  undefined auVar104 [16];
  undefined auVar105 [16];
  undefined extraout_b28;
  undefined uVar106;
  undefined extraout_var;
  undefined uVar107;
  undefined extraout_var_00;
  undefined uVar108;
  undefined extraout_var_01;
  undefined uVar109;
  undefined extraout_var_02;
  undefined uVar110;
  undefined extraout_var_03;
  undefined uVar111;
  undefined extraout_var_04;
  undefined uVar112;
  undefined extraout_var_05;
  undefined uVar113;
  undefined in_register_00005388;
  undefined in_register_00005389;
  undefined in_register_0000538a;
  undefined in_register_0000538b;
  undefined in_register_0000538c;
  undefined in_register_0000538d;
  undefined in_register_0000538e;
  undefined in_register_0000538f;
  long alStack_2b90 [3];
  int *piStack_2b78;
  long lStack_2b70;
  int aiStack_2b68 [6];
  undefined auStack_2b50 [1216];
  long alStack_2690 [3];
  int *piStack_2678;
  long lStack_2670;
  int aiStack_2668 [6];
  undefined auStack_2650 [8];
  void *local_2648;
  uint local_263c;
  void *local_2638;
  long local_2630;
  int *local_2628;
  uint local_261c;
  undefined *local_2618;
  undefined *local_2610;
  undefined *local_2608;
  undefined *local_2600;
  undefined *local_25f8;
  undefined *local_25f0;
  undefined *local_25e8;
  undefined *puStack_25e0;
  undefined4 local_25d8;
  uint local_25d4;
  int *local_25d0;
  short *psStack_25c8;
  long local_25c0;
  int local_25b4;
  void *local_25b0;
  int local_25a8;
  int local_25a4;
  void *local_25a0;
  int local_2594;
  undefined *local_2590;
  int local_2588;
  uint local_2584;
  uint local_2580;
  int local_257c;
  void **local_2578;
  byte *local_2570;
  byte *local_2568;
  undefined8 local_2560;
  undefined8 uStack_2558;
  undefined8 uStack_2550;
  undefined8 uStack_2548;
  undefined8 local_2540;
  undefined8 uStack_2538;
  undefined8 uStack_2530;
  undefined8 uStack_2528;
  int local_2514;
  int local_2510;
  int local_250c;
  int local_2508;
  uint local_2504;
  undefined8 local_2500;
  undefined8 uStack_24f8;
  undefined8 uStack_24f0;
  undefined8 uStack_24e8;
  void *local_24e0;
  void *pvStack_24d8;
  void *pvStack_24d0;
  void *pvStack_24c8;
  void *local_24c0;
  void *pvStack_24b8;
  void *local_24b0;
  void *local_24a0;
  void *pvStack_2498;
  void *pvStack_2490;
  void *pvStack_2488;
  void *local_2480;
  void *pvStack_2478;
  void *local_2470;
  int local_2468 [4];
  short local_2458 [4];
  undefined8 local_2450;
  undefined8 local_2448;
  undefined auStack_2440 [4352];
  int aiStack_1340 [4];
  undefined auStack_1330 [64];
  undefined auStack_12f0 [40];
  undefined4 local_12c8;
  undefined auStack_12c4 [16];
  undefined auStack_12b4 [192];
  undefined auStack_11f4 [16];
  undefined auStack_11e4 [16];
  undefined auStack_11d4 [16];
  int local_11c4;
  int local_1190 [4];
  byte local_1180;
  undefined auStack_1178 [4352];
  long local_78;
  
  local_2630 = tpidr_el0;
  local_2590 = (undefined *)(param_1 + 0x11bc);
  local_78 = *(long *)(local_2630 + 0x28);
  local_2638 = (void *)(param_1 + 0x1c28);
  local_2448 = 0;
  *(byte *)(param_1 + 0x12b2) = (byte)*(int *)(param_1 + 0x120c) & 3;
  *(int *)(param_1 + 0x120c) = *(int *)(param_1 + 0x120c) + 1;
  local_2450 = 0;
  pvVar3 = (void *)((long)local_2638 + (long)*(int *)(param_1 + 0x11f0) * 2);
  local_2628 = param_2;
  local_25b4 = param_6;
  local_2594 = param_4;
  local_2578 = param_3;
  local_250c = param_5;
  silk_LP_variable_cutoff
            (param_1 + 0x10,(void *)(param_1 + 0x13fa),*(undefined4 *)(param_1 + 0x11e8));
  local_25b0 = pvVar3;
  memcpy((void *)((long)pvVar3 + (long)*(int *)(param_1 + 0x11e0) * 10),(void *)(param_1 + 0x13fa),
         (long)*(int *)(param_1 + 0x11e8) << 1);
  pvVar3 = local_25b0;
  if (*(int *)(param_1 + 0x1248) != 0) {
LAB_00e8916c:
    uVar53 = *(int *)(param_1 + 0x11e0) * 5 + *(int *)(param_1 + 0x11f0);
    memmove(local_2638,(void *)(param_1 + (long)*(int *)(param_1 + 0x11e8) * 2 + 0x1c28),
            -(ulong)(uVar53 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar53 << 1);
    if (*(int *)(param_1 + 0x1248) == 0) {
      *(undefined4 *)(param_1 + 0x1238) = 0;
      uVar74 = *(undefined4 *)(auStack_12c4 + (long)*(int *)(param_1 + 0x11e4) * 4 + -4);
      local_2590[1] = local_2590[0xf1];
      *(undefined4 *)(param_1 + 0x11c0) = uVar74;
      iVar33 = *(int *)(local_2578 + 3) + (int)LZCOUNT(*(undefined4 *)(local_2578 + 4)) + -0x19 >> 3
      ;
    }
    else {
      iVar33 = 0;
    }
    *local_2628 = iVar33;
    if (*(long *)(local_2630 + 0x28) == local_78) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  lVar44 = (long)*(int *)(param_1 + 0x11f0);
  local_2570 = (byte *)(param_1 + 0x1290);
  lVar24 = -(((long)*(int *)(param_1 + 0x11e8) + (long)*(int *)(param_1 + 0x11f4) + lVar44) * 2 +
             0xfU & 0xfffffffffffffff0);
  puVar35 = auStack_2650 + lVar24;
  silk_find_pitch_lags_FIX
            (param_1,aiStack_1340,puVar35,(void *)((long)local_25b0 + lVar44 * -2),
             *(undefined4 *)(param_1 + 0x13f4));
  silk_noise_shape_analysis_FIX
            (param_1,aiStack_1340,puVar35 + lVar44 * 2,pvVar3,*(undefined4 *)(param_1 + 0x13f4));
  iVar33 = local_2594;
  silk_find_pred_coefs_FIX(param_1,aiStack_1340,puVar35 + lVar44 * 2,pvVar3,local_2594);
  silk_process_gains_FIX(param_1,aiStack_1340,iVar33);
  if ((*(int *)(param_1 + 0x17e0) != 0) && (0x4d < *(int *)(param_1 + 0x11b4))) {
    lVar44 = param_1 + (long)*(int *)(param_1 + 0x1684) * 0x24;
    puVar36 = (undefined8 *)(lVar44 + 0x17e8);
    *(undefined4 *)(param_1 + (long)*(int *)(param_1 + 0x1684) * 4 + 0x1284) = 1;
    memcpy(auStack_1178,(void *)(param_1 + 0x94),0x1100);
    uVar56 = *(undefined8 *)(param_1 + 0x1290);
    uVar64 = *(undefined8 *)(param_1 + 0x12a8);
    uVar61 = *(undefined8 *)(param_1 + 0x12a0);
    uVar74 = *(undefined4 *)(param_1 + 0x12b0);
    *(undefined8 *)(lVar44 + 0x17f0) = *(undefined8 *)(param_1 + 0x1298);
    *puVar36 = uVar56;
    *(undefined8 *)(lVar44 + 0x1800) = uVar64;
    *(undefined8 *)(lVar44 + 0x17f8) = uVar61;
    *(undefined4 *)(lVar44 + 0x1808) = uVar74;
    iVar33 = *(int *)(param_1 + 0x11e4);
    __memcpy_chk(auStack_2440,aiStack_1340,(long)iVar33 << 2,0x10);
    if ((*(int *)(param_1 + 0x1684) == 0) ||
       (*(int *)(param_1 + (long)(*(int *)(param_1 + 0x1684) + -1) * 4 + 0x1284) == 0)) {
      cVar7 = *(char *)puVar36 + *(char *)(param_1 + 0x17e4);
      if ('>' < cVar7) {
        cVar7 = '?';
      }
      *local_2590 = local_2590[0xa5c];
      *(char *)puVar36 = cVar7;
    }
    silk_gains_dequant(aiStack_1340,puVar36,param_1 + 0x11bc,local_2594 == 2,iVar33);
    pvVar3 = local_25b0;
    if ((*(int *)(param_1 + 0x1214) < 2) && (*(int *)(param_1 + 0x1240) < 1)) {
      iVar33 = *(int *)(param_1 + 0x1684);
      *(undefined4 *)((long)aiStack_2668 + lVar24 + 8) = local_12c8;
      *(int *)((long)aiStack_2668 + lVar24) = local_11c4;
      *(int **)((long)alStack_2690 + lVar24 + 0x18) = aiStack_1340;
      *(undefined **)((long)alStack_2690 + lVar24 + 0x20) = auStack_12c4;
      *(undefined **)((long)alStack_2690 + lVar24 + 8) = auStack_11e4;
      *(undefined **)((long)alStack_2690 + lVar24 + 0x10) = auStack_11f4;
      *(undefined **)((long)alStack_2690 + lVar24) = auStack_11d4;
      silk_NSQ_c(param_1,auStack_1178,puVar36,pvVar3,param_1 + (long)iVar33 * 0x140 + 0x1854,
                 auStack_1330,auStack_12f0,auStack_12b4);
    }
    else {
      iVar33 = *(int *)(param_1 + 0x1684);
      *(undefined4 *)((long)aiStack_2668 + lVar24 + 8) = local_12c8;
      *(int *)((long)aiStack_2668 + lVar24) = local_11c4;
      *(int **)((long)alStack_2690 + lVar24 + 0x18) = aiStack_1340;
      *(undefined **)((long)alStack_2690 + lVar24 + 0x20) = auStack_12c4;
      *(undefined **)((long)alStack_2690 + lVar24 + 8) = auStack_11e4;
      *(undefined **)((long)alStack_2690 + lVar24 + 0x10) = auStack_11f4;
      *(undefined **)((long)alStack_2690 + lVar24) = auStack_11d4;
      silk_NSQ_del_dec_c(param_1,auStack_1178,puVar36,pvVar3,param_1 + (long)iVar33 * 0x140 + 0x1854
                         ,auStack_1330,auStack_12f0,auStack_12b4);
    }
    __memcpy_chk(aiStack_1340,auStack_2440,(long)*(int *)(param_1 + 0x11e4) << 2,0x1c4);
  }
  iVar33 = silk_gains_ID(local_2570,*(undefined4 *)(param_1 + 0x11e4));
  local_25a0 = (void *)(param_1 + 0x94);
  pvStack_2498 = local_2578[1];
  local_24a0 = *local_2578;
  pvStack_2488 = local_2578[3];
  pvStack_2490 = local_2578[2];
  local_2470 = local_2578[6];
  pvStack_2478 = SUB168(*(undefined (*) [16])(local_2578 + 4),8);
  local_2480 = SUB168(*(undefined (*) [16])(local_2578 + 4),0);
  memcpy(auStack_1178,local_25a0,0x1100);
  local_263c = (uint)(byte)local_2590[0xf6];
  local_25d8 = *(undefined4 *)(param_1 + 0x1698);
  local_25d4 = (uint)*(ushort *)(param_1 + 0x169c);
  local_2618 = auStack_2b50 + lVar24;
  uVar53 = 0;
  pvVar3 = (void *)(param_1 + 0x12b4);
  uVar54 = 0x100;
  puStack_25e0 = auStack_1330;
  local_25e8 = auStack_12f0;
  local_2514 = 0;
  local_25f0 = auStack_12b4;
  local_25f8 = auStack_11d4;
  local_2510 = 0;
  local_2588 = 0;
  local_25a4 = 0;
  local_2600 = auStack_11e4;
  local_2608 = auStack_11f4;
  local_2610 = auStack_12c4;
  local_2504 = 0;
  local_261c = 0;
  local_25d0 = (int *)((ulong)&local_2450 | 4);
  local_2580 = 0;
  local_2568 = local_2590 + 0xa5c;
  local_2584 = (uint)(local_2594 == 2);
  local_2508 = -1;
  local_25a8 = local_250c + -5;
  local_2648 = (void *)(param_1 + 0x1290);
  local_25c0 = param_1 + 0x12c4;
  psStack_25c8 = (short *)((ulong)local_2458 | 2);
  uStack_2538 = 0x1010100710101006;
  local_2540 = 0x1010100510101004;
  uStack_2528 = 0x1010100310101002;
  uStack_2530 = 0x1010100110101000;
  local_257c = -1;
  uStack_2558 = 0x1010100f1010100e;
  local_2560 = 0x1010100d1010100c;
  uStack_2548 = 0x1010100b1010100a;
  uStack_2550 = 0x1010100910101008;
  uVar106 = extraout_b28;
  uVar107 = extraout_var;
  uVar108 = extraout_var_00;
  uVar109 = extraout_var_01;
  uVar110 = extraout_var_02;
  uVar111 = extraout_var_03;
  uVar112 = extraout_var_04;
  uVar113 = extraout_var_05;
  uVar56 = 0;
  uVar61 = 0;
  do {
    iVar46 = local_2514;
    if ((iVar33 != local_2508) && (iVar46 = local_2510, iVar33 != local_257c)) {
      local_2500 = CONCAT17(uVar113,CONCAT16(uVar112,CONCAT15(uVar111,CONCAT14(uVar110,CONCAT13(
                                                  uVar109,CONCAT12(uVar108,CONCAT11(uVar107,uVar106)
                                                                  ))))));
      uStack_24f8 = CONCAT17(in_register_0000538f,
                             CONCAT16(in_register_0000538e,
                                      CONCAT15(in_register_0000538d,
                                               CONCAT14(in_register_0000538c,
                                                        CONCAT13(in_register_0000538b,
                                                                 CONCAT12(in_register_0000538a,
                                                                          CONCAT11(
                                                  in_register_00005389,in_register_00005388)))))));
      uStack_24f0 = uVar56;
      uStack_24e8 = uVar61;
      if (uVar53 != 0) {
        local_2578[1] = pvStack_2498;
        *local_2578 = local_24a0;
        local_2578[3] = pvStack_2488;
        local_2578[2] = pvStack_2490;
        local_2578[5] = pvStack_2478;
        local_2578[4] = local_2480;
        local_2578[6] = local_2470;
        memcpy(local_25a0,auStack_1178,0x1100);
        local_2590[0xf6] = (char)local_263c;
        *(short *)(param_1 + 0x169c) = (short)local_25d4;
        *(undefined4 *)(param_1 + 0x1698) = local_25d8;
      }
      if ((*(int *)(param_1 + 0x1214) < 2) && (*(int *)(param_1 + 0x1240) < 1)) {
        *(int *)((long)aiStack_2b68 + lVar24) = local_11c4;
        *(undefined4 *)((long)aiStack_2b68 + lVar24 + 8) = local_12c8;
        puVar26 = puStack_25e0;
        puVar25 = local_25e8;
        puVar35 = local_2610;
        *(int **)((long)alStack_2b90 + lVar24 + 0x18) = aiStack_1340;
        *(undefined **)((long)alStack_2b90 + lVar24 + 0x20) = puVar35;
        pbVar30 = local_2570;
        pvVar28 = local_25a0;
        *(undefined **)((long)alStack_2b90 + lVar24 + 0x10) = local_2608;
        pvVar27 = local_25b0;
        puVar35 = local_25f0;
        *(undefined **)((long)alStack_2b90 + lVar24 + 8) = local_2600;
        *(undefined **)((long)alStack_2b90 + lVar24) = local_25f8;
        silk_NSQ_c(param_1,pvVar28,pbVar30,pvVar27,pvVar3,puVar26,puVar25,puVar35);
      }
      else {
        *(int *)((long)aiStack_2b68 + lVar24) = local_11c4;
        *(undefined4 *)((long)aiStack_2b68 + lVar24 + 8) = local_12c8;
        puVar26 = puStack_25e0;
        puVar25 = local_25e8;
        puVar35 = local_2610;
        *(int **)((long)alStack_2b90 + lVar24 + 0x18) = aiStack_1340;
        *(undefined **)((long)alStack_2b90 + lVar24 + 0x20) = puVar35;
        pbVar30 = local_2570;
        pvVar28 = local_25a0;
        *(undefined **)((long)alStack_2b90 + lVar24 + 0x10) = local_2608;
        pvVar27 = local_25b0;
        puVar35 = local_25f0;
        *(undefined **)((long)alStack_2b90 + lVar24 + 8) = local_2600;
        *(undefined **)((long)alStack_2b90 + lVar24) = local_25f8;
        silk_NSQ_del_dec_c(param_1,pvVar28,pbVar30,pvVar27,pvVar3,puVar26,puVar25,puVar35);
      }
      ppvVar29 = local_2578;
      bVar32 = local_2504 != 0;
      if (uVar53 == 6 && !bVar32) {
        pvStack_24d8 = local_2578[1];
        local_24e0 = *local_2578;
        pvStack_24c8 = local_2578[3];
        pvStack_24d0 = local_2578[2];
        local_24b0 = local_2578[6];
        pvStack_24b8 = SUB168(*(undefined (*) [16])(local_2578 + 4),8);
        local_24c0 = SUB168(*(undefined (*) [16])(local_2578 + 4),0);
      }
      silk_encode_indices(param_1,local_2578,*(undefined4 *)(param_1 + 0x1684),0,local_2594);
      silk_encode_pulses(ppvVar29,(long)(char)local_2590[0xf1],(long)(char)local_2590[0xf2],pvVar3,
                         *(undefined4 *)(param_1 + 0x11e8));
      bVar31 = local_1180;
      iVar46 = *(int *)(ppvVar29 + 3) + (int)LZCOUNT(*(undefined4 *)(ppvVar29 + 4)) + -0x20;
      if (uVar53 != 6 || bVar32) {
LAB_00e897f4:
        uVar106 = (undefined)local_2500;
        uVar107 = (undefined)((ulong)local_2500 >> 8);
        uVar108 = (undefined)((ulong)local_2500 >> 0x10);
        uVar109 = (undefined)((ulong)local_2500 >> 0x18);
        uVar110 = (undefined)((ulong)local_2500 >> 0x20);
        uVar111 = (undefined)((ulong)local_2500 >> 0x28);
        uVar112 = (undefined)((ulong)local_2500 >> 0x30);
        uVar113 = (undefined)((ulong)local_2500 >> 0x38);
        in_register_00005388 = (undefined)uStack_24f8;
        in_register_00005389 = (undefined)((ulong)uStack_24f8 >> 8);
        in_register_0000538a = (undefined)((ulong)uStack_24f8 >> 0x10);
        in_register_0000538b = (undefined)((ulong)uStack_24f8 >> 0x18);
        in_register_0000538c = (undefined)((ulong)uStack_24f8 >> 0x20);
        in_register_0000538d = (undefined)((ulong)uStack_24f8 >> 0x28);
        in_register_0000538e = (undefined)((ulong)uStack_24f8 >> 0x30);
        in_register_0000538f = (undefined)((ulong)uStack_24f8 >> 0x38);
      }
      else {
        uVar106 = (undefined)local_2500;
        uVar107 = (undefined)((ulong)local_2500 >> 8);
        uVar108 = (undefined)((ulong)local_2500 >> 0x10);
        uVar109 = (undefined)((ulong)local_2500 >> 0x18);
        uVar110 = (undefined)((ulong)local_2500 >> 0x20);
        uVar111 = (undefined)((ulong)local_2500 >> 0x28);
        uVar112 = (undefined)((ulong)local_2500 >> 0x30);
        uVar113 = (undefined)((ulong)local_2500 >> 0x38);
        in_register_00005388 = (undefined)uStack_24f8;
        in_register_00005389 = (undefined)((ulong)uStack_24f8 >> 8);
        in_register_0000538a = (undefined)((ulong)uStack_24f8 >> 0x10);
        in_register_0000538b = (undefined)((ulong)uStack_24f8 >> 0x18);
        in_register_0000538c = (undefined)((ulong)uStack_24f8 >> 0x20);
        in_register_0000538d = (undefined)((ulong)uStack_24f8 >> 0x28);
        in_register_0000538e = (undefined)((ulong)uStack_24f8 >> 0x30);
        in_register_0000538f = (undefined)((ulong)uStack_24f8 >> 0x38);
        if (local_250c < iVar46) {
          local_2578[6] = local_24b0;
          local_2578[1] = pvStack_24d8;
          *local_2578 = local_24e0;
          local_2578[3] = pvStack_24c8;
          local_2578[2] = pvStack_24d0;
          local_2578[5] = pvStack_24b8;
          local_2578[4] = local_24c0;
          uVar5 = *(uint *)(param_1 + 0x11e4);
          *local_2568 = local_1180;
          if (0 < (int)uVar5) {
            memset(local_2648,4,(ulong)uVar5);
          }
          if (local_2594 != 2) {
            *local_2570 = bVar31;
          }
          *(short *)(param_1 + 0x169c) = (short)local_25d4;
          *(undefined4 *)(param_1 + 0x1698) = local_25d8;
          if (0 < (int)*(uint *)(param_1 + 0x11e8)) {
            memset(pvVar3,0,(ulong)*(uint *)(param_1 + 0x11e8));
          }
          ppvVar29 = local_2578;
          silk_encode_indices(param_1,local_2578,*(undefined4 *)(param_1 + 0x1684),0,local_2594);
          silk_encode_pulses(ppvVar29,(long)(char)local_2590[0xf1],(long)(char)local_2590[0xf2],
                             pvVar3,*(undefined4 *)(param_1 + 0x11e8));
          iVar46 = *(int *)(ppvVar29 + 3) + (int)LZCOUNT(*(undefined4 *)(ppvVar29 + 4)) + -0x20;
          goto LAB_00e897f4;
        }
      }
      uVar56 = uStack_24f0;
      uVar61 = uStack_24e8;
      if (((local_25b4 == 0) && (uVar53 == 0)) && (iVar46 <= local_250c)) goto LAB_00e8916c;
    }
    if (uVar53 == 6) {
      if ((local_2504 != 0) && ((iVar33 == local_2508 || (local_250c < iVar46)))) {
        local_2578[1] = pvStack_24d8;
        *local_2578 = local_24e0;
        local_2578[3] = pvStack_24c8;
        local_2578[2] = pvStack_24d0;
        local_2578[5] = pvStack_24b8;
        local_2578[4] = local_24c0;
        local_2578[6] = local_24b0;
        memcpy(*local_2578,local_2618,(ulong)pvStack_24c8 >> 0x20);
        memcpy(local_25a0,auStack_2440,0x1100);
        *local_2568 = (byte)local_261c;
      }
      goto LAB_00e8916c;
    }
    iVar50 = iVar46 - local_250c;
    sVar9 = (short)uVar54;
    if (iVar50 == 0 || iVar46 < local_250c) {
      if (local_25a8 <= iVar46) goto LAB_00e8916c;
      local_2500 = CONCAT17(uVar113,CONCAT16(uVar112,CONCAT15(uVar111,CONCAT14(uVar110,CONCAT13(
                                                  uVar109,CONCAT12(uVar108,CONCAT11(uVar107,uVar106)
                                                                  ))))));
      uStack_24f8 = CONCAT17(in_register_0000538f,
                             CONCAT16(in_register_0000538e,
                                      CONCAT15(in_register_0000538d,
                                               CONCAT14(in_register_0000538c,
                                                        CONCAT13(in_register_0000538b,
                                                                 CONCAT12(in_register_0000538a,
                                                                          CONCAT11(
                                                  in_register_00005389,in_register_00005388)))))));
      uStack_24f0 = uVar56;
      uStack_24e8 = uVar61;
      if (iVar33 != local_2508) {
        pvStack_24d8 = local_2578[1];
        local_24e0 = *local_2578;
        pvStack_24c8 = local_2578[3];
        pvStack_24d0 = local_2578[2];
        local_24b0 = local_2578[6];
        pvStack_24b8 = SUB168(*(undefined (*) [16])(local_2578 + 4),8);
        local_24c0 = SUB168(*(undefined (*) [16])(local_2578 + 4),0);
        __memcpy_chk(local_2618,*local_2578,*(undefined4 *)((long)local_2578 + 0x1c),0x4fb);
        memcpy(auStack_2440,local_25a0,0x1100);
        uVar106 = (undefined)local_2500;
        uVar107 = (undefined)((ulong)local_2500 >> 8);
        uVar108 = (undefined)((ulong)local_2500 >> 0x10);
        uVar109 = (undefined)((ulong)local_2500 >> 0x18);
        uVar110 = (undefined)((ulong)local_2500 >> 0x20);
        uVar111 = (undefined)((ulong)local_2500 >> 0x28);
        uVar112 = (undefined)((ulong)local_2500 >> 0x30);
        uVar113 = (undefined)((ulong)local_2500 >> 0x38);
        in_register_00005388 = (undefined)uStack_24f8;
        in_register_00005389 = (undefined)((ulong)uStack_24f8 >> 8);
        in_register_0000538a = (undefined)((ulong)uStack_24f8 >> 0x10);
        in_register_0000538b = (undefined)((ulong)uStack_24f8 >> 0x18);
        in_register_0000538c = (undefined)((ulong)uStack_24f8 >> 0x20);
        in_register_0000538d = (undefined)((ulong)uStack_24f8 >> 0x28);
        in_register_0000538e = (undefined)((ulong)uStack_24f8 >> 0x30);
        in_register_0000538f = (undefined)((ulong)uStack_24f8 >> 0x38);
        local_261c = (uint)*local_2568;
      }
      local_2588 = (int)sVar9;
      if ((local_2580 & 1) == 0) {
        iVar55 = 0;
        if (*(int *)(param_1 + 0x11e8) != 0) {
          iVar55 = (iVar50 * 0x80) / *(int *)(param_1 + 0x11e8);
        }
        uVar54 = silk_log2lin(iVar55 + 0x800);
        uVar106 = (undefined)local_2500;
        uVar107 = (undefined)((ulong)local_2500 >> 8);
        uVar108 = (undefined)((ulong)local_2500 >> 0x10);
        uVar109 = (undefined)((ulong)local_2500 >> 0x18);
        uVar110 = (undefined)((ulong)local_2500 >> 0x20);
        uVar111 = (undefined)((ulong)local_2500 >> 0x28);
        uVar112 = (undefined)((ulong)local_2500 >> 0x30);
        uVar113 = (undefined)((ulong)local_2500 >> 0x38);
        in_register_00005388 = (undefined)uStack_24f8;
        in_register_00005389 = (undefined)((ulong)uStack_24f8 >> 8);
        in_register_0000538a = (undefined)((ulong)uStack_24f8 >> 0x10);
        in_register_0000538b = (undefined)((ulong)uStack_24f8 >> 0x18);
        in_register_0000538c = (undefined)((ulong)uStack_24f8 >> 0x20);
        in_register_0000538d = (undefined)((ulong)uStack_24f8 >> 0x28);
        in_register_0000538e = (undefined)((ulong)uStack_24f8 >> 0x30);
        in_register_0000538f = (undefined)((ulong)uStack_24f8 >> 0x38);
        uVar54 = (uVar54 & 0xffffffff) * (long)sVar9 >> 0x10;
        local_2504 = 1;
        local_2514 = iVar46;
        local_2508 = iVar33;
      }
      else {
        local_2504 = 1;
        local_2514 = iVar46;
        local_2508 = iVar33;
LAB_00e8998c:
        iVar33 = 0;
        if (local_2510 - local_2514 != 0) {
          iVar33 = ((local_25a4 - local_2588) * (local_250c - local_2514)) /
                   (local_2510 - local_2514);
        }
        iVar46 = local_25a4 - local_2588 >> 2;
        uVar5 = iVar46 + local_2588;
        uVar54 = (ulong)uVar5;
        iVar50 = (int)(short)(iVar33 + local_2588);
        if (iVar50 <= (int)uVar5) {
          uVar5 = local_25a4 - iVar46;
          if ((int)uVar5 <= iVar50) {
            uVar5 = iVar33 + local_2588;
          }
          uVar54 = (ulong)uVar5;
        }
      }
    }
    else {
      if ((local_2504 == 0) && (1 < uVar53)) {
        local_2580 = 0;
        iVar33 = -1;
        local_11c4 = local_11c4 + (local_11c4 >> 1);
        uVar5 = *(uint *)(param_1 + 0x11e4);
        iVar46 = local_2510;
joined_r0x00e899f8:
        if (0 < (int)uVar5) {
          uVar6 = *(uint *)(param_1 + 0x11ec);
          iVar50 = 0;
          uVar8 = uVar6 - 1;
          uVar39 = (ulong)uVar8 + 1;
          uVar51 = uVar39 & 0x1fffffff8;
          uVar41 = uVar39 & 0x1ffffffe0;
          uVar47 = 0;
          uVar52 = uVar6;
LAB_00e89a44:
          do {
            uVar2 = uVar47 + 1;
            uVar34 = (ulong)iVar50;
            if ((int)(uVar6 * (int)uVar47) < (int)(uVar6 * (int)uVar2)) {
              if (uVar8 < 7) {
                iVar55 = 0;
              }
              else {
                if (uVar8 < 0x1f) {
                  iVar55 = 0;
                  uVar37 = 0;
                }
                else {
                  iVar55 = 0;
                  iVar57 = 0;
                  iVar60 = 0;
                  iVar62 = 0;
                  puVar36 = (undefined8 *)(local_25c0 + uVar34);
                  iVar70 = 0;
                  iVar71 = 0;
                  iVar72 = 0;
                  iVar73 = 0;
                  iVar63 = 0;
                  iVar65 = 0;
                  iVar58 = 0;
                  iVar59 = 0;
                  iVar86 = 0;
                  iVar87 = 0;
                  iVar88 = 0;
                  iVar89 = 0;
                  iVar78 = 0;
                  iVar79 = 0;
                  iVar80 = 0;
                  iVar81 = 0;
                  iVar82 = 0;
                  iVar83 = 0;
                  iVar84 = 0;
                  iVar85 = 0;
                  uVar37 = uVar41;
                  auVar69 = ZEXT816(0);
                  auVar75 = ZEXT816(0);
                  do {
                    auVar77 = *(undefined (*) [16])(puVar36 + -2);
                    uVar66 = puVar36[1];
                    uVar64 = *puVar36;
                    uVar37 = uVar37 - 0x20;
                    puVar36 = puVar36 + 4;
                    uVar106 = MP_INT_ABS(auVar77[0]);
                    uVar107 = MP_INT_ABS(auVar77[1]);
                    uVar108 = MP_INT_ABS(auVar77[2]);
                    uVar109 = MP_INT_ABS(auVar77[3]);
                    uVar110 = MP_INT_ABS(auVar77[4]);
                    uVar111 = MP_INT_ABS(auVar77[5]);
                    uVar112 = MP_INT_ABS(auVar77[6]);
                    uVar113 = MP_INT_ABS(auVar77[7]);
                    in_register_00005388 = MP_INT_ABS(auVar77[8]);
                    in_register_00005389 = MP_INT_ABS(auVar77[9]);
                    in_register_0000538a = MP_INT_ABS(auVar77[10]);
                    in_register_0000538b = MP_INT_ABS(auVar77[11]);
                    in_register_0000538c = MP_INT_ABS(auVar77[12]);
                    in_register_0000538d = MP_INT_ABS(auVar77[13]);
                    in_register_0000538e = MP_INT_ABS(auVar77[14]);
                    in_register_0000538f = MP_INT_ABS(auVar77[15]);
                    auVar90[0] = MP_INT_ABS((char)uVar64);
                    auVar90[1] = MP_INT_ABS((char)((ulong)uVar64 >> 8));
                    auVar90[2] = MP_INT_ABS((char)((ulong)uVar64 >> 0x10));
                    auVar90[3] = MP_INT_ABS((char)((ulong)uVar64 >> 0x18));
                    auVar90[4] = MP_INT_ABS((char)((ulong)uVar64 >> 0x20));
                    auVar90[5] = MP_INT_ABS((char)((ulong)uVar64 >> 0x28));
                    auVar90[6] = MP_INT_ABS((char)((ulong)uVar64 >> 0x30));
                    auVar90[7] = MP_INT_ABS((char)((ulong)uVar64 >> 0x38));
                    auVar90[8] = MP_INT_ABS((char)uVar66);
                    auVar90[9] = MP_INT_ABS((char)((ulong)uVar66 >> 8));
                    auVar90[10] = MP_INT_ABS((char)((ulong)uVar66 >> 0x10));
                    auVar90[11] = MP_INT_ABS((char)((ulong)uVar66 >> 0x18));
                    auVar90[12] = MP_INT_ABS((char)((ulong)uVar66 >> 0x20));
                    auVar90[13] = MP_INT_ABS((char)((ulong)uVar66 >> 0x28));
                    auVar90[14] = MP_INT_ABS((char)((ulong)uVar66 >> 0x30));
                    auVar90[15] = MP_INT_ABS((char)((ulong)uVar66 >> 0x38));
                    uVar91 = (undefined)uVar61;
                    uVar92 = (undefined)((ulong)uVar61 >> 8);
                    uVar93 = (undefined)((ulong)uVar61 >> 0x10);
                    uVar94 = (undefined)((ulong)uVar61 >> 0x18);
                    uVar95 = (undefined)((ulong)uVar61 >> 0x20);
                    uVar96 = (undefined)((ulong)uVar61 >> 0x28);
                    uVar97 = (undefined)((ulong)uVar61 >> 0x30);
                    uVar98 = (undefined)((ulong)uVar61 >> 0x38);
                    auVar99._8_8_ = uStack_2528;
                    auVar99._0_8_ = uStack_2530;
                    auVar102[1] = uVar107;
                    auVar102[0] = uVar106;
                    auVar102[2] = uVar108;
                    auVar102[3] = uVar109;
                    auVar102[4] = uVar110;
                    auVar102[5] = uVar111;
                    auVar102[6] = uVar112;
                    auVar102[7] = uVar113;
                    auVar102[8] = in_register_00005388;
                    auVar102[9] = in_register_00005389;
                    auVar102[10] = in_register_0000538a;
                    auVar102[11] = in_register_0000538b;
                    auVar102[12] = in_register_0000538c;
                    auVar102[13] = in_register_0000538d;
                    auVar102[14] = in_register_0000538e;
                    auVar102[15] = in_register_0000538f;
                    auVar18._8_8_ = uVar61;
                    auVar18._0_8_ = uVar56;
                    auVar99 = a64_TBL(ZEXT816(0),auVar102,auVar18,auVar99);
                    auVar100._8_8_ = uStack_2538;
                    auVar100._0_8_ = local_2540;
                    auVar15[1] = uVar107;
                    auVar15[0] = uVar106;
                    auVar15[2] = uVar108;
                    auVar15[3] = uVar109;
                    auVar15[4] = uVar110;
                    auVar15[5] = uVar111;
                    auVar15[6] = uVar112;
                    auVar15[7] = uVar113;
                    auVar15[8] = in_register_00005388;
                    auVar15[9] = in_register_00005389;
                    auVar15[10] = in_register_0000538a;
                    auVar15[11] = in_register_0000538b;
                    auVar15[12] = in_register_0000538c;
                    auVar15[13] = in_register_0000538d;
                    auVar15[14] = in_register_0000538e;
                    auVar15[15] = in_register_0000538f;
                    auVar19._8_8_ = uVar61;
                    auVar19._0_8_ = uVar56;
                    auVar100 = a64_TBL(ZEXT816(0),auVar15,auVar19,auVar100);
                    auVar101._8_8_ = uStack_2548;
                    auVar101._0_8_ = uStack_2550;
                    auVar16[1] = uVar107;
                    auVar16[0] = uVar106;
                    auVar16[2] = uVar108;
                    auVar16[3] = uVar109;
                    auVar16[4] = uVar110;
                    auVar16[5] = uVar111;
                    auVar16[6] = uVar112;
                    auVar16[7] = uVar113;
                    auVar16[8] = in_register_00005388;
                    auVar16[9] = in_register_00005389;
                    auVar16[10] = in_register_0000538a;
                    auVar16[11] = in_register_0000538b;
                    auVar16[12] = in_register_0000538c;
                    auVar16[13] = in_register_0000538d;
                    auVar16[14] = in_register_0000538e;
                    auVar16[15] = in_register_0000538f;
                    auVar20._8_8_ = uVar61;
                    auVar20._0_8_ = uVar56;
                    auVar101 = a64_TBL(ZEXT816(0),auVar16,auVar20,auVar101);
                    auVar17[1] = uVar107;
                    auVar17[0] = uVar106;
                    auVar17[2] = uVar108;
                    auVar17[3] = uVar109;
                    auVar17[4] = uVar110;
                    auVar17[5] = uVar111;
                    auVar17[6] = uVar112;
                    auVar17[7] = uVar113;
                    auVar17[8] = in_register_00005388;
                    auVar17[9] = in_register_00005389;
                    auVar17[10] = in_register_0000538a;
                    auVar17[11] = in_register_0000538b;
                    auVar17[12] = in_register_0000538c;
                    auVar17[13] = in_register_0000538d;
                    auVar17[14] = in_register_0000538e;
                    auVar17[15] = in_register_0000538f;
                    auVar21._8_8_ = uVar61;
                    auVar21._0_8_ = uVar56;
                    auVar22._8_8_ = uStack_2558;
                    auVar22._0_8_ = local_2560;
                    auVar102 = a64_TBL(ZEXT816(0),auVar17,auVar21,auVar22);
                    auVar77[8] = uVar91;
                    auVar77._0_8_ = uVar56;
                    auVar77[9] = uVar92;
                    auVar77[10] = uVar93;
                    auVar77[11] = uVar94;
                    auVar77[12] = uVar95;
                    auVar77[13] = uVar96;
                    auVar77[14] = uVar97;
                    auVar77[15] = uVar98;
                    auVar103._8_8_ = uStack_2528;
                    auVar103._0_8_ = uStack_2530;
                    auVar103 = a64_TBL(ZEXT816(0),auVar90,auVar77,auVar103);
                    auVar104[8] = uVar91;
                    auVar104._0_8_ = uVar56;
                    auVar104[9] = uVar92;
                    auVar104[10] = uVar93;
                    auVar104[11] = uVar94;
                    auVar104[12] = uVar95;
                    auVar104[13] = uVar96;
                    auVar104[14] = uVar97;
                    auVar104[15] = uVar98;
                    auVar13._8_8_ = uStack_2538;
                    auVar13._0_8_ = local_2540;
                    auVar104 = a64_TBL(ZEXT816(0),auVar90,auVar104,auVar13);
                    auVar105[8] = uVar91;
                    auVar105._0_8_ = uVar56;
                    auVar105[9] = uVar92;
                    auVar105[10] = uVar93;
                    auVar105[11] = uVar94;
                    auVar105[12] = uVar95;
                    auVar105[13] = uVar96;
                    auVar105[14] = uVar97;
                    auVar105[15] = uVar98;
                    auVar14._8_8_ = uStack_2548;
                    auVar14._0_8_ = uStack_2550;
                    auVar105 = a64_TBL(ZEXT816(0),auVar90,auVar105,auVar14);
                    auVar10[8] = uVar91;
                    auVar10._0_8_ = uVar56;
                    auVar10[9] = uVar92;
                    auVar10[10] = uVar93;
                    auVar10[11] = uVar94;
                    auVar10[12] = uVar95;
                    auVar10[13] = uVar96;
                    auVar10[14] = uVar97;
                    auVar10[15] = uVar98;
                    auVar23._8_8_ = uStack_2558;
                    auVar23._0_8_ = local_2560;
                    auVar77 = a64_TBL(ZEXT816(0),auVar90,auVar10,auVar23);
                    auVar67._0_4_ = auVar69._0_4_ + auVar102._0_4_;
                    auVar67._4_4_ = auVar69._4_4_ + auVar102._4_4_;
                    auVar67._8_4_ = auVar69._8_4_ + auVar102._8_4_;
                    auVar67._12_4_ = auVar69._12_4_ + auVar102._12_4_;
                    iVar63 = iVar63 + auVar101._0_4_;
                    iVar65 = iVar65 + auVar101._4_4_;
                    iVar58 = iVar58 + auVar101._8_4_;
                    iVar59 = iVar59 + auVar101._12_4_;
                    iVar70 = iVar70 + auVar100._0_4_;
                    iVar71 = iVar71 + auVar100._4_4_;
                    iVar72 = iVar72 + auVar100._8_4_;
                    iVar73 = iVar73 + auVar100._12_4_;
                    iVar55 = iVar55 + auVar99._0_4_;
                    iVar57 = iVar57 + auVar99._4_4_;
                    iVar60 = iVar60 + auVar99._8_4_;
                    iVar62 = iVar62 + auVar99._12_4_;
                    iVar82 = iVar82 + auVar77._0_4_;
                    iVar83 = iVar83 + auVar77._4_4_;
                    iVar84 = iVar84 + auVar77._8_4_;
                    iVar85 = iVar85 + auVar77._12_4_;
                    iVar78 = iVar78 + auVar105._0_4_;
                    iVar79 = iVar79 + auVar105._4_4_;
                    iVar80 = iVar80 + auVar105._8_4_;
                    iVar81 = iVar81 + auVar105._12_4_;
                    iVar86 = iVar86 + auVar104._0_4_;
                    iVar87 = iVar87 + auVar104._4_4_;
                    iVar88 = iVar88 + auVar104._8_4_;
                    iVar89 = iVar89 + auVar104._12_4_;
                    auVar76._0_4_ = auVar75._0_4_ + auVar103._0_4_;
                    auVar76._4_4_ = auVar75._4_4_ + auVar103._4_4_;
                    auVar76._8_4_ = auVar75._8_4_ + auVar103._8_4_;
                    auVar76._12_4_ = auVar75._12_4_ + auVar103._12_4_;
                    auVar69 = auVar67;
                    auVar75 = auVar76;
                  } while (uVar37 != 0);
                  iVar55 = auVar76._0_4_ + iVar55 + iVar78 + iVar63 +
                           iVar86 + iVar70 + iVar82 + auVar67._0_4_ +
                           auVar76._4_4_ + iVar57 + iVar79 + iVar65 +
                           iVar87 + iVar71 + iVar83 + auVar67._4_4_ +
                           auVar76._8_4_ + iVar60 + iVar80 + iVar58 +
                           iVar88 + iVar72 + iVar84 + auVar67._8_4_ +
                           auVar76._12_4_ + iVar62 + iVar81 + iVar59 +
                           iVar89 + iVar73 + iVar85 + auVar67._12_4_;
                  if (uVar39 == uVar41) goto LAB_00e89bc0;
                  uVar37 = uVar41;
                  if ((uVar39 & 0x18) == 0) {
                    uVar34 = uVar41 + uVar34;
                    goto LAB_00e89ba0;
                  }
                }
                lVar4 = uVar37 + uVar34;
                iVar60 = 0;
                iVar62 = 0;
                iVar63 = 0;
                iVar65 = 0;
                uVar34 = uVar51 + uVar34;
                iVar57 = (int)((ulong)uVar56 >> 0x20);
                lVar44 = uVar37 - uVar51;
                puVar36 = (undefined8 *)((long)pvVar3 + lVar4);
                uVar64 = uVar61;
                do {
                  uVar66 = *puVar36;
                  lVar44 = lVar44 + 8;
                  auVar68[0] = MP_INT_ABS((char)uVar66);
                  auVar68[1] = MP_INT_ABS((char)((ulong)uVar66 >> 8));
                  auVar68[2] = MP_INT_ABS((char)((ulong)uVar66 >> 0x10));
                  auVar68[3] = MP_INT_ABS((char)((ulong)uVar66 >> 0x18));
                  auVar68[4] = MP_INT_ABS((char)((ulong)uVar66 >> 0x20));
                  auVar68[5] = MP_INT_ABS((char)((ulong)uVar66 >> 0x28));
                  auVar68[6] = MP_INT_ABS((char)((ulong)uVar66 >> 0x30));
                  auVar68[7] = MP_INT_ABS((char)((ulong)uVar66 >> 0x38));
                  auVar68._8_8_ = 0;
                  uVar74 = (undefined4)((ulong)uVar61 >> 0x20);
                  auVar69._8_4_ = (int)uVar61;
                  auVar69._0_8_ = uVar56;
                  auVar69._12_4_ = uVar74;
                  auVar12._8_8_ = uStack_2538;
                  auVar12._0_8_ = local_2540;
                  auVar77 = a64_TBL(ZEXT816(0),auVar68,auVar69,auVar12);
                  auVar75._8_4_ = (int)uVar61;
                  auVar75._0_8_ = uVar56;
                  auVar75._12_4_ = uVar74;
                  auVar11._8_8_ = uStack_2528;
                  auVar11._0_8_ = uStack_2530;
                  auVar69 = a64_TBL(ZEXT816(0),auVar68,auVar75,auVar11);
                  iVar60 = iVar60 + auVar77._0_4_;
                  iVar62 = iVar62 + auVar77._4_4_;
                  iVar63 = iVar63 + auVar77._8_4_;
                  iVar65 = iVar65 + auVar77._12_4_;
                  iVar55 = iVar55 + auVar69._0_4_;
                  iVar57 = iVar57 + auVar69._4_4_;
                  iVar58 = (int)uVar64 + auVar69._8_4_;
                  iVar59 = (int)((ulong)uVar64 >> 0x20) + auVar69._12_4_;
                  uVar64 = CONCAT44(iVar59,iVar58);
                  puVar36 = puVar36 + 1;
                } while (lVar44 != 0);
                iVar55 = iVar55 + iVar60 + iVar57 + iVar62 + iVar58 + iVar63 + iVar59 + iVar65;
                if (uVar39 == uVar51) goto LAB_00e89bc0;
              }
LAB_00e89ba0:
              pcVar38 = (char *)((long)pvVar3 + uVar34);
              do {
                cVar7 = *pcVar38;
                uVar1 = (int)uVar34 + 1;
                uVar34 = (ulong)uVar1;
                uVar40 = -(int)cVar7;
                if (-1 < cVar7) {
                  uVar40 = (uint)cVar7;
                }
                iVar55 = iVar55 + (uVar40 & 0xff);
                pcVar38 = pcVar38 + 1;
              } while (uVar52 != uVar1);
            }
            else {
              iVar55 = 0;
            }
LAB_00e89bc0:
            if ((uVar53 == 0) ||
               ((iVar55 < local_2468[uVar47] && (*(int *)((long)&local_2450 + uVar47 * 4) == 0)))) {
              local_2468[uVar47] = iVar55;
              local_2458[uVar47] = sVar9;
              iVar50 = iVar50 + uVar6;
              uVar52 = uVar52 + uVar6;
              uVar47 = uVar2;
              if (uVar2 == uVar5) break;
              goto LAB_00e89a44;
            }
            *(undefined4 *)((long)&local_2450 + uVar47 * 4) = 1;
            iVar50 = iVar50 + uVar6;
            uVar52 = uVar52 + uVar6;
            uVar47 = uVar2;
          } while (uVar2 != uVar5);
        }
        local_2504 = 0;
      }
      else {
        local_25a4 = (int)sVar9;
        if (local_2504 == 0) {
          local_2580 = 1;
          uVar5 = *(uint *)(param_1 + 0x11e4);
          goto joined_r0x00e899f8;
        }
        local_2580 = 1;
        uStack_24f0 = uVar56;
        uStack_24e8 = uVar61;
        local_257c = iVar33;
        local_2510 = iVar46;
        if ((local_2504 & 1) != 0) goto LAB_00e8998c;
      }
      uVar5 = (int)uVar54 << 1;
      if (0x3fff < sVar9) {
        uVar5 = 0x7fff;
      }
      uVar54 = (ulong)uVar5;
      uStack_24f0 = uVar56;
      uStack_24e8 = uVar61;
      local_257c = iVar33;
      local_2510 = iVar46;
    }
    pbVar30 = local_2570;
    uVar5 = *(uint *)(param_1 + 0x11e4);
    uVar39 = (ulong)uVar5;
    local_2500 = CONCAT17(uVar113,CONCAT16(uVar112,CONCAT15(uVar111,CONCAT14(uVar110,CONCAT13(
                                                  uVar109,CONCAT12(uVar108,CONCAT11(uVar107,uVar106)
                                                                  ))))));
    uStack_24f8 = CONCAT17(in_register_0000538f,
                           CONCAT16(in_register_0000538e,
                                    CONCAT15(in_register_0000538d,
                                             CONCAT14(in_register_0000538c,
                                                      CONCAT13(in_register_0000538b,
                                                               CONCAT12(in_register_0000538a,
                                                                        CONCAT11(
                                                  in_register_00005389,in_register_00005388)))))));
    if (0 < (int)uVar5) {
      iVar33 = -0x800000;
      sVar9 = (short)uVar54;
      if (uVar5 == 1) {
        uVar41 = 0;
      }
      else {
        uVar41 = uVar39 & 0xfffffffe;
        piVar42 = aiStack_1340;
        piVar45 = local_25d0;
        psVar43 = psStack_25c8;
        uVar47 = uVar41;
        do {
          sVar48 = sVar9;
          if (piVar45[-1] != 0) {
            sVar48 = psVar43[-1];
          }
          sVar49 = sVar9;
          if (*piVar45 != 0) {
            sVar49 = *psVar43;
          }
          psVar43 = psVar43 + 2;
          piVar45 = piVar45 + 2;
          iVar46 = (int)((ulong)((long)piVar42[0x6c] * (long)sVar48) >> 0x10);
          if (iVar46 == -0x800000 || iVar46 + 0x800000 < 0 != SCARRY4(iVar46,0x800000)) {
            iVar46 = iVar33;
          }
          iVar50 = (int)((ulong)((long)piVar42[0x6d] * (long)sVar49) >> 0x10);
          if (iVar50 == -0x800000 || iVar50 + 0x800000 < 0 != SCARRY4(iVar50,0x800000)) {
            iVar50 = iVar33;
          }
          if (0x7ffffe < iVar46) {
            iVar46 = 0x7fffff;
          }
          if (0x7ffffe < iVar50) {
            iVar50 = 0x7fffff;
          }
          uVar47 = uVar47 - 2;
          *piVar42 = iVar46 << 8;
          piVar42[1] = iVar50 << 8;
          piVar42 = piVar42 + 2;
        } while (uVar47 != 0);
        if (uVar41 == uVar39) goto LAB_00e89544;
      }
      psVar43 = local_2458 + uVar41;
      piVar45 = (int *)((long)&local_2450 + uVar41 * 4);
      lVar44 = uVar39 - uVar41;
      piVar42 = aiStack_1340 + uVar41;
      do {
        sVar48 = sVar9;
        if (*piVar45 != 0) {
          sVar48 = *psVar43;
        }
        psVar43 = psVar43 + 1;
        piVar45 = piVar45 + 1;
        iVar46 = (int)((ulong)((long)piVar42[0x6c] * (long)sVar48) >> 0x10);
        if (iVar46 == -0x800000 || iVar46 + 0x800000 < 0 != SCARRY4(iVar46,0x800000)) {
          iVar46 = iVar33;
        }
        if (0x7ffffe < iVar46) {
          iVar46 = 0x7fffff;
        }
        lVar44 = lVar44 + -1;
        *piVar42 = iVar46 << 8;
        piVar42 = piVar42 + 1;
      } while (lVar44 != 0);
    }
LAB_00e89544:
    *local_2568 = local_1180;
    silk_gains_quant(local_2570,aiStack_1340,local_2568,local_2584);
    iVar33 = silk_gains_ID(pbVar30,*(undefined4 *)(param_1 + 0x11e4));
    uVar53 = uVar53 + 1;
    uVar106 = (undefined)local_2500;
    uVar107 = (undefined)((ulong)local_2500 >> 8);
    uVar108 = (undefined)((ulong)local_2500 >> 0x10);
    uVar109 = (undefined)((ulong)local_2500 >> 0x18);
    uVar110 = (undefined)((ulong)local_2500 >> 0x20);
    uVar111 = (undefined)((ulong)local_2500 >> 0x28);
    uVar112 = (undefined)((ulong)local_2500 >> 0x30);
    uVar113 = (undefined)((ulong)local_2500 >> 0x38);
    in_register_00005388 = (undefined)uStack_24f8;
    in_register_00005389 = (undefined)((ulong)uStack_24f8 >> 8);
    in_register_0000538a = (undefined)((ulong)uStack_24f8 >> 0x10);
    in_register_0000538b = (undefined)((ulong)uStack_24f8 >> 0x18);
    in_register_0000538c = (undefined)((ulong)uStack_24f8 >> 0x20);
    in_register_0000538d = (undefined)((ulong)uStack_24f8 >> 0x28);
    in_register_0000538e = (undefined)((ulong)uStack_24f8 >> 0x30);
    in_register_0000538f = (undefined)((ulong)uStack_24f8 >> 0x38);
    uVar56 = uStack_24f0;
    uVar61 = uStack_24e8;
  } while( true );
}


