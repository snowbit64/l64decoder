// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DensityAnimationMap
// Entry Point: 00a6b17c
// Size: 1036 bytes
// Signature: undefined __thiscall DensityAnimationMap(DensityAnimationMap * this, FoliageBendingSystem * param_1)


/* DensityAnimationMap::DensityAnimationMap(FoliageBendingSystem*) */

void __thiscall
DensityAnimationMap::DensityAnimationMap(DensityAnimationMap *this,FoliageBendingSystem *param_1)

{
  byte *pbVar1;
  basic_string *pbVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  basic_string *pbVar6;
  ShaderStructLayout local_a8 [16];
  void *local_98;
  undefined2 local_90;
  byte *local_88;
  byte *local_80;
  basic_string local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined ***)this = &PTR__DensityAnimationMap_00fe3cb0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
                    /* try { // try from 00a6b1d0 to 00a6b1d7 has its CatchHandler @ 00a6b5c0 */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0xc0));
                    /* try { // try from 00a6b1dc to 00a6b1e3 has its CatchHandler @ 00a6b5b4 */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x1c0));
                    /* try { // try from 00a6b1e8 to 00a6b1ef has its CatchHandler @ 00a6b5a8 */
  FullScreenRenderController::FullScreenRenderController
            ((FullScreenRenderController *)(this + 0x2c0));
  *(FoliageBendingSystem **)(this + 8) = param_1;
  *(undefined4 *)(this + 0x20) = 1;
  *(undefined8 *)(this + 0x418) = 0;
  *(undefined4 *)(this + 0x2c) = 0x3f800000;
  *(undefined8 *)(this + 0x410) = 0;
  *(undefined8 *)(this + 0x408) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x4c) = 0x2000000000;
  *(undefined8 *)(this + 0x44) = 0x20;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  this[0x78] = (DensityAnimationMap)0x0;
  *(undefined8 *)(this + 0x5c) = 0;
  *(undefined8 *)(this + 0x54) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
                    /* try { // try from 00a6b248 to 00a6b25b has its CatchHandler @ 00a6b59c */
  ShaderStructLayout::ShaderStructLayout(local_a8,"USER",0);
                    /* try { // try from 00a6b25c to 00a6b437 has its CatchHandler @ 00a6b5fc */
  ShaderStructLayout::addField(local_a8,"uvToWorldScaleOffset",2,0,4,false,0);
  ShaderStructLayout::addField(local_a8,"uvToHeightMapScaleOffset",2,0,4,false,0);
  ShaderStructLayout::addField(local_a8,"worldVectorX",2,0,3,false,0);
  ShaderStructLayout::addField(local_a8,"recipSqLenWorldVectorX",2,0,0,false,0);
  ShaderStructLayout::addField(local_a8,"worldVectorZ",2,0,3,false,0);
  ShaderStructLayout::addField(local_a8,"recipSqLenWorldVectorZ",2,0,0,false,0);
  ShaderStructLayout::addField(local_a8,"planeNormal",2,0,3,false,0);
  ShaderStructLayout::addField(local_a8,"planeConstant",2,0,0,false,0);
  ShaderStructLayout::addField(local_a8,"worldPt0",2,0,3,false,0);
  ShaderStructLayout::addField(local_a8,"minBbox",2,0,3,false,0);
  ShaderStructLayout::addField(local_a8,"maxBbox",2,0,3,false,0);
  ShaderStructLayout::addField(local_a8,"uvOrigin",2,0,2,false,0);
  ShaderStructLayout::addField(local_a8,"heightScaleOffset",2,0,2,false,0);
  ShaderStructLayout::endDefinition();
  pbVar2 = *(basic_string **)(this + 0xb0);
  if (pbVar2 == *(basic_string **)(this + 0xb8)) {
                    /* try { // try from 00a6b4e0 to 00a6b4eb has its CatchHandler @ 00a6b5fc */
    std::__ndk1::vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
    __push_back_slow_path<ShaderStructLayout_const&>
              ((vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> *)
               (this + 0xa8),local_a8);
  }
  else {
                    /* try { // try from 00a6b444 to 00a6b453 has its CatchHandler @ 00a6b588 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pbVar2);
    *(undefined8 *)(pbVar2 + 8) = 0;
    *(undefined2 *)(pbVar2 + 6) = local_90;
    *(undefined8 *)(pbVar2 + 10) = 0;
    *(undefined8 *)(pbVar2 + 0xc) = 0;
    uVar3 = (long)local_80 - (long)local_88;
    if (uVar3 != 0) {
      if ((long)uVar3 < 0) {
                    /* try { // try from 00a6b57c to 00a6b583 has its CatchHandler @ 00a6b594 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
                    /* try { // try from 00a6b47c to 00a6b483 has its CatchHandler @ 00a6b594 */
      pbVar6 = (basic_string *)operator_new(uVar3);
      pbVar5 = local_80;
      *(basic_string **)(pbVar2 + 8) = pbVar6;
      *(basic_string **)(pbVar2 + 10) = pbVar6;
      *(basic_string **)(pbVar2 + 0xc) = pbVar6 + ((long)uVar3 >> 5) * 8;
      for (pbVar1 = local_88; pbVar1 != pbVar5; pbVar1 = pbVar1 + 0x20) {
                    /* try { // try from 00a6b4a4 to 00a6b4af has its CatchHandler @ 00a6b5c8 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar6);
        *(undefined8 *)(pbVar6 + 6) = *(undefined8 *)(pbVar1 + 0x18);
        pbVar6 = pbVar6 + 8;
      }
      *(basic_string **)(pbVar2 + 10) = pbVar6;
    }
    pbVar2[0xe] = local_70;
    *(basic_string **)(this + 0xb0) = pbVar2 + 0x10;
  }
  pbVar1 = local_88;
  if (local_88 != (byte *)0x0) {
    while (pbVar5 = local_80, pbVar5 != pbVar1) {
      local_80 = pbVar5 + -0x20;
      if ((*local_80 & 1) != 0) {
        operator_delete(*(void **)(pbVar5 + -0x10));
      }
    }
    local_80 = pbVar1;
    operator_delete(local_88);
  }
  if (((byte)local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


