// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VideoPlayer
// Entry Point: 00c705b4
// Size: 792 bytes
// Signature: undefined __thiscall VideoPlayer(VideoPlayer * this, TheoraVideoDecoder * param_1, bool param_2, float param_3, bool param_4)


/* VideoPlayer::VideoPlayer(TheoraVideoDecoder*, bool, float, bool) */

void __thiscall
VideoPlayer::VideoPlayer
          (VideoPlayer *this,TheoraVideoDecoder *param_1,bool param_2,float param_3,bool param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  bool bVar4;
  void *__s;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 local_198;
  undefined local_194;
  undefined8 local_190;
  undefined4 local_188;
  void *local_180;
  undefined4 local_178;
  ulong local_170;
  undefined8 uStack_168;
  void *local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined2 local_110;
  void *local_108;
  undefined2 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  uint uStack_f4;
  uint local_f0;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined4 local_dc;
  undefined local_d8;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined4 local_bc;
  char *local_b8;
  void *local_b0;
  undefined2 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  uint uStack_9c;
  uint local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined4 local_84;
  undefined local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined4 local_64;
  char *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  *(TheoraVideoDecoder **)(this + 8) = param_1;
  *this = (VideoPlayer)0x0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  this[1] = (VideoPlayer)param_2;
  *(float *)(this + 4) = param_3;
  uStack_9c = *(uint *)(param_1 + 0x104);
  uVar9 = (ulong)uStack_9c;
  local_98 = *(uint *)(param_1 + 0x108);
  uVar10 = (ulong)local_98;
  uStack_8c = 0;
  local_94 = 0x100000001;
  uStack_6c = 0x3f80000000000000;
  local_74 = 0;
  uStack_f4 = uStack_9c >> 1;
  local_7c = 0x100000008;
  uStack_e4 = 0;
  local_ec = 0x100000001;
  uStack_c4 = 0x3f80000000000000;
  local_cc = 0;
  local_d4 = 0x100000008;
  local_f0 = local_98 >> 1;
  local_a8 = 0;
  local_64 = 0;
  local_a0 = 0xffffffff;
  local_84 = 1;
  local_80 = 0;
  local_100 = 0;
  local_bc = 0;
  local_f8 = 0xffffffff;
  local_dc = 1;
  local_d8 = 0;
  __s = operator_new__((ulong)(uStack_9c * local_98 * 4));
  memset(__s,0,uVar9 * uVar10 * 4);
  local_a4 = 0;
  local_fc = 0;
  local_60 = "VideoPlayer";
  local_b8 = "VideoPlayer";
  local_108 = __s;
  local_b0 = __s;
  RenderDeviceManager::getInstance();
  plVar5 = (long *)RenderDeviceManager::getCurrentRenderDevice();
  uVar6 = (**(code **)(*plVar5 + 0x138))();
  uVar7 = (**(code **)(*plVar5 + 0x100))(plVar5,uVar6,&local_b0);
  *(undefined8 *)(this + 0x10) = uVar7;
  uVar7 = (**(code **)(*plVar5 + 0x100))(plVar5,uVar6,&local_108);
  *(undefined8 *)(this + 0x18) = uVar7;
  uVar6 = (**(code **)(*plVar5 + 0x100))(plVar5,uVar6,&local_108);
  *(undefined8 *)(this + 0x20) = uVar6;
  local_128 = 0;
  local_130 = 2;
  local_120 = 0;
  uStack_138 = 0x200000002;
  local_140 = 0x200000001;
  uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5,&local_140);
  *(undefined8 *)(this + 0x28) = uVar6;
  operator_delete__(__s);
  getNextVideoBuffer(this,true);
  local_170 = 0;
  uStack_168 = 0;
  local_160 = (void *)0x0;
  uStack_158 = 0;
  local_198 = 2;
  local_194 = 1;
  local_190 = 0;
  local_150 = 0;
  local_148 = (undefined8 *)0x0;
  local_188 = 0;
  local_180 = (void *)0x0;
  local_178 = 0;
                    /* try { // try from 00c707a4 to 00c707b3 has its CatchHandler @ 00c708cc */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&local_170);
  iVar1 = *(int *)(*(long *)(this + 8) + 0xf8);
  local_14c = 0x3f800000;
  if (iVar1 == 2) {
    local_198 = 3;
  }
  else {
    if (iVar1 != 1) {
      bVar4 = false;
      goto LAB_00c707f0;
    }
    local_198 = 2;
  }
  bVar4 = true;
LAB_00c707f0:
                    /* try { // try from 00c707f0 to 00c70853 has its CatchHandler @ 00c708ec */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&local_170);
  if (bVar4) {
    local_148 = (undefined8 *)operator_new(0x18);
    lVar8 = *(long *)(this + 8);
    uVar2 = *(undefined4 *)(lVar8 + 0x100);
    local_148[2] = this;
    *(undefined8 **)(this + 0x30) = local_148;
    *local_148 = &PTR__IStreamedAudioData_00feea70;
    *(undefined4 *)(local_148 + 1) = uVar2;
    local_190 = CONCAT44(iVar1,*(undefined4 *)(lVar8 + 0xf4));
    AudioDeviceManager::getInstance();
    plVar5 = (long *)AudioDeviceManager::getCurrentAudioDevice();
    local_118 = (**(code **)(*plVar5 + 0x30))(plVar5,&local_198);
    *(undefined8 *)(this + 0x40) = local_118;
    local_110 = 0x100;
                    /* try { // try from 00c70864 to 00c7087b has its CatchHandler @ 00c708e8 */
    AudioDeviceManager::getInstance();
    plVar5 = (long *)AudioDeviceManager::getCurrentAudioDevice();
    uVar6 = (**(code **)(*plVar5 + 0x38))(plVar5,&local_118);
    *(undefined8 *)(this + 0x38) = uVar6;
  }
  if (local_180 != (void *)0x0) {
    operator_delete__(local_180);
  }
  if ((local_170 & 1) != 0) {
    operator_delete(local_160);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


