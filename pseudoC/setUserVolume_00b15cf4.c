// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setUserVolume
// Entry Point: 00b15cf4
// Size: 224 bytes
// Signature: undefined __thiscall setUserVolume(VoiceChatManager * this, char * param_1, float param_2)


/* VoiceChatManager::setUserVolume(char const*, float) */

void __thiscall VoiceChatManager::setUserVolume(VoiceChatManager *this,char *param_1,float param_2)

{
  size_t sVar1;
  int iVar2;
  size_t sVar3;
  byte *pbVar4;
  byte *pbVar5;
  float fVar6;
  
  pbVar4 = *(byte **)(this + 0x1490);
  pbVar5 = *(byte **)(this + 0x1498);
  while( true ) {
    if (pbVar4 == pbVar5) {
      return;
    }
    sVar3 = strlen(param_1);
    sVar1 = (ulong)(*pbVar4 >> 1);
    if ((*pbVar4 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar4 + 8);
    }
                    /* try { // try from 00b15d5c to 00b15d6f has its CatchHandler @ 00b15dd4 */
    if ((sVar3 == sVar1) &&
       (iVar2 = std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                compare((ulong)pbVar4,0,(char *)0xffffffffffffffff,(ulong)param_1), iVar2 == 0))
    break;
    pbVar4 = pbVar4 + 0x70;
  }
  if (*(float *)(pbVar4 + 0x68) == param_2) {
    return;
  }
  *(float *)(pbVar4 + 0x68) = param_2;
  if (*(long **)(pbVar4 + 0x60) == (long *)0x0) {
    return;
  }
  fVar6 = *(float *)(this + 0x20) * param_2;
  if (pbVar4[0x6d] != 0) {
    fVar6 = 0.0;
  }
                    /* WARNING: Could not recover jumptable at 0x00b15dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(pbVar4 + 0x60) + 0x50))(fVar6);
  return;
}


