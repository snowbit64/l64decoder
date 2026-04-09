// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VoiceConnection
// Entry Point: 00b17d6c
// Size: 80 bytes
// Signature: undefined __thiscall ~VoiceConnection(VoiceConnection * this)


/* VoiceChatManager::VoiceConnection::~VoiceConnection() */

void __thiscall VoiceChatManager::VoiceConnection::~VoiceConnection(VoiceConnection *this)

{
  std::__ndk1::
  __tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>::
  destroy((__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
           *)(this + 0x30),*(__tree_node **)(this + 0x38));
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  if (((byte)*this & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


