// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: notifyVoiceChatPacketLost
// Entry Point: 00b17b94
// Size: 212 bytes
// Signature: undefined __thiscall notifyVoiceChatPacketLost(VoiceChatManager * this, uint param_1)


/* VoiceChatManager::notifyVoiceChatPacketLost(unsigned int) */

void __thiscall VoiceChatManager::notifyVoiceChatPacketLost(VoiceChatManager *this,uint param_1)

{
  void *__dest;
  size_t __n;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar1 = *(long *)(this + 0x1500);
  uVar2 = (*(long *)(this + 0x1508) - lVar1 >> 3) * -0x5555555555555555;
  if (0 < (int)uVar2) {
    uVar2 = uVar2 & 0xffffffff;
    while( true ) {
      uVar3 = (ulong)((int)uVar2 - 1);
      if (*(uint *)(lVar1 + uVar3 * 0x18 + 4) == param_1) {
        lVar4 = uVar3 * 0x18;
        FUN_00b165dc(this + 0x1518,lVar1 + lVar4);
        __dest = (void *)(*(long *)(this + 0x1500) + lVar4);
        __n = *(long *)(this + 0x1508) - (long)(void *)((long)__dest + 0x18);
        if (__n != 0) {
          memmove(__dest,(void *)((long)__dest + 0x18),__n);
        }
        *(size_t *)(this + 0x1508) = (long)__dest + __n;
      }
      if (uVar2 < 2) break;
      lVar1 = *(long *)(this + 0x1500);
      uVar2 = uVar2 - 1;
    }
  }
  return;
}


