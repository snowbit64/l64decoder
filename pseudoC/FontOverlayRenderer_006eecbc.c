// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FontOverlayRenderer
// Entry Point: 006eecbc
// Size: 2844 bytes
// Signature: undefined __thiscall FontOverlayRenderer(FontOverlayRenderer * this, TextureFontDesc * param_1, IRenderDevice * param_2)


/* WARNING: Type propagation algorithm not settling */
/* FontOverlayRenderer::FontOverlayRenderer(TextureFontDesc&, IRenderDevice*) */

void __thiscall
FontOverlayRenderer::FontOverlayRenderer
          (FontOverlayRenderer *this,TextureFontDesc *param_1,IRenderDevice *param_2)

{
  undefined6 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  ushort uVar7;
  undefined2 uVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  FORMAT FVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  void *pvVar16;
  long *plVar17;
  float *pfVar18;
  int iVar19;
  long lVar20;
  undefined2 *puVar21;
  ulong uVar22;
  ulong uVar23;
  void *pvVar24;
  ulong uVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined local_3d8;
  undefined8 local_3d0;
  undefined local_3c0 [4];
  undefined4 local_3bc;
  undefined local_3b8 [4];
  undefined4 local_3b4;
  void *local_3b0;
  undefined8 uStack_3a8;
  undefined4 local_3a0;
  undefined *local_398;
  undefined4 local_390;
  undefined4 local_38c;
  undefined8 local_388;
  uint local_37c;
  undefined8 local_370;
  FORMAT local_360;
  TYPE local_35c;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined4 local_338;
  undefined local_334;
  undefined4 local_330;
  undefined4 local_328 [2];
  undefined8 local_320;
  undefined4 local_318;
  ShaderStructLayout local_310 [16];
  void *local_300;
  undefined2 local_2f8;
  byte *local_2f0;
  byte *local_2e8;
  undefined4 local_2d8;
  ShaderStructLayout local_2d0 [16];
  void *local_2c0;
  undefined2 local_2b8;
  byte *local_2b0;
  byte *local_2a8;
  undefined4 local_298;
  undefined8 local_290;
  undefined local_288;
  undefined uStack_287;
  undefined2 uStack_286;
  int iStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined8 local_274;
  undefined8 uStack_26c;
  FORMAT local_264;
  undefined local_260;
  undefined8 local_25c;
  undefined8 local_254;
  undefined8 uStack_24c;
  undefined4 local_244;
  undefined *local_240;
  undefined4 local_238;
  undefined8 local_234;
  undefined8 local_22c;
  undefined8 local_224;
  undefined8 local_21c;
  undefined8 local_214;
  undefined8 local_20c;
  undefined4 local_204;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  basic_string local_1e8 [4];
  void *local_1d8;
  undefined2 local_1d0;
  byte *local_1c8;
  byte *local_1c0;
  undefined4 local_1b0;
  byte local_1a8;
  void *local_198;
  undefined2 local_190;
  byte *local_188;
  byte *local_180;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_164;
  undefined8 uStack_15c;
  undefined8 local_154;
  undefined8 uStack_14c;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined8 local_124;
  undefined8 uStack_11c;
  undefined8 local_114;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  long local_88;
  
  lVar9 = tpidr_el0;
  local_88 = *(long *)(lVar9 + 0x28);
  AdhocShader::AdhocShader((AdhocShader *)(this + 0xa0));
                    /* try { // try from 006eed08 to 006eed0f has its CatchHandler @ 006ef87c */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x1a0));
                    /* try { // try from 006eed14 to 006eed1b has its CatchHandler @ 006ef870 */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x2a0));
  *(undefined8 *)(this + 0x418) = 0;
  *(FontOverlayRenderer **)(this + 0x408) = this + 0x410;
  *(undefined8 *)(this + 0x410) = 0;
  *(undefined8 *)(this + 0x40) = 0x3f8ccccd3f800000;
  *(undefined8 *)(this + 0x448) = 0;
  *(undefined8 *)(this + 0x458) = 0;
  *(undefined8 *)(this + 0x450) = 0;
  *(undefined8 *)(this + 0x20) = 0xffffffff00000000;
  *(IRenderDevice **)(this + 0x78) = param_2;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  this[0x3c] = (FontOverlayRenderer)0x1;
  *(undefined4 *)this = 0x3faaaaab;
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  this[0x2c] = (FontOverlayRenderer)0x0;
  *(undefined8 *)(this + 0x50) = 0x3f8000003f800000;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  this[0x58] = (FontOverlayRenderer)0x1;
  *(undefined8 *)(this + 0x60) = 0;
  local_f8 = 1;
  uStack_dc = 0;
  uStack_bc = 0;
  local_c4 = 0;
  uStack_ac = 0;
  local_b4 = 0;
  uStack_9c = 0;
  local_a4 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_e4 = 0x900000000;
  uStack_ec = 0;
  local_f4 = 0;
  local_d4 = 10;
  uStack_cc = 8;
                    /* try { // try from 006eeddc to 006eede7 has its CatchHandler @ 006ef864 */
  uVar15 = (**(code **)(*(long *)param_2 + 0x128))(param_2,&local_f8);
  *(undefined8 *)(this + 0x88) = uVar15;
  local_168 = 1;
  uStack_14c = 0;
  uStack_12c = 0;
  local_134 = 0;
  uStack_11c = 0;
  local_124 = 0;
  uStack_10c = 0;
  local_114 = 0;
  uStack_100 = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  local_154 = 0x300000000;
  uStack_15c = 0;
  local_164 = 0;
  local_144 = 10;
  uStack_13c = 8;
                    /* try { // try from 006eee28 to 006eee33 has its CatchHandler @ 006ef860 */
  uVar15 = (**(code **)(*(long *)param_2 + 0x128))(param_2,&local_168);
  *(undefined8 *)(this + 0x90) = uVar15;
                    /* try { // try from 006eee38 to 006eee4b has its CatchHandler @ 006ef85c */
  ShaderStructLayout::ShaderStructLayout(local_2d0,"FontConstants",0);
                    /* try { // try from 006eee4c to 006eeebf has its CatchHandler @ 006ef8a0 */
  ShaderStructLayout::addField(local_2d0,"g_maskPos",2,0,2,false,0);
  ShaderStructLayout::addField(local_2d0,"g_maskInvSize",2,0,2,false,0);
  ShaderStructLayout::addField(local_2d0,"g_maskAlphaOnly",2,0,0,false,0);
  ShaderStructLayout::endDefinition();
                    /* try { // try from 006eeec0 to 006eeed3 has its CatchHandler @ 006ef858 */
  ShaderStructLayout::ShaderStructLayout(local_310,"Font3DConstants",0);
                    /* try { // try from 006eeed4 to 006eeeff has its CatchHandler @ 006ef890 */
  ShaderStructLayout::addField(local_310,"viewProjMatrix",2,4,4,false,0);
  ShaderStructLayout::endDefinition();
                    /* try { // try from 006eef00 to 006eef13 has its CatchHandler @ 006ef854 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_1e8);
  local_1d0 = local_2b8;
                    /* try { // try from 006eef24 to 006eef27 has its CatchHandler @ 006ef838 */
  std::__ndk1::vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>::
  vector((vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>> *)
         &local_1c8,(vector *)&local_2b0);
  local_1b0 = local_298;
                    /* try { // try from 006eef38 to 006eef43 has its CatchHandler @ 006ef82c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)&local_1a8);
  local_190 = local_2f8;
                    /* try { // try from 006eef54 to 006eef57 has its CatchHandler @ 006ef810 */
  std::__ndk1::vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>::
  vector((vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>> *)
         &local_188,(vector *)&local_2f0);
  local_170 = local_2d8;
                    /* try { // try from 006eef60 to 006eefcf has its CatchHandler @ 006ef89c */
  AdhocShader::load((AdhocShader *)(this + 0xa0),param_2,"font.cg",(char *)0x0,0,
                    (ShaderStructLayout *)local_1e8,2);
  AdhocShader::load((AdhocShader *)(this + 0x1a0),param_2,"font.cg","#define USE_MASK",1,
                    (ShaderStructLayout *)local_1e8,2);
  AdhocShader::load((AdhocShader *)(this + 0x2a0),param_2,"font3D.cg",(char *)0x0,0,
                    (ShaderStructLayout *)local_1e8,2);
  local_320 = 0;
  local_328[0] = 0x14;
  local_318 = 8;
                    /* try { // try from 006eefec to 006ef0ab has its CatchHandler @ 006ef8ac */
  uVar15 = (**(code **)(*(long *)param_2 + 0x138))(param_2);
  uVar15 = (**(code **)(*(long *)param_2 + 0x118))(param_2,uVar15,local_328);
  *(undefined8 *)(this + 0x3a0) = uVar15;
  local_320 = 0;
  local_328[0] = 0x40;
  local_318 = 8;
  uVar15 = (**(code **)(*(long *)param_2 + 0x138))(param_2);
  uVar15 = (**(code **)(*(long *)param_2 + 0x118))(param_2,uVar15,local_328);
  *(undefined8 *)(this + 0x3a8) = uVar15;
  pvVar16 = operator_new__(0x10000);
  *(void **)(this + 0x3f0) = pvVar16;
  local_290 = 0;
  uStack_280 = 0x4e7399;
  uStack_27c = 0;
  *(undefined8 *)(this + 0x3f8) = 0x1000;
  local_288 = 0;
  uStack_287 = 0;
  uStack_286 = 1;
  iStack_284 = 8;
  uVar15 = (**(code **)(*(long *)param_2 + 0x138))(param_2);
  uVar15 = (**(code **)(*(long *)param_2 + 0x108))(param_2,uVar15,&local_290);
  *(undefined8 *)(this + 0x400) = uVar15;
                    /* try { // try from 006ef0b0 to 006ef0b7 has its CatchHandler @ 006ef80c */
  pvVar16 = operator_new__(0x3000);
  lVar20 = 0;
  puVar21 = (undefined2 *)((long)pvVar16 + 6);
  do {
    iVar19 = (int)lVar20;
    uVar7 = (ushort)(iVar19 << 2) | 2;
    uVar8 = (undefined2)(iVar19 << 2);
    puVar21[-3] = uVar8;
    *puVar21 = uVar8;
    puVar21[-2] = (ushort)(iVar19 << 2) | 1;
    puVar21[-1] = uVar7;
    lVar20 = lVar20 + 1;
    puVar21[1] = uVar7;
    puVar21[2] = (ushort)(iVar19 << 2) | 3;
    puVar21 = puVar21 + 6;
  } while (lVar20 != 0x400);
  local_398 = &DAT_004e7399;
  local_3a0 = 0;
  uStack_3a8 = 0x100003000;
  local_3b0 = pvVar16;
                    /* try { // try from 006ef128 to 006ef147 has its CatchHandler @ 006ef88c */
  uVar15 = (**(code **)(*(long *)param_2 + 0x138))(param_2);
  uVar15 = (**(code **)(*(long *)param_2 + 0x110))(param_2,uVar15,&local_3b0);
  *(undefined8 *)(this + 0x98) = uVar15;
  operator_delete__(pvVar16);
  *(undefined8 *)(this + 0x80) = 0;
  local_3b8[0] = 0;
  *(undefined8 *)(this + 1000) = 0;
  *(undefined8 *)(this + 0x3e0) = 0;
  local_3b4 = 1;
                    /* try { // try from 006ef174 to 006ef17f has its CatchHandler @ 006ef808 */
  uVar15 = (**(code **)(*(long *)param_2 + 0xe0))(param_2,local_3b8);
  *(undefined8 *)(this + 0x3b0) = uVar15;
  local_3c0[0] = 0;
  local_3bc = 6;
                    /* try { // try from 006ef198 to 006ef1a3 has its CatchHandler @ 006ef804 */
  uVar15 = (**(code **)(*(long *)param_2 + 0xe0))(param_2,local_3c0);
  *(undefined8 *)(this + 0x3b8) = uVar15;
  local_234 = 0;
  local_22c = 0x900000000;
  local_224 = 0x100000001;
  local_200 = 0x100000001;
  local_21c = 0x100000001;
  local_20c = 0x900000000;
  local_214 = 0;
  uStack_1f0 = 0x101010101010101;
  local_1f8 = 0x101010101010101;
  local_204 = 1;
  local_238 = 7;
                    /* try { // try from 006ef1ec to 006ef1f7 has its CatchHandler @ 006ef800 */
  uVar15 = (**(code **)(*(long *)param_2 + 0xf0))(param_2,&local_238);
  *(undefined8 *)(this + 0x3c0) = uVar15;
  local_348 = 0;
  uStack_340 = 0;
  local_334 = 0;
  local_338 = 0x101;
  local_330 = 0;
  local_350 = 1;
                    /* try { // try from 006ef224 to 006ef22f has its CatchHandler @ 006ef7fc */
  uVar15 = (**(code **)(*(long *)param_2 + 0xe8))(param_2,&local_350);
  *(undefined8 *)(this + 0x3c8) = uVar15;
  local_3d8 = 0;
  local_3d0 = 0;
  local_3e0 = 2;
  uStack_3e8 = 0;
  local_3f0 = 2;
                    /* try { // try from 006ef258 to 006ef287 has its CatchHandler @ 006ef888 */
  uVar15 = (**(code **)(*(long *)param_2 + 0xf8))(param_2,&local_3f0);
  *(undefined8 *)(this + 0x3d0) = uVar15;
  uStack_3e8 = 0x200000002;
  local_3f0 = 0x200000001;
  uVar15 = (**(code **)(*(long *)param_2 + 0xf8))(param_2,&local_3f0);
  *(undefined8 *)(this + 0x3d8) = uVar15;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x43c) = 0;
  *(undefined8 *)(this + 0x434) = 0;
  this[0x430] = (FontOverlayRenderer)0x0;
  *(undefined8 *)(this + 0x428) = 0;
  *(undefined8 *)(this + 0x420) = 0;
  pbVar10 = local_188;
                    /* try { // try from 006ef2b8 to 006ef2cb has its CatchHandler @ 006ef7f8 */
  if ((*(char **)(param_1 + 8) == (char *)0x0) ||
     (plVar17 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,
                                         *(char **)(param_1 + 8),0,false), pbVar10 = local_188,
     plVar17 == (long *)0x0)) goto joined_r0x006ef37c;
                    /* try { // try from 006ef2e0 to 006ef2e7 has its CatchHandler @ 006ef7f4 */
  uVar13 = (**(code **)(*plVar17 + 0x48))(plVar17);
  if (0xb00000000 < (ulong)uVar13 << 0x20) {
                    /* try { // try from 006ef308 to 006ef327 has its CatchHandler @ 006ef7f0 */
    pfVar18 = (float *)operator_new__((long)((ulong)uVar13 << 0x20) >> 0x20);
    uVar14 = (**(code **)(*plVar17 + 0x28))(plVar17,pfVar18,uVar13);
    if (uVar14 == uVar13) {
      fVar28 = pfVar18[1];
      fVar27 = pfVar18[2];
      fVar30 = 1.0 / *pfVar18;
      *(float *)(this + 0x18) = *pfVar18;
      *(float *)(this + 0x1c) = fVar30;
      *(float *)(this + 0x14) = fVar30 * fVar28;
      if ((int)fVar27 * 0x1c + 8 <= (int)uVar13) {
        *(float *)(this + 0x70) = fVar27;
                    /* try { // try from 006ef538 to 006ef53b has its CatchHandler @ 006ef7ec */
        pvVar16 = operator_new__((ulong)(uint)fVar27 * 0x1c);
        if (fVar27 == 0.0) {
          *(void **)(this + 0x68) = pvVar16;
        }
        else {
          lVar20 = (ulong)(uint)fVar27 * 0x1c;
          uVar22 = lVar20 - 0x1c;
          pvVar24 = pvVar16;
          if (uVar22 < 0x1c) {
LAB_006ef5b8:
            do {
              *(undefined2 *)((long)pvVar24 + 4) = 0x7fff;
              *(undefined2 *)((long)pvVar24 + 0x10) = 0x7fff;
              pvVar24 = (void *)((long)pvVar24 + 0x1c);
            } while (pvVar24 != (void *)((long)pvVar16 + lVar20));
          }
          else {
            puVar21 = (undefined2 *)((long)pvVar16 + 0x20);
            uVar23 = uVar22 / 0x1c + 1;
            uVar25 = uVar23 & 0x1ffffffffffffffe;
            pvVar24 = (void *)((long)pvVar16 + uVar25 * 0x1c);
            uVar26 = uVar25;
            do {
              puVar21[-0xe] = 0x7fff;
              uVar26 = uVar26 - 2;
              *puVar21 = 0x7fff;
              puVar21[-8] = 0x7fff;
              puVar21[6] = 0x7fff;
              puVar21 = puVar21 + 0x1c;
            } while (uVar26 != 0);
            if (uVar23 != uVar25) goto LAB_006ef5b8;
          }
          *(void **)(this + 0x68) = pvVar16;
          if (fVar27 != 0.0) {
            uVar23 = 0;
            while( true ) {
              puVar2 = (undefined4 *)((long)pvVar16 + uVar23);
              fVar27 = *(float *)((long)pfVar18 + uVar23 + 0x18);
              local_390 = *(undefined4 *)((long)pfVar18 + uVar23 + 0x1e);
              puVar1 = (undefined6 *)((long)pfVar18 + uVar23 + 0x12);
              uVar3 = *(undefined4 *)puVar1;
              uVar8 = *(undefined2 *)((long)pfVar18 + uVar23 + 0x16);
              uVar4 = *(undefined2 *)((long)pfVar18 + uVar23 + 0x22);
              uVar5 = *(undefined2 *)((long)pfVar18 + uVar23 + 0x10);
              uVar6 = *(undefined2 *)((long)pfVar18 + uVar23 + 0x1c);
              local_290 = CONCAT26(local_290._6_2_,*puVar1);
              local_38c = CONCAT22(local_38c._2_2_,uVar4);
              fVar28 = *(float *)((long)pfVar18 + uVar23 + 0x24);
              *puVar2 = *(undefined4 *)((long)pfVar18 + uVar23 + 0xc);
              *(undefined2 *)(puVar2 + 1) = uVar5;
              *(undefined4 *)((long)puVar2 + 6) = uVar3;
              *(undefined2 *)((long)puVar2 + 10) = uVar8;
              *(undefined2 *)(puVar2 + 4) = uVar6;
              puVar2[3] = fVar27 * fVar30;
              *(undefined2 *)((long)puVar2 + 0x16) = uVar4;
              puVar2[6] = fVar28 * fVar30;
              *(undefined4 *)((long)puVar2 + 0x12) = local_390;
              if (uVar22 == uVar23) break;
              fVar30 = *(float *)(this + 0x1c);
              uVar23 = uVar23 + 0x1c;
              pvVar16 = *(void **)(this + 0x68);
            }
          }
        }
        operator_delete__(pfVar18);
        (**(code **)(*plVar17 + 8))(plVar17);
        local_370 = 0;
        local_390 = CONCAT31(local_390._1_3_,1);
                    /* try { // try from 006ef69c to 006ef6af has its CatchHandler @ 006ef7d8 */
        if ((*(char **)param_1 != (char *)0x0) &&
           (uVar22 = TextureUtil::loadImage(*(char **)param_1,(BitmapImage *)&local_390,0,0,false),
           (uVar22 & 1) != 0)) {
          local_290 = 0;
          local_288 = 0;
          uStack_287 = 0;
          local_25c = 0x100000001;
          local_260 = 0;
          uStack_27c = 0x200;
          uStack_278 = 0x200;
          iStack_284 = -1;
          uStack_280 = 0xffffffff;
          uStack_26c = 0;
          local_274 = 0x100000001;
          local_264 = 3;
          local_244 = 0;
          uStack_24c = 0x3f80000000000000;
          local_254 = 0;
          local_240 = (undefined *)0x0;
          FVar12 = local_360;
          if (local_360 != 1) {
            if (local_360 == 7) {
              FVar12 = 8;
            }
            else if (local_360 == 10) {
              FVar12 = 0xc;
            }
            else {
              local_264 = PixelFormatUtil::getPixelFormat(local_37c,local_360,local_35c,false,"");
              FVar12 = local_264;
              if (local_264 == 0) goto LAB_006ef798;
            }
          }
          local_264 = FVar12;
          uVar15 = NEON_fmov(0x3f800000,4);
          uVar29 = NEON_ucvtf(local_388,4);
          *(undefined8 *)(this + 4) = local_388;
          uStack_27c = (undefined4)local_388;
          uStack_278 = (undefined4)((ulong)local_388 >> 0x20);
          local_290 = local_370;
          *(ulong *)(this + 0xc) =
               CONCAT44((float)((ulong)uVar15 >> 0x20) / (float)((ulong)uVar29 >> 0x20),
                        (float)uVar15 / (float)uVar29);
          if (local_38c == 0) {
            iStack_284 = 0;
          }
          else {
            iStack_284 = local_38c;
            local_288 = 1;
          }
          local_240 = &DAT_004e7399;
                    /* try { // try from 006ef774 to 006ef7c7 has its CatchHandler @ 006ef7dc */
          uVar15 = (**(code **)(*(long *)param_2 + 0x138))(param_2);
          uVar15 = (**(code **)(*(long *)param_2 + 0x100))(param_2,uVar15,&local_290);
          *(undefined8 *)(this + 0x80) = uVar15;
        }
LAB_006ef798:
        BitmapImage::~BitmapImage((BitmapImage *)&local_390);
        pbVar10 = local_188;
        goto joined_r0x006ef37c;
      }
    }
    operator_delete__(pfVar18);
  }
  (**(code **)(*plVar17 + 8))(plVar17);
  pbVar10 = local_188;
joined_r0x006ef37c:
  local_188 = pbVar10;
  if (pbVar10 != (byte *)0x0) {
    while (pbVar11 = local_180, pbVar11 != pbVar10) {
      local_180 = pbVar11 + -0x20;
      if ((*local_180 & 1) != 0) {
        operator_delete(*(void **)(pbVar11 + -0x10));
      }
    }
    operator_delete(local_188);
  }
  if ((local_1a8 & 1) != 0) {
    operator_delete(local_198);
  }
  pbVar10 = local_1c8;
  if (local_1c8 != (byte *)0x0) {
    while (pbVar11 = local_1c0, pbVar11 != pbVar10) {
      local_1c0 = pbVar11 + -0x20;
      if ((*local_1c0 & 1) != 0) {
        operator_delete(*(void **)(pbVar11 + -0x10));
      }
    }
    local_1c0 = pbVar10;
    operator_delete(local_1c8);
  }
  if (((byte)local_1e8[0]._0_1_ & 1) != 0) {
    operator_delete(local_1d8);
  }
  pbVar10 = local_2f0;
  if (local_2f0 != (byte *)0x0) {
    while (pbVar11 = local_2e8, pbVar11 != pbVar10) {
      local_2e8 = pbVar11 + -0x20;
      if ((*local_2e8 & 1) != 0) {
        operator_delete(*(void **)(pbVar11 + -0x10));
      }
    }
    local_2e8 = pbVar10;
    operator_delete(local_2f0);
  }
  if (((byte)local_310[0] & 1) != 0) {
    operator_delete(local_300);
  }
  pbVar10 = local_2b0;
  if (local_2b0 != (byte *)0x0) {
    while (pbVar11 = local_2a8, pbVar11 != pbVar10) {
      local_2a8 = pbVar11 + -0x20;
      if ((*local_2a8 & 1) != 0) {
        operator_delete(*(void **)(pbVar11 + -0x10));
      }
    }
    local_2a8 = pbVar10;
    operator_delete(local_2b0);
  }
  if (((byte)local_2d0[0] & 1) != 0) {
    operator_delete(local_2c0);
  }
  if (*(long *)(lVar9 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


