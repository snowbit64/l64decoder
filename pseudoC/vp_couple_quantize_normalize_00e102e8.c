// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _vp_couple_quantize_normalize
// Entry Point: 00e102e8
// Size: 3148 bytes
// Signature: undefined _vp_couple_quantize_normalize(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _vp_couple_quantize_normalize
               (ulong param_1,long param_2,uint *param_3,long param_4,long param_5,long param_6,
               void *param_7,undefined8 param_8,uint param_9)

{
  undefined (*pauVar1) [16];
  undefined (*pauVar2) [16];
  undefined (*pauVar3) [16];
  undefined (*pauVar4) [16];
  undefined (*pauVar5) [16];
  long lVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined (*pauVar13) [12];
  undefined auVar14 [16];
  undefined auVar15 [16];
  long *plVar16;
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  void **ppvVar20;
  undefined8 uVar21;
  undefined (*pauVar22) [16];
  undefined (*pauVar23) [16];
  undefined (*pauVar24) [16];
  void *pvVar25;
  uint uVar26;
  int *piVar27;
  undefined8 *puVar28;
  long lVar29;
  ulong uVar30;
  long *plVar31;
  ulong *puVar32;
  long lVar33;
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  ulong uVar40;
  void *pvVar41;
  int iVar42;
  long lVar43;
  long lVar44;
  ulong *puVar45;
  ulong uVar46;
  undefined8 *puVar47;
  long lVar48;
  undefined8 *puVar49;
  long lVar50;
  long *plVar51;
  long lVar52;
  undefined8 *puVar53;
  long lVar54;
  long lVar55;
  ulong uVar56;
  undefined8 *puVar57;
  long lVar58;
  ulong uVar59;
  void *__dest;
  int iVar60;
  ulong uVar61;
  void *pvVar62;
  float fVar63;
  undefined auVar64 [16];
  undefined auVar65 [16];
  undefined auVar66 [16];
  undefined4 uVar67;
  float fVar68;
  float fVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  float fVar73;
  undefined auVar74 [13];
  undefined auVar75 [16];
  undefined auVar76 [16];
  undefined auVar77 [16];
  undefined auVar78 [16];
  void *apvStack_1e0 [2];
  void *pvStack_1d0;
  long local_1c8;
  long local_1c0;
  long local_1b8;
  ulong local_1b0;
  ulong local_1a8;
  ulong local_1a0;
  ulong local_198;
  void *local_190;
  void *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  long local_170;
  long lStack_168;
  ulong local_158;
  long local_150;
  ulong local_148;
  ulong local_140;
  long local_138;
  long local_130;
  long local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long local_e0;
  long lStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulong local_b8;
  void **local_b0;
  uint *local_a8;
  long local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  long local_80;
  long local_78;
  long local_70;
  
  local_1c8 = tpidr_el0;
  local_b8 = (ulong)param_9;
  local_70 = *(long *)(local_1c8 + 0x28);
  piVar27 = *(int **)(param_3 + 2);
  uVar26 = *param_3;
  uVar59 = (ulong)uVar26;
  if (piVar27[0x7d] == 0) {
    uVar61 = 0x10;
  }
  else {
    uVar61 = (ulong)(uint)piVar27[0x7f];
  }
  uVar30 = -(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2;
  lVar58 = param_2 + uVar30;
  iVar42 = *(int *)(lVar58 + 0xfc);
  lVar58 = (long)*(int *)(lVar58 + 0x138);
  uVar34 = (-(ulong)(param_9 >> 0x1f) & 0xfffffff800000000 | local_b8 << 3) + 0xf &
           0xfffffffffffffff0;
  local_a0 = (long)*(int *)(param_2 + (long)*piVar27 * 0x3c + uVar30 + 0x84);
  local_88 = (long *)((long)&pvStack_1d0 - uVar34);
  plVar31 = (long *)((long)local_88 - uVar34);
  plVar51 = (long *)((long)plVar31 - uVar34);
  ppvVar20 = (void **)((long)plVar51 - uVar34);
  local_1a8 = -(ulong)(param_9 >> 0x1f) & 0xfffffffc00000000 | local_b8 << 2;
  __dest = (void *)((long)ppvVar20 - (local_1a8 + 0xf & 0xfffffffffffffff0));
  iVar60 = (int)uVar61;
  local_1b0 = -(ulong)(iVar60 * param_9 >> 0x1f) & 0xfffffffc00000000 |
              (ulong)(iVar60 * param_9) << 2;
  puVar9 = &UNK_0054c210;
  if ((int)uVar26 < 0x3e9) {
    puVar9 = &DAT_0054c1c8;
  }
  uVar30 = local_1b0 + 0xf & 0xfffffffffffffff0;
  lVar38 = (long)__dest - uVar30;
  lVar43 = lVar38 - uVar30;
  local_a8 = param_3;
  local_90 = plVar31;
  local_80 = param_6;
  local_78 = param_4;
  *local_88 = lVar38;
  *plVar31 = lVar43;
  lVar44 = lVar43 - uVar30;
  local_98 = plVar51;
  *plVar51 = lVar44;
  pvVar62 = (void *)(lVar44 - uVar30);
  local_b0 = ppvVar20;
  *ppvVar20 = pvVar62;
  if (1 < (int)param_9) {
    lVar52 = (long)iVar60;
    lVar48 = lVar52 * 4;
    uVar30 = local_b8 - 1;
    if (uVar30 < 2) {
      uVar56 = 1;
    }
    else {
      lVar39 = lVar52 * 8;
      lVar35 = 0;
      uVar56 = uVar30 | 1;
      uVar34 = uVar30 & 0xfffffffffffffffe;
      plVar31 = local_90;
      plVar51 = local_98;
      ppvVar20 = local_b0;
      plVar16 = local_88;
      do {
        uVar34 = uVar34 - 2;
        plVar16[1] = lVar38 + lVar48 + lVar35;
        plVar16[2] = lVar38 + lVar39 + lVar35;
        plVar31[1] = lVar43 + lVar48 + lVar35;
        plVar31[2] = lVar43 + lVar39 + lVar35;
        lVar33 = lVar35 + lVar48;
        plVar51[1] = lVar44 + lVar48 + lVar35;
        plVar51[2] = lVar44 + lVar39 + lVar35;
        lVar29 = lVar35 + lVar39;
        lVar35 = lVar35 + lVar39;
        ppvVar20[1] = (void *)((long)pvVar62 + lVar33);
        ppvVar20[2] = (void *)((long)pvVar62 + lVar29);
        plVar31 = plVar31 + 2;
        plVar51 = plVar51 + 2;
        ppvVar20 = ppvVar20 + 2;
        plVar16 = plVar16 + 2;
      } while (uVar34 != 0);
      local_1a0 = uVar61;
      local_198 = uVar59;
      local_190 = param_7;
      local_e0 = lVar58;
      local_d0 = param_8;
      if (uVar30 == (uVar30 & 0xfffffffffffffffe)) goto LAB_00e105f0;
    }
    lVar52 = uVar56 * lVar52 * 4;
    lVar35 = 0;
    do {
      lVar29 = lVar38 + lVar52;
      lVar33 = lVar43 + lVar52;
      lVar37 = lVar44 + lVar52;
      pvVar25 = (void *)((long)pvVar62 + lVar52);
      lVar52 = lVar52 + lVar48;
      lVar39 = lVar35 + 1;
      local_88[uVar56 + lVar35] = lVar29;
      local_90[uVar56 + lVar35] = lVar33;
      local_98[uVar56 + lVar35] = lVar37;
      local_b0[uVar56 + lVar35] = pvVar25;
      lVar35 = lVar39;
    } while (local_b8 - uVar56 != lVar39);
  }
LAB_00e105f0:
  local_188 = pvVar62;
  local_150 = param_5;
  if ((int)uVar26 < 1) {
    iVar42 = *(int *)(local_78 + 0x484);
  }
  else {
    uStack_110 = *(undefined8 *)(&DAT_0054c1c8 + (long)iVar42 * 8);
    local_1c0 = (long)(int)param_8;
    local_120 = *(undefined8 *)(puVar9 + lVar58 * 8);
    local_1b8 = (long)iVar60;
    uVar30 = 0;
    uStack_f8 = 0;
    uStack_e8 = 0;
    lStack_168 = SUB168(_DAT_004c4d80,8);
    local_170 = SUB168(_DAT_004c4d80,0);
    uStack_c0 = 0x2edbe6ff;
    uStack_bc = 0x2edbe6ff;
    local_d0 = 0x2edbe6ff2edbe6ff;
    uStack_178 = SUB168(_DAT_004c34b0,8);
    local_180 = SUB168(_DAT_004c34b0,0);
    local_130 = 4;
    local_1a0 = uVar61;
    local_198 = uVar59;
    local_190 = param_7;
    uStack_118 = local_120;
    uStack_108 = uStack_110;
    local_100 = local_120;
    uStack_f0 = uStack_110;
    do {
      lVar58 = local_150;
      pvVar25 = local_188;
      uVar26 = (uint)(local_198 - uVar30);
      if (local_1b8 <= (long)(local_198 - uVar30)) {
        uVar26 = (uint)local_1a0;
      }
      uVar61 = (ulong)uVar26;
      memcpy(__dest,local_190,local_1a8);
      memset(pvVar25,0,local_1b0);
      uVar59 = (ulong)(int)uVar26;
      uVar71 = (undefined4)uStack_c8;
      uVar72 = (undefined4)((ulong)uStack_c8 >> 0x20);
      uVar67 = (undefined4)local_d0;
      uVar70 = (undefined4)((ulong)local_d0 >> 0x20);
      lVar38 = local_a0 - uVar30;
      if (0 < (int)local_b8) {
        uVar34 = 0;
        local_128 = uVar30 + uVar59;
        lStack_d8 = lVar38;
        local_e0 = lVar38;
        local_138 = uVar30 + uVar61;
        local_158 = uVar59 & 0xfffffffffffffffc;
        local_148 = uVar59 & 0xfffffffffffffff8;
        local_140 = uVar61 & 0xfffffffc;
        lVar43 = lVar38;
        lVar44 = lVar38;
        do {
          lVar48 = local_a0;
          lVar52 = *(long *)(local_80 + uVar34 * 8);
          pvVar25 = (void *)(lVar52 + uVar30 * 4);
          if (*(int *)((long)__dest + uVar34 * 4) == 0) {
            if (0 < (int)uVar26) {
              uVar56 = local_98[uVar34];
              uVar36 = local_88[uVar34];
              uVar40 = local_90[uVar34];
              pvVar41 = local_b0[uVar34];
              if (uVar26 < 8) {
                uVar46 = 0;
              }
              else {
                lVar48 = uVar59 * 4;
                uVar46 = 0;
                if ((((uVar36 + lVar48 <= uVar56 || uVar56 + lVar48 <= uVar36) &&
                     (uVar40 + lVar48 <= uVar56 || uVar56 + lVar48 <= uVar40)) &&
                    (uVar40 + lVar48 <= uVar36 || uVar36 + lVar48 <= uVar40)) &&
                   ((void *)(lVar52 + local_128 * 4) <= pvVar41 ||
                    (void *)((long)pvVar41 + lVar48) <= pvVar25)) {
                  puVar28 = (undefined8 *)(uVar56 + 0x10);
                  puVar49 = (undefined8 *)(uVar36 + 0x10);
                  puVar53 = (undefined8 *)((long)pvVar41 + 0x10);
                  puVar57 = (undefined8 *)(uVar40 + 0x10);
                  puVar47 = (undefined8 *)(lVar52 + local_130 * 4);
                  uVar46 = local_148;
                  do {
                    puVar28[-1] = CONCAT44(uVar72,uVar71);
                    puVar28[-2] = CONCAT44(uVar70,uVar67);
                    puVar28[1] = CONCAT44(uVar72,uVar71);
                    *puVar28 = CONCAT44(uVar70,uVar67);
                    uVar46 = uVar46 - 8;
                    puVar49[-1] = 0;
                    puVar49[-2] = 0;
                    puVar49[1] = 0;
                    *puVar49 = 0;
                    puVar28 = puVar28 + 4;
                    puVar53[-1] = 0;
                    puVar53[-2] = 0;
                    puVar53[1] = 0;
                    *puVar53 = 0;
                    puVar49 = puVar49 + 4;
                    puVar47[-1] = 0;
                    puVar47[-2] = 0;
                    puVar47[1] = 0;
                    *puVar47 = 0;
                    puVar47 = puVar47 + 4;
                    puVar53 = puVar53 + 4;
                    puVar57[-1] = 0;
                    puVar57[-2] = 0;
                    puVar57[1] = 0;
                    *puVar57 = 0;
                    puVar57 = puVar57 + 4;
                  } while (uVar46 != 0);
                  uVar46 = local_148;
                  if (local_148 == uVar59) goto LAB_00e10794;
                }
              }
              do {
                lVar48 = uVar46 * 4;
                uVar46 = uVar46 + 1;
                *(undefined4 *)(uVar56 + lVar48) = 0x2edbe6ff;
                *(undefined4 *)(uVar36 + lVar48) = 0;
                *(undefined4 *)(uVar40 + lVar48) = 0;
                *(undefined4 *)((long)pvVar41 + lVar48) = 0;
                *(undefined4 *)(lVar52 + uVar30 * 4 + lVar48) = 0;
              } while ((long)uVar46 < (long)uVar59);
            }
          }
          else {
            auVar17._8_8_ = uStack_118;
            auVar17._0_8_ = local_120;
            auVar66._8_8_ = uStack_118;
            auVar66._0_8_ = local_120;
            auVar19._8_8_ = uStack_108;
            auVar19._0_8_ = uStack_110;
            auVar18._8_8_ = uStack_108;
            auVar18._0_8_ = uStack_110;
            pauVar24 = (undefined (*) [16])local_98[uVar34];
            if ((int)uVar26 < 1) {
LAB_00e1075c:
              pauVar22 = (undefined (*) [16])local_88[uVar34];
              pauVar23 = (undefined (*) [16])local_90[uVar34];
            }
            else {
              lVar35 = 0;
              do {
                lVar39 = lVar35 * 4;
                lVar35 = lVar35 + 1;
                *(undefined4 *)(*pauVar24 + lVar39) =
                     *(undefined4 *)
                      (&DAT_0054c258 + (long)*(int *)(lVar52 + uVar30 * 4 + lVar39) * 4);
              } while (lVar35 < (long)uVar59);
              if ((int)uVar26 < 1) goto LAB_00e1075c;
              lVar52 = *(long *)(lVar58 + uVar34 * 8);
              puVar32 = (ulong *)local_b0[uVar34];
              if (uVar26 < 4) {
                uVar56 = 0;
LAB_00e10820:
                do {
                  lVar43 = uVar56 * 4;
                  uVar36 = uVar56 + 1;
                  uVar67 = (undefined4)uStack_f0;
                  uVar70 = (undefined4)((ulong)uStack_f0 >> 0x20);
                  if (lVar38 <= (long)uVar56) {
                    uVar67 = (undefined4)local_100;
                    uVar70 = (undefined4)((ulong)local_100 >> 0x20);
                  }
                  *(uint *)((long)puVar32 + lVar43) =
                       (uint)((float)(double)CONCAT44(uVar70,uVar67) <=
                             ABS(*(float *)(lVar52 + uVar30 * 4 + lVar43)) /
                             *(float *)(*pauVar24 + lVar43));
                  uVar56 = uVar36;
                } while (uVar61 != uVar36);
              }
              else {
                pauVar22 = (undefined (*) [16])((long)puVar32 + uVar61 * 4);
                uVar56 = 0;
                if ((puVar32 < (ulong *)(lVar52 + local_138 * 4) &&
                     (undefined (*) [16])(lVar52 + uVar30 * 4) < pauVar22) ||
                   (puVar32 < *pauVar24 + uVar61 * 4 && pauVar24 < pauVar22)) goto LAB_00e10820;
                auVar64._8_8_ = uStack_178;
                auVar64._0_8_ = local_180;
                pauVar22 = (undefined (*) [16])(lVar52 + uVar30 * 4);
                uVar56 = local_140;
                puVar45 = puVar32;
                pauVar23 = pauVar24;
                lVar35 = local_170;
                lVar39 = lStack_168;
                do {
                  auVar76 = *pauVar22;
                  auVar15 = *pauVar23;
                  auVar77._8_8_ = lVar44;
                  auVar77._0_8_ = lVar43;
                  auVar77 = NEON_cmgt(auVar77,auVar64,8);
                  uVar56 = uVar56 - 4;
                  auVar77 = NEON_bsl(auVar77,auVar18,auVar66,1);
                  auVar75._0_4_ = ABS(auVar76._0_4_) / auVar15._0_4_;
                  auVar75._4_4_ = ABS(auVar76._4_4_) / auVar15._4_4_;
                  auVar75._8_4_ = ABS(auVar76._8_4_) / auVar15._8_4_;
                  auVar75._12_4_ = ABS(auVar76._12_4_) / auVar15._12_4_;
                  auVar76._8_4_ = (int)lVar39;
                  auVar76._0_8_ = lVar35;
                  auVar76._12_4_ = (int)((ulong)lVar39 >> 0x20);
                  auVar15._8_8_ = lVar44;
                  auVar15._0_8_ = lVar43;
                  auVar76 = NEON_cmgt(auVar15,auVar76,8);
                  auVar78._0_4_ = (float)auVar77._0_8_;
                  auVar78._4_4_ = (float)auVar77._8_8_;
                  auVar76 = NEON_bsl(auVar76,auVar19,auVar17,1);
                  auVar78._12_4_ = (float)auVar76._8_8_;
                  auVar78._8_4_ = (float)auVar76._0_8_;
                  lVar35 = lVar35 + 4;
                  lVar39 = lVar39 + 4;
                  lVar29 = auVar64._8_8_;
                  auVar64._0_8_ = auVar64._0_8_ + 4;
                  auVar64._8_8_ = lVar29 + 4;
                  auVar76 = NEON_fcmgt(auVar78,auVar75,4);
                  auVar74._0_8_ =
                       CONCAT35(0,CONCAT14(~auVar76[4],(uint)(~auVar76[0] & 1)) & 0x1ffffffff);
                  auVar74[8] = ~auVar76[8] & 1;
                  auVar74._9_3_ = 0;
                  auVar74[12] = ~auVar76[12] & 1;
                  puVar45[1] = (ulong)auVar74._8_5_;
                  *puVar45 = auVar74._0_8_;
                  pauVar22 = pauVar22 + 1;
                  puVar45 = puVar45 + 2;
                  pauVar23 = pauVar23 + 1;
                } while (uVar56 != 0);
                uVar56 = local_140;
                if (local_140 != uVar61) goto LAB_00e10820;
              }
              if ((int)uVar26 < 1) goto LAB_00e1075c;
              lVar43 = *(long *)(lVar58 + uVar34 * 8);
              pauVar22 = (undefined (*) [16])local_88[uVar34];
              pauVar23 = (undefined (*) [16])local_90[uVar34];
              if (uVar26 < 4) {
                uVar56 = 0;
LAB_00e10884:
                lVar43 = lVar43 + uVar30 * 4;
                do {
                  lVar44 = uVar56 * 4;
                  fVar63 = *(float *)(lVar43 + lVar44);
                  fVar63 = fVar63 * fVar63;
                  *(float *)(*pauVar22 + lVar44) = fVar63;
                  *(float *)(*pauVar23 + lVar44) = fVar63;
                  if (*(float *)(lVar43 + lVar44) < 0.0) {
                    *(float *)(*pauVar22 + lVar44) = -*(float *)(*pauVar22 + lVar44);
                  }
                  uVar56 = uVar56 + 1;
                  *(float *)(*pauVar24 + lVar44) =
                       *(float *)(*pauVar24 + lVar44) * *(float *)(*pauVar24 + lVar44);
                } while ((long)uVar56 < (long)uVar59);
              }
              else {
                lVar58 = uVar59 * 4;
                pauVar1 = (undefined (*) [16])(lVar43 + uVar30 * 4);
                pauVar2 = (undefined (*) [16])(*pauVar23 + lVar58);
                pauVar3 = (undefined (*) [16])(*pauVar22 + lVar58);
                pauVar4 = (undefined (*) [16])(*pauVar24 + lVar58);
                uVar56 = 0;
                pauVar5 = (undefined (*) [16])(lVar43 + local_128 * 4);
                lVar58 = local_150;
                if (((pauVar22 < pauVar2 && pauVar23 < pauVar3) ||
                    (pauVar22 < pauVar4 && pauVar24 < pauVar3)) ||
                   ((pauVar22 < pauVar5 && pauVar1 < pauVar3 ||
                    (((pauVar23 < pauVar4 && pauVar24 < pauVar2 ||
                      (pauVar23 < pauVar5 && pauVar1 < pauVar2)) ||
                     (pauVar24 < pauVar5 && pauVar1 < pauVar4)))))) goto LAB_00e10884;
                lVar44 = 0;
                uVar56 = local_158;
                do {
                  pauVar13 = (undefined (*) [12])(lVar43 + uVar30 * 4 + lVar44);
                  fVar69 = (float)*(undefined8 *)(*pauVar13 + 8);
                  fVar73 = (float)((ulong)*(undefined8 *)(*pauVar13 + 8) >> 0x20);
                  fVar63 = (float)*(undefined8 *)*pauVar13;
                  fVar68 = (float)((ulong)*(undefined8 *)*pauVar13 >> 0x20);
                  auVar14._12_4_ = fVar73;
                  auVar14._0_12_ = *pauVar13;
                  auVar66 = NEON_fcmlt(auVar14,0,4);
                  fVar63 = fVar63 * fVar63;
                  fVar68 = fVar68 * fVar68;
                  fVar69 = fVar69 * fVar69;
                  *(ulong *)((long)(*pauVar22 + lVar44) + 8) = CONCAT44(fVar73 * fVar73,fVar69);
                  *(ulong *)(*pauVar22 + lVar44) = CONCAT44(fVar68,fVar63);
                  *(ulong *)((long)(*pauVar23 + lVar44) + 8) = CONCAT44(fVar73 * fVar73,fVar69);
                  *(ulong *)(*pauVar23 + lVar44) = CONCAT44(fVar68,fVar63);
                  if ((auVar66 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                    *(float *)(*pauVar22 + lVar44) = -*(float *)(*pauVar22 + lVar44);
                  }
                  if ((auVar66 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
                    *(float *)(*pauVar22 + lVar44 + 4) = -*(float *)(*pauVar22 + lVar44 + 4);
                  }
                  if ((auVar66 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                    *(float *)(*pauVar22 + lVar44 + 8) = -*(float *)(*pauVar22 + lVar44 + 8);
                  }
                  if ((auVar66 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
                    *(float *)(*pauVar22 + lVar44 + 0xc) = -*(float *)(*pauVar22 + lVar44 + 0xc);
                  }
                  auVar66 = *(undefined (*) [16])(*pauVar24 + lVar44);
                  uVar56 = uVar56 - 4;
                  auVar65._0_8_ =
                       CONCAT44(auVar66._4_4_ * auVar66._4_4_,auVar66._0_4_ * auVar66._0_4_);
                  auVar65._8_4_ = auVar66._8_4_ * auVar66._8_4_;
                  auVar65._12_4_ = auVar66._12_4_ * auVar66._12_4_;
                  *(long *)((long)(*pauVar24 + lVar44) + 8) = auVar65._8_8_;
                  *(undefined8 *)(*pauVar24 + lVar44) = auVar65._0_8_;
                  lVar44 = lVar44 + 0x10;
                } while (uVar56 != 0);
                uVar56 = local_158;
                if (local_158 != uVar59) goto LAB_00e10884;
              }
            }
            uVar21 = *(undefined8 *)(local_a8 + 2);
            *(void **)((long)pvVar62 + -0x10) = pvVar25;
            FUN_00e10f34(uVar21,lVar48,pauVar22,pauVar23,pauVar24,0,uVar30 & 0xffffffff,uVar26);
            uVar71 = (undefined4)uStack_c8;
            uVar72 = (undefined4)((ulong)uStack_c8 >> 0x20);
            uVar67 = (undefined4)local_d0;
            uVar70 = (undefined4)((ulong)local_d0 >> 0x20);
            lVar43 = local_e0;
            lVar44 = lStack_d8;
          }
LAB_00e10794:
          uVar34 = uVar34 + 1;
        } while (uVar34 != local_b8);
      }
      iVar42 = *(int *)(local_78 + 0x484);
      if (0 < iVar42) {
        lVar58 = 0;
        lVar43 = local_1c0 - uVar30;
        do {
          lVar44 = local_78 + lVar58 * 4;
          lVar50 = (long)*(int *)(lVar44 + 0x488);
          lVar54 = (long)*(int *)(lVar44 + 0x888);
          lVar39 = *(long *)(local_80 + lVar50 * 8);
          lVar44 = *(long *)(local_80 + lVar54 * 8);
          lVar35 = local_98[lVar50];
          lVar52 = local_90[lVar50];
          lVar48 = local_88[lVar50];
          lVar29 = local_88[lVar54];
          lVar33 = local_90[lVar54];
          lVar37 = local_98[lVar54];
          pvVar25 = local_b0[lVar50];
          pvVar41 = local_b0[lVar54];
          if ((*(int *)((long)__dest + lVar50 * 4) != 0) ||
             (*(int *)((long)__dest + lVar54 * 4) != 0)) {
            *(undefined4 *)((long)__dest + lVar54 * 4) = 1;
            *(undefined4 *)((long)__dest + lVar50 * 4) = 1;
            lVar50 = local_a0;
            if (0 < (int)uVar26) {
              lVar54 = 0;
              lVar44 = lVar44 + uVar30 * 4;
              lVar6 = lVar39 + uVar30 * 4;
              do {
                lVar55 = lVar54 * 4;
                if (lVar54 < lVar43) {
                  if ((*(int *)((long)pvVar25 + lVar54 * 4) == 0) &&
                     (*(int *)((long)pvVar41 + lVar54 * 4) == 0)) {
                    if (lVar54 < lVar38) {
                      fVar63 = *(float *)(lVar29 + lVar55) + *(float *)(lVar48 + lVar55);
                      *(float *)(lVar48 + lVar55) = fVar63;
                      *(float *)(lVar52 + lVar55) = ABS(fVar63);
                    }
                    else {
                      fVar68 = *(float *)(lVar48 + lVar55);
                      fVar69 = *(float *)(lVar29 + lVar55);
                      fVar63 = ABS(fVar68) + ABS(fVar69);
                      *(float *)(lVar52 + lVar55) = fVar63;
                      if (fVar68 + fVar69 < 0.0) {
                        fVar63 = -fVar63;
                      }
                      *(float *)(lVar48 + lVar54 * 4) = fVar63;
                    }
                    *(undefined4 *)(lVar33 + lVar55) = 0;
                    *(undefined4 *)(lVar29 + lVar55) = 0;
                    *(undefined4 *)((long)pvVar41 + lVar55) = 1;
                    *(undefined4 *)(lVar44 + lVar55) = 0;
                  }
                  else {
                    fVar63 = *(float *)(lVar48 + lVar55);
                    *(undefined4 *)((long)pvVar41 + lVar55) = 1;
                    fVar68 = *(float *)(lVar29 + lVar55);
                    *(undefined4 *)((long)pvVar25 + lVar55) = 1;
                    uVar10 = *(uint *)(lVar6 + lVar55);
                    uVar11 = *(uint *)(lVar44 + lVar55);
                    uVar7 = -uVar10;
                    if (-1 < (int)uVar10) {
                      uVar7 = uVar10;
                    }
                    uVar8 = -uVar11;
                    if (-1 < (int)uVar11) {
                      uVar8 = uVar11;
                    }
                    *(float *)(lVar48 + lVar55) = ABS(fVar63) + ABS(fVar68);
                    *(float *)(lVar52 + lVar55) =
                         *(float *)(lVar52 + lVar55) + *(float *)(lVar33 + lVar55);
                    if (uVar8 < uVar7) {
                      iVar42 = uVar10 - uVar11;
                      if ((int)uVar10 < 1) {
                        iVar42 = uVar11 - uVar10;
                      }
                      *(int *)(lVar44 + lVar55) = iVar42;
                      iVar12 = *(int *)(lVar6 + lVar55);
                      iVar60 = -iVar12;
                      if (-1 < iVar12) {
                        iVar60 = iVar12;
                      }
                      if (iVar42 + iVar60 * -2 < 0 == SBORROW4(iVar42,iVar60 * 2)) {
LAB_00e10e30:
                        *(int *)(lVar44 + lVar55) = -iVar42;
                        *(int *)(lVar6 + lVar55) = -*(int *)(lVar6 + lVar55);
                      }
                    }
                    else {
                      iVar42 = uVar10 - uVar11;
                      if ((int)uVar11 < 1) {
                        iVar42 = uVar11 - uVar10;
                      }
                      *(int *)(lVar44 + lVar55) = iVar42;
                      *(uint *)(lVar6 + lVar55) = uVar11;
                      iVar42 = *(int *)(lVar44 + lVar55);
                      if ((int)(iVar42 + uVar8 * -2) < 0 == SBORROW4(iVar42,uVar8 * 2))
                      goto LAB_00e10e30;
                    }
                  }
                }
                lVar54 = lVar54 + 1;
                fVar63 = *(float *)(lVar35 + lVar55) + *(float *)(lVar37 + lVar55);
                *(float *)(lVar37 + lVar55) = fVar63;
                *(float *)(lVar35 + lVar55) = fVar63;
              } while (lVar54 < (long)uVar59);
            }
            uVar21 = *(undefined8 *)(local_a8 + 2);
            *(ulong *)((long)pvVar62 + -0x10) = lVar39 + uVar30 * 4;
            FUN_00e10f34(uVar21,lVar50);
            iVar42 = *(int *)(local_78 + 0x484);
          }
          lVar58 = lVar58 + 1;
        } while (lVar58 < iVar42);
      }
      uVar30 = uVar30 + local_1b8;
      local_130 = local_130 + local_1b8;
      param_7 = local_190;
    } while ((long)uVar30 < (long)local_198);
  }
  if (0 < iVar42) {
    lVar58 = 0;
    do {
      lVar38 = local_78 + lVar58 * 4;
      if ((*(int *)((long)param_7 + (long)*(int *)(lVar38 + 0x488) * 4) != 0) ||
         (*(int *)((long)param_7 + (long)*(int *)(lVar38 + 0x888) * 4) != 0)) {
        *(undefined4 *)((long)param_7 + (long)*(int *)(lVar38 + 0x488) * 4) = 1;
        *(undefined4 *)((long)param_7 + (long)*(int *)(lVar38 + 0x888) * 4) = 1;
        iVar42 = *(int *)(local_78 + 0x484);
      }
      lVar58 = lVar58 + 1;
    } while (lVar58 < iVar42);
  }
  if (*(long *)(local_1c8 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


