// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fillGrid
// Entry Point: 00a28500
// Size: 4756 bytes
// Signature: undefined __thiscall fillGrid(LightListRasterizer * this, Matrix4x4 * param_1, Matrix4x4 * param_2)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* LightListRasterizer::fillGrid(Matrix4x4 const&, Matrix4x4 const&) */

void __thiscall
LightListRasterizer::fillGrid(LightListRasterizer *this,Matrix4x4 *param_1,Matrix4x4 *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  uint **this_00;
  void *__dest;
  void *__src;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  uint *puVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  uint *puVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  undefined2 *__s;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  float fVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  float fVar45;
  float fVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined8 uVar49;
  float fVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  float fVar55;
  float fVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined4 uVar64;
  undefined8 uVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  float fVar73;
  undefined4 uVar74;
  float fVar75;
  undefined4 uVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  float local_7b4;
  undefined8 local_750;
  undefined8 auStack_748 [33];
  uint local_640;
  float local_63c [3];
  Vector4 aVStack_630 [16];
  Vector4 aVStack_620 [16];
  Vector4 aVStack_610 [16];
  Vector4 aVStack_600 [16];
  Vector4 aVStack_5f0 [16];
  Vector4 aVStack_5e0 [16];
  Vector4 aVStack_5d0 [16];
  Vector4 aVStack_5c0 [16];
  Vector4 aVStack_5b0 [16];
  Vector4 aVStack_5a0 [16];
  Vector4 aVStack_590 [16];
  Vector4 aVStack_580 [16];
  Vector4 aVStack_570 [16];
  Vector4 aVStack_560 [16];
  Vector4 aVStack_550 [16];
  Vector4 aVStack_540 [16];
  undefined8 local_530;
  float local_528;
  ClippingContext aCStack_520 [416];
  void *local_380;
  void *local_378;
  undefined4 local_370;
  uint uStack_36c;
  int local_368;
  void *local_360;
  void *local_358;
  void *local_350;
  undefined8 local_348;
  float local_33c [65];
  float local_238 [65];
  float local_134 [33];
  long local_b0;
  
  lVar3 = tpidr_el0;
  local_b0 = *(long *)(lVar3 + 0x28);
  uVar23 = *(uint *)(this + 8);
  uVar24 = *(uint *)(this + 0xc);
  uVar26 = *(ulong *)(this + 0x28);
  uVar25 = uVar24 * uVar23 * *(int *)(this + 0x10) * *(int *)(this + 0x24);
  uVar5 = (ulong)uVar25;
  if (uVar25 != 0) {
    uVar8 = *(ulong *)(this + 0x40);
    if ((uVar25 < 8) || (uVar26 < uVar8 + uVar5 * 4 && uVar8 < uVar26 + uVar5 * 4)) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar5 & 0xfffffff8;
      puVar7 = (undefined8 *)(uVar26 + 0x10);
      puVar14 = (undefined8 *)(uVar8 + 0x10);
      uVar16 = uVar10;
      do {
        puVar7[-1] = 0;
        puVar7[-2] = 0;
        puVar7[1] = 0;
        *puVar7 = 0;
        puVar7 = puVar7 + 4;
        puVar14[-1] = 0;
        puVar14[-2] = 0;
        puVar14[1] = 0;
        *puVar14 = 0;
        puVar14 = puVar14 + 4;
        uVar16 = uVar16 - 8;
      } while (uVar16 != 0);
      if (uVar10 == uVar5) goto LAB_00a285e8;
    }
    lVar13 = uVar5 - uVar10;
    puVar9 = (undefined4 *)(uVar8 + uVar10 * 4);
    puVar12 = (undefined4 *)(uVar26 + uVar10 * 4);
    do {
      lVar13 = lVar13 + -1;
      *puVar12 = 0;
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
      puVar12 = puVar12 + 1;
    } while (lVar13 != 0);
  }
LAB_00a285e8:
  if ((((*(float *)(param_2 + 0xc) != 0.0) || (*(float *)(param_2 + 0x1c) != 0.0)) ||
      (*(float *)(param_2 + 0x2c) != 0.0)) || (*(float *)(param_2 + 0x3c) != 1.0)) {
    fVar56 = *(float *)(this + 0x20);
    fVar63 = 1.0 / fVar56;
    fVar27 = logf(*(float *)(this + 0x1c) * fVar63);
    fVar61 = *(float *)(this + 0x18);
    uVar25 = *(uint *)(this + 0x14);
    fVar45 = 0.0;
    if (fVar61 < fVar56) {
      fVar45 = 1.0;
    }
    fVar27 = (float)(ulong)(uVar25 - (fVar61 < fVar56)) / (fVar27 + 0.0);
    local_134[0] = -fVar61;
    if (uVar25 != 0) {
      uVar5 = 1;
      do {
        fVar46 = (float)NEON_fmadd((float)uVar5,1.0 / fVar27,(1.0 / fVar27) * -fVar45);
        fVar46 = powf(2.718282,fVar46);
        local_134[uVar5] = fVar56 * -fVar46;
        uVar15 = (int)uVar5 + 1;
        uVar5 = (ulong)uVar15;
      } while (uVar15 <= uVar25);
    }
    uVar25 = 0;
    fVar46 = *(float *)param_2;
    fVar56 = *(float *)(param_2 + 0x20);
    do {
      fVar50 = (float)NEON_fmadd(-2.0 / (float)(ulong)uVar23,(float)(ulong)uVar25,0x3f800000);
      local_238[uVar25] = (fVar50 - fVar56) / fVar46;
      uVar25 = uVar25 + 1;
    } while (uVar25 <= uVar23);
    uVar23 = 0;
    fVar46 = *(float *)(param_2 + 0x14);
    fVar56 = *(float *)(param_2 + 0x24);
    do {
      fVar50 = (float)NEON_fmadd(-2.0 / (float)(ulong)uVar24,(float)(ulong)uVar23,0x3f800000);
      local_33c[uVar23] = (fVar50 - fVar56) / fVar46;
      uVar23 = uVar23 + 1;
    } while (uVar23 <= uVar24);
    local_380 = operator_new__(0x880);
    local_378 = operator_new__(0x88);
    local_368 = 0;
    local_370 = 0;
    uStack_36c = 0;
    local_348 = 0x1100000088;
    local_360 = operator_new__(0x80);
    local_358 = operator_new__(0x80);
    local_350 = operator_new__(0x80);
                    /* try { // try from 00a28778 to 00a2879b has its CatchHandler @ 00a29794 */
    puVar20 = (uint *)param_2;
    ClippingContext::ClippingContext(aCStack_520,0x11,0x10,fVar61,param_2,fVar63,fVar27,fVar45);
    this_00 = (uint **)(this + 0x70);
    lVar13 = *(long *)(this + 0x78) - (long)*this_00 >> 2;
    uVar10 = (*(long *)(*(long *)this + 0x58) - *(long *)(*(long *)this + 0x50) >> 3) *
             -0x3333333333333333;
    uVar8 = uVar10 & 0xffffffff;
    bVar4 = uVar8 < (ulong)(lVar13 * -0x5555555555555555);
    uVar5 = uVar8 + lVar13 * 0x5555555555555555;
    if (bVar4 || uVar5 == 0) {
      if (bVar4) {
        *(uint **)(this + 0x78) = *this_00 + uVar8 * 3;
      }
    }
    else {
                    /* try { // try from 00a287ec to 00a287ef has its CatchHandler @ 00a2979c */
      std::__ndk1::
      vector<LightListRasterizer::ZExtent,std::__ndk1::allocator<LightListRasterizer::ZExtent>>::
      __append((vector<LightListRasterizer::ZExtent,std::__ndk1::allocator<LightListRasterizer::ZExtent>>
                *)this_00,uVar5);
    }
    uVar23 = (uint)uVar10;
    if (uVar23 != 0) {
      uVar5 = 0;
      do {
        plVar6 = (long *)(*(long *)(*(long *)this + 0x50) + uVar5 * 0x28);
        puVar9 = (undefined4 *)*plVar6;
        puVar11 = (uint *)(*(long *)(this + 0x70) + uVar5 * 0xc);
        fVar46 = (float)puVar9[0xc];
        fVar61 = (float)puVar9[0xd];
        fVar50 = (float)puVar9[0xe];
        uVar53 = puVar9[0xf];
        fVar67 = (float)puVar9[4];
        fVar68 = (float)puVar9[5];
        fVar69 = (float)puVar9[6];
        fVar70 = (float)puVar9[7];
        uVar71 = puVar9[8];
        uVar72 = puVar9[9];
        uVar74 = puVar9[10];
        uVar76 = puVar9[0xb];
        uVar47 = NEON_fmadd(fVar46,*(undefined4 *)(param_1 + 8),fVar61 * *(float *)(param_1 + 0x18))
        ;
        local_528 = (float)NEON_fmadd(fVar50,*(undefined4 *)(param_1 + 0x28),uVar47);
        local_530 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20) +
                             (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) * fVar61 +
                             (float)((ulong)*(undefined8 *)param_1 >> 0x20) * fVar46 +
                             (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) * fVar50,
                             (float)*(undefined8 *)(param_1 + 0x30) +
                             (float)*(undefined8 *)(param_1 + 0x10) * fVar61 +
                             (float)*(undefined8 *)param_1 * fVar46 +
                             (float)*(undefined8 *)(param_1 + 0x20) * fVar50);
        local_528 = *(float *)(param_1 + 0x38) + local_528;
        uVar58 = *puVar9;
        uVar47 = puVar9[1];
        uVar51 = puVar9[2];
        uVar52 = puVar9[3];
        lVar13 = plVar6[2];
        fVar62 = *(float *)(lVar13 + 0x194);
        puVar11[1] = 0;
        puVar11[2] = 0;
        uVar24 = (uint)uVar5;
        *puVar11 = uVar24;
        fVar56 = local_528 + fVar62;
        if (-fVar56 < *(float *)(this + 0x1c)) {
          fVar28 = local_528 - fVar62;
          if (*(float *)(this + 0x18) < -fVar28) {
            if (*(int *)(lVar13 + 0x16c) == 1) {
              puVar20 = (uint *)(ulong)*(uint *)(this + 8);
                    /* try { // try from 00a289cc to 00a289e7 has its CatchHandler @ 00a297a4 */
              getScreenSpaceBounds
                        (this,(float *)&local_530,fVar62,*(float *)(this + 0x18),param_2,
                         *(uint *)(this + 8),*(uint *)(this + 0xc),&local_640,(uint *)&local_750);
              if (((uint)local_750 <= local_640) || ((uint)local_750._4_4_ <= (uint)local_63c[0]))
              goto LAB_00a288e8;
              fVar56 = logf(fVar63 * -fVar56);
              fVar56 = (float)NEON_fmadd(fVar56,fVar27,fVar45);
              if (0.0 <= fVar56) {
                uVar25 = *(uint *)(this + 0x14);
                uVar15 = uVar25;
                if ((uint)(int)fVar56 <= uVar25) goto LAB_00a29298;
              }
              else {
                uVar25 = *(uint *)(this + 0x14);
                fVar56 = 0.0;
LAB_00a29298:
                uVar15 = (int)fVar56;
              }
              fVar56 = logf(fVar63 * -fVar28);
              fVar56 = (float)NEON_fmadd(fVar56,fVar27,fVar45);
              fVar56 = (float)(int)fVar56;
              if (1.0 <= fVar56) {
                if ((uint)(int)fVar56 <= uVar25) goto LAB_00a292c8;
              }
              else {
                fVar56 = 1.0;
                if (uVar25 != 0) {
LAB_00a292c8:
                  uVar25 = (uint)fVar56;
                }
              }
              puVar11 = *this_00;
              puVar11[uVar5 * 3 + 1] = uVar15;
              puVar11[uVar5 * 3 + 2] = uVar25;
              if ((uint)local_63c[0] < (uint)local_750._4_4_) {
                fVar56 = local_134[uVar15];
                fVar61 = local_134[uVar25];
                fVar46 = local_33c[(uint)local_63c[0]];
                uVar8 = (ulong)(uint)local_63c[0];
                do {
                  uVar16 = uVar8 + 1;
                  fVar67 = fVar56 * fVar46;
                  fVar50 = fVar61 * fVar46;
                  fVar46 = local_33c[uVar16];
                  fVar70 = (fVar61 * fVar46 + fVar50 + fVar67 + fVar56 * fVar46) * 0.25 -
                           local_530._4_4_;
                  fVar67 = fVar67 * fVar70;
                  fVar68 = fVar56 * fVar46 * fVar70;
                  fVar50 = fVar50 * fVar70;
                  fVar69 = fVar61 * fVar46 * fVar70;
                  if (fVar68 < fVar67) {
                    fVar67 = fVar68;
                  }
                  if (fVar69 < fVar50) {
                    fVar50 = fVar69;
                  }
                  if (local_640 < (uint)local_750) {
                    fVar69 = local_238[local_640];
                    fVar68 = (fVar56 + fVar61) * 0.5 - local_528;
                    uVar17 = (ulong)local_640;
                    do {
                      uVar21 = (ulong)(uint)local_750;
                      uVar1 = uVar17 + 1;
                      fVar28 = fVar56 * fVar69;
                      fVar73 = fVar61 * fVar69;
                      fVar69 = local_238[uVar1];
                      fVar77 = (fVar61 * fVar69 + fVar73 + fVar28 + fVar56 * fVar69) * 0.25 -
                               (float)local_530;
                      uVar51 = NEON_fmadd(fVar77,fVar77,fVar70 * fVar70);
                      fVar28 = fVar28 * fVar77;
                      fVar75 = fVar56 * fVar69 * fVar77;
                      fVar73 = fVar73 * fVar77;
                      fVar78 = fVar61 * fVar69 * fVar77;
                      uVar47 = NEON_fmadd(fVar77,(float)local_530,local_530._4_4_ * fVar70);
                      fVar79 = (float)NEON_fmadd(fVar68,fVar68,uVar51);
                      fVar77 = (float)NEON_fmadd(fVar68,local_528,uVar47);
                      if (fVar75 < fVar28) {
                        fVar28 = fVar75;
                      }
                      if (fVar78 < fVar73) {
                        fVar73 = fVar78;
                      }
                      fVar28 = (float)NEON_fmadd(fVar68,fVar56,fVar67 + (fVar28 - fVar77));
                      fVar73 = (float)NEON_fmadd(fVar68,fVar61,fVar50 + (fVar73 - fVar77));
                      if (fVar73 < fVar28) {
                        fVar28 = fVar73;
                      }
                      if (fVar28 <= fVar62 * SQRT(fVar79)) {
                        uVar15 = (uint)uVar17;
                        uVar25 = uVar15;
                        if ((uint)local_750 - 1 <= uVar15) {
                          uVar25 = (uint)local_750 - 1;
                        }
                        do {
                          uVar18 = (int)uVar21 - 1;
                          uVar19 = (ulong)uVar18;
                          if (uVar19 <= uVar17) {
                            uVar18 = uVar25;
                            if (uVar25 < uVar17) goto LAB_00a293bc;
                            goto LAB_00a29518;
                          }
                          fVar73 = fVar56 * local_238[uVar19];
                          fVar28 = fVar61 * local_238[uVar19];
                          fVar77 = fVar56 * local_238[uVar21];
                          fVar75 = fVar61 * local_238[uVar21];
                          fVar78 = (fVar75 + fVar28 + fVar73 + fVar77) * 0.25 - (float)local_530;
                          uVar51 = NEON_fmadd(fVar78,fVar78,fVar70 * fVar70);
                          fVar73 = fVar73 * fVar78;
                          fVar77 = fVar77 * fVar78;
                          fVar28 = fVar28 * fVar78;
                          fVar75 = fVar75 * fVar78;
                          uVar47 = NEON_fmadd(fVar78,(float)local_530,local_530._4_4_ * fVar70);
                          fVar79 = (float)NEON_fmadd(fVar68,fVar68,uVar51);
                          fVar78 = (float)NEON_fmadd(fVar68,local_528,uVar47);
                          if (fVar77 < fVar73) {
                            fVar73 = fVar77;
                          }
                          if (fVar75 < fVar28) {
                            fVar28 = fVar75;
                          }
                          fVar73 = (float)NEON_fmadd(fVar68,fVar56,fVar67 + (fVar73 - fVar78));
                          fVar28 = (float)NEON_fmadd(fVar68,fVar61,fVar50 + (fVar28 - fVar78));
                          if (fVar28 < fVar73) {
                            fVar73 = fVar28;
                          }
                          uVar21 = uVar19;
                        } while (fVar62 * SQRT(fVar79) < fVar73);
                        if (uVar17 <= uVar19) {
LAB_00a29518:
                          iVar2 = *(int *)(this + 0x24);
                          uVar25 = ((uint)(uVar5 >> 5) & 0x7ffffff) +
                                   iVar2 * (uVar15 + (int)uVar8 * *(int *)(this + 8));
                          do {
                            uVar21 = (ulong)uVar25;
                            uVar15 = (int)uVar17 + 1;
                            uVar17 = (ulong)uVar15;
                            uVar25 = uVar25 + iVar2;
                            *(uint *)(uVar26 + uVar21 * 4) =
                                 *(uint *)(uVar26 + uVar21 * 4) | 1 << (ulong)(uVar24 & 0x1f);
                          } while (uVar15 <= uVar18);
                        }
                      }
LAB_00a293bc:
                      uVar17 = uVar1;
                    } while (uVar1 < (uint)local_750);
                  }
                  uVar8 = uVar16;
                } while (uVar16 < (uint)local_750._4_4_);
              }
            }
            else {
                    /* try { // try from 00a28a60 to 00a28a63 has its CatchHandler @ 00a297a0 */
              fVar56 = (float)MathUtil::degreeToRadian(*(float *)(lVar13 + 0x19c));
              fVar56 = tanf(fVar56 * 0.5);
              fVar56 = fVar62 * fVar56;
              local_7b4 = fVar62;
              if (fVar62 < fVar56) {
                fVar28 = fVar62 / fVar56;
                fVar56 = fVar62;
                local_7b4 = fVar62 * fVar28;
              }
                    /* try { // try from 00a28a98 to 00a28c57 has its CatchHandler @ 00a297ac */
              Vector4::set((Vector4 *)&local_640,0.0,0.0,0.0,1.0);
              fVar77 = -fVar56;
              fVar28 = fVar56 * 0.4142136;
              fVar75 = -local_7b4;
              Vector4::set(aVStack_630,fVar28,fVar77,fVar75,1.0);
              fVar73 = -fVar28;
              Vector4::set(aVStack_620,fVar56,fVar73,fVar75,1.0);
              Vector4::set(aVStack_610,fVar56,fVar28,fVar75,1.0);
              Vector4::set(aVStack_600,fVar28,fVar56,fVar75,1.0);
              Vector4::set(aVStack_5f0,fVar73,fVar56,fVar75,1.0);
              Vector4::set(aVStack_5e0,fVar77,fVar28,fVar75,1.0);
              Vector4::set(aVStack_5d0,fVar77,fVar73,fVar75,1.0);
              Vector4::set(aVStack_5c0,fVar73,fVar77,fVar75,1.0);
              fVar75 = -fVar62;
              Vector4::set(aVStack_5b0,fVar28,fVar77,fVar75,1.0);
              Vector4::set(aVStack_5a0,fVar56,fVar73,fVar75,1.0);
              Vector4::set(aVStack_590,fVar56,fVar28,fVar75,1.0);
              Vector4::set(aVStack_580,fVar28,fVar56,fVar75,1.0);
              Vector4::set(aVStack_570,fVar73,fVar56,fVar75,1.0);
              Vector4::set(aVStack_560,fVar77,fVar28,fVar75,1.0);
              Vector4::set(aVStack_550,fVar77,fVar73,fVar75,1.0);
              Vector4::set(aVStack_540,fVar73,fVar77,fVar75,1.0);
              uVar29 = *(undefined4 *)param_1;
              uVar49 = *(undefined8 *)param_2;
              fVar56 = 1e+30;
              uVar30 = *(undefined4 *)(param_1 + 4);
              lVar13 = 0;
              fVar73 = *(float *)(param_1 + 0x10);
              uVar81 = *(undefined8 *)(param_2 + 0x20);
              uVar82 = *(undefined8 *)(param_2 + 0x28);
              fVar75 = *(float *)(param_1 + 0x14);
              uVar83 = *(undefined8 *)(param_2 + 0x30);
              uVar65 = *(undefined8 *)(param_2 + 0x38);
              uVar31 = *(undefined4 *)(param_1 + 0x20);
              uVar32 = *(undefined4 *)(param_1 + 0x24);
              uVar33 = *(undefined4 *)(param_1 + 0x30);
              uVar34 = *(undefined4 *)(param_1 + 0x34);
              uVar35 = *(undefined4 *)(param_1 + 8);
              uVar36 = *(undefined4 *)(param_1 + 0xc);
              fVar77 = *(float *)(param_1 + 0x18);
              fVar78 = *(float *)(param_1 + 0x1c);
              uVar37 = *(undefined4 *)(param_1 + 0x28);
              uVar38 = *(undefined4 *)(param_1 + 0x2c);
              uVar39 = *(undefined4 *)(param_1 + 0x38);
              uVar40 = *(undefined4 *)(param_1 + 0x3c);
              uVar43 = *(undefined8 *)(param_2 + 8);
              uVar44 = *(undefined8 *)(param_2 + 0x10);
              uVar80 = *(undefined8 *)(param_2 + 0x18);
              fVar28 = -1e+30;
              do {
                uVar64 = *(undefined4 *)((long)&local_640 + lVar13);
                fVar79 = *(float *)((long)local_63c + lVar13);
                uVar57 = *(undefined4 *)((long)local_63c + lVar13 + 4);
                uVar48 = *(undefined4 *)(aVStack_630 + lVar13 + -4);
                uVar54 = NEON_fmadd(uVar64,uVar47,fVar68 * fVar79);
                uVar59 = NEON_fmadd(uVar64,uVar58,fVar67 * fVar79);
                uVar41 = NEON_fmadd(uVar64,uVar51,fVar69 * fVar79);
                uVar64 = NEON_fmadd(uVar64,uVar52,fVar70 * fVar79);
                uVar54 = NEON_fmadd(uVar57,uVar72,uVar54);
                uVar59 = NEON_fmadd(uVar57,uVar71,uVar59);
                uVar41 = NEON_fmadd(uVar57,uVar74,uVar41);
                uVar57 = NEON_fmadd(uVar57,uVar76,uVar64);
                fVar79 = (float)NEON_fmadd(uVar48,fVar61,uVar54);
                uVar54 = NEON_fmadd(uVar48,fVar46,uVar59);
                uVar41 = NEON_fmadd(uVar48,fVar50,uVar41);
                uVar48 = NEON_fmadd(uVar48,uVar53,uVar57);
                uVar57 = NEON_fmadd(uVar54,uVar30,fVar79 * fVar75);
                uVar59 = NEON_fmadd(uVar54,uVar29,fVar79 * fVar73);
                uVar64 = NEON_fmadd(uVar41,uVar32,uVar57);
                uVar57 = NEON_fmadd(uVar54,uVar35,fVar79 * fVar77);
                uVar59 = NEON_fmadd(uVar41,uVar31,uVar59);
                fVar66 = (float)NEON_fmadd(uVar48,uVar34,uVar64);
                uVar54 = NEON_fmadd(uVar54,uVar36,fVar79 * fVar78);
                uVar57 = NEON_fmadd(uVar41,uVar37,uVar57);
                fVar60 = (float)NEON_fmadd(uVar48,uVar33,uVar59);
                uVar41 = NEON_fmadd(uVar41,uVar38,uVar54);
                fVar55 = (float)NEON_fmadd(uVar48,uVar39,uVar57);
                fVar79 = fVar55;
                if (fVar56 <= fVar55) {
                  fVar79 = fVar56;
                }
                fVar56 = fVar79;
                fVar42 = (float)NEON_fmadd(uVar48,uVar40,uVar41);
                fVar79 = fVar55;
                if (fVar55 <= fVar28) {
                  fVar79 = fVar28;
                }
                *(ulong *)((long)&local_750 + lVar13) =
                     CONCAT44((float)((ulong)uVar44 >> 0x20) * fVar66 +
                              (float)((ulong)uVar49 >> 0x20) * fVar60 +
                              (float)((ulong)uVar81 >> 0x20) * fVar55 +
                              (float)((ulong)uVar83 >> 0x20) * fVar42,
                              (float)uVar44 * fVar66 + (float)uVar49 * fVar60 +
                              (float)uVar81 * fVar55 + (float)uVar83 * fVar42);
                *(ulong *)((long)auStack_748 + lVar13) =
                     CONCAT44((float)((ulong)uVar80 >> 0x20) * fVar66 +
                              (float)((ulong)uVar43 >> 0x20) * fVar60 +
                              (float)((ulong)uVar82 >> 0x20) * fVar55 +
                              (float)((ulong)uVar65 >> 0x20) * fVar42,
                              (float)uVar80 * fVar66 + (float)uVar43 * fVar60 +
                              (float)uVar82 * fVar55 + (float)uVar65 * fVar42);
                lVar13 = lVar13 + 0x10;
                fVar28 = fVar79;
              } while (lVar13 != 0x110);
              fVar61 = logf(fVar63 * -fVar79);
              fVar61 = (float)NEON_fmadd(fVar61,fVar27,fVar45);
              if (0.0 <= fVar61) {
                uVar25 = *(uint *)(this + 0x14);
                uVar15 = uVar25;
                if ((uint)(int)fVar61 <= uVar25) goto LAB_00a28eac;
              }
              else {
                uVar25 = *(uint *)(this + 0x14);
                fVar61 = 0.0;
LAB_00a28eac:
                uVar15 = (int)fVar61;
              }
              puVar11 = *this_00;
              puVar11[uVar5 * 3 + 1] = uVar15;
              fVar56 = logf(fVar63 * -fVar56);
              fVar56 = (float)NEON_fmadd(fVar56,fVar27,fVar45);
              fVar56 = (float)(int)fVar56;
              if (1.0 <= fVar56) {
                if ((uint)(int)fVar56 <= uVar25) goto LAB_00a28ef4;
              }
              else {
                fVar56 = 1.0;
                if (uVar25 != 0) {
LAB_00a28ef4:
                  uVar25 = (uint)fVar56;
                }
              }
              uVar8 = 1;
              puVar11[uVar5 * 3 + 2] = uVar25;
              local_368 = 0;
              uStack_36c = 0;
              puVar7 = auStack_748 + 1;
              while( true ) {
                puVar14 = (undefined8 *)((long)local_380 + (ulong)uStack_36c * 0x10);
                puVar14[1] = auStack_748[0];
                *puVar14 = CONCAT44(local_750._4_4_,(uint)local_750);
                uVar43 = *puVar7;
                local_370 = 1;
                puVar14 = (undefined8 *)((long)local_380 + (ulong)(uStack_36c + 1) * 0x10);
                puVar14[1] = puVar7[1];
                *puVar14 = uVar43;
                uVar43 = auStack_748[(uVar8 & 7) * 2 + 1];
                puVar14 = (undefined8 *)((long)local_380 + (ulong)(uStack_36c + 2) * 0x10);
                puVar14[1] = auStack_748[(uVar8 & 7) * 2 + 2];
                *puVar14 = uVar43;
                *(undefined4 *)((long)local_378 + (ulong)(uint)(local_368 << 1) * 4) = 3;
                *(uint *)((long)local_378 + (ulong)(local_368 << 1 | 1) * 4) = uStack_36c;
                uStack_36c = uStack_36c + 3;
                local_368 = local_368 + 1;
                if (uVar8 == 8) break;
                uVar8 = uVar8 + 1;
                puVar7 = puVar7 + 2;
              }
              if (local_7b4 != fVar62) {
                lVar13 = -8;
                puVar7 = auStack_748 + 0x11;
                do {
                  local_370 = 0;
                  uVar43 = puVar7[-0x10];
                  puVar14 = (undefined8 *)((long)local_380 + (ulong)uStack_36c * 0x10);
                  puVar14[1] = puVar7[-0xf];
                  *puVar14 = uVar43;
                  uVar25 = (int)lVar13 + 9U & 7;
                  uVar8 = (ulong)(uVar25 + 1);
                  uVar43 = *(undefined8 *)((long)&local_750 + uVar8 * 4 * 4);
                  local_370 = 1;
                  puVar14 = (undefined8 *)((long)local_380 + (ulong)(uStack_36c + 1) * 0x10);
                  puVar14[1] = auStack_748[uVar8 * 2];
                  *puVar14 = uVar43;
                  uVar8 = (ulong)(uVar25 + 9);
                  uVar43 = *(undefined8 *)((long)&local_750 + uVar8 * 4 * 4);
                  puVar14 = (undefined8 *)((long)local_380 + (ulong)(uStack_36c + 2) * 0x10);
                  puVar14[1] = auStack_748[uVar8 * 2];
                  *puVar14 = uVar43;
                  uVar43 = *puVar7;
                  puVar14 = (undefined8 *)((long)local_380 + (ulong)(uStack_36c + 3) * 0x10);
                  puVar14[1] = puVar7[1];
                  *puVar14 = uVar43;
                  *(undefined4 *)((long)local_378 + (ulong)(uint)(local_368 << 1) * 4) = 4;
                  *(uint *)((long)local_378 + (ulong)(local_368 << 1 | 1) * 4) = uStack_36c;
                  uStack_36c = uStack_36c + 4;
                  local_368 = local_368 + 1;
                  puVar7 = puVar7 + 2;
                  bVar4 = lVar13 != -1;
                  lVar13 = lVar13 + 1;
                } while (bVar4);
              }
              puVar7 = (undefined8 *)((long)local_380 + (ulong)uStack_36c * 0x10);
              puVar7[1] = auStack_748[18];
              *puVar7 = auStack_748[17];
              puVar7 = (undefined8 *)((long)local_380 + (ulong)(uStack_36c + 1) * 0x10);
              puVar7[1] = auStack_748[20];
              *puVar7 = auStack_748[19];
              puVar7 = (undefined8 *)((long)local_380 + (ulong)(uStack_36c + 2) * 0x10);
              puVar7[1] = auStack_748[22];
              *puVar7 = auStack_748[21];
              puVar7 = (undefined8 *)((long)local_380 + (ulong)(uStack_36c + 3) * 0x10);
              puVar7[1] = auStack_748[24];
              *puVar7 = auStack_748[23];
              puVar7 = (undefined8 *)((long)local_380 + (ulong)(uStack_36c + 4) * 0x10);
              puVar7[1] = auStack_748[26];
              *puVar7 = auStack_748[25];
              puVar7 = (undefined8 *)((long)local_380 + (ulong)(uStack_36c + 5) * 0x10);
              puVar7[1] = auStack_748[28];
              *puVar7 = auStack_748[27];
              puVar7 = (undefined8 *)((long)local_380 + (ulong)(uStack_36c + 6) * 0x10);
              puVar7[1] = auStack_748[30];
              *puVar7 = auStack_748[29];
              puVar7 = (undefined8 *)((long)local_380 + (ulong)(uStack_36c + 7) * 0x10);
              puVar7[1] = auStack_748[32];
              *puVar7 = auStack_748[31];
              *(undefined4 *)((long)local_378 + (ulong)(uint)(local_368 << 1) * 4) = 8;
              *(uint *)((long)local_378 + (ulong)(local_368 << 1 | 1) * 4) = uStack_36c;
              uStack_36c = uStack_36c + 8;
              local_368 = local_368 + 1;
                    /* try { // try from 00a29254 to 00a29267 has its CatchHandler @ 00a297a8 */
              local_370 = 0;
              rasterizeVolume2D(this,(ClippingMesh *)&local_380,aCStack_520,puVar20,uVar24);
            }
          }
        }
LAB_00a288e8:
        uVar5 = uVar5 + 1;
      } while (uVar5 != (uVar10 & 0xffffffff));
    }
                    /* try { // try from 00a2956c to 00a29573 has its CatchHandler @ 00a2979c */
    std::__ndk1::
    __sort<std::__ndk1::__less<LightListRasterizer::ZExtent,LightListRasterizer::ZExtent>&,LightListRasterizer::ZExtent*>
              (*(ZExtent **)(this + 0x70),*(ZExtent **)(this + 0x78),(__less *)&local_640);
    __s = *(undefined2 **)(this + 0x88);
    memset(__s,0,(ulong)*(uint *)(this + 0x14) << 2);
    uVar24 = *(uint *)(this + 0x14);
    if (uVar24 != 0) {
      uVar25 = 0;
      uVar5 = 0;
      uVar26 = 0;
      do {
        if ((uint)uVar5 < uVar23) {
          uVar8 = uVar5 & 0xffffffff;
          uVar5 = uVar5 & 0xffffffff;
          puVar20 = *this_00 + uVar8 * 3 + 1;
          do {
            if (uVar25 < *puVar20) {
              if ((uint)uVar5 <= (uint)uVar26) goto LAB_00a295b4;
              goto LAB_00a29618;
            }
            uVar5 = uVar5 + 1;
            puVar20 = puVar20 + 3;
          } while ((uVar10 & 0xffffffff) != uVar5);
          uVar5 = uVar10 & 0xffffffff;
        }
        if ((uint)uVar26 < (uint)uVar5) {
LAB_00a29618:
          uVar8 = uVar26 & 0xffffffff;
          puVar20 = *this_00 + (uVar26 & 0xffffffff) * 3 + 2;
          do {
            uVar26 = uVar8;
            if (uVar25 < *puVar20) break;
            uVar8 = uVar8 + 1;
            puVar20 = puVar20 + 3;
            uVar26 = uVar5 & 0xffffffff;
          } while ((uVar5 & 0xffffffff) != uVar8);
        }
LAB_00a295b4:
        *__s = (short)uVar26;
        uVar25 = uVar25 + 1;
        __s[1] = (short)uVar5;
        __s = __s + 2;
      } while (uVar25 != uVar24);
    }
    __dest = *(void **)(this + 0x28);
    __src = *(void **)(this + 0x40);
    uVar25 = *(int *)(this + 0xc) * *(int *)(this + 8) * *(int *)(this + 0x10);
    uVar24 = *(uint *)(this + 0x24);
    if (uVar25 == 0) {
      lVar13 = 0;
    }
    else {
      uVar5 = 0;
      do {
        if (uVar23 != 0) {
          uVar26 = 0;
          puVar20 = *this_00;
          lVar13 = (ulong)(uVar24 * (int)uVar5) * 4;
          do {
            if ((*(uint *)((long)__dest + ((ulong)(*puVar20 >> 3) & 0x1ffffffc) + lVar13) >>
                 (ulong)(*puVar20 & 0x1f) & 1) != 0) {
              lVar22 = (uVar26 >> 5 & 0x7ffffff) * 4;
              *(uint *)((long)__src + lVar22 + lVar13) =
                   *(uint *)((long)__src + lVar22 + lVar13) | 1 << (ulong)((uint)uVar26 & 0x1f);
            }
            uVar26 = uVar26 + 1;
            puVar20 = puVar20 + 3;
          } while ((uVar10 & 0xffffffff) != uVar26);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar25);
      uVar24 = *(uint *)(this + 0x24);
      lVar13 = (ulong)uVar25 << 2;
    }
    memcpy(__dest,__src,lVar13 * (ulong)uVar24);
    ClippingContext::~ClippingContext(aCStack_520);
    if (local_380 != (void *)0x0) {
      operator_delete__(local_380);
    }
    if (local_378 != (void *)0x0) {
      operator_delete__(local_378);
    }
    if (local_360 != (void *)0x0) {
      operator_delete__(local_360);
    }
    if (local_358 != (void *)0x0) {
      operator_delete__(local_358);
    }
    if (local_350 != (void *)0x0) {
      operator_delete__(local_350);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


