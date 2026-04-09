// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: packUserId
// Entry Point: 00b1755c
// Size: 16 bytes
// Signature: undefined __thiscall packUserId(VoiceChatManager * this, uchar param_1, bool param_2)


/* VoiceChatManager::packUserId(unsigned char, bool) */

uint __thiscall VoiceChatManager::packUserId(VoiceChatManager *this,uchar param_1,bool param_2)

{
  uint uVar1;
  
  uVar1 = param_1 | 0xffffff80;
  if (!param_2) {
    uVar1 = (uint)param_1;
  }
  return uVar1;
}


