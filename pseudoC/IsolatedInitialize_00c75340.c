// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsolatedInitialize
// Entry Point: 00c75340
// Size: 452 bytes
// Signature: undefined __thiscall IsolatedInitialize(BaseN_Encoder * this, NameValuePairs * param_1)


/* WARNING: Type propagation algorithm not settling */
/* CryptoPP::BaseN_Encoder::IsolatedInitialize(CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::BaseN_Encoder::IsolatedInitialize(BaseN_Encoder *this,NameValuePairs *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  byte bVar4;
  ulong uVar5;
  void *pvVar6;
  InvalidArgument *this_00;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  byte local_54 [4];
  basic_string local_50 [6];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  NameValuePairs::GetRequiredParameter<unsigned_char_const*>
            ((char *)param_1,"BaseN_Encoder",(uchar **)"EncodingLookupArray");
  NameValuePairs::GetRequiredIntParameter((char *)param_1,"BaseN_Encoder",(int *)"Log2Base");
  if (*(int *)(this + 0x3c) - 8U < 0xfffffff9) {
    this_00 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c754c4 to 00c754d3 has its CatchHandler @ 00c7552c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               local_50,"BaseN_Encoder: Log2Base must be between 1 and 7 inclusive");
                    /* try { // try from 00c754d8 to 00c754ff has its CatchHandler @ 00c75504 */
    InvalidArgument::InvalidArgument(this_00,local_50);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&InvalidArgument::typeinfo,Exception::~Exception);
  }
  uVar5 = (**(code **)(*(long *)param_1 + 0x10))
                    (param_1,"PaddingByte",&unsigned_char::typeinfo,local_54);
  if ((uVar5 & 1) == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    bVar4 = (**(code **)(*(long *)param_1 + 0x10))(param_1,&DAT_0050767b,&bool::typeinfo,local_50);
    uVar8 = (uint)local_54[0];
    if ((local_50[0]._0_1_ !=
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0 |
        (bVar4 ^ 0xff) & 1) == 0) {
      uVar8 = 0xffffffff;
    }
  }
  iVar7 = 0;
  *(uint *)(this + 0x38) = uVar8;
  iVar1 = *(int *)(this + 0x3c);
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  do {
    iVar7 = iVar7 + 8;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = iVar7 / iVar1;
    }
  } while (iVar2 * iVar1 != iVar7);
  uVar5 = *(ulong *)(this + 0x60);
  pvVar6 = *(void **)(this + 0x68);
  uVar9 = (ulong)iVar2;
  *(int *)(this + 0x40) = iVar2;
  if (uVar5 != uVar9) {
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined *)((long)pvVar6 + (uVar5 - 1)) = 0;
    }
    UnalignedDeallocate(pvVar6);
    if (iVar2 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      pvVar6 = (void *)UnalignedAllocate(uVar9);
    }
  }
  *(ulong *)(this + 0x60) = uVar9;
  *(void **)(this + 0x68) = pvVar6;
  *(undefined8 *)(this + 0x58) = 0xffffffffffffffff;
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


