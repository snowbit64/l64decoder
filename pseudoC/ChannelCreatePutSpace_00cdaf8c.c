// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ChannelCreatePutSpace
// Entry Point: 00cdaf8c
// Size: 336 bytes
// Signature: undefined __thiscall ChannelCreatePutSpace(AuthenticatedEncryptionFilter * this, basic_string * param_1, ulong * param_2)


/* CryptoPP::AuthenticatedEncryptionFilter::ChannelCreatePutSpace(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long&) */

undefined8 __thiscall
CryptoPP::AuthenticatedEncryptionFilter::ChannelCreatePutSpace
          (AuthenticatedEncryptionFilter *this,basic_string *param_1,ulong *param_2)

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
  if (__n == 0) {
    *param_2 = 0;
    if (*(long *)(lVar3 + 0x28) != local_38) goto LAB_00cdb0d8;
    uVar5 = 0;
  }
  else {
    sVar1 = (ulong)(AAD_CHANNEL >> 1);
    if ((AAD_CHANNEL & 1) != 0) {
      sVar1 = DAT_0211f5d0;
    }
    if (__n != sVar1) {
LAB_00cdb08c:
      this_00 = (InvalidChannelName *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cdb098 to 00cdb0a7 has its CatchHandler @ 00cdb100 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 abStack_50,"AuthenticatedEncryptionFilter");
                    /* try { // try from 00cdb0ac to 00cdb0d7 has its CatchHandler @ 00cdb0dc */
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
      pcVar7 = (char *)((long)param_1 + 1);
      do {
        if (*pcVar7 != *(char *)__s2) goto LAB_00cdb08c;
        uVar6 = uVar6 - 1;
        pcVar7 = pcVar7 + 1;
        __s2 = (undefined4 *)((long)__s2 + 1);
      } while (uVar6 != 0);
    }
    else {
      iVar4 = memcmp(*(void **)(param_1 + 4),__s2,__n);
      if (iVar4 != 0) goto LAB_00cdb08c;
    }
    uVar5 = (**(code **)(**(long **)(this + 0x130) + 0x30))(*(long **)(this + 0x130),param_2);
    if (*(long *)(lVar3 + 0x28) != local_38) {
LAB_00cdb0d8:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return uVar5;
}


