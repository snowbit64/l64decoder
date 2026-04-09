// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ChannelCreatePutSpace
// Entry Point: 00cdb978
// Size: 296 bytes
// Signature: undefined __thiscall ChannelCreatePutSpace(AuthenticatedDecryptionFilter * this, basic_string * param_1, ulong * param_2)


/* CryptoPP::AuthenticatedDecryptionFilter::ChannelCreatePutSpace(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long&) */

undefined8 __thiscall
CryptoPP::AuthenticatedDecryptionFilter::ChannelCreatePutSpace
          (AuthenticatedDecryptionFilter *this,basic_string *param_1,ulong *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  InvalidChannelName *this_00;
  undefined4 *__s2;
  char *pcVar5;
  ulong uVar6;
  basic_string abStack_50 [6];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)param_1;
  uVar6 = (ulong)(bVar2 >> 1);
  __n = uVar6;
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 2);
  }
  if (__n != 0) {
    sVar1 = (ulong)(AAD_CHANNEL >> 1);
    if ((AAD_CHANNEL & 1) != 0) {
      sVar1 = DAT_0211f5d0;
    }
    if (__n != sVar1) {
LAB_00cdba50:
      this_00 = (InvalidChannelName *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cdba5c to 00cdba6b has its CatchHandler @ 00cdbac4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 abStack_50,"AuthenticatedDecryptionFilter");
                    /* try { // try from 00cdba70 to 00cdba9b has its CatchHandler @ 00cdbaa0 */
      BufferedTransformation::InvalidChannelName::InvalidChannelName(this_00,abStack_50,param_1);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,&BufferedTransformation::InvalidChannelName::typeinfo,
                  Exception::~Exception);
    }
    __s2 = DAT_0211f5d8;
    if ((AAD_CHANNEL & 1) == 0) {
      __s2 = &DAT_0211f5c9;
    }
    if ((bVar2 & 1) == 0) {
      pcVar5 = (char *)((long)param_1 + 1);
      do {
        if (*pcVar5 != *(char *)__s2) goto LAB_00cdba50;
        uVar6 = uVar6 - 1;
        pcVar5 = pcVar5 + 1;
        __s2 = (undefined4 *)((long)__s2 + 1);
      } while (uVar6 != 0);
    }
    else {
      uVar4 = memcmp(*(void **)(param_1 + 4),__s2,__n);
      this = (AuthenticatedDecryptionFilter *)(ulong)uVar4;
      if (uVar4 != 0) goto LAB_00cdba50;
    }
  }
  *param_2 = 0;
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return 0;
}


