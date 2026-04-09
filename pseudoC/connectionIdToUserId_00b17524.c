// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: connectionIdToUserId
// Entry Point: 00b17524
// Size: 56 bytes
// Signature: undefined __thiscall connectionIdToUserId(VoiceChatManager * this, uint param_1)


/* VoiceChatManager::connectionIdToUserId(unsigned int) */

undefined __thiscall VoiceChatManager::connectionIdToUserId(VoiceChatManager *this,uint param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x1490);
  while( true ) {
    if (lVar1 == *(long *)(this + 0x1498)) {
      return 0;
    }
    if (*(uint *)(lVar1 + 0x4c) == param_1) break;
    lVar1 = lVar1 + 0x70;
  }
  return *(undefined *)(lVar1 + 0x6c);
}


