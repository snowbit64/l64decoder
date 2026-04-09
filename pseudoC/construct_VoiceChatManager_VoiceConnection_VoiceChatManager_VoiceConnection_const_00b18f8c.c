// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: construct<VoiceChatManager::VoiceConnection,VoiceChatManager::VoiceConnection_const&>
// Entry Point: 00b18f8c
// Size: 136 bytes
// Signature: void __thiscall construct<VoiceChatManager::VoiceConnection,VoiceChatManager::VoiceConnection_const&>(allocator<VoiceChatManager::VoiceConnection> * this, VoiceConnection * param_1, VoiceConnection * param_2)


/* void 
   std::__ndk1::allocator<VoiceChatManager::VoiceConnection>::construct<VoiceChatManager::VoiceConnection,
   VoiceChatManager::VoiceConnection const&>(VoiceChatManager::VoiceConnection*,
   VoiceChatManager::VoiceConnection const&) */

void __thiscall
std::__ndk1::allocator<VoiceChatManager::VoiceConnection>::
construct<VoiceChatManager::VoiceConnection,VoiceChatManager::VoiceConnection_const&>
          (allocator<VoiceChatManager::VoiceConnection> *this,VoiceConnection *param_1,
          VoiceConnection *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)param_1);
                    /* try { // try from 00b18fbc to 00b18fc3 has its CatchHandler @ 00b19050 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(VoiceConnection **)(param_1 + 0x30) = param_1 + 0x38;
  *(undefined8 *)(param_1 + 0x40) = 0;
                    /* try { // try from 00b18fe0 to 00b18fe7 has its CatchHandler @ 00b19014 */
  set<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>::
  insert<std::__ndk1::__tree_const_iterator<unsigned_char,std::__ndk1::__tree_node<unsigned_char,void*>*,long>>
            ((set<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
              *)(param_1 + 0x30),(__tree_const_iterator)*(undefined8 *)(param_2 + 0x30),
             (int)param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x67) = *(undefined8 *)(param_2 + 0x67);
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  return;
}


