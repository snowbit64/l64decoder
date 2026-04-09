// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addLocalUser
// Entry Point: 00b14d58
// Size: 476 bytes
// Signature: undefined __thiscall addLocalUser(VoiceChatManager * this, char * param_1, bool param_2)


/* VoiceChatManager::addLocalUser(char const*, bool) */

void __thiscall VoiceChatManager::addLocalUser(VoiceChatManager *this,char *param_1,bool param_2)

{
  long lVar1;
  undefined8 uVar2;
  OpusVoiceCodec *this_00;
  VoiceChatStreamedAudioData *this_01;
  AUDIO_DEVICE_TYPE AVar3;
  long lVar4;
  long lVar5;
  undefined4 local_e0;
  undefined local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  void *local_c8;
  undefined4 local_c0;
  ulong local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined2 local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)this);
  this[0x2d] = (VoiceChatManager)param_2;
  AVar3 = 1;
  if (this[0x31] == (VoiceChatManager)0x0) {
    AVar3 = 2;
  }
  uVar2 = AudioDeviceManager::createAudioDevice(AVar3,true,true,0x5622);
  *(undefined8 *)(this + 0x50) = uVar2;
  this_00 = (OpusVoiceCodec *)operator_new(0x10);
                    /* try { // try from 00b14dcc to 00b14dcf has its CatchHandler @ 00b14f34 */
  OpusVoiceCodec::OpusVoiceCodec(this_00);
  *(OpusVoiceCodec **)(this + 0x4d0) = this_00;
  OpusVoiceCodec::initEncoder();
  lVar4 = *(long *)(this + 0x1490);
  lVar5 = *(long *)(this + 0x1498);
  if (lVar4 != lVar5) {
    do {
      if (*(long *)(lVar4 + 0x50) == 0) {
        this_01 = (VoiceChatStreamedAudioData *)operator_new(0x508);
                    /* try { // try from 00b14e3c to 00b14e3f has its CatchHandler @ 00b14f58 */
        VoiceChatStreamedAudioData::VoiceChatStreamedAudioData(this_01);
        *(VoiceChatStreamedAudioData **)(lVar4 + 0x50) = this_01;
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = (void *)0x0;
        local_e0 = 2;
        local_dc = 1;
        local_d8 = 0;
        local_a0 = 0;
        local_98 = 0;
        local_90 = 0;
        local_d0 = 0;
        local_c8 = (void *)0x0;
        local_c0 = 0;
                    /* try { // try from 00b14e70 to 00b14e7b has its CatchHandler @ 00b14f40 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((char *)&local_b8);
        local_94 = 0x3f800000;
        local_e0 = 2;
        local_d8 = 0x100005622;
                    /* try { // try from 00b14e88 to 00b14eaf has its CatchHandler @ 00b14f6c */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((char *)&local_b8);
        local_90 = *(undefined8 *)(lVar4 + 0x50);
        local_88 = (**(code **)(**(long **)(this + 0x50) + 0x30))(*(long **)(this + 0x50),&local_e0)
        ;
        *(undefined8 *)(lVar4 + 0x58) = local_88;
        local_80 = 0;
                    /* try { // try from 00b14ec8 to 00b14ed3 has its CatchHandler @ 00b14f54 */
        uVar2 = (**(code **)(**(long **)(this + 0x50) + 0x38))(*(long **)(this + 0x50),&local_88);
        *(undefined8 *)(lVar4 + 0x60) = uVar2;
        if (local_c8 != (void *)0x0) {
          operator_delete__(local_c8);
        }
        if ((local_b8 & 1) != 0) {
          operator_delete(local_a8);
        }
      }
      lVar4 = lVar4 + 0x70;
    } while (lVar4 != lVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


