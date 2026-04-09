// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ChannelPut2
// Entry Point: 00cdbad8
// Size: 572 bytes
// Signature: undefined __thiscall ChannelPut2(AuthenticatedDecryptionFilter * this, basic_string * param_1, uchar * param_2, ulong param_3, int param_4, bool param_5)


/* CryptoPP::AuthenticatedDecryptionFilter::ChannelPut2(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned char const*,
   unsigned long, int, bool) */

undefined8 __thiscall
CryptoPP::AuthenticatedDecryptionFilter::ChannelPut2
          (AuthenticatedDecryptionFilter *this,basic_string *param_1,uchar *param_2,ulong param_3,
          int param_4,bool param_5)

{
  long lVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  InvalidChannelName *this_00;
  undefined4 *__s2;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  ulong uVar10;
  basic_string abStack_70 [6];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  bVar3 = *(byte *)param_1;
  uVar7 = (ulong)(bVar3 >> 1);
  __n = uVar7;
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_1 + 2);
  }
  if (__n == 0) {
    if ((*(long *)(this + 0x40) != 0) && (this[0xd8] != (AuthenticatedDecryptionFilter)0x0)) {
      uVar7 = *(ulong *)(this + 200);
      if (uVar7 < 2) {
        while (uVar7 = *(ulong *)(this + 0x110), uVar7 != 0) {
          lVar1 = *(long *)(this + 0xf8) + *(long *)(this + 0xf0);
          uVar10 = lVar1 - *(long *)(this + 0x118);
          uVar8 = uVar7;
          if (uVar10 <= uVar7) {
            uVar8 = uVar10;
          }
          lVar6 = *(long *)(this + 0x118) + uVar8;
          *(ulong *)(this + 0x110) = uVar7 - uVar8;
          *(long *)(this + 0x118) = lVar6;
          if (uVar7 - uVar8 == 0 || lVar6 == lVar1) {
            *(long *)(this + 0x118) = *(long *)(this + 0xf8);
          }
          (**(code **)(*(long *)(this + 0x90) + 0x1e0))(this + 0x90);
        }
      }
      else {
        uVar8 = *(ulong *)(this + 0x110);
        while (uVar7 <= uVar8) {
          uVar7 = *(ulong *)(this + 0x100);
          if (uVar8 < uVar7) {
            lVar6 = 0;
          }
          else {
            lVar6 = *(long *)(this + 0x118);
            lVar1 = *(long *)(this + 0xf8);
            if (lVar6 + uVar7 != *(long *)(this + 0xf8) + *(long *)(this + 0xf0)) {
              lVar1 = lVar6 + uVar7;
            }
            *(ulong *)(this + 0x110) = uVar8 - uVar7;
            *(long *)(this + 0x118) = lVar1;
          }
          (**(code **)(*(long *)(this + 0x90) + 0x1e0))(this + 0x90,lVar6);
          uVar8 = *(ulong *)(this + 0x110);
          uVar7 = *(ulong *)(this + 200);
        }
      }
    }
  }
  else {
    sVar2 = (ulong)(AAD_CHANNEL >> 1);
    if ((AAD_CHANNEL & 1) != 0) {
      sVar2 = DAT_0211f5d0;
    }
    if (__n != sVar2) {
LAB_00cdbcc4:
      this_00 = (InvalidChannelName *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cdbcd0 to 00cdbcdf has its CatchHandler @ 00cdbd38 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 abStack_70,"AuthenticatedDecryptionFilter");
                    /* try { // try from 00cdbce4 to 00cdbd0f has its CatchHandler @ 00cdbd14 */
      BufferedTransformation::InvalidChannelName::InvalidChannelName(this_00,abStack_70,param_1);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,&BufferedTransformation::InvalidChannelName::typeinfo,
                  Exception::~Exception);
    }
    __s2 = DAT_0211f5d8;
    if ((AAD_CHANNEL & 1) == 0) {
      __s2 = &DAT_0211f5c9;
    }
    if ((bVar3 & 1) == 0) {
      pcVar9 = (char *)((long)param_1 + 1);
      do {
        if (*pcVar9 != *(char *)__s2) goto LAB_00cdbcc4;
        uVar7 = uVar7 - 1;
        pcVar9 = pcVar9 + 1;
        __s2 = (undefined4 *)((long)__s2 + 1);
      } while (uVar7 != 0);
    }
    else {
      iVar5 = memcmp(*(void **)(param_1 + 4),__s2,__n);
      if (iVar5 != 0) goto LAB_00cdbcc4;
    }
    this = this + 0x90;
    param_4 = 0;
  }
  FilterWithBufferedInput::PutMaybeModifiable
            ((FilterWithBufferedInput *)this,param_2,param_3,param_4,param_5,false);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


