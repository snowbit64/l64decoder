// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Upscaler
// Entry Point: 00a4879c
// Size: 656 bytes
// Signature: undefined __thiscall Upscaler(Upscaler * this, HardwareScalability * param_1, IRenderDevice * param_2)


/* Upscaler::Upscaler(HardwareScalability&, IRenderDevice*) */

void __thiscall
Upscaler::Upscaler(Upscaler *this,HardwareScalability *param_1,IRenderDevice *param_2)

{
  byte *pbVar1;
  basic_string *pbVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  basic_string *pbVar6;
  undefined8 uVar7;
  undefined local_128 [4];
  undefined4 local_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined local_104;
  undefined4 local_100;
  ShaderStructLayout local_f8 [16];
  void *local_e8;
  undefined2 local_e0;
  byte *local_d8;
  byte *local_d0;
  basic_string local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(IRenderDevice **)(this + 0x18) = param_2;
  *(HardwareScalability **)(this + 0x20) = param_1;
                    /* try { // try from 00a487e0 to 00a487e7 has its CatchHandler @ 00a48a50 */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x70));
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined2 *)(this + 0x28) = 1;
  this[0x2a] = (Upscaler)0x0;
  *(undefined8 *)(this + 0x44) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x34) = 0x400000005;
  *(undefined8 *)(this + 0x2c) = 0;
                    /* try { // try from 00a48810 to 00a48823 has its CatchHandler @ 00a48a48 */
  ShaderStructLayout::ShaderStructLayout(local_f8,"SGSRparams",0);
                    /* try { // try from 00a48824 to 00a4884f has its CatchHandler @ 00a48a58 */
  ShaderStructLayout::addField(local_f8,"g_params",2,0,4,false,0);
  ShaderStructLayout::endDefinition();
  pbVar2 = *(basic_string **)(this + 8);
  if (pbVar2 == *(basic_string **)(this + 0x10)) {
                    /* try { // try from 00a488f0 to 00a488fb has its CatchHandler @ 00a48a58 */
    std::__ndk1::vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
    __push_back_slow_path<ShaderStructLayout_const&>
              ((vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> *)this,
               local_f8);
  }
  else {
                    /* try { // try from 00a4885c to 00a48867 has its CatchHandler @ 00a48a2c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pbVar2);
    *(undefined8 *)(pbVar2 + 8) = 0;
    *(undefined2 *)(pbVar2 + 6) = local_e0;
    *(undefined8 *)(pbVar2 + 10) = 0;
    *(undefined8 *)(pbVar2 + 0xc) = 0;
    uVar3 = (long)local_d0 - (long)local_d8;
    if (uVar3 != 0) {
      if ((long)uVar3 < 0) {
                    /* try { // try from 00a48a20 to 00a48a27 has its CatchHandler @ 00a48a34 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
                    /* try { // try from 00a4888c to 00a48893 has its CatchHandler @ 00a48a34 */
      pbVar6 = (basic_string *)operator_new(uVar3);
      pbVar5 = local_d0;
      *(basic_string **)(pbVar2 + 8) = pbVar6;
      *(basic_string **)(pbVar2 + 10) = pbVar6;
      *(basic_string **)(pbVar2 + 0xc) = pbVar6 + ((long)uVar3 >> 5) * 8;
      for (pbVar1 = local_d8; pbVar1 != pbVar5; pbVar1 = pbVar1 + 0x20) {
                    /* try { // try from 00a488b4 to 00a488bf has its CatchHandler @ 00a48a60 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar6);
        *(undefined8 *)(pbVar6 + 6) = *(undefined8 *)(pbVar1 + 0x18);
        pbVar6 = pbVar6 + 8;
      }
      *(basic_string **)(pbVar2 + 10) = pbVar6;
    }
    pbVar2[0xe] = local_c0;
    *(basic_string **)(this + 8) = pbVar2 + 0x10;
  }
  local_b8 = 0;
  uStack_b0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0x100000001;
  uStack_a0 = 0x100000001;
  local_88 = 0x100000001;
  uStack_80 = 0x100000001;
  uStack_70 = 0x101010101010101;
  local_78 = 0x101010101010101;
                    /* try { // try from 00a48920 to 00a4892b has its CatchHandler @ 00a48a44 */
  uVar7 = (**(code **)(*(long *)param_2 + 0xf0))(param_2,&local_b8);
  *(undefined8 *)(this + 0x58) = uVar7;
  local_118 = 0;
  uStack_110 = 0;
  local_104 = 0;
  local_108 = 0x101;
  local_100 = 0;
  local_120 = 0x200000001;
                    /* try { // try from 00a48958 to 00a48963 has its CatchHandler @ 00a48a40 */
  uVar7 = (**(code **)(*(long *)param_2 + 0xe8))(param_2,&local_120);
  *(undefined8 *)(this + 0x60) = uVar7;
  local_128[0] = 0;
  local_124 = 1;
                    /* try { // try from 00a4897c to 00a48987 has its CatchHandler @ 00a48a3c */
  uVar7 = (**(code **)(*(long *)param_2 + 0xe0))(param_2,local_128);
  pbVar1 = local_d8;
  *(undefined8 *)(this + 0x68) = uVar7;
  *(undefined8 *)(this + 0x50) = 0;
  if (local_d8 != (byte *)0x0) {
    while (pbVar5 = local_d0, pbVar5 != pbVar1) {
      local_d0 = pbVar5 + -0x20;
      if ((*local_d0 & 1) != 0) {
        operator_delete(*(void **)(pbVar5 + -0x10));
      }
    }
    local_d0 = pbVar1;
    operator_delete(local_d8);
  }
  if (((byte)local_f8[0] & 1) != 0) {
    operator_delete(local_e8);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


