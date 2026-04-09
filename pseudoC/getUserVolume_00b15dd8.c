// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getUserVolume
// Entry Point: 00b15dd8
// Size: 152 bytes
// Signature: undefined __thiscall getUserVolume(VoiceChatManager * this, char * param_1)


/* VoiceChatManager::getUserVolume(char const*) const */

undefined4 __thiscall VoiceChatManager::getUserVolume(VoiceChatManager *this,char *param_1)

{
  size_t sVar1;
  int iVar2;
  size_t sVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  pbVar4 = *(byte **)(this + 0x1490);
  pbVar5 = *(byte **)(this + 0x1498);
  while( true ) {
    if (pbVar4 == pbVar5) {
      return 0;
    }
    sVar3 = strlen(param_1);
    sVar1 = (ulong)(*pbVar4 >> 1);
    if ((*pbVar4 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar4 + 8);
    }
                    /* try { // try from 00b15e3c to 00b15e4f has its CatchHandler @ 00b15e70 */
    if ((sVar3 == sVar1) &&
       (iVar2 = std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                compare((ulong)pbVar4,0,(char *)0xffffffffffffffff,(ulong)param_1), iVar2 == 0))
    break;
    pbVar4 = pbVar4 + 0x70;
  }
  return *(undefined4 *)(pbVar4 + 0x68);
}


