// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AtmosphereRenderControllerShared
// Entry Point: 009eebf4
// Size: 1600 bytes
// Signature: undefined __thiscall AtmosphereRenderControllerShared(AtmosphereRenderControllerShared * this)


/* AtmosphereRenderControllerShared::AtmosphereRenderControllerShared() */

void __thiscall
AtmosphereRenderControllerShared::AtmosphereRenderControllerShared
          (AtmosphereRenderControllerShared *this)

{
  byte *pbVar1;
  ulong uVar2;
  long lVar3;
  byte *pbVar4;
  basic_string *pbVar5;
  basic_string *pbVar6;
  ShaderStructLayout local_e8 [16];
  void *local_d8;
  undefined2 local_d0;
  byte *local_c8;
  byte *local_c0;
  basic_string local_b0;
  ShaderStructLayout local_a8 [16];
  void *local_98;
  undefined2 local_90;
  byte *local_88;
  byte *local_80;
  basic_string local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x70));
                    /* try { // try from 009eec34 to 009eec3b has its CatchHandler @ 009ef268 */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x170));
                    /* try { // try from 009eec40 to 009eec47 has its CatchHandler @ 009ef260 */
  AdhocShader::ShaderVariants::ShaderVariants((ShaderVariants *)(this + 0x270));
  *(undefined8 *)(this + 0x2b0) = 0;
  *(undefined8 *)(this + 0x298) = 0;
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined8 *)(this + 0x2a8) = 0;
  *(undefined8 *)(this + 0x2a0) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x2b8) = 0x37f08f51;
                    /* try { // try from 009eec78 to 009eec8b has its CatchHandler @ 009ef258 */
  ShaderStructLayout::ShaderStructLayout(local_a8,"CloudCoverageParams",0);
                    /* try { // try from 009eec8c to 009eef3f has its CatchHandler @ 009ef2e0 */
  ShaderStructLayout::addField(local_a8,"g_cloudUVOffset",2,0,2,false,0);
  ShaderStructLayout::addField(local_a8,"g_coverageScaling",2,0,0,false,0);
  ShaderStructLayout::addField(local_a8,"g_cloudCoverageEdge0",2,0,0,false,0);
  ShaderStructLayout::addField(local_a8,"g_cloudCoverageEdge1",2,0,0,false,0);
  ShaderStructLayout::addField(local_a8,"g_cloudCoverageDistanceToCenterStart",2,0,0,false,0);
  ShaderStructLayout::addField(local_a8,"g_cloudCoverageDistanceToCenterEnd",2,0,0,false,0);
  ShaderStructLayout::addField(local_a8,"g_cloudCoverageNoiseWeight0",2,0,0,false,0);
  ShaderStructLayout::addField(local_a8,"g_cloudCoverageNoise0Edge0",2,0,0,false,0);
  ShaderStructLayout::addField(local_a8,"g_cloudCoverageNoise0Edge1",2,0,0,false,0);
  ShaderStructLayout::addField(local_a8,"g_cloudCoverageNoiseWeight1",2,0,0,false,0);
  ShaderStructLayout::addField(local_a8,"g_cloudCoverageNoise1Edge0",2,0,0,false,0);
  ShaderStructLayout::addField(local_a8,"g_cloudCoverageNoise1Edge1",2,0,0,false,0);
  ShaderStructLayout::addField(local_a8,"g_cloudCoverageNoiseWeight2",2,0,0,false,0);
  ShaderStructLayout::addField(local_a8,"g_cloudCoverageNoise2Edge0",2,0,0,false,0);
  ShaderStructLayout::addField(local_a8,"g_cloudCoverageNoise2Edge1",2,0,0,false,0);
  ShaderStructLayout::addField(local_a8,"g_localCloudCoverageWeight0",2,0,0,false,0);
  ShaderStructLayout::addField(local_a8,"g_localCloudCoverageWeight1",2,0,0,false,0);
  ShaderStructLayout::addField(local_a8,"g_localCloudCoverageWeight2",2,0,0,false,0);
  ShaderStructLayout::addField(local_a8,"g_localCloudCoverageWeight3",2,0,0,false,0);
  ShaderStructLayout::endDefinition();
  pbVar6 = *(basic_string **)(this + 0x298);
  if (pbVar6 == *(basic_string **)(this + 0x2a0)) {
                    /* try { // try from 009eefe4 to 009eefef has its CatchHandler @ 009ef2e0 */
    std::__ndk1::vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
    __push_back_slow_path<ShaderStructLayout_const&>
              ((vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> *)
               (this + 0x290),local_a8);
  }
  else {
                    /* try { // try from 009eef50 to 009eef5b has its CatchHandler @ 009ef23c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pbVar6);
    *(undefined8 *)(pbVar6 + 8) = 0;
    *(undefined2 *)(pbVar6 + 6) = local_90;
    *(undefined8 *)(pbVar6 + 10) = 0;
    *(undefined8 *)(pbVar6 + 0xc) = 0;
    uVar2 = (long)local_80 - (long)local_88;
    if (uVar2 != 0) {
      if ((long)uVar2 < 0) {
                    /* try { // try from 009ef220 to 009ef227 has its CatchHandler @ 009ef24c */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
                    /* try { // try from 009eef80 to 009eef87 has its CatchHandler @ 009ef24c */
      pbVar5 = (basic_string *)operator_new(uVar2);
      pbVar4 = local_80;
      *(basic_string **)(pbVar6 + 8) = pbVar5;
      *(basic_string **)(pbVar6 + 10) = pbVar5;
      *(basic_string **)(pbVar6 + 0xc) = pbVar5 + ((long)uVar2 >> 5) * 8;
      for (pbVar1 = local_88; pbVar1 != pbVar4; pbVar1 = pbVar1 + 0x20) {
                    /* try { // try from 009eefa8 to 009eefb3 has its CatchHandler @ 009ef2ac */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar5);
        *(undefined8 *)(pbVar5 + 6) = *(undefined8 *)(pbVar1 + 0x18);
        pbVar5 = pbVar5 + 8;
      }
      *(basic_string **)(pbVar6 + 10) = pbVar5;
    }
    pbVar6[0xe] = local_70;
    *(basic_string **)(this + 0x298) = pbVar6 + 0x10;
  }
                    /* try { // try from 009eeff0 to 009ef003 has its CatchHandler @ 009ef254 */
  ShaderStructLayout::ShaderStructLayout(local_e8,"CloudTypeParams",0);
                    /* try { // try from 009ef004 to 009ef077 has its CatchHandler @ 009ef270 */
  ShaderStructLayout::addField(local_e8,"g_slice0XCoord",2,0,0,false,0);
  ShaderStructLayout::addField(local_e8,"g_slice1XCoord",2,0,0,false,0);
  ShaderStructLayout::addField(local_e8,"g_blendWeight",2,0,0,false,0);
  ShaderStructLayout::endDefinition();
  pbVar6 = *(basic_string **)(this + 0x298);
  if (pbVar6 == *(basic_string **)(this + 0x2a0)) {
                    /* try { // try from 009ef11c to 009ef127 has its CatchHandler @ 009ef270 */
    std::__ndk1::vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
    __push_back_slow_path<ShaderStructLayout_const&>
              ((vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> *)
               (this + 0x290),local_e8);
  }
  else {
                    /* try { // try from 009ef088 to 009ef093 has its CatchHandler @ 009ef234 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pbVar6);
    *(undefined8 *)(pbVar6 + 8) = 0;
    *(undefined2 *)(pbVar6 + 6) = local_d0;
    *(undefined8 *)(pbVar6 + 10) = 0;
    *(undefined8 *)(pbVar6 + 0xc) = 0;
    uVar2 = (long)local_c0 - (long)local_c8;
    if (uVar2 != 0) {
      if ((long)uVar2 < 0) {
                    /* try { // try from 009ef228 to 009ef22f has its CatchHandler @ 009ef244 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
                    /* try { // try from 009ef0b8 to 009ef0bf has its CatchHandler @ 009ef244 */
      pbVar5 = (basic_string *)operator_new(uVar2);
      pbVar4 = local_c0;
      *(basic_string **)(pbVar6 + 8) = pbVar5;
      *(basic_string **)(pbVar6 + 10) = pbVar5;
      *(basic_string **)(pbVar6 + 0xc) = pbVar5 + ((long)uVar2 >> 5) * 8;
      for (pbVar1 = local_c8; pbVar1 != pbVar4; pbVar1 = pbVar1 + 0x20) {
                    /* try { // try from 009ef0e0 to 009ef0eb has its CatchHandler @ 009ef278 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar5);
        *(undefined8 *)(pbVar5 + 6) = *(undefined8 *)(pbVar1 + 0x18);
        pbVar5 = pbVar5 + 8;
      }
      *(basic_string **)(pbVar6 + 10) = pbVar5;
    }
    pbVar6[0xe] = local_b0;
    *(basic_string **)(this + 0x298) = pbVar6 + 0x10;
  }
  pbVar1 = local_c8;
  this[0x288] = (AtmosphereRenderControllerShared)0x0;
  *(undefined2 *)(this + 0x2c0) = 0;
  if (local_c8 != (byte *)0x0) {
    while (pbVar4 = local_c0, pbVar4 != pbVar1) {
      local_c0 = pbVar4 + -0x20;
      if ((*local_c0 & 1) != 0) {
        operator_delete(*(void **)(pbVar4 + -0x10));
      }
    }
    local_c0 = pbVar1;
    operator_delete(local_c8);
  }
  if (((byte)local_e8[0] & 1) != 0) {
    operator_delete(local_d8);
  }
  pbVar1 = local_88;
  if (local_88 != (byte *)0x0) {
    while (pbVar4 = local_80, pbVar4 != pbVar1) {
      local_80 = pbVar4 + -0x20;
      if ((*local_80 & 1) != 0) {
        operator_delete(*(void **)(pbVar4 + -0x10));
      }
    }
    local_80 = pbVar1;
    operator_delete(local_88);
  }
  if (((byte)local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


