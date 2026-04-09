// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unpackUserId
// Entry Point: 00b16d14
// Size: 36 bytes
// Signature: undefined __thiscall unpackUserId(VoiceChatManager * this, uchar param_1, uchar * param_2, bool * param_3)


/* VoiceChatManager::unpackUserId(unsigned char, unsigned char&, bool&) */

void __thiscall
VoiceChatManager::unpackUserId(VoiceChatManager *this,uchar param_1,uchar *param_2,bool *param_3)

{
  if (-1 < (char)param_1) {
    *param_3 = false;
    *param_2 = param_1;
    return;
  }
  *param_3 = true;
  *param_2 = param_1 & 0x7f;
  return;
}


