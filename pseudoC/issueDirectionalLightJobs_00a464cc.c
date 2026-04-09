// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: issueDirectionalLightJobs
// Entry Point: 00a464cc
// Size: 6048 bytes
// Signature: undefined __thiscall issueDirectionalLightJobs(ShadowRenderController * this, LightSourceQueueItem * param_1, RenderTextureSetup * param_2)


/* ShadowRenderController::issueDirectionalLightJobs(LightSourceQueueItem*, RenderTextureSetup*) */

void __thiscall
ShadowRenderController::issueDirectionalLightJobs
          (ShadowRenderController *this,LightSourceQueueItem *param_1,RenderTextureSetup *param_2)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  ShadowRenderController SVar5;
  char cVar6;
  uint uVar7;
  long lVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  ulong uVar12;
  RenderArgs *this_00;
  undefined8 *puVar13;
  undefined8 *puVar14;
  CullingArgs *pCVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  uint uVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  float *pfVar27;
  uint uVar28;
  ulong uVar29;
  undefined4 *puVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  undefined8 uVar38;
  float fVar39;
  undefined4 uVar40;
  float fVar41;
  undefined4 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined4 uVar47;
  float fVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  float fVar51;
  float fVar52;
  undefined4 uVar53;
  float fVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  float fVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  float local_890;
  float fStack_88c;
  undefined8 local_888;
  undefined4 local_880;
  float fStack_87c;
  undefined4 local_878;
  undefined4 uStack_874;
  undefined8 local_870;
  undefined local_868 [8];
  undefined8 local_860;
  undefined8 local_858;
  undefined8 local_850;
  undefined8 local_848;
  undefined4 local_840;
  undefined4 uStack_83c;
  undefined4 local_838;
  undefined4 uStack_834;
  undefined8 local_810;
  undefined8 uStack_808;
  undefined8 local_800;
  undefined8 local_7f8;
  undefined8 local_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  undefined8 local_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined8 local_7c0;
  undefined8 local_7b8;
  undefined8 local_7b0;
  undefined8 uStack_7a8;
  undefined8 local_7a0;
  undefined8 local_798;
  float local_788;
  float local_784;
  float afStack_778 [2];
  undefined8 local_770;
  undefined8 uStack_768;
  undefined8 local_760;
  undefined8 local_758;
  undefined8 local_750;
  undefined8 uStack_748;
  undefined8 local_740;
  undefined8 local_738;
  float local_730;
  float afStack_72c [15];
  float local_6f0;
  float local_6ec;
  float local_6e8;
  float local_6e0;
  float local_6dc;
  float local_6d8;
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined8 local_6c0;
  undefined8 local_6b8;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined8 local_6a0;
  undefined8 local_698;
  undefined8 local_690;
  undefined4 local_688;
  undefined8 local_680;
  float local_678;
  undefined8 local_674;
  float local_66c;
  undefined8 local_668;
  float local_660;
  undefined8 local_65c;
  float local_654;
  undefined8 local_650;
  float local_648;
  undefined8 local_644;
  float local_63c;
  undefined8 local_638;
  float local_630;
  undefined8 local_62c;
  float local_624;
  char acStack_620 [1024];
  float local_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float local_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  undefined8 local_1c0;
  float local_1b8;
  undefined8 local_1b4;
  float local_1ac;
  undefined8 local_1a8;
  float local_1a0;
  undefined8 local_19c;
  float local_194;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_184;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined4 local_164;
  undefined8 local_160;
  float local_158;
  undefined8 local_154;
  float local_14c;
  undefined8 local_148;
  float local_140;
  undefined8 local_13c;
  float local_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  float local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  float local_d8;
  float fStack_d4;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  long local_b8;
  
  lVar8 = tpidr_el0;
  local_b8 = *(long *)(lVar8 + 0x28);
  EngineManager::getInstance();
  lVar19 = *(long *)param_1;
  local_c0 = 1.0;
  fVar33 = *(float *)(lVar19 + 0x28);
  bVar3 = **(byte **)(param_1 + 8);
  uVar29 = (ulong)bVar3;
  fVar32 = (float)((ulong)*(undefined8 *)(lVar19 + 0x20) >> 0x20);
  fVar41 = (float)*(undefined8 *)(lVar19 + 0x20);
  fVar34 = (float)NEON_fmadd(fVar33,fVar33,fVar32 * fVar32 + fVar41 * fVar41);
  fVar31 = 1.0;
  if (1e-06 < fVar34) {
    local_c0 = 1.0 / SQRT(fVar34);
  }
  local_d8 = *(float *)(lVar19 + 0x10);
  fStack_d4 = *(float *)(lVar19 + 0x14);
  local_c8 = CONCAT44(-fVar32 * local_c0,-fVar41 * local_c0);
  local_c0 = local_c0 * -fVar33;
  uVar40 = NEON_fmadd(local_d8,local_d8,fStack_d4 * fStack_d4);
  local_d0 = *(float *)(lVar19 + 0x18);
  fVar41 = (float)NEON_fmadd(local_d0,local_d0,uVar40);
  if (1e-06 < fVar41) {
    fVar31 = 1.0 / SQRT(fVar41);
  }
  local_d8 = local_d8 * fVar31;
  fStack_d4 = fStack_d4 * fVar31;
  local_d0 = local_d0 * fVar31;
  fVar41 = (float)LightSource::getShadowExtrusionDistance();
  local_fc = *(float *)(*(long *)(this + 0x10) + 0xc0);
  uVar28 = (uint)bVar3;
  if (bVar3 == 0) {
    uVar25 = 0xffffffff;
    uVar12 = uVar29;
LAB_00a46630:
    do {
      uVar40 = LightSource::getShadowMapSplitDistance(*(LightSource **)(param_1 + 0x10),uVar25);
      uVar24 = uVar12 + 1;
      *(undefined4 *)((long)&local_f8 + uVar12 * 4) = uVar40;
      uVar12 = uVar24;
    } while (uVar24 != 8);
  }
  else {
    uVar12 = 0;
    do {
      uVar40 = LightSource::getShadowMapSplitDistance
                         (*(LightSource **)(param_1 + 0x10),(uint)uVar12);
      uVar24 = uVar12 + 1;
      *(undefined4 *)((long)&local_f8 + uVar12 * 4) = uVar40;
      uVar12 = uVar24;
    } while (uVar29 != uVar24);
    uVar25 = bVar3 - 1;
    uVar12 = uVar29;
    if (uVar28 < 8) goto LAB_00a46630;
  }
  lVar19 = *(long *)(param_1 + 8);
  uVar38 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(lVar19 + 0x60) = uStack_e0;
  *(undefined8 *)(lVar19 + 0x58) = local_e8;
  local_13c = NEON_fmov(0xbf800000,4);
  fVar31 = 1.2;
  *(undefined8 *)(lVar19 + 0x50) = uStack_f0;
  *(undefined8 *)(lVar19 + 0x48) = local_f8;
  lVar20 = *(long *)(this + 0x10);
  uVar40 = 0xbf99999a;
  local_10c = local_13c;
  local_160 = 0x3f800000bf800000;
  local_130 = 0x3f800000bf800000;
  local_148 = 0xbf8000003f800000;
  lVar19 = 0;
  local_118 = 0xbf8000003f800000;
  local_154 = uVar38;
  local_128 = *(undefined4 *)(lVar20 + 200);
  fVar32 = *(float *)(lVar20 + 0xcc);
  local_124 = uVar38;
  local_1c0 = 0x3f99999abf99999a;
  local_1b4 = 0x3f99999a3f99999a;
  local_1a8 = 0xbf99999a3f99999a;
  local_190 = 0x3f99999abf99999a;
  local_184 = 0x3f99999a3f99999a;
  local_178 = 0xbf99999a3f99999a;
  local_158 = fVar32;
  local_14c = fVar32;
  local_140 = fVar32;
  local_134 = fVar32;
  local_11c = local_128;
  local_110 = local_128;
  local_104 = local_128;
  local_1b8 = fVar32;
  local_1ac = fVar32;
  local_19c = 0xbf99999abf99999a;
  local_1a0 = fVar32;
  local_194 = fVar32;
  local_188 = local_128;
  local_17c = local_128;
  local_16c = 0xbf99999abf99999a;
  local_170 = local_128;
  local_164 = local_128;
  while( true ) {
    pfVar27 = (float *)((long)&local_160 + lVar19);
    fVar34 = *pfVar27;
    fVar33 = *(float *)((long)&local_160 + lVar19 + 4);
    uVar49 = *(undefined4 *)((long)&local_158 + lVar19);
    uVar42 = NEON_fmadd(fVar34,*(undefined4 *)(lVar20 + 0x15c),fVar33 * *(float *)(lVar20 + 0x16c));
    uVar36 = NEON_fmadd(uVar40,*(undefined4 *)(lVar20 + 0x15c),*(float *)(lVar20 + 0x16c) * fVar31);
    fVar43 = (float)NEON_fmadd(uVar49,*(undefined4 *)(lVar20 + 0x17c),uVar42);
    fVar37 = (float)NEON_fmadd(fVar32,*(undefined4 *)(lVar20 + 0x17c),uVar36);
    fVar54 = *(float *)(lVar20 + 0x180);
    uVar47 = NEON_fmadd(fVar34,*(undefined4 *)(lVar20 + 0x150),fVar33 * *(float *)(lVar20 + 0x160));
    uVar56 = NEON_fmadd(fVar34,*(undefined4 *)(lVar20 + 0x154),fVar33 * *(float *)(lVar20 + 0x164));
    fVar44 = 1.0 / (*(float *)(lVar20 + 0x18c) + fVar43);
    uVar36 = NEON_fmadd(fVar34,*(undefined4 *)(lVar20 + 0x158),fVar33 * *(float *)(lVar20 + 0x168));
    uVar42 = NEON_fmadd(uVar40,*(undefined4 *)(lVar20 + 0x150),*(float *)(lVar20 + 0x160) * fVar31);
    uVar50 = NEON_fmadd(uVar40,*(undefined4 *)(lVar20 + 0x154),*(float *)(lVar20 + 0x164) * fVar31);
    uVar40 = NEON_fmadd(uVar40,*(undefined4 *)(lVar20 + 0x158),*(float *)(lVar20 + 0x168) * fVar31);
    fVar33 = (float)NEON_fmadd(uVar49,*(undefined4 *)(lVar20 + 0x170),uVar47);
    fVar34 = (float)NEON_fmadd(uVar49,*(undefined4 *)(lVar20 + 0x174),uVar56);
    fVar48 = *(float *)(lVar20 + 0x184);
    fVar43 = (float)NEON_fmadd(uVar49,*(undefined4 *)(lVar20 + 0x178),uVar36);
    fVar39 = (float)NEON_fmadd(fVar32,*(undefined4 *)(lVar20 + 0x170),uVar42);
    fVar45 = (float)NEON_fmadd(fVar32,*(undefined4 *)(lVar20 + 0x174),uVar50);
    fVar31 = (float)NEON_fmadd(fVar32,*(undefined4 *)(lVar20 + 0x178),uVar40);
    fVar33 = fVar54 + fVar33;
    fVar34 = fVar48 + fVar34;
    fVar52 = *(float *)(lVar20 + 0x188);
    fVar32 = 1.0 / (*(float *)(lVar20 + 0x18c) + fVar37);
    fVar43 = fVar52 + fVar43;
    *pfVar27 = fVar33;
    *(float *)((long)&local_160 + lVar19 + 4) = fVar34;
    *(float *)((long)&local_160 + lVar19 + 4) = fVar34 * fVar44;
    *(float *)((long)&local_158 + lVar19) = fVar43;
    *pfVar27 = fVar33 * fVar44;
    *(float *)((long)&local_158 + lVar19) = fVar43 * fVar44;
    *(float *)((long)&local_1c0 + lVar19) = (fVar54 + fVar39) * fVar32;
    *(float *)((long)&local_1c0 + lVar19 + 4) = (fVar48 + fVar45) * fVar32;
    *(float *)((long)&local_1b8 + lVar19) = (fVar52 + fVar31) * fVar32;
    if (lVar19 == 0x54) break;
    uVar40 = *(undefined4 *)((long)&local_1b4 + lVar19);
    fVar31 = *(float *)((long)&local_1b4 + lVar19 + 4);
    fVar32 = *(float *)((long)&local_1ac + lVar19);
    lVar19 = lVar19 + 0xc;
  }
  lVar19 = *(long *)(param_1 + 8);
  if (*(char *)(lVar19 + 2) == '\0') {
LAB_00a468a0:
    *(undefined *)(lVar19 + 2) = 0;
    local_888 = 0;
    uVar12 = uVar29;
    if (uVar28 == 0) goto LAB_00a47c24;
  }
  else {
    uVar12 = getShadowFocusBoxVerts
                       (*(Geometry **)(*(long *)(*(long *)(this + 8) + 0xe8) + 0x170),
                        (Vector3 *)&local_220);
    if ((uVar12 & 1) == 0) {
      lVar19 = *(long *)(param_1 + 8);
      goto LAB_00a468a0;
    }
    uVar12 = (ulong)(uVar28 + 1);
  }
  local_888 = 0;
  uVar24 = 0;
  do {
    lVar19 = *(long *)(*(long *)(param_1 + 8) + uVar24 * 8 + 8);
    if (*(char *)(lVar19 + 0x25) == '\0' || (*(uint *)(lVar19 + 0x28) & 1) != 0) {
      cVar4 = *(char *)(lVar19 + 0x24);
      if (uVar24 < uVar29) {
        FUN_00a47c6c(acStack_620);
      }
      else {
        FUN_00a47c6c(acStack_620);
      }
      pCVar15 = *(CullingArgs **)(this + 0x10);
      pCVar15 = (CullingArgs *)
                RenderController::allocateCullingJob
                          (*(RenderController **)this,pCVar15,10,*(uint *)(pCVar15 + 0x3ac),
                           *(uint *)(pCVar15 + 0x3b0),0,0);
      this_00 = (RenderArgs *)
                RenderController::allocateRenderJob
                          (*(RenderController **)this,param_2,2,(float *)&local_888,0,acStack_620,
                           pCVar15);
      uVar28 = *(uint *)(lVar19 + 8);
      if (uVar24 < uVar29) {
        fVar31 = 1.0;
        if (cVar4 != '\0') {
          fVar31 = 1.2;
        }
        puVar14 = &local_160;
        if (cVar4 != '\0') {
          puVar14 = &local_1c0;
        }
        fVar32 = (float)NEON_fnmsub(*(undefined4 *)((long)&local_f8 + uVar24 * 4),fVar31,
                                    *(float *)(this + 0x20));
        uVar21 = *puVar14;
        local_678 = *(float *)(puVar14 + 1);
        fVar32 = *(float *)(this + 0x28) * fVar32;
        local_680 = uVar21;
        fVar48 = *(float *)((long)puVar14 + 0x44) - *(float *)((long)puVar14 + 0x14);
        fVar33 = ((&local_fc)[uVar24] / fVar31 - *(float *)(this + 0x20)) * *(float *)(this + 0x28);
        fVar43 = (float)puVar14[6] - (float)*puVar14;
        fVar39 = (float)((ulong)puVar14[6] >> 0x20) - (float)((ulong)*puVar14 >> 0x20);
        fVar44 = (float)*(undefined8 *)((long)puVar14 + 0x3c) -
                 (float)*(undefined8 *)((long)puVar14 + 0xc);
        fVar45 = (float)((ulong)*(undefined8 *)((long)puVar14 + 0x3c) >> 0x20) -
                 (float)((ulong)*(undefined8 *)((long)puVar14 + 0xc) >> 0x20);
        fVar34 = (float)puVar14[9] - (float)puVar14[3];
        fVar37 = (float)((ulong)puVar14[9] >> 0x20) - (float)((ulong)puVar14[3] >> 0x20);
        fVar31 = 0.0;
        if (0.0 < fVar33) {
          fVar31 = fVar33;
        }
        fVar33 = 0.0;
        if (0.0 < fVar32) {
          fVar33 = fVar32;
        }
        fVar32 = (float)((ulong)uVar21 >> 0x20);
        fVar52 = (float)NEON_fmadd(*(float *)(puVar14 + 7) - *(float *)(puVar14 + 1),fVar31,
                                   local_678);
        local_648 = (float)NEON_fmadd(*(float *)(puVar14 + 7) - *(float *)(puVar14 + 1),fVar33,
                                      local_678);
        local_66c = (float)NEON_fmadd(fVar48,fVar31,*(undefined4 *)((long)puVar14 + 0x14));
        local_63c = (float)NEON_fmadd(fVar48,fVar33,*(undefined4 *)((long)puVar14 + 0x14));
        local_644 = CONCAT44((float)((ulong)*(undefined8 *)((long)puVar14 + 0xc) >> 0x20) +
                             fVar45 * fVar33,
                             (float)*(undefined8 *)((long)puVar14 + 0xc) + fVar44 * fVar33);
        local_680 = CONCAT44(fVar32 + fVar39 * fVar31,(float)uVar21 + fVar43 * fVar31);
        local_674 = CONCAT44((float)((ulong)*(undefined8 *)((long)puVar14 + 0xc) >> 0x20) +
                             fVar45 * fVar31,
                             (float)*(undefined8 *)((long)puVar14 + 0xc) + fVar44 * fVar31);
        local_678 = fVar52;
        local_650 = CONCAT44(fVar32 + fVar39 * fVar33,(float)uVar21 + fVar43 * fVar33);
        local_638 = CONCAT44((float)((ulong)puVar14[3] >> 0x20) + fVar37 * fVar33,
                             (float)puVar14[3] + fVar34 * fVar33);
        fVar32 = (float)*(undefined8 *)((long)puVar14 + 0x54) -
                 (float)*(undefined8 *)((long)puVar14 + 0x24);
        fVar43 = (float)((ulong)*(undefined8 *)((long)puVar14 + 0x54) >> 0x20) -
                 (float)((ulong)*(undefined8 *)((long)puVar14 + 0x24) >> 0x20);
        fVar39 = *(float *)((long)puVar14 + 0x5c) - *(float *)((long)puVar14 + 0x2c);
        local_668 = CONCAT44((float)((ulong)puVar14[3] >> 0x20) + fVar37 * fVar31,
                             (float)puVar14[3] + fVar34 * fVar31);
        local_660 = (float)NEON_fmadd(*(float *)(puVar14 + 10) - *(float *)(puVar14 + 4),fVar31,
                                      *(undefined4 *)(puVar14 + 4));
        local_65c = CONCAT44((float)((ulong)*(undefined8 *)((long)puVar14 + 0x24) >> 0x20) +
                             fVar43 * fVar31,
                             (float)*(undefined8 *)((long)puVar14 + 0x24) + fVar32 * fVar31);
        local_654 = (float)NEON_fmadd(fVar39,fVar31,*(undefined4 *)((long)puVar14 + 0x2c));
        local_62c = CONCAT44((float)((ulong)*(undefined8 *)((long)puVar14 + 0x24) >> 0x20) +
                             fVar43 * fVar33,
                             (float)*(undefined8 *)((long)puVar14 + 0x24) + fVar32 * fVar33);
        local_630 = (float)NEON_fmadd(*(float *)(puVar14 + 10) - *(float *)(puVar14 + 4),fVar33,
                                      *(undefined4 *)(puVar14 + 4));
        local_624 = (float)NEON_fmadd(fVar39,fVar33,*(undefined4 *)((long)puVar14 + 0x2c));
        fVar31 = (float)(1 << (ulong)((uint)uVar24 & 0x1f));
      }
      else {
        lVar20 = *(long *)(*(long *)(this + 8) + 0xe8);
        RawTransformGroup::updateWorldTransformation();
        fVar44 = *(float *)(lVar20 + 0xd0);
        fVar34 = *(float *)(lVar20 + 200);
        fVar37 = *(float *)(lVar20 + 0xcc);
        fVar43 = *(float *)(lVar20 + 0xb8);
        fVar39 = *(float *)(lVar20 + 0xbc);
        fVar52 = *(float *)(lVar20 + 0xc0);
        fVar48 = *(float *)(lVar20 + 0xd8);
        fVar45 = *(float *)(lVar20 + 0xdc);
        fVar54 = *(float *)(lVar20 + 0xe0);
        fVar32 = *(float *)(lVar20 + 0xe8);
        local_624 = *(float *)(lVar20 + 0xf0);
        fVar33 = *(float *)(lVar20 + 0xec);
        fVar31 = 0.1;
        local_678 = local_624 + fStack_21c * fVar44 + local_220 * fVar52 + fStack_218 * fVar54;
        local_66c = local_624 + fStack_210 * fVar44 + fStack_214 * fVar52 + fStack_20c * fVar54;
        local_660 = local_624 + fStack_204 * fVar44 + fStack_208 * fVar52 + fStack_200 * fVar54;
        local_654 = local_624 + fStack_1f8 * fVar44 + fStack_1fc * fVar52 + fStack_1f4 * fVar54;
        local_648 = local_624 + fStack_1ec * fVar44 + local_1f0 * fVar52 + fStack_1e8 * fVar54;
        local_63c = local_624 + fStack_1e0 * fVar44 + fStack_1e4 * fVar52 + fStack_1dc * fVar54;
        local_630 = local_624 + fStack_1d4 * fVar44 + fStack_1d8 * fVar52 + fStack_1d0 * fVar54;
        local_624 = local_624 + fStack_1c8 * fVar44 + fStack_1cc * fVar52 + fStack_1c4 * fVar54;
        local_680 = CONCAT44(fVar33 + fStack_21c * fVar37 + local_220 * fVar39 + fStack_218 * fVar45
                             ,fVar32 + fStack_21c * fVar34 + local_220 * fVar43 +
                                       fStack_218 * fVar48);
        local_674 = CONCAT44(fVar33 + fStack_210 * fVar37 + fStack_214 * fVar39 +
                                      fStack_20c * fVar45,
                             fVar32 + fStack_210 * fVar34 + fStack_214 * fVar43 +
                                      fStack_20c * fVar48);
        local_668 = CONCAT44(fVar33 + fStack_204 * fVar37 + fStack_208 * fVar39 +
                                      fStack_200 * fVar45,
                             fVar32 + fStack_204 * fVar34 + fStack_208 * fVar43 +
                                      fStack_200 * fVar48);
        local_65c = CONCAT44(fVar33 + fStack_1f8 * fVar37 + fStack_1fc * fVar39 +
                                      fStack_1f4 * fVar45,
                             fVar32 + fStack_1f8 * fVar34 + fStack_1fc * fVar43 +
                                      fStack_1f4 * fVar48);
                    /* WARNING: Ignoring partial resolution of indirect */
        local_650._0_4_ = fVar32 + fStack_1ec * fVar34 + local_1f0 * fVar43 + fStack_1e8 * fVar48;
        local_644._0_4_ = fVar32 + fStack_1e0 * fVar34 + fStack_1e4 * fVar43 + fStack_1dc * fVar48;
        local_638._0_4_ = fVar32 + fStack_1d4 * fVar34 + fStack_1d8 * fVar43 + fStack_1d0 * fVar48;
        local_62c._0_4_ = fVar32 + fStack_1c8 * fVar34 + fStack_1cc * fVar43 + fStack_1c4 * fVar48;
      }
      *(float *)(this + uVar24 * 4 + 0x98) = fVar31;
      if ((uVar24 == uVar25) && (*(char *)(*(long *)(param_1 + 8) + 1) != '\0')) {
        LightSource::getLastShadowMapSplitFixedBbox
                  (*(LightSource **)(param_1 + 0x10),(Vector3 *)&local_870,(Vector3 *)&local_6d0);
        bVar9 = true;
        local_654 = (float)local_868._0_4_;
        local_650 = local_870;
        local_648 = (float)uStack_6c8;
        local_644 = CONCAT44(local_870._4_4_,(int)local_6d0);
        local_63c = (float)uStack_6c8;
        local_638 = CONCAT44(local_6d0._4_4_,(int)local_870);
        local_630 = (float)uStack_6c8;
        local_62c = local_6d0;
        local_624 = (float)uStack_6c8;
        local_680 = local_870;
        local_678 = (float)local_868._0_4_;
        uVar23 = *(uint *)(lVar19 + 0x2c) & 3;
        local_674 = CONCAT44(local_870._4_4_,(int)local_6d0);
        local_66c = (float)local_868._0_4_;
        local_668 = CONCAT44(local_6d0._4_4_,(int)local_870);
        local_660 = (float)local_868._0_4_;
        local_65c = local_6d0;
      }
      else {
        bVar9 = false;
        uVar23 = 4;
      }
      local_690 = 0;
      local_688 = 0;
      Matrix4x4::look((Matrix4x4 *)&local_6d0,(Vector3 *)&local_690,(Vector3 *)&local_c8,
                      (Vector3 *)&local_d8);
      computeFrustumExtents
                ((Vector3 *)&local_680,(Matrix4x4 *)&local_6d0,(Vector3 *)&local_6e0,
                 (Vector3 *)&local_6f0);
      fVar33 = (float)(ulong)uVar28;
      fVar32 = (float)(ulong)(uVar28 + 9) / fVar33;
      if (fVar32 != 1.0) {
        fVar34 = (local_6e0 + local_6f0) * 0.5;
        fVar37 = (local_6dc + local_6ec) * 0.5;
        local_6e0 = (float)NEON_fmadd(local_6e0 - fVar34,fVar32,fVar34);
        local_6f0 = (float)NEON_fmadd(local_6f0 - fVar34,fVar32,fVar34);
        local_6dc = (float)NEON_fmadd(local_6dc - fVar37,fVar32,fVar37);
        local_6ec = (float)NEON_fmadd(local_6ec - fVar37,fVar32,fVar37);
      }
      uVar11 = computeFrustumHull((Vector3 *)&local_680,(Matrix4x4 *)&local_6d0,fVar32,&local_730);
      fVar37 = local_6d8;
      fVar34 = local_6e8;
      if (this[0x6c] != (ShadowRenderController)0x0) {
        uVar7 = 0;
        if (uVar28 - 0xc != 0) {
          uVar7 = uVar28 / (uVar28 - 0xc);
        }
        uVar40 = NEON_fmadd((float)local_674 - (float)local_680,(float)local_674 - (float)local_680,
                            (local_674._4_4_ - local_680._4_4_) *
                            (local_674._4_4_ - local_680._4_4_));
        fVar39 = (float)NEON_fmadd(local_66c - local_678,local_66c - local_678,uVar40);
        uVar40 = NEON_fmadd((float)local_668 - (float)local_680,(float)local_668 - (float)local_680,
                            (local_668._4_4_ - local_680._4_4_) *
                            (local_668._4_4_ - local_680._4_4_));
        fVar44 = (float)NEON_fmadd(local_660 - local_678,local_660 - local_678,uVar40);
        uVar40 = NEON_fmadd((float)local_65c - (float)local_680,(float)local_65c - (float)local_680,
                            (local_65c._4_4_ - local_680._4_4_) *
                            (local_65c._4_4_ - local_680._4_4_));
        fVar43 = 0.0;
        if (0.0 < fVar39) {
          fVar43 = fVar39;
        }
        fVar39 = (float)NEON_fmadd(local_654 - local_678,local_654 - local_678,uVar40);
        uVar40 = NEON_fmadd((float)local_650 - (float)local_680,(float)local_650 - (float)local_680,
                            (local_650._4_4_ - local_680._4_4_) *
                            (local_650._4_4_ - local_680._4_4_));
        if (fVar43 < fVar44) {
          fVar43 = fVar44;
        }
        fVar44 = (float)NEON_fmadd(local_648 - local_678,local_648 - local_678,uVar40);
        uVar40 = NEON_fmadd((float)local_644 - (float)local_680,(float)local_644 - (float)local_680,
                            (local_644._4_4_ - local_680._4_4_) *
                            (local_644._4_4_ - local_680._4_4_));
        if (fVar43 < fVar39) {
          fVar43 = fVar39;
        }
        fVar39 = (float)NEON_fmadd(local_63c - local_678,local_63c - local_678,uVar40);
        if (fVar43 < fVar44) {
          fVar43 = fVar44;
        }
        uVar36 = NEON_fmadd((float)local_638 - (float)local_680,(float)local_638 - (float)local_680,
                            (local_638._4_4_ - local_680._4_4_) *
                            (local_638._4_4_ - local_680._4_4_));
        uVar40 = NEON_fmadd((float)local_680 - (float)local_650,(float)local_680 - (float)local_650,
                            (local_680._4_4_ - local_650._4_4_) *
                            (local_680._4_4_ - local_650._4_4_));
        fVar44 = (float)NEON_fmadd(local_630 - local_678,local_630 - local_678,uVar36);
        if (fVar43 < fVar39) {
          fVar43 = fVar39;
        }
        uVar42 = NEON_fmadd((float)local_62c - (float)local_680,(float)local_62c - (float)local_680,
                            (local_62c._4_4_ - local_680._4_4_) *
                            (local_62c._4_4_ - local_680._4_4_));
        uVar36 = NEON_fmadd((float)local_674 - (float)local_650,(float)local_674 - (float)local_650,
                            (local_674._4_4_ - local_650._4_4_) *
                            (local_674._4_4_ - local_650._4_4_));
        fVar45 = (float)NEON_fmadd(local_624 - local_678,local_624 - local_678,uVar42);
        fVar39 = (float)NEON_fmadd(local_678 - local_648,local_678 - local_648,uVar40);
        if (fVar43 < fVar44) {
          fVar43 = fVar44;
        }
        uVar40 = NEON_fmadd((float)local_668 - (float)local_650,(float)local_668 - (float)local_650,
                            (local_668._4_4_ - local_650._4_4_) *
                            (local_668._4_4_ - local_650._4_4_));
        fVar44 = (float)NEON_fmadd(local_66c - local_648,local_66c - local_648,uVar36);
        if (fVar43 < fVar45) {
          fVar43 = fVar45;
        }
        if (fVar43 < fVar39) {
          fVar43 = fVar39;
        }
        fVar39 = (float)NEON_fmadd(local_660 - local_648,local_660 - local_648,uVar40);
        if (fVar43 < fVar44) {
          fVar43 = fVar44;
        }
        uVar40 = NEON_fmadd((float)local_65c - (float)local_650,(float)local_65c - (float)local_650,
                            (local_65c._4_4_ - local_650._4_4_) *
                            (local_65c._4_4_ - local_650._4_4_));
        fVar44 = (float)NEON_fmadd(local_654 - local_648,local_654 - local_648,uVar40);
        if (fVar43 < fVar39) {
          fVar43 = fVar39;
        }
        uVar40 = NEON_fmadd((float)local_644 - (float)local_650,(float)local_644 - (float)local_650,
                            (local_644._4_4_ - local_650._4_4_) *
                            (local_644._4_4_ - local_650._4_4_));
        fVar39 = (float)NEON_fmadd(local_63c - local_648,local_63c - local_648,uVar40);
        if (fVar43 < fVar44) {
          fVar43 = fVar44;
        }
        uVar36 = NEON_fmadd((float)local_638 - (float)local_650,(float)local_638 - (float)local_650,
                            (local_638._4_4_ - local_650._4_4_) *
                            (local_638._4_4_ - local_650._4_4_));
        uVar40 = NEON_fmadd((float)local_62c - (float)local_650,(float)local_62c - (float)local_650,
                            (local_62c._4_4_ - local_650._4_4_) *
                            (local_62c._4_4_ - local_650._4_4_));
        fVar44 = (float)NEON_fmadd(local_630 - local_648,local_630 - local_648,uVar36);
        if (fVar43 < fVar39) {
          fVar43 = fVar39;
        }
        fVar39 = (float)NEON_fmadd(local_624 - local_648,local_624 - local_648,uVar40);
        if (fVar43 < fVar44) {
          fVar43 = fVar44;
        }
        if (fVar43 < fVar39) {
          fVar43 = fVar39;
        }
        fVar39 = *(float *)(this + uVar24 * 4 + 0x78);
        fVar31 = fVar31 * (float)(int)((SQRT(fVar43) * (float)(ulong)uVar7) / fVar31);
        bVar10 = fVar31 < fVar39 * 0.9;
        if ((bVar10 || fVar31 != fVar39) && (bVar10 || fVar39 <= fVar31)) {
          *(float *)(this + uVar24 * 4 + 0x78) = fVar31;
          fVar39 = fVar31;
        }
        iVar16 = (int)((local_6e0 * fVar33) / fVar39);
        iVar16 = iVar16 - ((int)((uVar28 + iVar16) - (int)((local_6f0 * fVar33) / fVar39)) >> 1);
        local_6e0 = (fVar39 * (float)iVar16) / fVar33;
        iVar17 = (int)((local_6dc * fVar33) / fVar39);
        iVar17 = iVar17 - ((int)((uVar28 + iVar17) - (int)((local_6ec * fVar33) / fVar39)) >> 1);
        local_6f0 = (fVar39 * (float)(iVar16 + uVar28)) / fVar33;
        local_6dc = (fVar39 * (float)iVar17) / fVar33;
        local_6ec = (fVar39 * (float)(iVar17 + uVar28)) / fVar33;
      }
      fVar39 = local_6dc;
      fVar43 = local_6e0;
      fVar33 = local_6ec;
      fVar31 = local_6f0;
      RenderDeviceUtil::makeOrthoProjectionMatrix
                (local_6e0,local_6f0,local_6dc,local_6ec,-local_6e8,-local_6d8,(float *)&local_770);
      *(float *)(this + uVar24 * 8 + 0xb8) = fVar31 - fVar43;
      *(float *)(this + uVar24 * 8 + 0xbc) = fVar33 - fVar39;
      ConvexHull2DUtil::getBestFitRectangle(&local_730,uVar11,afStack_778,&local_788);
      fVar31 = atan2f(local_784,local_788);
      sincosf(fVar31 * -0.5,&fStack_88c,&local_890);
      uVar60 = 0x3f800000;
      uVar59 = 0x3f800000;
      fVar33 = fStack_88c * 0.0;
      fVar44 = fVar33 * fVar33;
      fVar45 = fVar44 - local_890 * fStack_88c;
      fVar31 = fStack_88c * fVar33 + local_890 * fVar33;
      fVar39 = local_890 * fStack_88c + fVar44;
      fVar33 = fStack_88c * fVar33 - local_890 * fVar33;
      uVar40 = NEON_fmadd((undefined4)local_6d0,0,local_6d0._4_4_ * 0.0);
      fVar45 = fVar45 + fVar45;
      fVar43 = (float)NEON_fmadd(fStack_88c * fStack_88c + fVar44,0xc0000000,0x3f800000);
      fVar31 = fVar31 + fVar31;
      fVar39 = fVar39 + fVar39;
      fVar33 = fVar33 + fVar33;
      uVar50 = NEON_fmadd(fVar44 + fVar44,0xc0000000,0x3f800000);
      fVar44 = (float)NEON_fmadd((float)uStack_6c8,0,uVar40);
      uVar42 = NEON_fmadd((undefined4)local_6c0,0,local_6c0._4_4_ * 0.0);
      uVar47 = NEON_fmadd((undefined4)local_6d0,fVar43,local_6d0._4_4_ * fVar45);
      uVar49 = NEON_fmadd((undefined4)local_6d0,fVar39,local_6d0._4_4_ * fVar43);
      uVar40 = NEON_fmadd((undefined4)local_6d0,fVar33,local_6d0._4_4_ * fVar31);
      uVar56 = NEON_fmadd((undefined4)local_6c0,fVar43,fVar45 * local_6c0._4_4_);
      uVar55 = NEON_fmadd((undefined4)local_6c0,fVar39,fVar43 * local_6c0._4_4_);
      uVar36 = NEON_fmadd((undefined4)local_6c0,fVar33,fVar31 * local_6c0._4_4_);
      uVar47 = NEON_fmadd((float)uStack_6c8,fVar31,uVar47);
      uVar49 = NEON_fmadd((float)uStack_6c8,fVar33,uVar49);
      uVar40 = NEON_fmadd((float)uStack_6c8,uVar50,uVar40);
      fVar48 = (float)NEON_fmadd((undefined4)local_6b8,0,uVar42);
      uVar56 = NEON_fmadd((undefined4)local_6b8,fVar31,uVar56);
      uVar55 = NEON_fmadd((undefined4)local_6b8,fVar33,uVar55);
      uVar36 = NEON_fmadd((undefined4)local_6b8,uVar50,uVar36);
      uVar42 = NEON_fmadd(uStack_6c8._4_4_,0,uVar47);
      uVar49 = NEON_fmadd(uStack_6c8._4_4_,0,uVar49);
      uVar40 = NEON_fmadd(uStack_6c8._4_4_,0,uVar40);
      uVar47 = NEON_fmadd(local_6b8._4_4_,0,uVar56);
      uVar56 = NEON_fmadd(local_6b8._4_4_,0,uVar55);
      uVar36 = NEON_fmadd(local_6b8._4_4_,0,uVar36);
      local_7c0 = CONCAT44(uVar56,uVar47);
      local_7d0 = CONCAT44(uVar49,uVar42);
      uStack_7c8 = CONCAT44(uStack_6c8._4_4_ + fVar44,uVar40);
      local_7b8 = CONCAT44(local_6b8._4_4_ + fVar48,uVar36);
      uVar36 = NEON_fmadd((undefined4)local_6b0,fVar43,fVar45 * local_6b0._4_4_);
      uVar42 = NEON_fmadd((undefined4)local_6b0,fVar39,fVar43 * local_6b0._4_4_);
      uVar56 = NEON_fmadd((undefined4)local_6b0,fVar33,fVar31 * local_6b0._4_4_);
      uVar47 = NEON_fmadd((undefined4)local_6b0,0,local_6b0._4_4_ * 0.0);
      uVar40 = NEON_fmadd((undefined4)local_6a0,fVar43,fVar45 * local_6a0._4_4_);
      uVar49 = NEON_fmadd((undefined4)uStack_6a8,fVar31,uVar36);
      uVar55 = NEON_fmadd((undefined4)uStack_6a8,fVar33,uVar42);
      uVar53 = NEON_fmadd((undefined4)uStack_6a8,uVar50,uVar56);
      uVar42 = NEON_fmadd((undefined4)local_6a0,fVar39,fVar43 * local_6a0._4_4_);
      uVar56 = NEON_fmadd((undefined4)local_6a0,fVar33,fVar31 * local_6a0._4_4_);
      uVar36 = NEON_fmadd((undefined4)local_6a0,0,local_6a0._4_4_ * 0.0);
      fVar43 = (float)NEON_fmadd((undefined4)uStack_6a8,0,uVar47);
      uVar40 = NEON_fmadd((undefined4)local_698,fVar31,uVar40);
      uVar47 = NEON_fmadd(uStack_6a8._4_4_,0,uVar49);
      uVar42 = NEON_fmadd((undefined4)local_698,fVar33,uVar42);
      uVar49 = NEON_fmadd(uStack_6a8._4_4_,0,uVar55);
      uVar50 = NEON_fmadd((undefined4)local_698,uVar50,uVar56);
      fVar31 = (float)NEON_fmadd((undefined4)local_698,0,uVar36);
      uVar56 = NEON_fmadd(uStack_6a8._4_4_,0,uVar53);
      uVar40 = NEON_fmadd(local_698._4_4_,0,uVar40);
      uVar36 = NEON_fmadd(local_698._4_4_,0,uVar42);
      local_7b0 = CONCAT44(uVar49,uVar47);
      uVar42 = NEON_fmadd(local_698._4_4_,0,uVar50);
      uStack_7a8 = CONCAT44(uStack_6a8._4_4_ + fVar43,uVar56);
      local_7a0 = CONCAT44(uVar36,uVar40);
      local_798 = CONCAT44(local_698._4_4_ + fVar31,uVar42);
      computeFrustumExtents
                ((Vector3 *)&local_680,(Matrix4x4 *)&local_7d0,(Vector3 *)&local_6e0,
                 (Vector3 *)&local_6f0);
      if (fVar32 != 1.0) {
        fVar31 = (local_6e0 + local_6f0) * 0.5;
        fVar33 = (local_6dc + local_6ec) * 0.5;
        local_6e0 = (float)NEON_fmadd(local_6e0 - fVar31,fVar32,fVar31);
        local_6f0 = (float)NEON_fmadd(local_6f0 - fVar31,fVar32,fVar31);
        local_6dc = (float)NEON_fmadd(local_6dc - fVar33,fVar32,fVar33);
        local_6ec = (float)NEON_fmadd(local_6ec - fVar33,fVar32,fVar33);
      }
      RenderDeviceUtil::makeOrthoProjectionMatrix
                (local_6e0,local_6f0,local_6dc,local_6ec,-local_6e8 - fVar41,-local_6d8,
                 (float *)&local_810);
      if (this[0x6c] == (ShadowRenderController)0x0) {
        uStack_6c8 = uStack_7c8;
        local_6d0 = local_7d0;
        local_6b8 = local_7b8;
        local_6c0 = local_7c0;
        uStack_6a8 = uStack_7a8;
        local_6b0 = local_7b0;
        local_698 = local_798;
        local_6a0 = local_7a0;
        uStack_768 = uStack_808;
        local_770 = local_810;
        local_758 = local_7f8;
        local_760 = local_800;
        uStack_748 = uStack_7e8;
        local_750 = local_7f0;
        local_738 = local_7d8;
        local_740 = local_7e0;
        if (this[0x74] != (ShadowRenderController)0x0) {
          uVar11 = computeFrustumHull((Vector3 *)&local_680,(Matrix4x4 *)&local_6d0,fVar32,
                                      &local_730);
          SVar5 = this[0x74];
          goto joined_r0x00a47520;
        }
      }
      else {
        if (bVar9) {
          uStack_7c8 = uStack_6c8;
          local_7d0 = local_6d0;
          local_7b8 = local_6b8;
          local_7c0 = local_6c0;
          uStack_7a8 = uStack_6a8;
          local_7b0 = local_6b0;
          local_798 = local_698;
          local_7a0 = local_6a0;
          uStack_808 = uStack_768;
          local_810 = local_770;
          local_7f8 = local_758;
          local_800 = local_760;
          uStack_7e8 = uStack_748;
          local_7f0 = local_750;
          local_7d8 = local_738;
          local_7e0 = local_740;
        }
        SVar5 = this[0x74];
joined_r0x00a47520:
        if (SVar5 != (ShadowRenderController)0x0) {
          if (uVar24 < uVar29) {
            cVar6 = *(char *)(*(long *)(*(long *)(this + 8) + 0x30) + 0x18);
            if (uVar11 != 0) {
              uVar26 = (ulong)uVar11;
              pfVar27 = afStack_72c;
              puVar30 = (undefined4 *)((ulong)&local_870 | 4);
              do {
                Vector4::set((Vector4 *)&local_880,pfVar27[-1],*pfVar27,0.0,1.0);
                puVar30[1] = 0;
                pfVar27 = pfVar27 + 2;
                uVar26 = uVar26 - 1;
                uVar36 = NEON_fmadd(local_880,(undefined4)local_770,fStack_87c * (float)local_760);
                uVar40 = NEON_fmadd(local_880,local_770._4_4_,fStack_87c * local_760._4_4_);
                uVar36 = NEON_fmadd(local_878,(undefined4)local_750,uVar36);
                uVar40 = NEON_fmadd(local_878,local_750._4_4_,uVar40);
                uVar36 = NEON_fmadd(uStack_874,(undefined4)local_740,uVar36);
                uVar40 = NEON_fmadd(uStack_874,local_740._4_4_,uVar40);
                puVar30[-1] = uVar36;
                *puVar30 = uVar40;
                puVar30 = puVar30 + 3;
              } while (uVar26 != 0);
            }
            puVar13 = (undefined8 *)RenderArgs::lockZStencilRegion();
            if (cVar4 == '\0') {
              puVar14 = puVar13;
              if (cVar6 != '\0') {
                puVar13[1] = 0x3f8000003f800000;
                *puVar13 = 0xbf800000bf800000;
                puVar13[3] = 0x3f8000003f800000;
                puVar13[2] = 0x3f800000bf800000;
                puVar14 = puVar13 + 9;
                puVar13[8] = uVar38;
                puVar13[5] = 0x3f800000bf800000;
                puVar13[4] = 0xbf8000003f800000;
                puVar13[7] = 0xbf8000003f800000;
                puVar13[6] = 0x3f8000003f800000;
              }
              uVar11 = uVar11 - 2;
              if (uVar11 != 0) goto LAB_00a476c8;
            }
            else {
LAB_00a4762c:
              puVar13[1] = 0x3f80000000000000;
              *puVar13 = 0xbf800000bf800000;
              puVar13[3] = 0x3f8000003f800000;
              puVar13[2] = 0xbf800000;
              puVar14 = puVar13 + 9;
              puVar13[8] = 0x3f800000;
              puVar13[5] = 0xbf800000;
              puVar13[4] = 0xbf80000000000000;
              puVar13[7] = 0xbf80000000000000;
              puVar13[6] = 0x3f8000003f800000;
            }
          }
          else {
            local_870 = 0xbf800000bf800000;
            local_868 = (undefined  [8])0x3f80000000000000;
            local_860 = 0xbf800000;
            local_858 = 0x3f8000003f800000;
            local_850 = 0xbf80000000000000;
            local_848 = 0x3f800000;
            puVar14 = (undefined8 *)RenderArgs::lockZStencilRegion();
            puVar13 = puVar14;
            if (cVar4 != '\0') goto LAB_00a4762c;
            uVar11 = 2;
LAB_00a476c8:
            puVar13 = puVar14;
            uVar26 = 0;
            puVar22 = (undefined8 *)(local_868 + 4);
            do {
              uVar1 = uVar26 + 1;
              *(undefined4 *)(puVar13 + 1) = local_868._0_4_;
              *puVar13 = local_870;
              lVar19 = (ulong)((int)uVar26 + 2) * 0xc;
              uVar21 = *puVar22;
              *(undefined4 *)((long)puVar13 + 0x14) = *(undefined4 *)(puVar22 + 1);
              *(undefined8 *)((long)puVar13 + 0xc) = uVar21;
              uVar21 = *(undefined8 *)((long)&local_870 + lVar19);
              puVar14 = (undefined8 *)((long)puVar13 + 0x24);
              *(undefined4 *)(puVar13 + 4) = *(undefined4 *)(local_868 + lVar19);
              puVar13[3] = uVar21;
              puVar13 = puVar14;
              uVar26 = uVar1;
              puVar22 = (undefined8 *)((long)puVar22 + 0xc);
            } while (uVar11 != uVar1);
          }
          RenderArgs::unlockZStencilRegion(this_00,(Vector3 *)puVar14);
        }
      }
      initShadowMapRegion(this,*(ShadowQueueItem **)(param_1 + 8),(Matrix4x4 *)&local_770,
                          (Matrix4x4 *)&local_6d0,(uint)uVar24);
      uVar40 = (undefined4)local_7e0;
      fVar31 = (float)uStack_7e8;
      fVar32 = (float)local_7f8;
      fVar33 = (float)local_7d8;
      fVar43 = local_7d8._4_4_;
      uVar36 = (undefined4)local_810;
      fVar39 = local_810._4_4_;
      fVar44 = (float)local_800;
      fVar45 = local_800._4_4_;
      uVar42 = (undefined4)local_7f0;
      fVar48 = local_7f0._4_4_;
      fVar52 = local_7e0._4_4_;
      fVar54 = (float)uStack_808;
      fVar35 = uStack_808._4_4_;
      fVar46 = local_7f8._4_4_;
      fVar51 = uStack_7e8._4_4_;
      if (uVar23 != 4) {
        if ((uVar23 & 1) != 0) {
          uVar59 = 0xbf800000;
        }
        if ((uVar23 & 2) != 0) {
          uVar60 = 0xbf800000;
        }
        uVar40 = NEON_fmadd((undefined4)local_770,0,local_770._4_4_ + local_770._4_4_);
        uVar36 = NEON_fmadd((undefined4)local_770,0x40000000,local_770._4_4_ * 0.0);
        fVar31 = (float)NEON_fmadd((undefined4)local_770,0,local_770._4_4_ * 0.0);
        uVar40 = NEON_fmadd((float)uStack_768,0,uVar40);
        uVar47 = NEON_fmadd((float)uStack_768,0,uVar36);
        fVar32 = (float)NEON_fmadd((float)uStack_768,0,fVar31);
        uVar42 = NEON_fmadd((float)local_760,0,local_760._4_4_ + local_760._4_4_);
        uVar49 = NEON_fmadd((float)local_760,0x40000000,local_760._4_4_ * 0.0);
        uVar36 = NEON_fmadd(uStack_768._4_4_,uVar60,uVar40);
        uVar47 = NEON_fmadd(uStack_768._4_4_,uVar59,uVar47);
        uVar55 = NEON_fmadd(uStack_768._4_4_,0,(float)uStack_768 + fVar31);
        uVar42 = NEON_fmadd((float)local_758,0,uVar42);
        fVar31 = (float)NEON_fmadd((float)local_760,0,local_760._4_4_ * 0.0);
        uVar49 = NEON_fmadd((float)local_758,0,uVar49);
        uVar40 = NEON_fmadd((undefined4)local_750,0,local_750._4_4_ + local_750._4_4_);
        uVar42 = NEON_fmadd(local_758._4_4_,uVar60,uVar42);
        fVar33 = (float)NEON_fmadd((float)local_758,0,fVar31);
        local_770 = CONCAT44(uVar36,uVar47);
        uVar36 = NEON_fmadd((undefined4)local_750,0x40000000,local_750._4_4_ * 0.0);
        uVar56 = NEON_fmadd(local_758._4_4_,uVar59,uVar49);
        uVar40 = NEON_fmadd((float)uStack_748,0,uVar40);
        fVar43 = (float)NEON_fmadd((undefined4)local_750,0,local_750._4_4_ * 0.0);
        uVar49 = NEON_fmadd((undefined4)local_740,0x40000000,local_740._4_4_ * 0.0);
        uVar50 = NEON_fmadd((undefined4)local_740,0,local_740._4_4_ + local_740._4_4_);
        uVar47 = NEON_fmadd((float)uStack_748,0,uVar36);
        local_760 = CONCAT44(uVar42,uVar56);
        uVar56 = NEON_fmadd(local_758._4_4_,0,(float)local_758 + fVar31);
        uVar40 = NEON_fmadd(uStack_748._4_4_,uVar60,uVar40);
        fVar39 = (float)NEON_fmadd((float)uStack_748,0,fVar43);
        uVar42 = NEON_fmadd((float)local_738,0,uVar49);
        fVar44 = (float)NEON_fmadd((undefined4)local_740,0,local_740._4_4_ * 0.0);
        uVar36 = NEON_fmadd((float)local_738,0,uVar50);
        uVar47 = NEON_fmadd(uStack_748._4_4_,uVar59,uVar47);
        uVar49 = NEON_fmadd(uStack_748._4_4_,0,(float)uStack_748 + fVar43);
        uVar42 = NEON_fmadd(local_738._4_4_,uVar59,uVar42);
        uVar36 = NEON_fmadd(local_738._4_4_,uVar60,uVar36);
        fVar31 = (float)NEON_fmadd((float)local_738,0,fVar44);
        local_750 = CONCAT44(uVar40,uVar47);
        uVar40 = NEON_fmadd(local_738._4_4_,0,(float)local_738 + fVar44);
        uStack_748 = CONCAT44(uStack_748._4_4_ + fVar39,uVar49);
        local_740 = CONCAT44(uVar36,uVar42);
        local_738 = CONCAT44(local_738._4_4_ + fVar31,uVar40);
        uVar36 = NEON_fmadd((undefined4)local_810,0x40000000,local_810._4_4_ * 0.0);
        uVar40 = NEON_fmadd((undefined4)local_810,0,local_810._4_4_ + local_810._4_4_);
        fVar31 = (float)NEON_fmadd((undefined4)local_810,0,local_810._4_4_ * 0.0);
        local_758 = CONCAT44(local_758._4_4_ + fVar33,uVar56);
        uVar36 = NEON_fmadd((float)uStack_808,0,uVar36);
        uVar40 = NEON_fmadd((float)uStack_808,0,uVar40);
        fVar35 = (float)NEON_fmadd((float)uStack_808,0,fVar31);
        uVar47 = NEON_fmadd((float)local_800,0x40000000,local_800._4_4_ * 0.0);
        uStack_768 = CONCAT44(uStack_768._4_4_ + fVar32,uVar55);
        uVar36 = NEON_fmadd(uStack_808._4_4_,uVar59,uVar36);
        uVar42 = NEON_fmadd((float)local_800,0,local_800._4_4_ + local_800._4_4_);
        fVar39 = (float)NEON_fmadd(uStack_808._4_4_,uVar60,uVar40);
        fVar54 = (float)NEON_fmadd(uStack_808._4_4_,0,(float)uStack_808 + fVar31);
        fVar35 = uStack_808._4_4_ + fVar35;
        uVar47 = NEON_fmadd((float)local_7f8,0,uVar47);
        fVar31 = (float)NEON_fmadd((float)local_800,0,local_800._4_4_ * 0.0);
        uVar40 = NEON_fmadd((float)local_7f8,0,uVar42);
        fVar44 = (float)NEON_fmadd(local_7f8._4_4_,uVar59,uVar47);
        fVar46 = (float)NEON_fmadd((float)local_7f8,0,fVar31);
        uVar47 = NEON_fmadd((undefined4)local_7f0,0x40000000,local_7f0._4_4_ * 0.0);
        uVar42 = NEON_fmadd((undefined4)local_7f0,0,local_7f0._4_4_ + local_7f0._4_4_);
        fVar33 = (float)NEON_fmadd((undefined4)local_7f0,0,local_7f0._4_4_ * 0.0);
        fVar45 = (float)NEON_fmadd(local_7f8._4_4_,uVar60,uVar40);
        fVar32 = (float)NEON_fmadd(local_7f8._4_4_,0,(float)local_7f8 + fVar31);
        fVar46 = local_7f8._4_4_ + fVar46;
        uVar40 = NEON_fmadd((float)uStack_7e8,0,uVar47);
        uVar47 = NEON_fmadd((float)uStack_7e8,0,uVar42);
        fVar51 = (float)NEON_fmadd((float)uStack_7e8,0,fVar33);
        uVar49 = NEON_fmadd((undefined4)local_7e0,0x40000000,local_7e0._4_4_ * 0.0);
        uVar50 = NEON_fmadd((undefined4)local_7e0,0,local_7e0._4_4_ + local_7e0._4_4_);
        fVar57 = (float)NEON_fmadd((undefined4)local_7e0,0,local_7e0._4_4_ * 0.0);
        local_810 = CONCAT44(fVar39,uVar36);
        uVar42 = NEON_fmadd(uStack_7e8._4_4_,uVar59,uVar40);
        fVar48 = (float)NEON_fmadd(uStack_7e8._4_4_,uVar60,uVar47);
        fVar31 = (float)NEON_fmadd(uStack_7e8._4_4_,0,(float)uStack_7e8 + fVar33);
        uVar40 = NEON_fmadd((float)local_7d8,0,uVar49);
        fVar51 = uStack_7e8._4_4_ + fVar51;
        uVar47 = NEON_fmadd((float)local_7d8,0,uVar50);
        fVar43 = (float)NEON_fmadd((float)local_7d8,0,fVar57);
        uVar40 = NEON_fmadd(local_7d8._4_4_,uVar59,uVar40);
        uStack_808 = CONCAT44(fVar35,fVar54);
        fVar52 = (float)NEON_fmadd(local_7d8._4_4_,uVar60,uVar47);
        fVar33 = (float)NEON_fmadd(local_7d8._4_4_,0,(float)local_7d8 + fVar57);
        fVar43 = local_7d8._4_4_ + fVar43;
        local_800 = CONCAT44(fVar45,fVar44);
        local_7f8 = CONCAT44(fVar46,fVar32);
        local_7f0 = CONCAT44(fVar48,uVar42);
        uStack_7e8 = CONCAT44(fVar51,fVar31);
        local_7e0 = CONCAT44(fVar52,uVar40);
        local_7d8 = CONCAT44(fVar43,fVar33);
      }
      uVar50 = NEON_fmadd((undefined4)local_7d0,uVar36,local_7d0._4_4_ * fVar44);
      uVar56 = NEON_fmadd((undefined4)local_7d0,fVar39,local_7d0._4_4_ * fVar45);
      uVar59 = NEON_fmadd((undefined4)local_7d0,fVar54,local_7d0._4_4_ * fVar32);
      uVar49 = NEON_fmadd((undefined4)local_7d0,fVar35,local_7d0._4_4_ * fVar46);
      uVar55 = NEON_fmadd((undefined4)local_7c0,uVar36,fVar44 * local_7c0._4_4_);
      uVar47 = NEON_fmadd((undefined4)local_7c0,fVar39,fVar45 * local_7c0._4_4_);
      uVar50 = NEON_fmadd((undefined4)uStack_7c8,uVar42,uVar50);
      uVar56 = NEON_fmadd((undefined4)uStack_7c8,fVar48,uVar56);
      uVar60 = NEON_fmadd((undefined4)uStack_7c8,fVar31,uVar59);
      uVar49 = NEON_fmadd((undefined4)uStack_7c8,fVar51,uVar49);
      uVar61 = NEON_fmadd((undefined4)local_7b8,uVar42,uVar55);
      uVar59 = NEON_fmadd(uStack_7c8._4_4_,uVar40,uVar50);
      uVar47 = NEON_fmadd((undefined4)local_7b8,fVar48,uVar47);
      uVar55 = NEON_fmadd(uStack_7c8._4_4_,fVar52,uVar56);
      uVar53 = NEON_fmadd(uStack_7c8._4_4_,fVar33,uVar60);
      uVar49 = NEON_fmadd(uStack_7c8._4_4_,fVar43,uVar49);
      uVar50 = NEON_fmadd((undefined4)local_7c0,fVar54,fVar32 * local_7c0._4_4_);
      uVar56 = NEON_fmadd((undefined4)local_7c0,fVar35,fVar46 * local_7c0._4_4_);
      uVar60 = NEON_fmadd(local_7b8._4_4_,uVar40,uVar61);
      local_870 = CONCAT44(uVar55,uVar59);
      uVar59 = NEON_fmadd(local_7b8._4_4_,fVar52,uVar47);
      local_868 = (undefined  [8])CONCAT44(uVar49,uVar53);
      uVar47 = NEON_fmadd((undefined4)local_7b8,fVar31,uVar50);
      uVar49 = NEON_fmadd((undefined4)local_7b8,fVar51,uVar56);
      local_860 = CONCAT44(uVar59,uVar60);
      uVar60 = NEON_fmadd(local_7b8._4_4_,fVar33,uVar47);
      uVar55 = NEON_fmadd(local_7b8._4_4_,fVar43,uVar49);
      uVar53 = NEON_fmadd((undefined4)local_7b0,uVar36,fVar44 * local_7b0._4_4_);
      uVar49 = NEON_fmadd((undefined4)local_7b0,fVar54,fVar32 * local_7b0._4_4_);
      uVar56 = NEON_fmadd((undefined4)local_7b0,fVar35,fVar46 * local_7b0._4_4_);
      uVar47 = NEON_fmadd((undefined4)local_7a0,uVar36,fVar44 * local_7a0._4_4_);
      uVar58 = NEON_fmadd((undefined4)local_7b0,fVar39,fVar45 * local_7b0._4_4_);
      uVar50 = NEON_fmadd((undefined4)local_7a0,fVar39,fVar45 * local_7a0._4_4_);
      uVar61 = NEON_fmadd((undefined4)uStack_7a8,fVar31,uVar49);
      uVar49 = NEON_fmadd((undefined4)local_7a0,fVar35,fVar46 * local_7a0._4_4_);
      uVar59 = NEON_fmadd((undefined4)uStack_7a8,fVar51,uVar56);
      local_858 = CONCAT44(uVar55,uVar60);
      uVar36 = NEON_fmadd((undefined4)local_7a0,fVar54,fVar32 * local_7a0._4_4_);
      uVar60 = NEON_fmadd((undefined4)uStack_7a8,uVar42,uVar53);
      uVar55 = NEON_fmadd((undefined4)uStack_7a8,fVar48,uVar58);
      uVar56 = NEON_fmadd(uStack_7a8._4_4_,fVar33,uVar61);
      uVar42 = NEON_fmadd((undefined4)local_798,uVar42,uVar47);
      uVar50 = NEON_fmadd((undefined4)local_798,fVar48,uVar50);
      uVar59 = NEON_fmadd(uStack_7a8._4_4_,fVar43,uVar59);
      uVar36 = NEON_fmadd((undefined4)local_798,fVar31,uVar36);
      uVar47 = NEON_fmadd((undefined4)local_798,fVar51,uVar49);
      uVar49 = NEON_fmadd(uStack_7a8._4_4_,uVar40,uVar60);
      uVar60 = NEON_fmadd(uStack_7a8._4_4_,fVar52,uVar55);
      local_840 = NEON_fmadd(local_798._4_4_,uVar40,uVar42);
      uStack_83c = NEON_fmadd(local_798._4_4_,fVar52,uVar50);
      local_848 = CONCAT44(uVar59,uVar56);
      local_838 = NEON_fmadd(local_798._4_4_,fVar33,uVar36);
      uStack_834 = NEON_fmadd(local_798._4_4_,fVar43,uVar47);
      local_850 = CONCAT44(uVar60,uVar49);
      TransformArgs::setupFrustum
                ((TransformArgs *)this_00,(Matrix4x4 *)&local_6d0,(Matrix4x4 *)&local_770,
                 (Matrix4x4 *)&local_870,1.0 / (fVar34 - fVar37),
                 *(float *)(*(long *)(this + 0x10) + 0xc4),(Vector3 *)(*(long *)(this + 0x10) + 900)
                );
      lVar19 = *(long *)(param_1 + 8);
      puVar18 = *(uint **)(lVar19 + uVar24 * 8 + 8);
      uVar28 = *puVar18;
      uVar11 = puVar18[1];
      uVar7 = puVar18[2];
      if (uVar23 != 4) {
        uVar7 = uVar7 >> 1;
        uVar2 = uVar7;
        if ((uVar23 & 2) != 0) {
          uVar2 = 0;
        }
        uVar28 = (-(uVar23 & 1) & uVar7) + uVar28;
        uVar11 = uVar2 + uVar11;
      }
      RenderArgs::setupViewport(this_00,uVar28,uVar11,uVar7,uVar7);
      CullingArgs::setViewport(pCVar15,uVar7,uVar7);
      *(undefined8 *)(this_00 + 0x3b8) = *(undefined8 *)(lVar19 + 0x68);
      *(undefined8 *)(this_00 + 0x3c0) = *(undefined8 *)(lVar19 + 0x70);
      CullingArgs::copyTransformData(pCVar15,(TransformArgs *)this_00);
    }
    uVar24 = uVar24 + 1;
  } while (uVar24 != uVar12);
LAB_00a47c24:
  if (*(long *)(lVar8 + 0x28) != local_b8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


