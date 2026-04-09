// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AtmosphereRenderController
// Entry Point: 009eb488
// Size: 4244 bytes
// Signature: undefined __thiscall AtmosphereRenderController(AtmosphereRenderController * this, IRenderDevice * param_1, AtmosphereRenderControllerShared * param_2, char * param_3)


/* AtmosphereRenderController::AtmosphereRenderController(IRenderDevice*,
   AtmosphereRenderControllerShared*, char const*) */

void __thiscall
AtmosphereRenderController::AtmosphereRenderController
          (AtmosphereRenderController *this,IRenderDevice *param_1,
          AtmosphereRenderControllerShared *param_2,char *param_3)

{
  vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> *this_00;
  byte *pbVar1;
  ulong uVar2;
  long lVar3;
  byte *pbVar4;
  basic_string *pbVar5;
  undefined8 uVar6;
  basic_string *pbVar7;
  undefined4 local_1d0 [2];
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8 [2];
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a0 [2];
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_188 [2];
  undefined8 local_180;
  undefined4 local_178;
  ShaderStructLayout local_170 [16];
  void *local_160;
  undefined2 local_158;
  byte *local_150;
  byte *local_148;
  basic_string local_138;
  ShaderStructLayout local_130 [16];
  void *local_120;
  undefined2 local_118;
  byte *local_110;
  byte *local_108;
  basic_string local_f8;
  ShaderStructLayout local_f0 [16];
  void *local_e0;
  undefined2 local_d8;
  byte *local_d0;
  byte *local_c8;
  basic_string local_b8;
  ShaderStructLayout local_b0 [16];
  void *local_a0;
  undefined2 local_98;
  byte *local_90;
  byte *local_88;
  basic_string local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  AdhocShader::AdhocShader((AdhocShader *)this);
                    /* try { // try from 009eb4c8 to 009eb4cf has its CatchHandler @ 009ec5b8 */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x100));
                    /* try { // try from 009eb4d4 to 009eb4d7 has its CatchHandler @ 009ec5b0 */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x200));
                    /* try { // try from 009eb4dc to 009eb4df has its CatchHandler @ 009ec5a4 */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x300));
                    /* try { // try from 009eb4e4 to 009eb4e7 has its CatchHandler @ 009ec59c */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x400));
                    /* try { // try from 009eb4ec to 009eb4ef has its CatchHandler @ 009ec58c */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x500));
                    /* try { // try from 009eb4f4 to 009eb4ff has its CatchHandler @ 009ec584 */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x600));
                    /* try { // try from 009eb504 to 009eb50f has its CatchHandler @ 009ec57c */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x700));
                    /* try { // try from 009eb514 to 009eb51b has its CatchHandler @ 009ec574 */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x800));
  *(AtmosphereRenderControllerShared **)(this + 0x998) = param_2;
  this_00 = (vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> *)(this + 0x900);
  *(undefined8 *)(this + 0x910) = 0;
  *(undefined8 *)(this + 0x948) = 0;
  *(undefined8 *)(this + 0x908) = 0;
  *(undefined8 *)(this + 0x900) = 0;
  *(undefined8 *)(this + 0x920) = 0;
  *(undefined8 *)(this + 0x918) = 0;
  *(undefined8 *)(this + 0x930) = 0;
  *(undefined8 *)(this + 0x928) = 0;
  *(undefined8 *)(this + 0x940) = 0;
  *(undefined8 *)(this + 0x938) = 0;
  this[0x950] = (AtmosphereRenderController)0x1;
  *(undefined4 *)(this + 0x964) = 0;
                    /* try { // try from 009eb54c to 009eb55f has its CatchHandler @ 009ec56c */
  ShaderStructLayout::ShaderStructLayout(local_b0,"CloudParams",0);
                    /* try { // try from 009eb560 to 009eb9e7 has its CatchHandler @ 009ec6b8 */
  ShaderStructLayout::addField(local_b0,"g_invViewProj",2,4,4,false,0);
  ShaderStructLayout::addField(local_b0,"g_cameraPosition",2,0,3,false,0);
  ShaderStructLayout::addField(local_b0,"g_sunIsPrimary",2,0,0,false,0);
  ShaderStructLayout::addField(local_b0,"g_primaryExtraterrestrialColor",2,0,3,false,0);
  ShaderStructLayout::addField(local_b0,"g_farRayZNDC",2,0,0,false,0);
  ShaderStructLayout::addField(local_b0,"g_secondaryExtraterrestrialColor",2,0,3,false,0);
  ShaderStructLayout::addField(local_b0,"g_precipitation",2,0,0,false,0);
  ShaderStructLayout::addField(local_b0,"g_primaryScatteringDirection",2,0,3,false,0);
  ShaderStructLayout::addField(local_b0,"g_scatteringCoeff",2,0,0,false,0);
  ShaderStructLayout::addField(local_b0,"g_secondaryScatteringDirection",2,0,3,false,0);
  ShaderStructLayout::addField(local_b0,"g_moonSizeScale",2,0,0,false,0);
  ShaderStructLayout::addField(local_b0,"g_primaryLightColorAtGround",2,0,3,false,0);
  ShaderStructLayout::addField(local_b0,"g_baseCloudShapeScaling",2,0,0,false,0);
  ShaderStructLayout::addField(local_b0,"g_secondaryLightColorAtGround",2,0,3,false,0);
  ShaderStructLayout::addField(local_b0,"g_moonBrightnessScale",2,0,0,false,0);
  ShaderStructLayout::addField(local_b0,"g_volumetricCloudWindDirection",2,0,2,false,0);
  ShaderStructLayout::addField(local_b0,"g_cirrusCloudAbsSamplingPosition",2,0,2,false,0);
  ShaderStructLayout::addField(local_b0,"g_subFrameSize",2,0,2,false,0);
  ShaderStructLayout::addField(local_b0,"g_depthSize",2,0,2,false,0);
  ShaderStructLayout::addField(local_b0,"g_cirrusDensityScaling",2,0,0,false,0);
  ShaderStructLayout::addField(local_b0,"g_erosionScaling",2,0,0,false,0);
  ShaderStructLayout::addField(local_b0,"g_coverageScaling",2,0,0,false,0);
  ShaderStructLayout::addField(local_b0,"g_absCloudNoiseSamplingPosition",2,0,0,false,0);
  ShaderStructLayout::addField(local_b0,"g_sunBrightnessScale",2,0,0,false,0);
  ShaderStructLayout::addField(local_b0,"g_sunSizeScale",2,0,0,false,0);
  ShaderStructLayout::addField(local_b0,"g_minNumCloudMarchingSteps",2,0,0,false,0);
  ShaderStructLayout::addField(local_b0,"g_maxNumCloudMarchingSteps",2,0,0,false,0);
  ShaderStructLayout::addField(local_b0,"g_minNumAtmMarchingSteps",2,0,0,false,0);
  ShaderStructLayout::addField(local_b0,"g_maxNumAtmMarchingSteps",2,0,0,false,0);
  ShaderStructLayout::addField(local_b0,"g_erosionWeight",2,0,0,false,0);
  ShaderStructLayout::addField(local_b0,"g_farClip",2,0,0,false,0);
  ShaderStructLayout::addField(local_b0,"g_frameIndex",2,0,0,false,0);
  ShaderStructLayout::endDefinition();
  pbVar7 = *(basic_string **)(this + 0x908);
  if (pbVar7 == *(basic_string **)(this + 0x910)) {
                    /* try { // try from 009eba8c to 009eba97 has its CatchHandler @ 009ec6b8 */
    std::__ndk1::vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
    __push_back_slow_path<ShaderStructLayout_const&>(this_00,local_b0);
  }
  else {
                    /* try { // try from 009eb9f8 to 009eba03 has its CatchHandler @ 009ec534 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pbVar7);
    *(undefined8 *)(pbVar7 + 8) = 0;
    *(undefined2 *)(pbVar7 + 6) = local_98;
    *(undefined8 *)(pbVar7 + 10) = 0;
    *(undefined8 *)(pbVar7 + 0xc) = 0;
    uVar2 = (long)local_88 - (long)local_90;
    if (uVar2 != 0) {
      if ((long)uVar2 < 0) {
                    /* try { // try from 009ec4f8 to 009ec4ff has its CatchHandler @ 009ec554 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
                    /* try { // try from 009eba28 to 009eba2f has its CatchHandler @ 009ec554 */
      pbVar5 = (basic_string *)operator_new(uVar2);
      pbVar4 = local_88;
      *(basic_string **)(pbVar7 + 8) = pbVar5;
      *(basic_string **)(pbVar7 + 10) = pbVar5;
      *(basic_string **)(pbVar7 + 0xc) = pbVar5 + ((long)uVar2 >> 5) * 8;
      for (pbVar1 = local_90; pbVar1 != pbVar4; pbVar1 = pbVar1 + 0x20) {
                    /* try { // try from 009eba50 to 009eba5b has its CatchHandler @ 009ec678 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar5);
        *(undefined8 *)(pbVar5 + 6) = *(undefined8 *)(pbVar1 + 0x18);
        pbVar5 = pbVar5 + 8;
      }
      *(basic_string **)(pbVar7 + 10) = pbVar5;
    }
    pbVar7[0xe] = local_78;
    *(basic_string **)(this + 0x908) = pbVar7 + 0x10;
  }
                    /* try { // try from 009eba98 to 009ebaab has its CatchHandler @ 009ec568 */
  ShaderStructLayout::ShaderStructLayout(local_f0,"CloudParamsSH",0);
                    /* try { // try from 009ebaac to 009ebdcb has its CatchHandler @ 009ec6a8 */
  ShaderStructLayout::addField(local_f0,"g_cameraPosition",2,0,3,false,0);
  ShaderStructLayout::addField(local_f0,"g_erosionScaling",2,0,0,false,0);
  ShaderStructLayout::addField(local_f0,"g_primaryExtraterrestrialColor",2,0,3,false,0);
  ShaderStructLayout::addField(local_f0,"g_precipitation",2,0,0,false,0);
  ShaderStructLayout::addField(local_f0,"g_secondaryExtraterrestrialColor",2,0,3,false,0);
  ShaderStructLayout::addField(local_f0,"g_scatteringCoeff",2,0,0,false,0);
  ShaderStructLayout::addField(local_f0,"g_primaryScatteringDirection",2,0,3,false,0);
  ShaderStructLayout::addField(local_f0,"g_baseCloudShapeScaling",2,0,0,false,0);
  ShaderStructLayout::addField(local_f0,"g_secondaryScatteringDirection",2,0,3,false,0);
  ShaderStructLayout::addField(local_f0,"g_cirrusDensityScaling",2,0,0,false,0);
  ShaderStructLayout::addField(local_f0,"g_primaryLightColorAtGround",2,0,3,false,0);
  ShaderStructLayout::addField(local_f0,"g_coverageScaling",2,0,0,false,0);
  ShaderStructLayout::addField(local_f0,"g_secondaryLightColorAtGround",2,0,3,false,0);
  ShaderStructLayout::addField(local_f0,"g_absCloudNoiseSamplingPosition",2,0,0,false,0);
  ShaderStructLayout::addField(local_f0,"g_envAlbedoGroundColor",2,0,3,false,0);
  ShaderStructLayout::addField(local_f0,"g_erosionWeight",2,0,0,false,0);
  ShaderStructLayout::addField(local_f0,"g_volumetricCloudWindDirection",2,0,2,false,0);
  ShaderStructLayout::addField(local_f0,"g_cirrusCloudAbsSamplingPosition",2,0,2,false,0);
  ShaderStructLayout::addField(local_f0,"g_minNumCloudMarchingSteps",2,0,0,false,0);
  ShaderStructLayout::addField(local_f0,"g_maxNumCloudMarchingSteps",2,0,0,false,0);
  ShaderStructLayout::addField(local_f0,"g_minNumAtmMarchingSteps",2,0,0,false,0);
  ShaderStructLayout::addField(local_f0,"g_maxNumAtmMarchingSteps",2,0,0,false,0);
  ShaderStructLayout::endDefinition();
  pbVar7 = *(basic_string **)(this + 0x908);
  if (pbVar7 == *(basic_string **)(this + 0x910)) {
                    /* try { // try from 009ebe70 to 009ebe7b has its CatchHandler @ 009ec6a8 */
    std::__ndk1::vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
    __push_back_slow_path<ShaderStructLayout_const&>(this_00,local_f0);
  }
  else {
                    /* try { // try from 009ebddc to 009ebde7 has its CatchHandler @ 009ec52c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pbVar7);
    *(undefined8 *)(pbVar7 + 8) = 0;
    *(undefined2 *)(pbVar7 + 6) = local_d8;
    *(undefined8 *)(pbVar7 + 10) = 0;
    *(undefined8 *)(pbVar7 + 0xc) = 0;
    uVar2 = (long)local_c8 - (long)local_d0;
    if (uVar2 != 0) {
      if ((long)uVar2 < 0) {
                    /* try { // try from 009ec500 to 009ec507 has its CatchHandler @ 009ec54c */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
                    /* try { // try from 009ebe0c to 009ebe13 has its CatchHandler @ 009ec54c */
      pbVar5 = (basic_string *)operator_new(uVar2);
      pbVar4 = local_c8;
      *(basic_string **)(pbVar7 + 8) = pbVar5;
      *(basic_string **)(pbVar7 + 10) = pbVar5;
      *(basic_string **)(pbVar7 + 0xc) = pbVar5 + ((long)uVar2 >> 5) * 8;
      for (pbVar1 = local_d0; pbVar1 != pbVar4; pbVar1 = pbVar1 + 0x20) {
                    /* try { // try from 009ebe34 to 009ebe3f has its CatchHandler @ 009ec648 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar5);
        *(undefined8 *)(pbVar5 + 6) = *(undefined8 *)(pbVar1 + 0x18);
        pbVar5 = pbVar5 + 8;
      }
      *(basic_string **)(pbVar7 + 10) = pbVar5;
    }
    pbVar7[0xe] = local_b8;
    *(basic_string **)(this + 0x908) = pbVar7 + 0x10;
  }
                    /* try { // try from 009ebe7c to 009ebe8f has its CatchHandler @ 009ec564 */
  ShaderStructLayout::ShaderStructLayout(local_130,"CloudReprojectionParams",0);
                    /* try { // try from 009ebe90 to 009ebf6f has its CatchHandler @ 009ec5d8 */
  ShaderStructLayout::addField(local_130,"g_reProjection",2,4,4,false,0);
  ShaderStructLayout::addField(local_130,"g_prevFrameSize",2,0,2,false,0);
  ShaderStructLayout::addField(local_130,"g_depthTextureSize",2,0,2,false,0);
  ShaderStructLayout::addField(local_130,"g_farRayZNDC",2,0,0,false,0);
  ShaderStructLayout::addField(local_130,"g_newFrameWeight",2,0,0,false,0);
  ShaderStructLayout::addField(local_130,"g_farClip",2,0,0,false,0);
  ShaderStructLayout::endDefinition();
  pbVar7 = *(basic_string **)(this + 0x908);
  if (pbVar7 == *(basic_string **)(this + 0x910)) {
                    /* try { // try from 009ec014 to 009ec01f has its CatchHandler @ 009ec5d8 */
    std::__ndk1::vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
    __push_back_slow_path<ShaderStructLayout_const&>(this_00,local_130);
  }
  else {
                    /* try { // try from 009ebf80 to 009ebf8b has its CatchHandler @ 009ec524 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pbVar7);
    *(undefined8 *)(pbVar7 + 8) = 0;
    *(undefined2 *)(pbVar7 + 6) = local_118;
    *(undefined8 *)(pbVar7 + 10) = 0;
    *(undefined8 *)(pbVar7 + 0xc) = 0;
    uVar2 = (long)local_108 - (long)local_110;
    if (uVar2 != 0) {
      if ((long)uVar2 < 0) {
                    /* try { // try from 009ec508 to 009ec50f has its CatchHandler @ 009ec544 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
                    /* try { // try from 009ebfb0 to 009ebfb7 has its CatchHandler @ 009ec544 */
      pbVar5 = (basic_string *)operator_new(uVar2);
      pbVar4 = local_108;
      *(basic_string **)(pbVar7 + 8) = pbVar5;
      *(basic_string **)(pbVar7 + 10) = pbVar5;
      *(basic_string **)(pbVar7 + 0xc) = pbVar5 + ((long)uVar2 >> 5) * 8;
      for (pbVar1 = local_110; pbVar1 != pbVar4; pbVar1 = pbVar1 + 0x20) {
                    /* try { // try from 009ebfd8 to 009ebfe3 has its CatchHandler @ 009ec618 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar5);
        *(undefined8 *)(pbVar5 + 6) = *(undefined8 *)(pbVar1 + 0x18);
        pbVar5 = pbVar5 + 8;
      }
      *(basic_string **)(pbVar7 + 10) = pbVar5;
    }
    pbVar7[0xe] = local_f8;
    *(basic_string **)(this + 0x908) = pbVar7 + 0x10;
  }
                    /* try { // try from 009ec020 to 009ec033 has its CatchHandler @ 009ec55c */
  ShaderStructLayout::ShaderStructLayout(local_170,"ParticipatingMediaParams",0);
                    /* try { // try from 009ec034 to 009ec113 has its CatchHandler @ 009ec5d0 */
  ShaderStructLayout::addField(local_170,"g_rayleighExtinctionCoeff",2,0,3,false,0);
  ShaderStructLayout::addField(local_170,"g_mieExtinctionCoeff",2,0,0,false,0);
  ShaderStructLayout::addField(local_170,"g_fogRayleighExtinctionCoeff",2,0,3,false,0);
  ShaderStructLayout::addField(local_170,"g_fogMieExtinctionCoeff",2,0,0,false,0);
  ShaderStructLayout::addField(local_170,"g_cornetteShrankAsymmetry",2,0,0,false,0);
  ShaderStructLayout::addField(local_170,"g_fogPlaneHeight",2,0,0,false,0);
  ShaderStructLayout::endDefinition();
  pbVar7 = *(basic_string **)(this + 0x908);
  if (pbVar7 == *(basic_string **)(this + 0x910)) {
                    /* try { // try from 009ec1b8 to 009ec1c3 has its CatchHandler @ 009ec5d0 */
    std::__ndk1::vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
    __push_back_slow_path<ShaderStructLayout_const&>(this_00,local_170);
  }
  else {
                    /* try { // try from 009ec124 to 009ec12f has its CatchHandler @ 009ec51c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pbVar7);
    *(undefined8 *)(pbVar7 + 8) = 0;
    *(undefined2 *)(pbVar7 + 6) = local_158;
    *(undefined8 *)(pbVar7 + 10) = 0;
    *(undefined8 *)(pbVar7 + 0xc) = 0;
    uVar2 = (long)local_148 - (long)local_150;
    if (uVar2 != 0) {
      if ((long)uVar2 < 0) {
                    /* try { // try from 009ec510 to 009ec517 has its CatchHandler @ 009ec53c */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
                    /* try { // try from 009ec154 to 009ec15b has its CatchHandler @ 009ec53c */
      pbVar5 = (basic_string *)operator_new(uVar2);
      pbVar4 = local_148;
      *(basic_string **)(pbVar7 + 8) = pbVar5;
      *(basic_string **)(pbVar7 + 10) = pbVar5;
      *(basic_string **)(pbVar7 + 0xc) = pbVar5 + ((long)uVar2 >> 5) * 8;
      for (pbVar1 = local_150; pbVar1 != pbVar4; pbVar1 = pbVar1 + 0x20) {
                    /* try { // try from 009ec17c to 009ec187 has its CatchHandler @ 009ec5e0 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar5);
        *(undefined8 *)(pbVar5 + 6) = *(undefined8 *)(pbVar1 + 0x18);
        pbVar5 = pbVar5 + 8;
      }
      *(basic_string **)(pbVar7 + 10) = pbVar5;
    }
    pbVar7[0xe] = local_138;
    *(basic_string **)(this + 0x908) = pbVar7 + 0x10;
  }
  *(undefined2 *)(this + 0x994) = 0;
  *(undefined8 *)(this + 0x954) = 0;
  *(undefined8 *)(this + 0x98c) = 0x40;
  *(undefined8 *)(this + 0x984) = 0x3000000080;
  *(undefined8 *)(this + 0x97c) = 0x6000000000;
  *(undefined8 *)(this + 0x974) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(this + 0x968) = 0x7f7fffff7f7fffff;
  if (*(long **)(this + 0x918) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x918) + 8))();
  }
  local_180 = 0;
  local_188[0] = 0x104;
  local_178 = 8;
                    /* try { // try from 009ec228 to 009ec247 has its CatchHandler @ 009ec5c8 */
  uVar6 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
  uVar6 = (**(code **)(*(long *)param_1 + 0x118))(param_1,uVar6,local_188);
  *(undefined8 *)(this + 0x918) = uVar6;
  local_198 = 0;
  local_1a0[0] = 0xa0;
  local_190 = 8;
                    /* try { // try from 009ec268 to 009ec287 has its CatchHandler @ 009ec5c4 */
  uVar6 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
  uVar6 = (**(code **)(*(long *)param_1 + 0x118))(param_1,uVar6,local_1a0);
  *(undefined8 *)(this + 0x930) = uVar6;
  if (*(long **)(this + 0x920) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x920) + 8))();
  }
  local_1b0 = 0;
  local_1b8[0] = 0x28;
  local_1a8 = 4;
                    /* try { // try from 009ec2c0 to 009ec2df has its CatchHandler @ 009ec5c0 */
  uVar6 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
  uVar6 = (**(code **)(*(long *)param_1 + 0x118))(param_1,uVar6,local_1b8);
  *(undefined8 *)(this + 0x920) = uVar6;
  if (*(long **)(this + 0x928) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x928) + 8))();
  }
  local_1c8 = 0;
  local_1d0[0] = 0x5c;
  local_1c0 = 8;
                    /* try { // try from 009ec318 to 009ec347 has its CatchHandler @ 009ec5cc */
  uVar6 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
  uVar6 = (**(code **)(*(long *)param_1 + 0x118))(param_1,uVar6,local_1d0);
  *(undefined8 *)(this + 0x928) = uVar6;
  createStaticShaders(this,param_1);
  pbVar1 = local_150;
  if (local_150 != (byte *)0x0) {
    while (pbVar4 = local_148, pbVar4 != pbVar1) {
      local_148 = pbVar4 + -0x20;
      if ((*local_148 & 1) != 0) {
        operator_delete(*(void **)(pbVar4 + -0x10));
      }
    }
    local_148 = pbVar1;
    operator_delete(local_150);
  }
  if (((byte)local_170[0] & 1) != 0) {
    operator_delete(local_160);
  }
  pbVar1 = local_110;
  if (local_110 != (byte *)0x0) {
    while (pbVar4 = local_108, pbVar4 != pbVar1) {
      local_108 = pbVar4 + -0x20;
      if ((*local_108 & 1) != 0) {
        operator_delete(*(void **)(pbVar4 + -0x10));
      }
    }
    local_108 = pbVar1;
    operator_delete(local_110);
  }
  if (((byte)local_130[0] & 1) != 0) {
    operator_delete(local_120);
  }
  pbVar1 = local_d0;
  if (local_d0 != (byte *)0x0) {
    while (pbVar4 = local_c8, pbVar4 != pbVar1) {
      local_c8 = pbVar4 + -0x20;
      if ((*local_c8 & 1) != 0) {
        operator_delete(*(void **)(pbVar4 + -0x10));
      }
    }
    local_c8 = pbVar1;
    operator_delete(local_d0);
  }
  if (((byte)local_f0[0] & 1) != 0) {
    operator_delete(local_e0);
  }
  pbVar1 = local_90;
  if (local_90 != (byte *)0x0) {
    while (pbVar4 = local_88, pbVar4 != pbVar1) {
      local_88 = pbVar4 + -0x20;
      if ((*local_88 & 1) != 0) {
        operator_delete(*(void **)(pbVar4 + -0x10));
      }
    }
    local_88 = pbVar1;
    operator_delete(local_90);
  }
  if (((byte)local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


