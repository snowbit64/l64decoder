// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ChannelPut2
// Entry Point: 00cdb2f4
// Size: 384 bytes
// Signature: undefined __thiscall ChannelPut2(AuthenticatedEncryptionFilter * this, basic_string * param_1, uchar * param_2, ulong param_3, int param_4, bool param_5)


/* CryptoPP::AuthenticatedEncryptionFilter::ChannelPut2(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned char const*,
   unsigned long, int, bool) */

undefined8 __thiscall
CryptoPP::AuthenticatedEncryptionFilter::ChannelPut2
          (AuthenticatedEncryptionFilter *this,basic_string *param_1,uchar *param_2,ulong param_3,
          int param_4,bool param_5)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  InvalidChannelName *this_00;
  undefined4 *__s2;
  ulong uVar6;
  char *pcVar7;
  basic_string abStack_60 [6];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)param_1;
  uVar6 = (ulong)(bVar2 >> 1);
  __n = uVar6;
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 2);
  }
  if (__n == 0) {
    FilterWithBufferedInput::PutMaybeModifiable
              ((FilterWithBufferedInput *)this,param_2,param_3,param_4,param_5,false);
    if (*(long *)(lVar3 + 0x28) != local_48) goto LAB_00cdb470;
    uVar5 = 0;
  }
  else {
    sVar1 = (ulong)(AAD_CHANNEL >> 1);
    if ((AAD_CHANNEL & 1) != 0) {
      sVar1 = DAT_0211f5d0;
    }
    if (__n != sVar1) {
LAB_00cdb424:
      this_00 = (InvalidChannelName *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cdb430 to 00cdb43f has its CatchHandler @ 00cdb498 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 abStack_60,"AuthenticatedEncryptionFilter");
                    /* try { // try from 00cdb444 to 00cdb46f has its CatchHandler @ 00cdb474 */
      BufferedTransformation::InvalidChannelName::InvalidChannelName(this_00,abStack_60,param_1);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,&BufferedTransformation::InvalidChannelName::typeinfo,
                  Exception::~Exception);
    }
    __s2 = DAT_0211f5d8;
    if ((AAD_CHANNEL & 1) == 0) {
      __s2 = &DAT_0211f5c9;
    }
    if ((bVar2 & 1) == 0) {
      pcVar7 = (char *)((long)param_1 + 1);
      do {
        if (*pcVar7 != *(char *)__s2) goto LAB_00cdb424;
        uVar6 = uVar6 - 1;
        pcVar7 = pcVar7 + 1;
        __s2 = (undefined4 *)((long)__s2 + 1);
      } while (uVar6 != 0);
    }
    else {
      iVar4 = memcmp(*(void **)(param_1 + 4),__s2,__n);
      if (iVar4 != 0) goto LAB_00cdb424;
    }
    uVar5 = HashFilter::Put2((HashFilter *)(this + 0xd8),param_2,param_3,0,param_5);
    if (*(long *)(lVar3 + 0x28) != local_48) {
LAB_00cdb470:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return uVar5;
}


