// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getConnectionStatus
// Entry Point: 00b15ecc
// Size: 248 bytes
// Signature: undefined __thiscall getConnectionStatus(VoiceChatManager * this, char * param_1)


/* VoiceChatManager::getConnectionStatus(char const*) */

VoiceChatManager __thiscall
VoiceChatManager::getConnectionStatus(VoiceChatManager *this,char *param_1)

{
  size_t sVar1;
  byte bVar2;
  VoiceChatManager VVar3;
  int iVar4;
  size_t sVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  sVar5 = strlen(param_1);
  sVar1 = (ulong)((byte)*this >> 1);
  if (((byte)*this & 1) != 0) {
    sVar1 = *(size_t *)(this + 8);
  }
                    /* try { // try from 00b15f0c to 00b15f1f has its CatchHandler @ 00b15fc4 */
  if ((sVar5 == sVar1) &&
     (iVar4 = std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              compare((ulong)this,0,(char *)0xffffffffffffffff,(ulong)param_1), iVar4 == 0)) {
    if (this[0x30] == (VoiceChatManager)0x0) {
      VVar3 = this[0x2f];
    }
    else {
LAB_00b15fa8:
      VVar3 = (VoiceChatManager)0x2;
    }
  }
  else {
    pbVar7 = *(byte **)(this + 0x1498);
    for (pbVar6 = *(byte **)(this + 0x1490); pbVar6 != pbVar7; pbVar6 = pbVar6 + 0x70) {
      sVar5 = strlen(param_1);
      sVar1 = (ulong)(*pbVar6 >> 1);
      if ((*pbVar6 & 1) != 0) {
        sVar1 = *(size_t *)(pbVar6 + 8);
      }
                    /* try { // try from 00b15f64 to 00b15f77 has its CatchHandler @ 00b15fc8 */
      if ((sVar5 == sVar1) &&
         (iVar4 = std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  compare((ulong)pbVar6,0,(char *)0xffffffffffffffff,(ulong)param_1), iVar4 == 0)) {
        if (pbVar6[0x6e] == 0) {
          if (*(long *)(pbVar6 + 0x50) == 0) {
            return (VoiceChatManager)0x0;
          }
          bVar2 = VoiceChatStreamedAudioData::isActive();
          return (VoiceChatManager)(bVar2 & 1);
        }
        goto LAB_00b15fa8;
      }
    }
    VVar3 = (VoiceChatManager)0x0;
  }
  return VVar3;
}


