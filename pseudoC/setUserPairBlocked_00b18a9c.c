// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setUserPairBlocked
// Entry Point: 00b18a9c
// Size: 552 bytes
// Signature: undefined __thiscall setUserPairBlocked(VoiceChatManager * this, char * param_1, char * param_2, bool param_3)


/* VoiceChatManager::setUserPairBlocked(char const*, char const*, bool) */

void __thiscall
VoiceChatManager::setUserPairBlocked
          (VoiceChatManager *this,char *param_1,char *param_2,bool param_3)

{
  byte *pbVar1;
  size_t sVar2;
  byte bVar3;
  int iVar4;
  size_t sVar5;
  long *plVar6;
  long **pplVar7;
  long **this_00;
  byte *pbVar8;
  long **pplVar9;
  byte *pbVar10;
  long **pplVar11;
  
  iVar4 = strcmp(param_2,param_1);
  if (iVar4 == 0) {
    return;
  }
  sVar5 = strlen(param_1);
  sVar2 = (ulong)((byte)*this >> 1);
  if (((byte)*this & 1) != 0) {
    sVar2 = *(size_t *)(this + 8);
  }
                    /* try { // try from 00b18af8 to 00b18b0b has its CatchHandler @ 00b18cc4 */
  if ((sVar5 == sVar2) &&
     (iVar4 = std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              compare((ulong)this,0,(char *)0xffffffffffffffff,(ulong)param_1), iVar4 == 0)) {
    this_00 = (long **)(this + 0x38);
  }
  else {
    pbVar8 = *(byte **)(this + 0x1490);
    pbVar10 = *(byte **)(this + 0x1498);
    while( true ) {
      if (pbVar8 == pbVar10) {
        return;
      }
      sVar5 = strlen(param_1);
      sVar2 = (ulong)(*pbVar8 >> 1);
      if ((*pbVar8 & 1) != 0) {
        sVar2 = *(size_t *)(pbVar8 + 8);
      }
                    /* try { // try from 00b18b50 to 00b18b63 has its CatchHandler @ 00b18ccc */
      if ((sVar5 == sVar2) &&
         (iVar4 = std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  compare((ulong)pbVar8,0,(char *)0xffffffffffffffff,(ulong)param_1), iVar4 == 0))
      break;
      pbVar8 = pbVar8 + 0x70;
    }
    this_00 = (long **)(pbVar8 + 0x30);
  }
  pbVar8 = *(byte **)(this + 0x1498);
  if (*(byte **)(this + 0x1490) == pbVar8) {
    return;
  }
  pplVar9 = this_00 + 1;
  pbVar10 = *(byte **)(this + 0x1490) + 0x6c;
  while( true ) {
    sVar5 = strlen(param_2);
    sVar2 = (ulong)(pbVar10[-0x6c] >> 1);
    if ((pbVar10[-0x6c] & 1) != 0) {
      sVar2 = *(size_t *)(pbVar10 + -100);
    }
                    /* try { // try from 00b18bd4 to 00b18be3 has its CatchHandler @ 00b18cc8 */
    if ((sVar5 == sVar2) &&
       (iVar4 = std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                compare((ulong)(pbVar10 + -0x6c),0,(char *)0xffffffffffffffff,(ulong)param_2),
       iVar4 == 0)) break;
    pbVar1 = pbVar10 + 4;
    pbVar10 = pbVar10 + 0x70;
    if (pbVar1 == pbVar8) {
      return;
    }
  }
  if (param_3) {
    std::__ndk1::
    __tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>::
    __erase_unique<unsigned_char>
              ((__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                *)this_00,pbVar10);
    return;
  }
  pplVar11 = pplVar9;
  if (*pplVar9 != (long *)0x0) {
    pplVar7 = (long **)*pplVar9;
    do {
      pplVar11 = pplVar7;
      if (*pbVar10 < *(byte *)((long)pplVar11 + 0x19)) {
        pplVar7 = (long **)*pplVar11;
        pplVar9 = pplVar11;
      }
      else {
        if (*pbVar10 <= *(byte *)((long)pplVar11 + 0x19)) break;
        pplVar7 = (long **)pplVar11[1];
        pplVar9 = pplVar11 + 1;
      }
    } while (pplVar7 != (long **)0x0);
  }
  if (*pplVar9 == (long *)0x0) {
    plVar6 = (long *)operator_new(0x20);
    bVar3 = *pbVar10;
    *plVar6 = 0;
    plVar6[1] = 0;
    plVar6[2] = (long)pplVar11;
    *(byte *)((long)plVar6 + 0x19) = bVar3;
    *pplVar9 = plVar6;
    if ((long *)**this_00 != (long *)0x0) {
      *this_00 = (long *)**this_00;
      plVar6 = *pplVar9;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)this_00[1],(__tree_node_base *)plVar6);
    this_00[2] = (long *)((long)this_00[2] + 1);
  }
  return;
}


