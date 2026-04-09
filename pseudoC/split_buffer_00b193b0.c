// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 00b193b0
// Size: 136 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<VoiceChatManager::VoiceConnection,std::__ndk1::allocator<VoiceChatManager::VoiceConnection>&> * this)


/* std::__ndk1::__split_buffer<VoiceChatManager::VoiceConnection,
   std::__ndk1::allocator<VoiceChatManager::VoiceConnection>&>::~__split_buffer() */

void __thiscall
std::__ndk1::
__split_buffer<VoiceChatManager::VoiceConnection,std::__ndk1::allocator<VoiceChatManager::VoiceConnection>&>
::~__split_buffer(__split_buffer<VoiceChatManager::VoiceConnection,std::__ndk1::allocator<VoiceChatManager::VoiceConnection>&>
                  *this)

{
  long lVar1;
  __tree_node *p_Var2;
  long lVar3;
  
  lVar1 = *(long *)(this + 8);
  lVar3 = *(long *)(this + 0x10);
  while (lVar3 != lVar1) {
    p_Var2 = *(__tree_node **)(lVar3 + -0x38);
    *(byte **)(this + 0x10) = (byte *)(lVar3 + -0x70);
    __tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>::
    destroy((__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
             *)(lVar3 + -0x40),p_Var2);
    if ((*(byte *)(lVar3 + -0x58) & 1) != 0) {
      operator_delete(*(void **)(lVar3 + -0x48));
    }
    if ((*(byte *)(lVar3 + -0x70) & 1) != 0) {
      operator_delete(*(void **)(lVar3 + -0x60));
    }
    lVar3 = *(long *)(this + 0x10);
  }
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}


