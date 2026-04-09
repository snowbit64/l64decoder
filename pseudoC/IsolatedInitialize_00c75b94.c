// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsolatedInitialize
// Entry Point: 00c75b94
// Size: 348 bytes
// Signature: undefined __thiscall IsolatedInitialize(BaseN_Decoder * this, NameValuePairs * param_1)


/* CryptoPP::BaseN_Decoder::IsolatedInitialize(CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::BaseN_Decoder::IsolatedInitialize(BaseN_Decoder *this,NameValuePairs *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  InvalidArgument *this_00;
  uint uVar6;
  basic_string abStack_50 [6];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  NameValuePairs::GetRequiredParameter<int_const*>
            ((char *)param_1,"BaseN_Decoder",(int **)"DecodingLookupArray");
  NameValuePairs::GetRequiredIntParameter((char *)param_1,"BaseN_Decoder",(int *)"Log2Base");
  if (*(int *)(this + 0x38) - 8U < 0xfffffff9) {
    this_00 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c75cb0 to 00c75cbf has its CatchHandler @ 00c75d18 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               abStack_50,"BaseN_Decoder: Log2Base must be between 1 and 7 inclusive");
                    /* try { // try from 00c75cc4 to 00c75ceb has its CatchHandler @ 00c75cf0 */
    InvalidArgument::InvalidArgument(this_00,abStack_50);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&InvalidArgument::typeinfo,Exception::~Exception);
  }
  uVar6 = 0;
  *(undefined8 *)(this + 0x40) = 0;
  do {
    uVar6 = *(int *)(this + 0x38) + uVar6;
  } while ((uVar6 & 7) != 0);
  uVar1 = uVar6 + 7;
  if (-1 < (int)uVar6) {
    uVar1 = uVar6;
  }
  uVar2 = *(ulong *)(this + 0x58);
  pvVar5 = *(void **)(this + 0x60);
  uVar3 = (long)((ulong)uVar1 << 0x20) >> 0x23;
  *(int *)(this + 0x3c) = (int)uVar1 >> 3;
  if (uVar2 != uVar3) {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined *)((long)pvVar5 + (uVar2 - 1)) = 0;
    }
    UnalignedDeallocate(pvVar5);
    if (uVar6 + 7 < 0xf) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = (void *)UnalignedAllocate(uVar3);
    }
  }
  *(ulong *)(this + 0x58) = uVar3;
  *(void **)(this + 0x60) = pvVar5;
  *(undefined8 *)(this + 0x50) = 0xffffffffffffffff;
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


