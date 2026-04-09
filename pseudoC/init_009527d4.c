// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 009527d4
// Size: 3544 bytes
// Signature: undefined __cdecl init(IShaderCompiler * param_1, bool param_2, uint param_3, uint param_4, uint param_5, uint param_6)


/* WARNING: Type propagation algorithm not settling */
/* MaterialShaderManager::init(IShaderCompiler*, bool, unsigned int, unsigned int, unsigned int,
   unsigned int) */

undefined8
MaterialShaderManager::init
          (IShaderCompiler *param_1,bool param_2,uint param_3,uint param_4,uint param_5,uint param_6
          )

{
  basic_string *pbVar1;
  char *pcVar2;
  long lVar3;
  uint uVar4;
  Field *pFVar5;
  Field *pFVar6;
  pair pVar7;
  int iVar8;
  size_t sVar9;
  undefined8 *puVar10;
  ShaderCapabilities *pSVar11;
  long *plVar12;
  void *__dest;
  ulong uVar13;
  char *pcVar14;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  ulong local_190;
  undefined8 uStack_188;
  undefined8 *local_180;
  undefined8 *local_170;
  undefined8 uStack_168;
  undefined8 *local_160;
  undefined8 local_150;
  size_t sStack_148;
  undefined8 *local_140;
  undefined8 local_130;
  size_t local_128;
  char *local_120;
  undefined2 local_118;
  Field *local_110;
  Field *local_108;
  undefined4 local_f8;
  undefined8 local_f0;
  size_t local_e8;
  char *local_e0;
  undefined2 local_d8;
  Field *local_d0;
  Field *local_c8;
  undefined4 local_b8;
  basic_string local_b0 [4];
  char *local_a0;
  undefined2 local_98;
  Field *local_90;
  Field *local_88;
  undefined4 local_78;
  long local_70;
  
  plVar12 = (long *)(ulong)param_2;
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  ShaderStructLayout::ShaderStructLayout((ShaderStructLayout *)local_b0,"ParticleParameters",1);
                    /* try { // try from 0095282c to 0095297b has its CatchHandler @ 009536a4 */
  ShaderStructLayout::addField((ShaderStructLayout *)local_b0,"invTextureAtlasSize",2,0,2,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)local_b0,"scaleInit",2,0,2,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)local_b0,"scaleGain",2,0,2,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)local_b0,"blendFactor",2,0,0,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)local_b0,"blendInTime",2,0,0,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)local_b0,"blendOutTime",2,0,0,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)local_b0,"rotInit",2,0,0,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)local_b0,"minRotSpeed",2,0,0,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)local_b0,"maxRotSpeed",2,0,0,false,0);
  ShaderStructLayout::endDefinition();
  pcVar2 = (char *)((ulong)local_b0 | 1);
  if (((byte)local_b0[0]._0_1_ & 1) != 0) {
    pcVar2 = local_a0;
  }
  sVar9 = strlen(pcVar2);
  if (0xffffffffffffffef < sVar9) {
                    /* try { // try from 00953548 to 0095354f has its CatchHandler @ 00953608 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar9 < 0x17) {
    pcVar14 = (char *)((ulong)&local_f0 | 1);
    local_f0 = CONCAT71(local_f0._1_7_,(char)((int)sVar9 << 1));
    if (sVar9 != 0) goto LAB_009529e4;
  }
  else {
    uVar13 = sVar9 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 009529cc to 009529d3 has its CatchHandler @ 00953608 */
    pcVar14 = (char *)operator_new(uVar13);
    local_f0 = uVar13 | 1;
    local_e8 = sVar9;
    local_e0 = pcVar14;
LAB_009529e4:
    memcpy(pcVar14,pcVar2,sVar9);
  }
  local_130 = &local_f0;
  pbVar1 = (basic_string *)(param_1 + 0x60);
  pcVar14[sVar9] = '\0';
                    /* try { // try from 00952a04 to 00952a53 has its CatchHandler @ 00953638 */
  pVar7 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)&local_f0,(tuple *)&DAT_00519ce4,
                     (tuple *)&local_130);
  uVar13 = (ulong)pVar7;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (uVar13 + 0x38),local_b0);
  *(undefined2 *)(uVar13 + 0x50) = local_98;
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (uVar13 + 0x38) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)local_b0) {
    std::__ndk1::vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
    ::assign<ShaderStructLayout::Field*>
              ((vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
                *)(uVar13 + 0x58),local_90,local_88);
  }
  *(undefined4 *)(uVar13 + 0x70) = local_78;
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
                    /* try { // try from 00952a6c to 00952a7f has its CatchHandler @ 009535f4 */
  ShaderStructLayout::ShaderStructLayout((ShaderStructLayout *)&local_f0,"StandardMaterialParams",1)
  ;
                    /* try { // try from 00952a80 to 00952b63 has its CatchHandler @ 0095369c */
  ShaderStructLayout::addField((ShaderStructLayout *)&local_f0,"cParallaxValue",2,0,0,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)&local_f0,"cDielectricSpecular",2,0,0,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)&local_f0,"cReflectionMapScale",2,0,0,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)&local_f0,"cReflectionBumpScale",2,0,0,false,0)
  ;
  ShaderStructLayout::addField((ShaderStructLayout *)&local_f0,"cRefractionCoeff",2,0,0,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)&local_f0,"cRefractionBumpScale",2,0,0,false,0)
  ;
  ShaderStructLayout::endDefinition();
  pcVar2 = (char *)((ulong)&local_f0 | 1);
  if ((local_f0 & 1) != 0) {
    pcVar2 = local_e0;
  }
  sVar9 = strlen(pcVar2);
  if (0xffffffffffffffef < sVar9) {
                    /* try { // try from 00953550 to 00953557 has its CatchHandler @ 00953600 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar9 < 0x17) {
    pcVar14 = (char *)((ulong)&local_130 | 1);
    local_130 = (undefined8 *)CONCAT71(local_130._1_7_,(char)((int)sVar9 << 1));
    if (sVar9 != 0) goto LAB_00952bcc;
  }
  else {
    uVar13 = sVar9 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00952bb4 to 00952bbb has its CatchHandler @ 00953600 */
    pcVar14 = (char *)operator_new(uVar13);
    local_130 = (undefined8 *)(uVar13 | 1);
    local_128 = sVar9;
    local_120 = pcVar14;
LAB_00952bcc:
    memcpy(pcVar14,pcVar2,sVar9);
  }
  local_150 = &local_130;
  pcVar14[sVar9] = '\0';
                    /* try { // try from 00952be8 to 00952c37 has its CatchHandler @ 00953620 */
  pVar7 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)&local_130,(tuple *)&DAT_00519ce4,
                     (tuple *)&local_150);
  uVar13 = (ulong)pVar7;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (undefined8 *)(uVar13 + 0x38),(basic_string *)&local_f0);
  *(undefined2 *)(uVar13 + 0x50) = local_d8;
  if ((undefined8 *)(uVar13 + 0x38) != &local_f0) {
    std::__ndk1::vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
    ::assign<ShaderStructLayout::Field*>
              ((vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
                *)(uVar13 + 0x58),local_d0,local_c8);
  }
  *(undefined4 *)(uVar13 + 0x70) = local_b8;
  if (((ulong)local_130 & 1) != 0) {
    operator_delete(local_120);
  }
                    /* try { // try from 00952c50 to 00952c63 has its CatchHandler @ 009535ec */
  ShaderStructLayout::ShaderStructLayout((ShaderStructLayout *)&local_130,"RenderArgParameters",0);
                    /* try { // try from 00952c64 to 00953117 has its CatchHandler @ 009536ac */
  ShaderStructLayout::addField((ShaderStructLayout *)&local_130,"viewProjMatrix",2,4,4,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)&local_130,"prevViewProjMatrix",2,4,4,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)&local_130,"projMatrix",2,4,4,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)&local_130,"invViewMatrix",2,3,4,false,0);
  ShaderStructLayout::addField
            ((ShaderStructLayout *)&local_130,"foliageAnimTextureOffsetScale",2,0,4,false,0);
  ShaderStructLayout::addField
            ((ShaderStructLayout *)&local_130,"foliageAnimTextureUVOffset",2,0,4,false,0);
  ShaderStructLayout::addField
            ((ShaderStructLayout *)&local_130,"indirectDiffuseSHRed",2,0,4,false,0);
  ShaderStructLayout::addField
            ((ShaderStructLayout *)&local_130,"indirectDiffuseSHGreen",2,0,4,false,0);
  ShaderStructLayout::addField
            ((ShaderStructLayout *)&local_130,"indirectDiffuseSHBlue",2,0,4,false,0);
  ShaderStructLayout::addField
            ((ShaderStructLayout *)&local_130,"fogRayleighExtinctionCoeff",2,0,3,false,0);
  ShaderStructLayout::addField
            ((ShaderStructLayout *)&local_130,"fogMieExtinctionCoeff",2,0,0,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)&local_130,"expFogColor",2,0,3,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)&local_130,"expFogDensity",2,0,0,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)&local_130,"lodViewpoint",2,0,3,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)&local_130,"clusterZScale",2,0,0,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)&local_130,"viewportSize",2,0,2,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)&local_130,"cInvShadowMapSize",2,0,2,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)&local_130,"clusterZOffset",2,0,0,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)&local_130,"nearClip",2,0,0,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)&local_130,"farClip",2,0,0,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)&local_130,"cTime_s",2,0,0,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)&local_130,"cPrevTime_s",2,0,0,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)&local_130,"cShared0",2,0,0,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)&local_130,"cShared1",2,0,0,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)&local_130,"cShared2",2,0,0,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)&local_130,"cShared3",2,0,0,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)&local_130,"cShared4",2,0,0,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)&local_130,"uMaxShadingRate",2,0,0,false,0);
  ShaderStructLayout::addField
            ((ShaderStructLayout *)&local_130,"cornetteShrankAsymmetry",2,0,0,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)&local_130,"fogPlaneHeight",2,0,0,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)&local_130,"clusterPosScale",2,0,0,false,0);
  if ((param_3 & 1) != 0) {
    ShaderStructLayout::addField((ShaderStructLayout *)&local_130,"cLightOffset",2,0,0,false,0);
    ShaderStructLayout::addField((ShaderStructLayout *)&local_130,"cNumLightWords",2,0,0,false,0);
  }
  ShaderStructLayout::endDefinition();
  pcVar2 = (char *)((ulong)&local_130 | 1);
  if (((ulong)local_130 & 1) != 0) {
    pcVar2 = local_120;
  }
  sVar9 = strlen(pcVar2);
  if (0xffffffffffffffef < sVar9) {
                    /* try { // try from 00953558 to 0095355f has its CatchHandler @ 009535fc */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar9 < 0x17) {
    __dest = (void *)((ulong)&local_150 | 1);
    local_150 = (undefined8 *)CONCAT71(local_150._1_7_,(char)((int)sVar9 << 1));
    if (sVar9 == 0) goto LAB_00953190;
  }
  else {
    uVar13 = sVar9 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00953168 to 0095316f has its CatchHandler @ 009535fc */
    __dest = operator_new(uVar13);
    local_150 = (undefined8 *)(uVar13 | 1);
    sStack_148 = sVar9;
    local_140 = (undefined8 *)__dest;
  }
  memcpy(__dest,pcVar2,sVar9);
LAB_00953190:
  local_170 = &local_150;
  *(undefined *)((long)__dest + sVar9) = 0;
                    /* try { // try from 0095319c to 009531eb has its CatchHandler @ 00953610 */
  pVar7 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)&local_150,(tuple *)&DAT_00519ce4,
                     (tuple *)&local_170);
  uVar13 = (ulong)pVar7;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (undefined8 *)(uVar13 + 0x38),(basic_string *)&local_130);
  *(undefined2 *)(uVar13 + 0x50) = local_118;
  if ((undefined8 *)(uVar13 + 0x38) != &local_130) {
    std::__ndk1::vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
    ::assign<ShaderStructLayout::Field*>
              ((vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
                *)(uVar13 + 0x58),local_110,local_108);
  }
  *(undefined4 *)(uVar13 + 0x70) = local_f8;
  if (((ulong)local_150 & 1) != 0) {
    operator_delete(local_140);
  }
                    /* try { // try from 00953204 to 0095320b has its CatchHandler @ 009535e8 */
  puVar10 = (undefined8 *)operator_new(0x20);
  *(undefined *)((long)puVar10 + 0x19) = 0;
  sStack_148 = 0x19;
  local_150 = (undefined8 *)0x21;
  puVar10[1] = 0x6873726562753c20;
  *puVar10 = 0x6564756c636e6923;
  *(undefined8 *)((long)puVar10 + 0x11) = 0xa3e67632e726564;
  *(undefined8 *)((long)puVar10 + 9) = 0x616873726562753c;
  local_140 = puVar10;
                    /* try { // try from 0095323c to 00953243 has its CatchHandler @ 009535d8 */
  local_160 = (undefined8 *)operator_new(0x20);
  *(undefined *)((long)local_160 + 0x1c) = 0;
  uStack_168 = 0x1c;
  local_170 = (undefined8 *)0x21;
  local_160[1] = 0x7265646168733c20;
  *local_160 = 0x6564756c636e6923;
  *(undefined8 *)((long)local_160 + 0x14) = 0xa3e67632e656c69;
  *(undefined8 *)((long)local_160 + 0xc) = 0x5474765f72656461;
                    /* try { // try from 00953270 to 00953277 has its CatchHandler @ 009535c8 */
  local_180 = (undefined8 *)operator_new(0x20);
  *(undefined *)((long)local_180 + 0x1e) = 0;
  uStack_188 = 0x1e;
  local_190 = 0x21;
  local_180[1] = 0x6873726562753c20;
  *local_180 = 0x6564756c636e6923;
  *(undefined8 *)((long)local_180 + 0x16) = 0xa3e67632e6c6163;
  *(undefined8 *)((long)local_180 + 0xe) = 0x6544726564616873;
                    /* try { // try from 009532a8 to 00953327 has its CatchHandler @ 00953650 */
  ShaderManager::preprocessShaderString(0x19,(char *)puVar10,(basic_string *)(param_1 + 0x18),true);
  puVar10 = (undefined8 *)((ulong)&local_170 | 1);
  uVar4 = (uint)((byte)local_170 >> 1);
  if (((ulong)local_170 & 1) != 0) {
    puVar10 = local_160;
    uVar4 = (uint)uStack_168;
  }
  ShaderManager::preprocessShaderString(uVar4,(char *)puVar10,(basic_string *)(param_1 + 0x30),true)
  ;
  puVar10 = (undefined8 *)((ulong)&local_190 | 1);
  uVar4 = (uint)((byte)local_190 >> 1);
  if ((local_190 & 1) != 0) {
    puVar10 = local_180;
    uVar4 = (uint)uStack_188;
  }
  ShaderManager::preprocessShaderString(uVar4,(char *)puVar10,(basic_string *)(param_1 + 0x48),true)
  ;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  resize((ulong)param_1,'\0');
  if (plVar12 == (long *)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0)) {
                    /* try { // try from 00953570 to 0095357b has its CatchHandler @ 009535ac */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 0095338c to 0095339f has its CatchHandler @ 00953650 */
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: No shader compiler for platform.\n");
  }
  else {
                    /* try { // try from 00953334 to 0095333b has its CatchHandler @ 009535c4 */
    pSVar11 = (ShaderCapabilities *)(**(code **)(*plVar12 + 0x10))(plVar12);
                    /* try { // try from 0095333c to 00953357 has its CatchHandler @ 009535c0 */
    getShaderDefineString(pSVar11,SUB81(pSVar11,0),param_3 & 1,param_4,param_5,param_6);
    if (((byte)*param_1 & 1) != 0) {
      operator_delete(*(void **)(param_1 + 0x10));
    }
    *(undefined8 *)(param_1 + 8) = uStack_1a0;
    *(undefined8 *)param_1 = local_1a8;
    *(undefined8 *)(param_1 + 0x10) = local_198;
  }
  if ((local_190 & 1) != 0) {
    operator_delete(local_180);
  }
  if (((ulong)local_170 & 1) != 0) {
    operator_delete(local_160);
  }
  pFVar6 = local_110;
  if (((ulong)local_150 & 1) != 0) {
    operator_delete(local_140);
    pFVar6 = local_110;
  }
  local_110 = pFVar6;
  if (pFVar6 != (Field *)0x0) {
    while (pFVar5 = local_108, pFVar5 != pFVar6) {
      local_108 = pFVar5 + -0x20;
      if (((byte)*local_108 & 1) != 0) {
        operator_delete(*(void **)(pFVar5 + -0x10));
      }
    }
    operator_delete(local_110);
  }
  if (((ulong)local_130 & 1) != 0) {
    operator_delete(local_120);
  }
  pFVar6 = local_d0;
  if (local_d0 != (Field *)0x0) {
    while (pFVar5 = local_c8, pFVar5 != pFVar6) {
      local_c8 = pFVar5 + -0x20;
      if (((byte)*local_c8 & 1) != 0) {
        operator_delete(*(void **)(pFVar5 + -0x10));
      }
    }
    local_c8 = pFVar6;
    operator_delete(local_d0);
  }
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  pFVar6 = local_90;
  if (local_90 != (Field *)0x0) {
    while (pFVar5 = local_88, pFVar5 != pFVar6) {
      local_88 = pFVar5 + -0x20;
      if (((byte)*local_88 & 1) != 0) {
        operator_delete(*(void **)(pFVar5 + -0x10));
      }
    }
    local_88 = pFVar6;
    operator_delete(local_90);
  }
  if (((byte)local_b0[0]._0_1_ & 1) != 0) {
    operator_delete(local_a0);
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


