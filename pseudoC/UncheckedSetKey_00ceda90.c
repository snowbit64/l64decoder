// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: UncheckedSetKey
// Entry Point: 00ceda90
// Size: 652 bytes
// Signature: undefined __cdecl UncheckedSetKey(uchar * param_1, uint param_2, NameValuePairs * param_3)


/* CryptoPP::HMAC_Base::UncheckedSetKey(unsigned char const*, unsigned int, CryptoPP::NameValuePairs
   const&) */

void CryptoPP::HMAC_Base::UncheckedSetKey(uchar *param_1,uint param_2,NameValuePairs *param_3)

{
  uint uVar1;
  size_t __n;
  void *__src;
  byte bVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  void *__dest;
  ulong uVar10;
  InvalidArgument *this;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  basic_string abStack_80 [6];
  long local_68;
  
  lVar3 = tpidr_el0;
  uVar11 = (ulong)param_3 & 0xffffffff;
  uVar7 = (uint)param_3;
  local_68 = *(long *)(lVar3 + 0x28);
  (**(code **)(*(long *)param_1 + 0x80))();
  plVar8 = (long *)(**(code **)(*(long *)param_1 + 0xa8))(param_1);
  uVar4 = (**(code **)(*plVar8 + 0x50))();
  if (uVar4 == 0) {
    this = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cedcdc to 00cedceb has its CatchHandler @ 00cedd40 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               abStack_80,"HMAC: can only be used with a block-based hash function");
                    /* try { // try from 00cedcf0 to 00cedd17 has its CatchHandler @ 00cedd1c */
    InvalidArgument::InvalidArgument(this,abStack_80);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,&InvalidArgument::typeinfo,Exception::~Exception);
  }
  plVar9 = (long *)(**(code **)(*(long *)param_1 + 0xa8))(param_1);
  iVar5 = (**(code **)(*plVar9 + 0x50))();
  plVar9 = (long *)(**(code **)(*(long *)param_1 + 0xa8))(param_1);
  iVar6 = (**(code **)(*plVar9 + 0x48))();
  uVar10 = *(ulong *)(param_1 + 0x20);
  __src = *(void **)(param_1 + 0x28);
  uVar1 = iVar6 + iVar5 * 2;
  uVar13 = (ulong)uVar1;
  if (uVar10 == uVar13) {
    *(ulong *)(param_1 + 0x20) = uVar13;
    *(void **)(param_1 + 0x28) = __src;
    *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
  }
  else {
    if (uVar1 == 0) {
      __dest = (void *)0x0;
    }
    else {
      __dest = (void *)UnalignedAllocate(uVar13);
      if ((__src != (void *)0x0) && (__dest != (void *)0x0)) {
        __n = uVar13;
        if (uVar10 <= uVar13) {
          __n = uVar10;
        }
        memcpy(__dest,__src,__n);
      }
    }
    for (; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined *)((long)__src + (uVar10 - 1)) = 0;
    }
    UnalignedDeallocate(__src);
    *(ulong *)(param_1 + 0x20) = uVar13;
    *(void **)(param_1 + 0x28) = __dest;
    *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
    __src = __dest;
  }
  if (uVar4 < uVar7) {
    plVar9 = (long *)(**(code **)(*(long *)param_1 + 0xa8))(param_1);
    (**(code **)(*plVar9 + 0x68))
              (plVar9,*(undefined8 *)(param_1 + 0x28),(void *)(ulong)param_2,uVar11);
    uVar7 = (**(code **)(*plVar8 + 0x48))(plVar8);
    uVar11 = (ulong)uVar7;
  }
  else {
    memcpy(__src,(void *)(ulong)param_2,uVar11);
  }
  memset((void *)(*(long *)(param_1 + 0x28) + uVar11),0,(ulong)(uVar4 - uVar7));
  uVar11 = 0;
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  do {
    lVar12 = *(long *)(param_1 + 0x28);
    bVar2 = *(byte *)(lVar12 + uVar11);
    plVar8 = (long *)(**(code **)(*(long *)param_1 + 0xa8))(param_1);
    uVar10 = (**(code **)(*plVar8 + 0x50))();
    *(byte *)(lVar12 + (uVar10 & 0xffffffff) + uVar11) = bVar2 ^ 0x5c;
    *(byte *)(*(long *)(param_1 + 0x28) + uVar11) =
         *(byte *)(*(long *)(param_1 + 0x28) + uVar11) ^ 0x36;
    uVar11 = uVar11 + 1;
  } while (uVar4 != uVar11);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


