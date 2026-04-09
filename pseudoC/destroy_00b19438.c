// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00b19438
// Size: 64 bytes
// Signature: undefined __thiscall destroy(__tree<VoiceChatManager::AudioData*,std::__ndk1::less<VoiceChatManager::AudioData*>,std::__ndk1::allocator<VoiceChatManager::AudioData*>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<VoiceChatManager::AudioData*,
   std::__ndk1::less<VoiceChatManager::AudioData*>,
   std::__ndk1::allocator<VoiceChatManager::AudioData*>
   >::destroy(std::__ndk1::__tree_node<VoiceChatManager::AudioData*, void*>*) */

void __thiscall
std::__ndk1::
__tree<VoiceChatManager::AudioData*,std::__ndk1::less<VoiceChatManager::AudioData*>,std::__ndk1::allocator<VoiceChatManager::AudioData*>>
::destroy(__tree<VoiceChatManager::AudioData*,std::__ndk1::less<VoiceChatManager::AudioData*>,std::__ndk1::allocator<VoiceChatManager::AudioData*>>
          *this,__tree_node *param_1)

{
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    operator_delete(param_1);
    return;
  }
  return;
}


