// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createConnection
// Entry Point: 00b162bc
// Size: 688 bytes
// Signature: undefined __thiscall createConnection(VoiceChatManager * this, uint param_1, char * param_2, char * param_3, PLATFORM_ID param_4, uchar param_5, bool param_6)


/* VoiceChatManager::createConnection(unsigned int, char const*, char const*,
   SysUtilBase::PLATFORM_ID, unsigned char, bool) */

void __thiscall
VoiceChatManager::createConnection
          (VoiceChatManager *this,uint param_1,char *param_2,char *param_3,PLATFORM_ID param_4,
          uchar param_5,bool param_6)

{
  long lVar1;
  int iVar2;
  VoiceChatStreamedAudioData *this_00;
  VoiceConnection *pVVar3;
  undefined4 local_148;
  undefined local_144;
  undefined8 local_140;
  undefined4 local_138;
  void *local_130;
  undefined4 local_128;
  ulong local_120;
  undefined8 uStack_118;
  void *local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 local_fc;
  VoiceChatStreamedAudioData *local_f8;
  ulong local_f0;
  undefined8 uStack_e8;
  void *local_e0;
  ulong local_d8;
  undefined8 local_d0;
  void *pvStack_c8;
  __tree_node **local_c0;
  __tree_node *local_b8;
  undefined8 uStack_b0;
  PLATFORM_ID local_a8;
  uint uStack_a4;
  VoiceChatStreamedAudioData *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  uchar local_84;
  undefined local_83;
  undefined local_82;
  undefined8 local_78;
  undefined2 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_c0 = &local_b8;
  local_b8 = (__tree_node *)0x0;
  uStack_b0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_e0 = (void *)0x0;
  pvStack_c8 = (void *)0x0;
  local_d0 = 0;
                    /* try { // try from 00b16320 to 00b16393 has its CatchHandler @ 00b165c8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&local_f0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&local_d8);
  local_88 = 0x3f800000;
  local_a8 = param_4;
  uStack_a4 = param_1;
  local_84 = param_5;
  if (((UserBlockManager::getInstance()::instance & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&UserBlockManager::getInstance()::instance), iVar2 != 0)) {
                    /* try { // try from 00b16530 to 00b1653b has its CatchHandler @ 00b1656c */
    UserBlockManager::UserBlockManager
              ((UserBlockManager *)UserBlockManager::getInstance()::instance);
    __cxa_atexit(UserBlockManager::~UserBlockManager,UserBlockManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&UserBlockManager::getInstance()::instance);
  }
  iVar2 = UserBlockManager::getAllowVoiceCommunicationWithUser
                    (UserBlockManager::getInstance()::instance,param_2,(PLATFORM_ID)param_3);
  local_83 = iVar2 != 1;
  local_82 = param_6;
  if (*(long *)(this + 0x50) == 0) {
    local_a0 = (VoiceChatStreamedAudioData *)0x0;
    local_98 = 0;
    local_90 = 0;
  }
  else {
    this_00 = (VoiceChatStreamedAudioData *)operator_new(0x508);
                    /* try { // try from 00b16398 to 00b1639b has its CatchHandler @ 00b165a8 */
    VoiceChatStreamedAudioData::VoiceChatStreamedAudioData(this_00);
    local_120 = 0;
    uStack_118 = 0;
    local_110 = (void *)0x0;
    uStack_108 = 0;
    local_144 = 1;
    local_148 = 2;
    local_140 = 0;
    local_100 = 0;
    local_f8 = (VoiceChatStreamedAudioData *)0x0;
    local_138 = 0;
    local_130 = (void *)0x0;
    local_128 = 0;
    local_a0 = this_00;
                    /* try { // try from 00b163d8 to 00b163e7 has its CatchHandler @ 00b16590 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)&local_120);
    local_148 = 2;
    local_fc = 0x3f800000;
    local_140 = 0x100005622;
                    /* try { // try from 00b16400 to 00b1642b has its CatchHandler @ 00b165b8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)&local_120);
    local_f8 = local_a0;
    local_98 = (**(code **)(**(long **)(this + 0x50) + 0x30))(*(long **)(this + 0x50),&local_148);
    local_70 = 0;
                    /* try { // try from 00b16444 to 00b1644f has its CatchHandler @ 00b16580 */
    local_78 = local_98;
    local_90 = (**(code **)(**(long **)(this + 0x50) + 0x38))(*(long **)(this + 0x50),&local_78);
    if (local_130 != (void *)0x0) {
      operator_delete__(local_130);
    }
    if ((local_120 & 1) != 0) {
      operator_delete(local_110);
    }
  }
  pVVar3 = *(VoiceConnection **)(this + 0x1498);
  if (pVVar3 == *(VoiceConnection **)(this + 0x14a0)) {
                    /* try { // try from 00b164b8 to 00b164bf has its CatchHandler @ 00b165c8 */
    std::__ndk1::
    vector<VoiceChatManager::VoiceConnection,std::__ndk1::allocator<VoiceChatManager::VoiceConnection>>
    ::__push_back_slow_path<VoiceChatManager::VoiceConnection_const&>
              ((vector<VoiceChatManager::VoiceConnection,std::__ndk1::allocator<VoiceChatManager::VoiceConnection>>
                *)(this + 0x1490),(VoiceConnection *)&local_f0);
  }
  else {
                    /* try { // try from 00b16498 to 00b164a3 has its CatchHandler @ 00b16584 */
    std::__ndk1::allocator<VoiceChatManager::VoiceConnection>::
    construct<VoiceChatManager::VoiceConnection,VoiceChatManager::VoiceConnection_const&>
              ((allocator<VoiceChatManager::VoiceConnection> *)(this + 0x14a0),pVVar3,
               (VoiceConnection *)&local_f0);
    *(VoiceConnection **)(this + 0x1498) = pVVar3 + 0x70;
  }
  std::__ndk1::
  __tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>::
  destroy((__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
           *)&local_c0,local_b8);
  if ((local_d8 & 1) != 0) {
    operator_delete(pvStack_c8);
  }
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


