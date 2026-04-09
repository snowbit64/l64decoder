// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ScreenSpaceProcessor
// Entry Point: 00a37140
// Size: 9784 bytes
// Signature: undefined __thiscall ScreenSpaceProcessor(ScreenSpaceProcessor * this, AtmosphereRenderController * param_1, IDisplay * param_2, uint param_3, IRenderDevice * param_4, float * param_5)


/* ScreenSpaceProcessor::ScreenSpaceProcessor(AtmosphereRenderController*, IDisplay*, unsigned int,
   IRenderDevice*, float const*) */

void __thiscall
ScreenSpaceProcessor::ScreenSpaceProcessor
          (ScreenSpaceProcessor *this,AtmosphereRenderController *param_1,IDisplay *param_2,
          uint param_3,IRenderDevice *param_4,float *param_5)

{
  byte *pbVar1;
  uint *puVar2;
  basic_string *pbVar3;
  long lVar4;
  uint7 uVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  size_t __n;
  void *__s;
  uint *puVar9;
  undefined8 uVar10;
  basic_string *pbVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *this_00;
  byte bVar14;
  char *__s_00;
  basic_string **ppbVar15;
  void *pvVar16;
  float fVar17;
  undefined4 local_68c;
  undefined local_688 [4];
  undefined4 local_684;
  undefined local_680 [4];
  undefined4 local_67c;
  undefined local_678 [4];
  undefined4 local_674;
  undefined8 local_670;
  undefined8 local_668;
  undefined8 local_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined4 local_648;
  undefined local_644;
  undefined4 local_640;
  undefined8 local_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined4 local_620;
  undefined local_61c;
  undefined4 local_618;
  undefined4 local_610 [2];
  undefined8 local_608;
  undefined4 local_600;
  ShaderStructLayout local_5f8 [16];
  void *local_5e8;
  undefined2 local_5e0;
  byte *local_5d8;
  byte *local_5d0;
  basic_string local_5c0;
  undefined4 local_5b8 [2];
  undefined8 local_5b0;
  undefined4 local_5a8;
  ShaderStructLayout local_5a0 [16];
  void *local_590;
  undefined2 local_588;
  byte *local_580;
  byte *local_578;
  basic_string local_568;
  ShaderStructLayout local_560 [16];
  void *local_550;
  undefined2 local_548;
  byte *local_540;
  byte *local_538;
  basic_string local_528;
  undefined4 local_520 [2];
  undefined8 local_518;
  undefined4 local_510;
  ShaderStructLayout local_508 [16];
  void *local_4f8;
  undefined2 local_4f0;
  byte *local_4e8;
  byte *local_4e0;
  basic_string local_4d0;
  undefined4 local_4c8 [2];
  undefined8 local_4c0;
  undefined4 local_4b8;
  ShaderStructLayout local_4b0 [16];
  void *local_4a0;
  undefined2 local_498;
  byte *local_490;
  byte *local_488;
  basic_string local_478;
  undefined4 local_470 [2];
  undefined8 local_468;
  undefined4 local_460;
  ShaderStructLayout local_458 [16];
  void *local_448;
  undefined2 local_440;
  byte *local_438;
  byte *local_430;
  basic_string local_420;
  undefined4 local_418 [2];
  undefined8 local_410;
  undefined4 local_408;
  ShaderStructLayout local_400 [16];
  void *local_3f0;
  undefined2 local_3e8;
  byte *local_3e0;
  byte *local_3d8;
  basic_string local_3c8;
  undefined4 local_3c0 [2];
  undefined8 local_3b8;
  undefined4 local_3b0;
  ShaderStructLayout local_3a8 [16];
  void *local_398;
  undefined2 local_390;
  byte *local_388;
  byte *local_380;
  basic_string local_370;
  undefined4 local_368 [2];
  undefined8 local_360;
  undefined4 local_358;
  ShaderStructLayout local_350 [16];
  void *local_340;
  undefined2 local_338;
  byte *local_330;
  byte *local_328;
  basic_string local_318;
  undefined4 local_310 [2];
  undefined8 local_308;
  undefined4 local_300;
  ShaderStructLayout local_2f8 [16];
  void *local_2e8;
  undefined2 local_2e0;
  byte *local_2d8;
  byte *local_2d0;
  basic_string local_2c0;
  undefined4 local_2b8 [2];
  undefined8 *local_2b0;
  undefined4 local_2a8;
  ShaderStructLayout local_2a0 [16];
  void *local_290;
  undefined2 local_288;
  byte *local_280;
  byte *local_278;
  basic_string local_268;
  undefined4 local_260 [2];
  undefined8 local_258;
  undefined4 local_250;
  ShaderStructLayout local_248 [16];
  void *local_238;
  undefined2 local_230;
  byte *local_228;
  byte *local_220;
  basic_string local_210;
  undefined4 local_208 [2];
  undefined8 local_200;
  undefined4 local_1f8;
  ShaderStructLayout local_1f0 [16];
  void *local_1e0;
  undefined2 local_1d8;
  byte *local_1d0;
  byte *local_1c8;
  basic_string local_1b8;
  ShaderStructLayout local_1b0 [16];
  void *local_1a0;
  undefined2 local_198;
  byte *local_190;
  byte *local_188;
  basic_string local_178;
  undefined4 local_170 [2];
  undefined8 local_168;
  undefined4 local_160;
  ShaderStructLayout local_158 [16];
  void *local_148;
  undefined2 local_140;
  byte *local_138;
  byte *local_130;
  basic_string local_120;
  undefined8 local_118;
  undefined2 local_110;
  undefined2 uStack_10e;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined4 local_ec;
  undefined local_e8;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined4 local_cc;
  char *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  this_00 = (undefined8 *)(this + 0x40);
  *this_00 = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
                    /* try { // try from 00a37198 to 00a3719f has its CatchHandler @ 00a39afc */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x58));
                    /* try { // try from 00a371a4 to 00a371ab has its CatchHandler @ 00a39af4 */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x158));
                    /* try { // try from 00a371b4 to 00a371bb has its CatchHandler @ 00a39aec */
  AdhocShader::AdhocShader((AdhocShader *)(this + 600));
                    /* try { // try from 00a371c0 to 00a371c7 has its CatchHandler @ 00a39ae4 */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x358));
                    /* try { // try from 00a371cc to 00a371d3 has its CatchHandler @ 00a39adc */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x458));
                    /* try { // try from 00a371d8 to 00a371df has its CatchHandler @ 00a39ad0 */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x558));
                    /* try { // try from 00a371e4 to 00a371eb has its CatchHandler @ 00a39ac4 */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x658));
                    /* try { // try from 00a371f0 to 00a371f7 has its CatchHandler @ 00a39ab4 */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x758));
                    /* try { // try from 00a371fc to 00a37203 has its CatchHandler @ 00a39aa4 */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x858));
                    /* try { // try from 00a37208 to 00a3720f has its CatchHandler @ 00a39a90 */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x958));
                    /* try { // try from 00a37214 to 00a3721b has its CatchHandler @ 00a39a7c */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0xa58));
                    /* try { // try from 00a37220 to 00a37227 has its CatchHandler @ 00a39a68 */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0xb58));
                    /* try { // try from 00a3722c to 00a37233 has its CatchHandler @ 00a39a54 */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0xc58));
                    /* try { // try from 00a37238 to 00a3723f has its CatchHandler @ 00a39a40 */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0xd58));
                    /* try { // try from 00a37244 to 00a3724b has its CatchHandler @ 00a39a2c */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0xe58));
                    /* try { // try from 00a37250 to 00a37257 has its CatchHandler @ 00a39a18 */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0xf58));
                    /* try { // try from 00a37260 to 00a37267 has its CatchHandler @ 00a39a04 */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x1058));
                    /* try { // try from 00a37270 to 00a37277 has its CatchHandler @ 00a399f0 */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x1158));
                    /* try { // try from 00a37280 to 00a37287 has its CatchHandler @ 00a399dc */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x1258));
                    /* try { // try from 00a37290 to 00a37297 has its CatchHandler @ 00a399c8 */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x1358));
                    /* try { // try from 00a372a0 to 00a372a7 has its CatchHandler @ 00a399b4 */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x1458));
                    /* try { // try from 00a372b0 to 00a372b7 has its CatchHandler @ 00a399a4 */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x1558));
                    /* try { // try from 00a372c0 to 00a372c3 has its CatchHandler @ 00a39994 */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x1658));
                    /* try { // try from 00a372cc to 00a372cf has its CatchHandler @ 00a39980 */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x1758));
  *(IDisplay **)(this + 0x1858) = param_2;
  *(undefined8 *)(this + 0x189c) = 0;
  *(undefined8 *)(this + 0x1894) = 0;
  *(undefined8 *)(this + 0x18bc) = 0;
  *(undefined8 *)(this + 0x18b4) = 0;
  *(undefined8 *)(this + 0x18ac) = 0;
  *(undefined8 *)(this + 0x18a4) = 0;
  *(undefined8 *)(this + 0x18cc) = 0;
  *(undefined8 *)(this + 0x18c4) = 0;
  *(uint *)(this + 0x1860) = param_3;
  *(undefined8 *)(this + 0x18dc) = 0;
  *(undefined8 *)(this + 0x18d4) = 0;
  *(undefined8 *)(this + 0x188c) = 0;
  *(undefined8 *)(this + 0x1884) = 0;
  *(undefined8 *)(this + 0x18ec) = 0;
  *(undefined8 *)(this + 0x18e4) = 0;
  *(undefined2 *)(this + 0x1880) = 0;
  *(undefined4 *)(this + 0x187a) = 1;
  *(undefined4 *)(this + 0x18f4) = 0;
  *(AtmosphereRenderController **)(this + 0x1b70) = param_1;
  *(undefined4 *)(this + 0x1864) = 0;
  *(undefined2 *)(this + 0x1878) = 0x100;
  *(undefined2 *)(this + 0x1b78) = 0x100;
  this[0x1909] = (ScreenSpaceProcessor)0x0;
  *(undefined8 *)(this + 0x1870) = 0;
  *(undefined8 *)(this + 0x1868) = 0;
                    /* try { // try from 00a3736c to 00a37373 has its CatchHandler @ 00a39968 */
  lVar8 = (**(code **)(*(long *)param_4 + 0x28))(param_4);
  __s_00 = *(char **)(lVar8 + 0x40);
  if (__s_00 == (char *)0x0) goto LAB_00a37510;
  __n = strlen(__s_00);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00a396f4 to 00a396fb has its CatchHandler @ 00a39880 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    pvVar16 = (void *)((ulong)&local_118 | 1);
    local_118 = (undefined4 *)CONCAT71(local_118._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00a373d8;
  }
  else {
    uVar13 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00a373bc to 00a373c3 has its CatchHandler @ 00a39880 */
    pvVar16 = operator_new(uVar13);
    local_118 = (undefined4 *)(uVar13 | 1);
    local_108 = SUB84(pvVar16,0);
    uStack_104 = (undefined4)((ulong)pvVar16 >> 0x20);
    local_110 = (undefined2)__n;
    uStack_10e = (undefined2)(__n >> 0x10);
    uStack_10c = (undefined4)(__n >> 0x20);
LAB_00a373d8:
    memcpy(pvVar16,__s_00,__n);
  }
  *(undefined *)((long)pvVar16 + __n) = 0;
                    /* try { // try from 00a373ec to 00a373f7 has its CatchHandler @ 00a397f0 */
  StringUtil::toLower((basic_string *)&local_118);
  bVar14 = (byte)local_118 & 1;
  uVar13 = (ulong)((byte)local_118 >> 1);
  pvVar16 = (void *)((ulong)&local_118 | 1);
  if (((ulong)local_118 & 1) != 0) {
    uVar13 = CONCAT44(uStack_10c,CONCAT22(uStack_10e,local_110));
    pvVar16 = (void *)CONCAT44(uStack_104,local_108);
  }
  if (5 < (long)uVar13) {
    puVar2 = (uint *)((long)pvVar16 + uVar13);
    __s = pvVar16;
    while (puVar9 = (uint *)memchr(__s,0x61,uVar13 - 5), puVar9 != (uint *)0x0) {
      if ((*puVar9 ^ 0x65726461 | *(ushort *)(puVar9 + 1) ^ 0x6f6e) == 0) {
        if ((puVar9 != puVar2) && ((long)puVar9 - (long)pvVar16 != -1)) {
          lVar8 = std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  find((char)&local_118,0x38);
          if (lVar8 == -1) {
            bVar14 = (byte)local_118 & 1;
          }
          else {
            bVar14 = (byte)local_118 & 1;
            uVar13 = (ulong)((byte)local_118 >> 1);
            if (((ulong)local_118 & 1) != 0) {
              uVar13 = CONCAT44(uStack_10c,CONCAT22(uStack_10e,local_110));
            }
            if (lVar8 + 2U < uVar13) {
              pvVar16 = (void *)((ulong)&local_118 | 1);
              if (((ulong)local_118 & 1) != 0) {
                pvVar16 = (void *)CONCAT44(uStack_104,local_108);
              }
              if ((0xfffffff5 < *(byte *)((long)pvVar16 + lVar8 + 1) - 0x3a) &&
                 (0xfffffff5 < *(byte *)((long)pvVar16 + lVar8 + 2U) - 0x3a)) {
                this[0x1909] = (ScreenSpaceProcessor)0x1;
              }
            }
          }
        }
        break;
      }
      __s = (void *)((long)puVar9 + 1);
      uVar13 = (long)puVar2 - (long)__s;
      if ((long)uVar13 < 6) break;
    }
  }
  if (bVar14 != 0) {
    operator_delete((void *)CONCAT44(uStack_104,local_108));
  }
LAB_00a37510:
                    /* try { // try from 00a37518 to 00a3751f has its CatchHandler @ 00a39964 */
  uVar10 = (**(code **)(*(long *)param_4 + 0x138))(param_4);
                    /* try { // try from 00a37524 to 00a37537 has its CatchHandler @ 00a39960 */
  ShaderStructLayout::ShaderStructLayout(local_158,"ExposureParams",0);
                    /* try { // try from 00a37538 to 00a3763b has its CatchHandler @ 00a39f94 */
  ShaderStructLayout::addField(local_158,"g_histogramLowPercentile",2,0,0,false,0);
  ShaderStructLayout::addField(local_158,"g_histogramHighPercentile",2,0,0,false,0);
  ShaderStructLayout::addField(local_158,"g_minAdaptedLuminance",2,0,0,false,0);
  ShaderStructLayout::addField(local_158,"g_maxAdaptedLuminance",2,0,0,false,0);
  ShaderStructLayout::addField(local_158,"g_eyeAdaptationSpeedUp",2,0,0,false,0);
  ShaderStructLayout::addField(local_158,"g_eyeAdaptationSpeedDown",2,0,0,false,0);
  ShaderStructLayout::addField(local_158,"g_frameTime",2,0,0,false,0);
  ShaderStructLayout::endDefinition();
  ppbVar15 = (basic_string **)(this + 0x48);
  pbVar3 = *ppbVar15;
  if (pbVar3 == *(basic_string **)(this + 0x50)) {
                    /* try { // try from 00a376e8 to 00a376f3 has its CatchHandler @ 00a39f94 */
    std::__ndk1::vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
    __push_back_slow_path<ShaderStructLayout_const&>
              ((vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> *)this_00,
               local_158);
  }
  else {
                    /* try { // try from 00a3764c to 00a37657 has its CatchHandler @ 00a397e8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pbVar3);
    *(undefined8 *)(pbVar3 + 8) = 0;
    *(undefined2 *)(pbVar3 + 6) = local_140;
    *(undefined8 *)(pbVar3 + 10) = 0;
    *(undefined8 *)(pbVar3 + 0xc) = 0;
    uVar13 = (long)local_130 - (long)local_138;
    if (uVar13 != 0) {
      if ((long)uVar13 < 0) {
                    /* try { // try from 00a396fc to 00a39703 has its CatchHandler @ 00a39878 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
                    /* try { // try from 00a37680 to 00a37687 has its CatchHandler @ 00a39878 */
      pbVar11 = (basic_string *)operator_new(uVar13);
      pbVar6 = local_130;
      *(basic_string **)(pbVar3 + 8) = pbVar11;
      *(basic_string **)(pbVar3 + 10) = pbVar11;
      *(basic_string **)(pbVar3 + 0xc) = pbVar11 + ((long)uVar13 >> 5) * 8;
      for (pbVar1 = local_138; pbVar1 != pbVar6; pbVar1 = pbVar1 + 0x20) {
                    /* try { // try from 00a376ac to 00a376b7 has its CatchHandler @ 00a39f6c */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar11);
        *(undefined8 *)(pbVar11 + 6) = *(undefined8 *)(pbVar1 + 0x18);
        pbVar11 = pbVar11 + 8;
      }
      *(basic_string **)(pbVar3 + 10) = pbVar11;
    }
    pbVar3[0xe] = local_120;
    *ppbVar15 = pbVar3 + 0x10;
  }
  local_168 = 0;
  local_170[0] = 0x20;
  local_160 = 8;
                    /* try { // try from 00a37710 to 00a3771f has its CatchHandler @ 00a3995c */
  uVar12 = (**(code **)(*(long *)param_4 + 0x118))(param_4,uVar10,local_170);
  *(undefined8 *)(this + 0x1980) = uVar12;
  *(undefined4 *)(this + 0x1a08) = 5;
                    /* try { // try from 00a3772c to 00a3773f has its CatchHandler @ 00a39958 */
  ShaderStructLayout::ShaderStructLayout(local_1b0,"BlurParams",0);
                    /* try { // try from 00a37740 to 00a3778f has its CatchHandler @ 00a39b30 */
  ShaderStructLayout::addField(local_1b0,"g_kernelRadius",2,0,0,false,0);
  ShaderStructLayout::addField(local_1b0,"g_blurScale",2,0,0,false,0);
  ShaderStructLayout::endDefinition();
  pbVar3 = *(basic_string **)(this + 0x48);
  if (pbVar3 == *(basic_string **)(this + 0x50)) {
                    /* try { // try from 00a37838 to 00a37843 has its CatchHandler @ 00a39b30 */
    std::__ndk1::vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
    __push_back_slow_path<ShaderStructLayout_const&>
              ((vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> *)this_00,
               local_1b0);
  }
  else {
                    /* try { // try from 00a3779c to 00a377a7 has its CatchHandler @ 00a397e0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pbVar3);
    *(undefined8 *)(pbVar3 + 8) = 0;
    *(undefined2 *)(pbVar3 + 6) = local_198;
    *(undefined8 *)(pbVar3 + 10) = 0;
    *(undefined8 *)(pbVar3 + 0xc) = 0;
    uVar13 = (long)local_188 - (long)local_190;
    if (uVar13 != 0) {
      if ((long)uVar13 < 0) {
                    /* try { // try from 00a39704 to 00a3970b has its CatchHandler @ 00a39870 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
                    /* try { // try from 00a377d0 to 00a377d7 has its CatchHandler @ 00a39870 */
      pbVar11 = (basic_string *)operator_new(uVar13);
      pbVar6 = local_188;
      *(basic_string **)(pbVar3 + 8) = pbVar11;
      *(basic_string **)(pbVar3 + 10) = pbVar11;
      *(basic_string **)(pbVar3 + 0xc) = pbVar11 + ((long)uVar13 >> 5) * 8;
      for (pbVar1 = local_190; pbVar1 != pbVar6; pbVar1 = pbVar1 + 0x20) {
                    /* try { // try from 00a377fc to 00a37807 has its CatchHandler @ 00a39f34 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar11);
        *(undefined8 *)(pbVar11 + 6) = *(undefined8 *)(pbVar1 + 0x18);
        pbVar11 = pbVar11 + 8;
      }
      *(basic_string **)(pbVar3 + 10) = pbVar11;
    }
    pbVar3[0xe] = local_178;
    *ppbVar15 = pbVar3 + 0x10;
  }
  this[0x1a84] = (ScreenSpaceProcessor)0x0;
  *(undefined8 *)(this + 0x1998) = 0;
  *(undefined8 *)(this + 0x1990) = 0;
  *(undefined8 *)(this + 0x1a18) = 0;
  *(undefined8 *)(this + 0x1a10) = 0;
                    /* try { // try from 00a37858 to 00a3786b has its CatchHandler @ 00a39950 */
  ShaderStructLayout::ShaderStructLayout(local_1f0,"BloomParams",0);
                    /* try { // try from 00a3786c to 00a37903 has its CatchHandler @ 00a39b48 */
  ShaderStructLayout::addField(local_1f0,"g_bloomThreshold",2,0,0,false,0);
  ShaderStructLayout::addField(local_1f0,"g_bloomMagnitude",2,0,0,false,0);
  ShaderStructLayout::addField(local_1f0,"g_linearExposure",2,0,0,false,0);
  ShaderStructLayout::addField(local_1f0,"g_middleGrayValue",2,0,0,false,0);
  ShaderStructLayout::endDefinition();
  pbVar3 = *(basic_string **)(this + 0x48);
  if (pbVar3 == *(basic_string **)(this + 0x50)) {
                    /* try { // try from 00a379ac to 00a379b7 has its CatchHandler @ 00a39b48 */
    std::__ndk1::vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
    __push_back_slow_path<ShaderStructLayout_const&>
              ((vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> *)this_00,
               local_1f0);
  }
  else {
                    /* try { // try from 00a37910 to 00a3791b has its CatchHandler @ 00a397d8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pbVar3);
    *(undefined8 *)(pbVar3 + 8) = 0;
    *(undefined2 *)(pbVar3 + 6) = local_1d8;
    *(undefined8 *)(pbVar3 + 10) = 0;
    *(undefined8 *)(pbVar3 + 0xc) = 0;
    uVar13 = (long)local_1c8 - (long)local_1d0;
    if (uVar13 != 0) {
      if ((long)uVar13 < 0) {
                    /* try { // try from 00a3970c to 00a39713 has its CatchHandler @ 00a39868 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
                    /* try { // try from 00a37944 to 00a3794b has its CatchHandler @ 00a39868 */
      pbVar11 = (basic_string *)operator_new(uVar13);
      pbVar6 = local_1c8;
      *(basic_string **)(pbVar3 + 8) = pbVar11;
      *(basic_string **)(pbVar3 + 10) = pbVar11;
      *(basic_string **)(pbVar3 + 0xc) = pbVar11 + ((long)uVar13 >> 5) * 8;
      for (pbVar1 = local_1d0; pbVar1 != pbVar6; pbVar1 = pbVar1 + 0x20) {
                    /* try { // try from 00a37970 to 00a3797b has its CatchHandler @ 00a39efc */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar11);
        *(undefined8 *)(pbVar11 + 6) = *(undefined8 *)(pbVar1 + 0x18);
        pbVar11 = pbVar11 + 8;
      }
      *(basic_string **)(pbVar3 + 10) = pbVar11;
    }
    pbVar3[0xe] = local_1b8;
    *ppbVar15 = pbVar3 + 0x10;
  }
  local_200 = 0;
  local_208[0] = 0x10;
  local_1f8 = 8;
                    /* try { // try from 00a379d4 to 00a379e3 has its CatchHandler @ 00a39948 */
  uVar12 = (**(code **)(*(long *)param_4 + 0x118))(param_4,uVar10,local_208);
  *(undefined8 *)(this + 0x1988) = uVar12;
                    /* try { // try from 00a379e8 to 00a379fb has its CatchHandler @ 00a39940 */
  ShaderStructLayout::ShaderStructLayout(local_248,"PreRotationParams",0);
                    /* try { // try from 00a379fc to 00a37a27 has its CatchHandler @ 00a39b14 */
  ShaderStructLayout::addField(local_248,"g_preRotationAngle",2,0,0,false,0);
  ShaderStructLayout::endDefinition();
  pbVar3 = *(basic_string **)(this + 0x48);
  if (pbVar3 == *(basic_string **)(this + 0x50)) {
                    /* try { // try from 00a37ad0 to 00a37adb has its CatchHandler @ 00a39b14 */
    std::__ndk1::vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
    __push_back_slow_path<ShaderStructLayout_const&>
              ((vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> *)this_00,
               local_248);
  }
  else {
                    /* try { // try from 00a37a34 to 00a37a3f has its CatchHandler @ 00a397d0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pbVar3);
    *(undefined8 *)(pbVar3 + 8) = 0;
    *(undefined2 *)(pbVar3 + 6) = local_230;
    *(undefined8 *)(pbVar3 + 10) = 0;
    *(undefined8 *)(pbVar3 + 0xc) = 0;
    uVar13 = (long)local_220 - (long)local_228;
    if (uVar13 != 0) {
      if ((long)uVar13 < 0) {
                    /* try { // try from 00a39714 to 00a3971b has its CatchHandler @ 00a39860 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
                    /* try { // try from 00a37a68 to 00a37a6f has its CatchHandler @ 00a39860 */
      pbVar11 = (basic_string *)operator_new(uVar13);
      pbVar6 = local_220;
      *(basic_string **)(pbVar3 + 8) = pbVar11;
      *(basic_string **)(pbVar3 + 10) = pbVar11;
      *(basic_string **)(pbVar3 + 0xc) = pbVar11 + ((long)uVar13 >> 5) * 8;
      for (pbVar1 = local_228; pbVar1 != pbVar6; pbVar1 = pbVar1 + 0x20) {
                    /* try { // try from 00a37a94 to 00a37a9f has its CatchHandler @ 00a39ec4 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar11);
        *(undefined8 *)(pbVar11 + 6) = *(undefined8 *)(pbVar1 + 0x18);
        pbVar11 = pbVar11 + 8;
      }
      *(basic_string **)(pbVar3 + 10) = pbVar11;
    }
    pbVar3[0xe] = local_210;
    *ppbVar15 = pbVar3 + 0x10;
  }
  local_258 = 0;
  local_260[0] = 4;
  local_250 = 8;
                    /* try { // try from 00a37af8 to 00a37b07 has its CatchHandler @ 00a39938 */
  uVar12 = (**(code **)(*(long *)param_4 + 0x118))(param_4,uVar10,local_260);
  *(undefined8 *)(this + 0x1a00) = uVar12;
                    /* try { // try from 00a37b0c to 00a37b1f has its CatchHandler @ 00a39930 */
  ShaderStructLayout::ShaderStructLayout(local_2a0,"SaoBlurParams",0);
                    /* try { // try from 00a37b20 to 00a37b4b has its CatchHandler @ 00a39b0c */
  ShaderStructLayout::addField(local_2a0,"g_blurAxis",2,0,2,false,0);
  ShaderStructLayout::endDefinition();
  pbVar3 = *(basic_string **)(this + 0x48);
  if (pbVar3 == *(basic_string **)(this + 0x50)) {
                    /* try { // try from 00a37bf4 to 00a37bff has its CatchHandler @ 00a39b0c */
    std::__ndk1::vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
    __push_back_slow_path<ShaderStructLayout_const&>
              ((vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> *)this_00,
               local_2a0);
  }
  else {
                    /* try { // try from 00a37b58 to 00a37b63 has its CatchHandler @ 00a397c8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pbVar3);
    *(undefined8 *)(pbVar3 + 8) = 0;
    *(undefined2 *)(pbVar3 + 6) = local_288;
    *(undefined8 *)(pbVar3 + 10) = 0;
    *(undefined8 *)(pbVar3 + 0xc) = 0;
    uVar13 = (long)local_278 - (long)local_280;
    if (uVar13 != 0) {
      if ((long)uVar13 < 0) {
                    /* try { // try from 00a3971c to 00a39723 has its CatchHandler @ 00a39858 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
                    /* try { // try from 00a37b8c to 00a37b93 has its CatchHandler @ 00a39858 */
      pbVar11 = (basic_string *)operator_new(uVar13);
      pbVar6 = local_278;
      *(basic_string **)(pbVar3 + 8) = pbVar11;
      *(basic_string **)(pbVar3 + 10) = pbVar11;
      *(basic_string **)(pbVar3 + 0xc) = pbVar11 + ((long)uVar13 >> 5) * 8;
      for (pbVar1 = local_280; pbVar1 != pbVar6; pbVar1 = pbVar1 + 0x20) {
                    /* try { // try from 00a37bb8 to 00a37bc3 has its CatchHandler @ 00a39e8c */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar11);
        *(undefined8 *)(pbVar11 + 6) = *(undefined8 *)(pbVar1 + 0x18);
        pbVar11 = pbVar11 + 8;
      }
      *(basic_string **)(pbVar3 + 10) = pbVar11;
    }
    pbVar3[0xe] = local_268;
    *ppbVar15 = pbVar3 + 0x10;
  }
  local_2b0 = &local_668;
  local_2b8[0] = 8;
  local_2a8 = 1;
  local_668 = 0x3f800000;
                    /* try { // try from 00a37c2c to 00a37c3b has its CatchHandler @ 00a39928 */
  uVar12 = (**(code **)(*(long *)param_4 + 0x118))(param_4,uVar10,local_2b8);
  *(undefined8 *)(this + 0x19a0) = uVar12;
  local_2b0 = &local_670;
  local_670 = 0x3f80000000000000;
                    /* try { // try from 00a37c5c to 00a37c6b has its CatchHandler @ 00a39920 */
  uVar12 = (**(code **)(*(long *)param_4 + 0x118))(param_4,uVar10,local_2b8);
  *(undefined8 *)(this + 0x19a8) = uVar12;
                    /* try { // try from 00a37c70 to 00a37c83 has its CatchHandler @ 00a39918 */
  ShaderStructLayout::ShaderStructLayout(local_2f8,"SaoParams",0);
                    /* try { // try from 00a37c84 to 00a37dab has its CatchHandler @ 00a39fac */
  ShaderStructLayout::addField(local_2f8,"g_reProjection",2,4,4,false,0);
  ShaderStructLayout::addField(local_2f8,"g_projectionInfo",2,0,4,false,0);
  ShaderStructLayout::addField(local_2f8,"g_projectionScale",2,0,0,false,0);
  ShaderStructLayout::addField(local_2f8,"g_radiusWorldSpace",2,0,0,false,0);
  ShaderStructLayout::addField(local_2f8,"g_ssaoIntensity",2,0,0,false,0);
  ShaderStructLayout::addField(local_2f8,"g_ssaoNumSamples",2,0,0,false,0);
  ShaderStructLayout::addField(local_2f8,"g_ssaoPhase",2,0,0,false,0);
  ShaderStructLayout::addField(local_2f8,"g_nearClip",2,0,0,false,0);
  ShaderStructLayout::endDefinition();
  pbVar3 = *(basic_string **)(this + 0x48);
  if (pbVar3 == *(basic_string **)(this + 0x50)) {
                    /* try { // try from 00a37e54 to 00a37e5f has its CatchHandler @ 00a39fac */
    std::__ndk1::vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
    __push_back_slow_path<ShaderStructLayout_const&>
              ((vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> *)this_00,
               local_2f8);
  }
  else {
                    /* try { // try from 00a37db8 to 00a37dc3 has its CatchHandler @ 00a397c0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pbVar3);
    *(undefined8 *)(pbVar3 + 8) = 0;
    *(undefined2 *)(pbVar3 + 6) = local_2e0;
    *(undefined8 *)(pbVar3 + 10) = 0;
    *(undefined8 *)(pbVar3 + 0xc) = 0;
    uVar13 = (long)local_2d0 - (long)local_2d8;
    if (uVar13 != 0) {
      if ((long)uVar13 < 0) {
                    /* try { // try from 00a39724 to 00a3972b has its CatchHandler @ 00a39850 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
                    /* try { // try from 00a37dec to 00a37df3 has its CatchHandler @ 00a39850 */
      pbVar11 = (basic_string *)operator_new(uVar13);
      pbVar6 = local_2d0;
      *(basic_string **)(pbVar3 + 8) = pbVar11;
      *(basic_string **)(pbVar3 + 10) = pbVar11;
      *(basic_string **)(pbVar3 + 0xc) = pbVar11 + ((long)uVar13 >> 5) * 8;
      for (pbVar1 = local_2d8; pbVar1 != pbVar6; pbVar1 = pbVar1 + 0x20) {
                    /* try { // try from 00a37e18 to 00a37e23 has its CatchHandler @ 00a39e64 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar11);
        *(undefined8 *)(pbVar11 + 6) = *(undefined8 *)(pbVar1 + 0x18);
        pbVar11 = pbVar11 + 8;
      }
      *(basic_string **)(pbVar3 + 10) = pbVar11;
    }
    pbVar3[0xe] = local_2c0;
    *ppbVar15 = pbVar3 + 0x10;
  }
  local_308 = 0;
  local_310[0] = 0x68;
  local_300 = 8;
                    /* try { // try from 00a37e7c to 00a37e8b has its CatchHandler @ 00a39914 */
  uVar12 = (**(code **)(*(long *)param_4 + 0x118))(param_4,uVar10,local_310);
  *(undefined8 *)(this + 0x19b0) = uVar12;
                    /* try { // try from 00a37e90 to 00a37ea3 has its CatchHandler @ 00a39910 */
  ShaderStructLayout::ShaderStructLayout(local_350,"LUTColorGradingParams",0);
                    /* try { // try from 00a37ea4 to 00a38133 has its CatchHandler @ 00a39fcc */
  ShaderStructLayout::addField(local_350,"g_globalColorSaturation",2,0,4,false,0);
  ShaderStructLayout::addField(local_350,"g_globalColorContrast",2,0,4,false,0);
  ShaderStructLayout::addField(local_350,"g_globalColorGamma",2,0,4,false,0);
  ShaderStructLayout::addField(local_350,"g_globalColorGain",2,0,4,false,0);
  ShaderStructLayout::addField(local_350,"g_shadowsColorSaturation",2,0,4,false,0);
  ShaderStructLayout::addField(local_350,"g_shadowsColorContrast",2,0,4,false,0);
  ShaderStructLayout::addField(local_350,"g_shadowsColorGamma",2,0,4,false,0);
  ShaderStructLayout::addField(local_350,"g_shadowsColorGain",2,0,4,false,0);
  ShaderStructLayout::addField(local_350,"g_midTonesColorSaturation",2,0,4,false,0);
  ShaderStructLayout::addField(local_350,"g_midTonesColorContrast",2,0,4,false,0);
  ShaderStructLayout::addField(local_350,"g_midTonesColorGamma",2,0,4,false,0);
  ShaderStructLayout::addField(local_350,"g_midTonesColorGain",2,0,4,false,0);
  ShaderStructLayout::addField(local_350,"g_highLightsColorSaturation",2,0,4,false,0);
  ShaderStructLayout::addField(local_350,"g_highLightsColorContrast",2,0,4,false,0);
  ShaderStructLayout::addField(local_350,"g_highLightsColorGamma",2,0,4,false,0);
  ShaderStructLayout::addField(local_350,"g_highLightsColorGain",2,0,4,false,0);
  ShaderStructLayout::addField(local_350,"g_shadowsMax",2,0,0,false,0);
  ShaderStructLayout::addField(local_350,"g_highLightsMin",2,0,0,false,0);
  ShaderStructLayout::endDefinition();
  pbVar3 = *(basic_string **)(this + 0x48);
  if (pbVar3 == *(basic_string **)(this + 0x50)) {
                    /* try { // try from 00a381dc to 00a381e7 has its CatchHandler @ 00a39fcc */
    std::__ndk1::vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
    __push_back_slow_path<ShaderStructLayout_const&>
              ((vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> *)this_00,
               local_350);
  }
  else {
                    /* try { // try from 00a38140 to 00a3814b has its CatchHandler @ 00a397b8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pbVar3);
    *(undefined8 *)(pbVar3 + 8) = 0;
    *(undefined2 *)(pbVar3 + 6) = local_338;
    *(undefined8 *)(pbVar3 + 10) = 0;
    *(undefined8 *)(pbVar3 + 0xc) = 0;
    uVar13 = (long)local_328 - (long)local_330;
    if (uVar13 != 0) {
      if ((long)uVar13 < 0) {
                    /* try { // try from 00a3972c to 00a39733 has its CatchHandler @ 00a39848 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
                    /* try { // try from 00a38174 to 00a3817b has its CatchHandler @ 00a39848 */
      pbVar11 = (basic_string *)operator_new(uVar13);
      pbVar6 = local_328;
      *(basic_string **)(pbVar3 + 8) = pbVar11;
      *(basic_string **)(pbVar3 + 10) = pbVar11;
      *(basic_string **)(pbVar3 + 0xc) = pbVar11 + ((long)uVar13 >> 5) * 8;
      for (pbVar1 = local_330; pbVar1 != pbVar6; pbVar1 = pbVar1 + 0x20) {
                    /* try { // try from 00a381a0 to 00a381ab has its CatchHandler @ 00a39e3c */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar11);
        *(undefined8 *)(pbVar11 + 6) = *(undefined8 *)(pbVar1 + 0x18);
        pbVar11 = pbVar11 + 8;
      }
      *(basic_string **)(pbVar3 + 10) = pbVar11;
    }
    pbVar3[0xe] = local_318;
    *ppbVar15 = pbVar3 + 0x10;
  }
  local_360 = 0;
  local_368[0] = 0x108;
  local_358 = 4;
                    /* try { // try from 00a38204 to 00a38213 has its CatchHandler @ 00a3990c */
  uVar12 = (**(code **)(*(long *)param_4 + 0x118))(param_4,uVar10,local_368);
  *(undefined8 *)(this + 0x19b8) = uVar12;
                    /* try { // try from 00a38218 to 00a3822b has its CatchHandler @ 00a39908 */
  ShaderStructLayout::ShaderStructLayout(local_3a8,"VolumeSliceIndex",0);
                    /* try { // try from 00a3822c to 00a38257 has its CatchHandler @ 00a39b04 */
  ShaderStructLayout::addField(local_3a8,"g_sliceIndex",2,0,0,false,0);
  ShaderStructLayout::endDefinition();
  pbVar3 = *(basic_string **)(this + 0x48);
  if (pbVar3 == *(basic_string **)(this + 0x50)) {
                    /* try { // try from 00a38300 to 00a3830b has its CatchHandler @ 00a39b04 */
    std::__ndk1::vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
    __push_back_slow_path<ShaderStructLayout_const&>
              ((vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> *)this_00,
               local_3a8);
  }
  else {
                    /* try { // try from 00a38264 to 00a3826f has its CatchHandler @ 00a397b0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pbVar3);
    *(undefined8 *)(pbVar3 + 8) = 0;
    *(undefined2 *)(pbVar3 + 6) = local_390;
    *(undefined8 *)(pbVar3 + 10) = 0;
    *(undefined8 *)(pbVar3 + 0xc) = 0;
    uVar13 = (long)local_380 - (long)local_388;
    if (uVar13 != 0) {
      if ((long)uVar13 < 0) {
                    /* try { // try from 00a39734 to 00a3973b has its CatchHandler @ 00a39840 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
                    /* try { // try from 00a38298 to 00a3829f has its CatchHandler @ 00a39840 */
      pbVar11 = (basic_string *)operator_new(uVar13);
      pbVar6 = local_380;
      *(basic_string **)(pbVar3 + 8) = pbVar11;
      *(basic_string **)(pbVar3 + 10) = pbVar11;
      *(basic_string **)(pbVar3 + 0xc) = pbVar11 + ((long)uVar13 >> 5) * 8;
      for (pbVar1 = local_388; pbVar1 != pbVar6; pbVar1 = pbVar1 + 0x20) {
                    /* try { // try from 00a382c4 to 00a382cf has its CatchHandler @ 00a39e0c */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar11);
        *(undefined8 *)(pbVar11 + 6) = *(undefined8 *)(pbVar1 + 0x18);
        pbVar11 = pbVar11 + 8;
      }
      *(basic_string **)(pbVar3 + 10) = pbVar11;
    }
    pbVar3[0xe] = local_370;
    *ppbVar15 = pbVar3 + 0x10;
  }
  local_3b8 = 0;
  local_3c0[0] = 4;
  local_3b0 = 8;
                    /* try { // try from 00a38328 to 00a38337 has its CatchHandler @ 00a39900 */
  uVar12 = (**(code **)(*(long *)param_4 + 0x118))(param_4,uVar10,local_3c0);
  *(undefined8 *)(this + 0x19c0) = uVar12;
                    /* try { // try from 00a3833c to 00a3834f has its CatchHandler @ 00a398f8 */
  ShaderStructLayout::ShaderStructLayout(local_400,"FilmicCurveParams",0);
                    /* try { // try from 00a38350 to 00a3840b has its CatchHandler @ 00a39b58 */
  ShaderStructLayout::addField(local_400,"g_filmSlope",2,0,0,false,0);
  ShaderStructLayout::addField(local_400,"g_filmToe",2,0,0,false,0);
  ShaderStructLayout::addField(local_400,"g_filmShoulder",2,0,0,false,0);
  ShaderStructLayout::addField(local_400,"g_filmBlackClip",2,0,0,false,0);
  ShaderStructLayout::addField(local_400,"g_filmWhiteClip",2,0,0,false,0);
  ShaderStructLayout::endDefinition();
  pbVar3 = *(basic_string **)(this + 0x48);
  if (pbVar3 == *(basic_string **)(this + 0x50)) {
                    /* try { // try from 00a384b4 to 00a384bf has its CatchHandler @ 00a39b58 */
    std::__ndk1::vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
    __push_back_slow_path<ShaderStructLayout_const&>
              ((vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> *)this_00,
               local_400);
  }
  else {
                    /* try { // try from 00a38418 to 00a38423 has its CatchHandler @ 00a397a8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pbVar3);
    *(undefined8 *)(pbVar3 + 8) = 0;
    *(undefined2 *)(pbVar3 + 6) = local_3e8;
    *(undefined8 *)(pbVar3 + 10) = 0;
    *(undefined8 *)(pbVar3 + 0xc) = 0;
    uVar13 = (long)local_3d8 - (long)local_3e0;
    if (uVar13 != 0) {
      if ((long)uVar13 < 0) {
                    /* try { // try from 00a3973c to 00a39743 has its CatchHandler @ 00a39838 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
                    /* try { // try from 00a3844c to 00a38453 has its CatchHandler @ 00a39838 */
      pbVar11 = (basic_string *)operator_new(uVar13);
      pbVar6 = local_3d8;
      *(basic_string **)(pbVar3 + 8) = pbVar11;
      *(basic_string **)(pbVar3 + 10) = pbVar11;
      *(basic_string **)(pbVar3 + 0xc) = pbVar11 + ((long)uVar13 >> 5) * 8;
      for (pbVar1 = local_3e0; pbVar1 != pbVar6; pbVar1 = pbVar1 + 0x20) {
                    /* try { // try from 00a38478 to 00a38483 has its CatchHandler @ 00a39ddc */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar11);
        *(undefined8 *)(pbVar11 + 6) = *(undefined8 *)(pbVar1 + 0x18);
        pbVar11 = pbVar11 + 8;
      }
      *(basic_string **)(pbVar3 + 10) = pbVar11;
    }
    pbVar3[0xe] = local_3c8;
    *ppbVar15 = pbVar3 + 0x10;
  }
  local_410 = 0;
  local_418[0] = 0x14;
  local_408 = 4;
                    /* try { // try from 00a384dc to 00a384eb has its CatchHandler @ 00a398f0 */
  uVar12 = (**(code **)(*(long *)param_4 + 0x118))(param_4,uVar10,local_418);
  *(undefined8 *)(this + 0x19c8) = uVar12;
                    /* try { // try from 00a384f0 to 00a38503 has its CatchHandler @ 00a398e8 */
  ShaderStructLayout::ShaderStructLayout(local_458,"DeviceParameters",0);
                    /* try { // try from 00a38504 to 00a385bf has its CatchHandler @ 00a39b50 */
  ShaderStructLayout::addField(local_458,"g_sceneClipViewport",2,0,4,false,0);
  ShaderStructLayout::addField(local_458,"g_sceneMaxBrightnessNits",2,0,0,false,0);
  ShaderStructLayout::addField(local_458,"g_sceneMaxFullFrameBrightnessNits",2,0,0,false,0);
  ShaderStructLayout::addField(local_458,"g_sceneNits",2,0,0,false,0);
  ShaderStructLayout::addField(local_458,"g_overlayNits",2,0,0,false,0);
  ShaderStructLayout::endDefinition();
  pbVar3 = *(basic_string **)(this + 0x48);
  if (pbVar3 == *(basic_string **)(this + 0x50)) {
                    /* try { // try from 00a38660 to 00a3866b has its CatchHandler @ 00a39b50 */
    std::__ndk1::vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
    __push_back_slow_path<ShaderStructLayout_const&>
              ((vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> *)this_00,
               local_458);
  }
  else {
                    /* try { // try from 00a385cc to 00a385d7 has its CatchHandler @ 00a397a0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pbVar3);
    *(undefined8 *)(pbVar3 + 8) = 0;
    *(undefined2 *)(pbVar3 + 6) = local_440;
    *(undefined8 *)(pbVar3 + 10) = 0;
    *(undefined8 *)(pbVar3 + 0xc) = 0;
    uVar13 = (long)local_430 - (long)local_438;
    if (uVar13 != 0) {
      if ((long)uVar13 < 0) {
                    /* try { // try from 00a39744 to 00a3974b has its CatchHandler @ 00a39830 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
                    /* try { // try from 00a385fc to 00a38603 has its CatchHandler @ 00a39830 */
      pbVar11 = (basic_string *)operator_new(uVar13);
      pbVar6 = local_430;
      *(basic_string **)(pbVar3 + 8) = pbVar11;
      *(basic_string **)(pbVar3 + 10) = pbVar11;
      *(basic_string **)(pbVar3 + 0xc) = pbVar11 + ((long)uVar13 >> 5) * 8;
      for (pbVar1 = local_438; pbVar1 != pbVar6; pbVar1 = pbVar1 + 0x20) {
                    /* try { // try from 00a38624 to 00a3862f has its CatchHandler @ 00a39dac */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar11);
        *(undefined8 *)(pbVar11 + 6) = *(undefined8 *)(pbVar1 + 0x18);
        pbVar11 = pbVar11 + 8;
      }
      *(basic_string **)(pbVar3 + 10) = pbVar11;
    }
    pbVar3[0xe] = local_420;
    *ppbVar15 = pbVar3 + 0x10;
  }
  local_468 = 0;
  local_470[0] = 0x20;
  local_460 = 4;
                    /* try { // try from 00a38688 to 00a38697 has its CatchHandler @ 00a398e0 */
  uVar12 = (**(code **)(*(long *)param_4 + 0x118))(param_4,uVar10,local_470);
  *(undefined8 *)(this + 0x19d0) = uVar12;
                    /* try { // try from 00a3869c to 00a386af has its CatchHandler @ 00a398d8 */
  ShaderStructLayout::ShaderStructLayout(local_4b0,"DofParams",0);
                    /* try { // try from 00a386b0 to 00a3881f has its CatchHandler @ 00a39fc4 */
  ShaderStructLayout::addField(local_4b0,"g_dofLerpScale",2,0,4,false,0);
  ShaderStructLayout::addField(local_4b0,"g_dofLerpBias",2,0,4,false,0);
  ShaderStructLayout::addField(local_4b0,"g_dofEqFar",2,0,4,false,0);
  ShaderStructLayout::addField(local_4b0,"g_dofBlurArea",2,0,4,false,0);
  ShaderStructLayout::addField(local_4b0,"g_dofEqWorld",2,0,2,false,0);
  ShaderStructLayout::addField(local_4b0,"g_dofRowDelta",2,0,2,false,0);
  ShaderStructLayout::addField(local_4b0,"g_invRenderTargetSize",2,0,2,false,0);
  ShaderStructLayout::addField(local_4b0,"g_invDepthTargetSize",2,0,2,false,0);
  ShaderStructLayout::addField(local_4b0,"g_applyOnSky",2,0,0,false,0);
  ShaderStructLayout::addField(local_4b0,"g_farClip",2,0,0,false,0);
  ShaderStructLayout::endDefinition();
  pbVar3 = *(basic_string **)(this + 0x48);
  if (pbVar3 == *(basic_string **)(this + 0x50)) {
                    /* try { // try from 00a388c0 to 00a388cb has its CatchHandler @ 00a39fc4 */
    std::__ndk1::vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
    __push_back_slow_path<ShaderStructLayout_const&>
              ((vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> *)this_00,
               local_4b0);
  }
  else {
                    /* try { // try from 00a3882c to 00a38837 has its CatchHandler @ 00a39798 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pbVar3);
    *(undefined8 *)(pbVar3 + 8) = 0;
    *(undefined2 *)(pbVar3 + 6) = local_498;
    *(undefined8 *)(pbVar3 + 10) = 0;
    *(undefined8 *)(pbVar3 + 0xc) = 0;
    uVar13 = (long)local_488 - (long)local_490;
    if (uVar13 != 0) {
      if ((long)uVar13 < 0) {
                    /* try { // try from 00a3974c to 00a39753 has its CatchHandler @ 00a39828 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
                    /* try { // try from 00a3885c to 00a38863 has its CatchHandler @ 00a39828 */
      pbVar11 = (basic_string *)operator_new(uVar13);
      pbVar6 = local_488;
      *(basic_string **)(pbVar3 + 8) = pbVar11;
      *(basic_string **)(pbVar3 + 10) = pbVar11;
      *(basic_string **)(pbVar3 + 0xc) = pbVar11 + ((long)uVar13 >> 5) * 8;
      for (pbVar1 = local_490; pbVar1 != pbVar6; pbVar1 = pbVar1 + 0x20) {
                    /* try { // try from 00a38884 to 00a3888f has its CatchHandler @ 00a39d7c */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar11);
        *(undefined8 *)(pbVar11 + 6) = *(undefined8 *)(pbVar1 + 0x18);
        pbVar11 = pbVar11 + 8;
      }
      *(basic_string **)(pbVar3 + 10) = pbVar11;
    }
    pbVar3[0xe] = local_478;
    *ppbVar15 = pbVar3 + 0x10;
  }
  local_4c0 = 0;
  local_4c8[0] = 0x68;
  local_4b8 = 4;
                    /* try { // try from 00a388e8 to 00a388f7 has its CatchHandler @ 00a398d0 */
  uVar12 = (**(code **)(*(long *)param_4 + 0x118))(param_4,uVar10,local_4c8);
  *(undefined8 *)(this + 0x19d8) = uVar12;
                    /* try { // try from 00a388fc to 00a3890f has its CatchHandler @ 00a398c8 */
  ShaderStructLayout::ShaderStructLayout(local_508,"TaaParams",0);
                    /* try { // try from 00a38910 to 00a389a7 has its CatchHandler @ 00a39b40 */
  ShaderStructLayout::addField(local_508,"g_sceneResolution",2,0,3,false,0);
  ShaderStructLayout::addField(local_508,"g_newFrameWeight",2,0,0,false,0);
  ShaderStructLayout::addField(local_508,"g_jitter",2,0,2,false,0);
  ShaderStructLayout::addField(local_508,"g_farClip",2,0,0,false,0);
  ShaderStructLayout::endDefinition();
  pbVar3 = *(basic_string **)(this + 0x48);
  if (pbVar3 == *(basic_string **)(this + 0x50)) {
                    /* try { // try from 00a38a48 to 00a38a53 has its CatchHandler @ 00a39b40 */
    std::__ndk1::vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
    __push_back_slow_path<ShaderStructLayout_const&>
              ((vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> *)this_00,
               local_508);
  }
  else {
                    /* try { // try from 00a389b4 to 00a389bf has its CatchHandler @ 00a39790 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pbVar3);
    *(undefined8 *)(pbVar3 + 8) = 0;
    *(undefined2 *)(pbVar3 + 6) = local_4f0;
    *(undefined8 *)(pbVar3 + 10) = 0;
    *(undefined8 *)(pbVar3 + 0xc) = 0;
    uVar13 = (long)local_4e0 - (long)local_4e8;
    if (uVar13 != 0) {
      if ((long)uVar13 < 0) {
                    /* try { // try from 00a39754 to 00a3975b has its CatchHandler @ 00a39820 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
                    /* try { // try from 00a389e4 to 00a389eb has its CatchHandler @ 00a39820 */
      pbVar11 = (basic_string *)operator_new(uVar13);
      pbVar6 = local_4e0;
      *(basic_string **)(pbVar3 + 8) = pbVar11;
      *(basic_string **)(pbVar3 + 10) = pbVar11;
      *(basic_string **)(pbVar3 + 0xc) = pbVar11 + ((long)uVar13 >> 5) * 8;
      for (pbVar1 = local_4e8; pbVar1 != pbVar6; pbVar1 = pbVar1 + 0x20) {
                    /* try { // try from 00a38a0c to 00a38a17 has its CatchHandler @ 00a39d4c */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar11);
        *(undefined8 *)(pbVar11 + 6) = *(undefined8 *)(pbVar1 + 0x18);
        pbVar11 = pbVar11 + 8;
      }
      *(basic_string **)(pbVar3 + 10) = pbVar11;
    }
    pbVar3[0xe] = local_4d0;
    *ppbVar15 = pbVar3 + 0x10;
  }
  local_518 = 0;
  local_520[0] = 0x1c;
  local_510 = 4;
                    /* try { // try from 00a38a70 to 00a38a7f has its CatchHandler @ 00a398c0 */
  uVar12 = (**(code **)(*(long *)param_4 + 0x118))(param_4,uVar10,local_520);
  *(undefined8 *)(this + 0x19e0) = uVar12;
                    /* try { // try from 00a38a84 to 00a38a97 has its CatchHandler @ 00a398b8 */
  ShaderStructLayout::ShaderStructLayout(local_560,"CopyTextureParams",0);
                    /* try { // try from 00a38a98 to 00a38b0b has its CatchHandler @ 00a39b38 */
  ShaderStructLayout::addField(local_560,"g_uvSaling",2,0,2,false,0);
  ShaderStructLayout::addField(local_560,"g_offset",2,0,2,false,0);
  ShaderStructLayout::addField(local_560,"g_targetSize",2,0,2,false,0);
  ShaderStructLayout::endDefinition();
  pbVar3 = *(basic_string **)(this + 0x48);
  if (pbVar3 == *(basic_string **)(this + 0x50)) {
                    /* try { // try from 00a38bac to 00a38bb7 has its CatchHandler @ 00a39b38 */
    std::__ndk1::vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
    __push_back_slow_path<ShaderStructLayout_const&>
              ((vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> *)this_00,
               local_560);
  }
  else {
                    /* try { // try from 00a38b18 to 00a38b23 has its CatchHandler @ 00a39788 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pbVar3);
    *(undefined8 *)(pbVar3 + 8) = 0;
    *(undefined2 *)(pbVar3 + 6) = local_548;
    *(undefined8 *)(pbVar3 + 10) = 0;
    *(undefined8 *)(pbVar3 + 0xc) = 0;
    uVar13 = (long)local_538 - (long)local_540;
    if (uVar13 != 0) {
      if ((long)uVar13 < 0) {
                    /* try { // try from 00a3975c to 00a39763 has its CatchHandler @ 00a39818 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
                    /* try { // try from 00a38b48 to 00a38b4f has its CatchHandler @ 00a39818 */
      pbVar11 = (basic_string *)operator_new(uVar13);
      pbVar6 = local_538;
      *(basic_string **)(pbVar3 + 8) = pbVar11;
      *(basic_string **)(pbVar3 + 10) = pbVar11;
      *(basic_string **)(pbVar3 + 0xc) = pbVar11 + ((long)uVar13 >> 5) * 8;
      for (pbVar1 = local_540; pbVar1 != pbVar6; pbVar1 = pbVar1 + 0x20) {
                    /* try { // try from 00a38b70 to 00a38b7b has its CatchHandler @ 00a39d1c */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar11);
        *(undefined8 *)(pbVar11 + 6) = *(undefined8 *)(pbVar1 + 0x18);
        pbVar11 = pbVar11 + 8;
      }
      *(basic_string **)(pbVar3 + 10) = pbVar11;
    }
    pbVar3[0xe] = local_528;
    *ppbVar15 = pbVar3 + 0x10;
  }
                    /* try { // try from 00a38bb8 to 00a38bcb has its CatchHandler @ 00a398b0 */
  ShaderStructLayout::ShaderStructLayout(local_5a0,"HistogramParams",0);
                    /* try { // try from 00a38bcc to 00a38c1b has its CatchHandler @ 00a39b28 */
  ShaderStructLayout::addField(local_5a0,"g_minHistogramLogLuminance",2,0,0,false,0);
  ShaderStructLayout::addField(local_5a0,"g_maxHistogramLogLuminance",2,0,0,false,0);
  ShaderStructLayout::endDefinition();
  pbVar3 = *(basic_string **)(this + 0x48);
  if (pbVar3 == *(basic_string **)(this + 0x50)) {
                    /* try { // try from 00a38cbc to 00a38cc7 has its CatchHandler @ 00a39b28 */
    std::__ndk1::vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
    __push_back_slow_path<ShaderStructLayout_const&>
              ((vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> *)this_00,
               local_5a0);
  }
  else {
                    /* try { // try from 00a38c28 to 00a38c33 has its CatchHandler @ 00a39780 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pbVar3);
    *(undefined8 *)(pbVar3 + 8) = 0;
    *(undefined2 *)(pbVar3 + 6) = local_588;
    *(undefined8 *)(pbVar3 + 10) = 0;
    *(undefined8 *)(pbVar3 + 0xc) = 0;
    uVar13 = (long)local_578 - (long)local_580;
    if (uVar13 != 0) {
      if ((long)uVar13 < 0) {
                    /* try { // try from 00a39764 to 00a3976b has its CatchHandler @ 00a39810 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
                    /* try { // try from 00a38c58 to 00a38c5f has its CatchHandler @ 00a39810 */
      pbVar11 = (basic_string *)operator_new(uVar13);
      pbVar6 = local_578;
      *(basic_string **)(pbVar3 + 8) = pbVar11;
      *(basic_string **)(pbVar3 + 10) = pbVar11;
      *(basic_string **)(pbVar3 + 0xc) = pbVar11 + ((long)uVar13 >> 5) * 8;
      for (pbVar1 = local_580; pbVar1 != pbVar6; pbVar1 = pbVar1 + 0x20) {
                    /* try { // try from 00a38c80 to 00a38c8b has its CatchHandler @ 00a39cec */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar11);
        *(undefined8 *)(pbVar11 + 6) = *(undefined8 *)(pbVar1 + 0x18);
        pbVar11 = pbVar11 + 8;
      }
      *(basic_string **)(pbVar3 + 10) = pbVar11;
    }
    pbVar3[0xe] = local_568;
    *ppbVar15 = pbVar3 + 0x10;
  }
  local_5b0 = 0;
  local_5b8[0] = 8;
  local_5a8 = 4;
                    /* try { // try from 00a38ce4 to 00a38cf3 has its CatchHandler @ 00a398a8 */
  uVar12 = (**(code **)(*(long *)param_4 + 0x118))(param_4,uVar10,local_5b8);
  *(undefined8 *)(this + 0x19f0) = uVar12;
                    /* try { // try from 00a38cf8 to 00a38d0b has its CatchHandler @ 00a398a0 */
  ShaderStructLayout::ShaderStructLayout(local_5f8,"DepthBufferLinearizeParams",0);
                    /* try { // try from 00a38d0c to 00a38d5b has its CatchHandler @ 00a39b20 */
  ShaderStructLayout::addField(local_5f8,"g_projectionInfoFullRes",2,0,4,false,0);
  ShaderStructLayout::addField(local_5f8,"g_nearPlane",2,0,0,false,0);
  ShaderStructLayout::endDefinition();
  pbVar3 = *(basic_string **)(this + 0x48);
  if (pbVar3 == *(basic_string **)(this + 0x50)) {
                    /* try { // try from 00a38dfc to 00a38e07 has its CatchHandler @ 00a39b20 */
    std::__ndk1::vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
    __push_back_slow_path<ShaderStructLayout_const&>
              ((vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> *)this_00,
               local_5f8);
  }
  else {
                    /* try { // try from 00a38d68 to 00a38d73 has its CatchHandler @ 00a39778 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pbVar3);
    *(undefined8 *)(pbVar3 + 8) = 0;
    *(undefined2 *)(pbVar3 + 6) = local_5e0;
    *(undefined8 *)(pbVar3 + 10) = 0;
    *(undefined8 *)(pbVar3 + 0xc) = 0;
    uVar13 = (long)local_5d0 - (long)local_5d8;
    if (uVar13 != 0) {
      if ((long)uVar13 < 0) {
                    /* try { // try from 00a3976c to 00a39773 has its CatchHandler @ 00a39808 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
                    /* try { // try from 00a38d98 to 00a38d9f has its CatchHandler @ 00a39808 */
      pbVar11 = (basic_string *)operator_new(uVar13);
      pbVar6 = local_5d0;
      *(basic_string **)(pbVar3 + 8) = pbVar11;
      *(basic_string **)(pbVar3 + 10) = pbVar11;
      *(basic_string **)(pbVar3 + 0xc) = pbVar11 + ((long)uVar13 >> 5) * 8;
      for (pbVar1 = local_5d8; pbVar1 != pbVar6; pbVar1 = pbVar1 + 0x20) {
                    /* try { // try from 00a38dc0 to 00a38dcb has its CatchHandler @ 00a39b60 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar11);
        *(undefined8 *)(pbVar11 + 6) = *(undefined8 *)(pbVar1 + 0x18);
        pbVar11 = pbVar11 + 8;
      }
      *(basic_string **)(pbVar3 + 10) = pbVar11;
    }
    pbVar3[0xe] = local_5c0;
    *ppbVar15 = pbVar3 + 0x10;
  }
  local_608 = 0;
  local_610[0] = 0x14;
  local_600 = 4;
                    /* try { // try from 00a38e24 to 00a38e33 has its CatchHandler @ 00a3989c */
  uVar12 = (**(code **)(*(long *)param_4 + 0x118))(param_4,uVar10,local_610);
  *(undefined8 *)(this + 0x19f8) = uVar12;
  *(undefined8 *)(this + 0x19e8) = 0;
  local_630 = 0;
  uStack_628 = 0;
  local_61c = 0;
  local_638 = 0x100000001;
  local_620 = 0x101;
  local_618 = 0;
                    /* try { // try from 00a38e60 to 00a38e6b has its CatchHandler @ 00a39898 */
  uVar12 = (**(code **)(*(long *)param_4 + 0xe8))(param_4,&local_638);
  *(undefined8 *)this = uVar12;
  local_658 = 0;
  uStack_650 = 0;
  local_648 = 0x101;
  local_644 = 0;
  local_640 = 0;
  local_660 = 0x200000001;
                    /* try { // try from 00a38e94 to 00a38e9f has its CatchHandler @ 00a39894 */
  uVar12 = (**(code **)(*(long *)param_4 + 0xe8))(param_4,&local_660);
  *(undefined8 *)(this + 8) = uVar12;
  local_678[0] = 0;
  local_674 = 1;
                    /* try { // try from 00a38eb8 to 00a38ec3 has its CatchHandler @ 00a39890 */
  uVar12 = (**(code **)(*(long *)param_4 + 0xe0))(param_4,local_678);
  *(undefined8 *)(this + 0x10) = uVar12;
  local_680[0] = 1;
  local_67c = 1;
                    /* try { // try from 00a38ed8 to 00a38ee3 has its CatchHandler @ 00a3988c */
  uVar12 = (**(code **)(*(long *)param_4 + 0xe0))(param_4,local_680);
  *(undefined8 *)(this + 0x20) = uVar12;
  local_688[0] = 0;
  local_684 = 6;
                    /* try { // try from 00a38efc to 00a38f07 has its CatchHandler @ 00a39888 */
  uVar12 = (**(code **)(*(long *)param_4 + 0xe0))(param_4,local_688);
  *(undefined8 *)(this + 0x18) = uVar12;
  local_b0 = 0x100000001;
  uStack_a8 = 0x100000001;
  local_90 = 0x100000001;
  uStack_88 = 0x100000001;
  local_c0 = 0;
  uStack_b8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  uStack_78 = 0x101010101010101;
  local_80 = 0x101010101010101;
                    /* try { // try from 00a38f34 to 00a38f9f has its CatchHandler @ 00a39b1c */
  uVar12 = (**(code **)(*(long *)param_4 + 0xf0))(param_4,&local_c0);
  *(undefined8 *)(this + 0x28) = uVar12;
  local_80._0_4_ = (uint)(byte)local_80;
  uVar5 = (uint7)local_80;
  local_80 = (ulong)(uVar5 & 0xffffffffff);
  uStack_78._0_4_ = (uint)(byte)uStack_78;
  uVar5 = (uint7)uStack_78;
  uStack_78 = (ulong)(uVar5 & 0xffffffffff);
  uVar12 = (**(code **)(*(long *)param_4 + 0xf0))(param_4,&local_c0);
  uVar7 = uStack_78;
  uVar13 = local_80;
  *(undefined8 *)(this + 0x38) = uVar12;
  local_80._0_4_ = (uint)local_80 & 0xffffff00;
  local_80._0_5_ = (uint5)(uint)local_80;
  uStack_78._0_4_ = (uint)uStack_78 & 0xffffff00;
  uStack_78._0_5_ = (uint5)(uint)uStack_78;
  uVar12 = (**(code **)(*(long *)param_4 + 0xf0))(param_4,&local_c0);
  *(undefined8 *)(this + 0x30) = uVar12;
  *(undefined8 *)(this + 0x1968) = 0;
  uStack_10c = 0;
  local_108 = 0xffffffff;
  local_68c = 0xff000000;
  local_ec = 5;
  local_118 = &local_68c;
  uStack_f4 = 0;
  local_fc = 0x100000001;
  local_110 = 0;
  local_e8 = 0;
  local_e4 = 0x100000001;
  uStack_d4 = 0x3f80000000000000;
  local_dc = 0;
  local_c8 = "ScreenSpaceProcessor 1x1 black texture";
  local_cc = 0;
  uStack_104 = 1;
  uStack_100 = 1;
                    /* try { // try from 00a3900c to 00a3901b has its CatchHandler @ 00a39884 */
  uVar10 = (**(code **)(*(long *)param_4 + 0x100))(param_4,uVar10,&local_118);
  pbVar1 = local_5d8;
  *(undefined8 *)(this + 0x1a20) = uVar10;
  *(undefined8 *)(this + 0x1950) = 0;
  *(undefined8 *)(this + 0x1948) = 0;
  *(undefined8 *)(this + 0x1960) = 0;
  *(undefined8 *)(this + 0x1958) = 0;
  *(undefined8 *)(this + 0x188c) = 0;
  *(undefined8 *)(this + 0x1884) = 0;
  *(undefined8 *)(this + 0x189c) = 0;
  *(undefined8 *)(this + 0x1894) = 0;
  *(undefined8 *)(this + 0x18ac) = 0;
  *(undefined8 *)(this + 0x18a4) = 0;
  *(undefined8 *)(this + 0x18bc) = 0;
  *(undefined8 *)(this + 0x18b4) = 0;
  *(undefined8 *)(this + 0x18cc) = 0;
  *(undefined8 *)(this + 0x18c4) = 0;
  *(undefined8 *)(this + 0x18dc) = 0;
  *(undefined8 *)(this + 0x18d4) = 0;
  *(undefined8 *)(this + 0x1b08) = 0;
  *(undefined8 *)(this + 0x1af0) = 0;
  *(undefined8 *)(this + 0x1ae8) = 0;
  *(undefined8 *)(this + 0x1b00) = 0;
  *(undefined8 *)(this + 0x1af8) = 0;
  *(undefined8 *)(this + 0x1ad0) = 0;
  *(undefined8 *)(this + 0x1ac8) = 0;
  *(undefined8 *)(this + 0x1ae0) = 0;
  *(undefined8 *)(this + 0x1ad8) = 0;
  *(undefined8 *)(this + 0x1ab0) = 0;
  *(undefined8 *)(this + 0x1aa8) = 0;
  *(undefined8 *)(this + 0x1ac0) = 0;
  *(undefined8 *)(this + 0x1ab8) = 0;
  *(undefined8 *)(this + 0x1a90) = 0;
  *(undefined8 *)(this + 0x1a88) = 0;
  *(undefined8 *)(this + 0x1aa0) = 0;
  *(undefined8 *)(this + 0x1a98) = 0;
  *(undefined8 *)(this + 0x18ec) = 0;
  *(undefined8 *)(this + 0x18e4) = 0;
  *(undefined8 *)(this + 0x18f8) = 0;
  *(undefined8 *)(this + 0x18f0) = 0;
  *(undefined8 *)(this + 0x1b50) = 4;
  *(undefined8 *)(this + 0x1b48) = 0x500000000;
  *(undefined8 *)(this + 0x1b5c) = 0;
  *(undefined2 *)(this + 0x1b64) = 0;
  *(undefined8 *)(this + 0x1b3c) = 0;
  this[0x1b44] = (ScreenSpaceProcessor)0x0;
  *(undefined2 *)(this + 0x1880) = 0;
  *(undefined8 *)(this + 0x1b20) = 0;
  *(undefined8 *)(this + 0x1b18) = 0;
  *(undefined8 *)(this + 0x1b30) = 0;
  *(undefined8 *)(this + 0x1b28) = 0;
  *(undefined4 *)(this + 0x1b38) = 0;
  this[0x1a28] = (ScreenSpaceProcessor)0x0;
  *(undefined8 *)(this + 0x1928) = 0;
  *(undefined8 *)(this + 0x1920) = 0;
  *(undefined8 *)(this + 0x1938) = 0;
  *(undefined8 *)(this + 0x1930) = 0;
  *(undefined4 *)(this + 0x1940) = 0;
  *(undefined8 *)(this + 0x1a38) = 0;
  *(undefined8 *)(this + 0x1a30) = 0;
  *(undefined8 *)(this + 0x1a48) = 0;
  *(undefined8 *)(this + 0x1a40) = 0;
  *(undefined8 *)(this + 0x1a58) = 0;
  *(undefined8 *)(this + 0x1a50) = 0;
  *(undefined8 *)(this + 0x1a68) = 0;
  *(undefined8 *)(this + 0x1a60) = 0;
  *(undefined8 *)(this + 0x1a78) = 0;
  *(undefined8 *)(this + 0x1a70) = 0;
  *(undefined4 *)(this + 0x1a80) = 0;
  *(undefined4 *)(this + 7000) = 0;
  *(undefined4 *)(this + 0x1b68) = 0x3f000000;
  this[0x1b6c] = (ScreenSpaceProcessor)0x0;
  *(undefined8 *)(this + 0x1900) = 0;
  this[0x1b10] = (ScreenSpaceProcessor)0x0;
  *(undefined8 *)(this + 0x1b80) = 0;
  *(undefined8 *)(this + 0x1978) = 0;
  *(undefined8 *)(this + 0x1970) = 0;
  *(float *)(this + 0x1b88) = *param_5;
  *(float *)(this + 0x1b8c) = param_5[1];
  *(float *)(this + 0x1b90) = param_5[2];
  fVar17 = param_5[3];
  this[0x1908] = (ScreenSpaceProcessor)0x0;
  *(undefined8 *)(this + 0x1918) = 0;
  *(undefined8 *)(this + 0x1910) = 0;
  *(float *)(this + 0x1b94) = fVar17;
  if (local_5d8 != (byte *)0x0) {
    while (pbVar6 = local_5d0, pbVar6 != pbVar1) {
      local_5d0 = pbVar6 + -0x20;
      if ((*local_5d0 & 1) != 0) {
        operator_delete(*(void **)(pbVar6 + -0x10));
      }
    }
    local_5d0 = pbVar1;
    operator_delete(local_5d8);
  }
  if (((byte)local_5f8[0] & 1) != 0) {
    operator_delete(local_5e8);
  }
  pbVar1 = local_580;
  if (local_580 != (byte *)0x0) {
    while (pbVar6 = local_578, pbVar6 != pbVar1) {
      local_578 = pbVar6 + -0x20;
      if ((*local_578 & 1) != 0) {
        operator_delete(*(void **)(pbVar6 + -0x10));
      }
    }
    local_578 = pbVar1;
    operator_delete(local_580);
  }
  if (((byte)local_5a0[0] & 1) != 0) {
    operator_delete(local_590);
  }
  pbVar1 = local_540;
  if (local_540 != (byte *)0x0) {
    while (pbVar6 = local_538, pbVar6 != pbVar1) {
      local_538 = pbVar6 + -0x20;
      if ((*local_538 & 1) != 0) {
        operator_delete(*(void **)(pbVar6 + -0x10));
      }
    }
    local_538 = pbVar1;
    operator_delete(local_540);
  }
  if (((byte)local_560[0] & 1) != 0) {
    operator_delete(local_550);
  }
  pbVar1 = local_4e8;
  if (local_4e8 != (byte *)0x0) {
    while (pbVar6 = local_4e0, pbVar6 != pbVar1) {
      local_4e0 = pbVar6 + -0x20;
      if ((*local_4e0 & 1) != 0) {
        operator_delete(*(void **)(pbVar6 + -0x10));
      }
    }
    local_4e0 = pbVar1;
    operator_delete(local_4e8);
  }
  if (((byte)local_508[0] & 1) != 0) {
    operator_delete(local_4f8);
  }
  pbVar1 = local_490;
  if (local_490 != (byte *)0x0) {
    while (pbVar6 = local_488, pbVar6 != pbVar1) {
      local_488 = pbVar6 + -0x20;
      if ((*local_488 & 1) != 0) {
        operator_delete(*(void **)(pbVar6 + -0x10));
      }
    }
    local_488 = pbVar1;
    operator_delete(local_490);
  }
  if (((byte)local_4b0[0] & 1) != 0) {
    operator_delete(local_4a0);
  }
  pbVar1 = local_438;
  if (local_438 != (byte *)0x0) {
    while (pbVar6 = local_430, pbVar6 != pbVar1) {
      local_430 = pbVar6 + -0x20;
      if ((*local_430 & 1) != 0) {
        operator_delete(*(void **)(pbVar6 + -0x10));
      }
    }
    local_430 = pbVar1;
    operator_delete(local_438);
  }
  if (((byte)local_458[0] & 1) != 0) {
    operator_delete(local_448);
  }
  pbVar1 = local_3e0;
  if (local_3e0 != (byte *)0x0) {
    while (pbVar6 = local_3d8, pbVar6 != pbVar1) {
      local_3d8 = pbVar6 + -0x20;
      if ((*local_3d8 & 1) != 0) {
        operator_delete(*(void **)(pbVar6 + -0x10));
      }
    }
    local_3d8 = pbVar1;
    operator_delete(local_3e0);
  }
  if (((byte)local_400[0] & 1) != 0) {
    operator_delete(local_3f0);
  }
  pbVar1 = local_388;
  if (local_388 != (byte *)0x0) {
    while (pbVar6 = local_380, pbVar6 != pbVar1) {
      local_380 = pbVar6 + -0x20;
      if ((*local_380 & 1) != 0) {
        operator_delete(*(void **)(pbVar6 + -0x10));
      }
    }
    local_380 = pbVar1;
    operator_delete(local_388);
  }
  if (((byte)local_3a8[0] & 1) != 0) {
    operator_delete(local_398);
  }
  pbVar1 = local_330;
  if (local_330 != (byte *)0x0) {
    while (pbVar6 = local_328, pbVar6 != pbVar1) {
      local_328 = pbVar6 + -0x20;
      if ((*local_328 & 1) != 0) {
        operator_delete(*(void **)(pbVar6 + -0x10));
      }
    }
    local_328 = pbVar1;
    operator_delete(local_330);
  }
  if (((byte)local_350[0] & 1) != 0) {
    operator_delete(local_340);
  }
  pbVar1 = local_2d8;
  if (local_2d8 != (byte *)0x0) {
    while (pbVar6 = local_2d0, pbVar6 != pbVar1) {
      local_2d0 = pbVar6 + -0x20;
      if ((*local_2d0 & 1) != 0) {
        operator_delete(*(void **)(pbVar6 + -0x10));
      }
    }
    local_2d0 = pbVar1;
    operator_delete(local_2d8);
  }
  if (((byte)local_2f8[0] & 1) != 0) {
    operator_delete(local_2e8);
  }
  pbVar1 = local_280;
  if (local_280 != (byte *)0x0) {
    while (pbVar6 = local_278, pbVar6 != pbVar1) {
      local_278 = pbVar6 + -0x20;
      if ((*local_278 & 1) != 0) {
        operator_delete(*(void **)(pbVar6 + -0x10));
      }
    }
    local_278 = pbVar1;
    operator_delete(local_280);
  }
  if (((byte)local_2a0[0] & 1) != 0) {
    operator_delete(local_290);
  }
  pbVar1 = local_228;
  if (local_228 != (byte *)0x0) {
    while (pbVar6 = local_220, pbVar6 != pbVar1) {
      local_220 = pbVar6 + -0x20;
      if ((*local_220 & 1) != 0) {
        operator_delete(*(void **)(pbVar6 + -0x10));
      }
    }
    local_220 = pbVar1;
    operator_delete(local_228);
  }
  if (((byte)local_248[0] & 1) != 0) {
    operator_delete(local_238);
  }
  pbVar1 = local_1d0;
  if (local_1d0 != (byte *)0x0) {
    while (pbVar6 = local_1c8, pbVar6 != pbVar1) {
      local_1c8 = pbVar6 + -0x20;
      if ((*local_1c8 & 1) != 0) {
        operator_delete(*(void **)(pbVar6 + -0x10));
      }
    }
    local_1c8 = pbVar1;
    operator_delete(local_1d0);
  }
  if (((byte)local_1f0[0] & 1) != 0) {
    operator_delete(local_1e0);
  }
  pbVar1 = local_190;
  if (local_190 != (byte *)0x0) {
    while (pbVar6 = local_188, pbVar6 != pbVar1) {
      local_188 = pbVar6 + -0x20;
      if ((*local_188 & 1) != 0) {
        operator_delete(*(void **)(pbVar6 + -0x10));
      }
    }
    local_188 = pbVar1;
    operator_delete(local_190);
  }
  if (((byte)local_1b0[0] & 1) != 0) {
    operator_delete(local_1a0);
  }
  pbVar1 = local_138;
  if (local_138 != (byte *)0x0) {
    while (pbVar6 = local_130, pbVar6 != pbVar1) {
      local_130 = pbVar6 + -0x20;
      if ((*local_130 & 1) != 0) {
        operator_delete(*(void **)(pbVar6 + -0x10));
      }
    }
    local_130 = pbVar1;
    operator_delete(local_138);
  }
  if (((byte)local_158[0] & 1) != 0) {
    operator_delete(local_148);
  }
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


