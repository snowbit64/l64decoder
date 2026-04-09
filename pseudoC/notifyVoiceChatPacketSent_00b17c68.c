// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: notifyVoiceChatPacketSent
// Entry Point: 00b17c68
// Size: 260 bytes
// Signature: undefined __thiscall notifyVoiceChatPacketSent(VoiceChatManager * this, uint param_1)


/* VoiceChatManager::notifyVoiceChatPacketSent(unsigned int) */

void __thiscall VoiceChatManager::notifyVoiceChatPacketSent(VoiceChatManager *this,uint param_1)

{
  size_t __n;
  long lVar1;
  long lVar2;
  ulong uVar3;
  byte *pbVar4;
  void *__dest;
  ulong uVar5;
  
  lVar1 = *(long *)(this + 0x1508);
  lVar2 = *(long *)(this + 0x1500);
  uVar3 = (lVar1 - lVar2 >> 3) * -0x5555555555555555;
  if (0 < (int)uVar3) {
    uVar3 = uVar3 & 0xffffffff;
    while( true ) {
      uVar5 = (ulong)((int)uVar3 - 1);
      if (*(uint *)(lVar2 + uVar5 * 0x18 + 4) == param_1) {
        if ((*(uint *)(lVar2 + uVar5 * 0x18) < 2) &&
           (pbVar4 = *(byte **)(lVar2 + uVar5 * 0x18 + 0x10), pbVar4 != (byte *)0x0)) {
          std::__ndk1::
          __tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
          ::destroy((__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                     *)(pbVar4 + 0x30),*(__tree_node **)(pbVar4 + 0x38));
          if ((pbVar4[0x18] & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + 0x28));
          }
          if ((*pbVar4 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + 0x10));
          }
          operator_delete(pbVar4);
          lVar2 = *(long *)(this + 0x1500);
          lVar1 = *(long *)(this + 0x1508);
        }
        __dest = (void *)(lVar2 + uVar5 * 0x18);
        __n = lVar1 - (long)(void *)((long)__dest + 0x18);
        if (__n != 0) {
          memmove(__dest,(void *)((long)__dest + 0x18),__n);
        }
        lVar1 = (long)__dest + __n;
        *(long *)(this + 0x1508) = lVar1;
      }
      if (uVar3 < 2) break;
      lVar2 = *(long *)(this + 0x1500);
      uVar3 = uVar3 - 1;
    }
  }
  return;
}


