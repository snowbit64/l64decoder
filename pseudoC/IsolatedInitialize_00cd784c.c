// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsolatedInitialize
// Entry Point: 00cd784c
// Size: 292 bytes
// Signature: undefined __thiscall IsolatedInitialize(FilterWithBufferedInput * this, NameValuePairs * param_1)


/* CryptoPP::FilterWithBufferedInput::IsolatedInitialize(CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::FilterWithBufferedInput::IsolatedInitialize
          (FilterWithBufferedInput *this,NameValuePairs *param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  InvalidArgument *this_00;
  ulong uVar4;
  basic_string abStack_50 [6];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  (**(code **)(*(long *)this + 0x1b8))(this,param_1,this + 0x30,this + 0x38,this + 0x40);
  uVar4 = *(ulong *)(this + 0x30);
  if (((uVar4 == 0xffffffffffffffff) || (*(long *)(this + 0x38) == 0)) ||
     (*(long *)(this + 0x40) == -1)) {
    this_00 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cd7930 to 00cd793f has its CatchHandler @ 00cd7998 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               abStack_50,"FilterWithBufferedInput: invalid buffer size");
                    /* try { // try from 00cd7944 to 00cd796b has its CatchHandler @ 00cd7970 */
    InvalidArgument::InvalidArgument(this_00,abStack_50);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&InvalidArgument::typeinfo,Exception::~Exception);
  }
  uVar1 = *(ulong *)(this + 0x60);
  pvVar3 = *(void **)(this + 0x68);
  if (uVar1 != uVar4) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined *)((long)pvVar3 + (uVar1 - 1)) = 0;
    }
    UnalignedDeallocate(pvVar3);
    if (uVar4 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = (void *)UnalignedAllocate(uVar4);
    }
  }
  *(ulong *)(this + 0x78) = uVar4;
  *(undefined8 *)(this + 0x80) = 0;
  *(void **)(this + 0x88) = pvVar3;
  *(undefined8 *)(this + 0x58) = 0xffffffffffffffff;
  *(ulong *)(this + 0x60) = uVar4;
  *(void **)(this + 0x68) = pvVar3;
  *(undefined8 *)(this + 0x70) = 1;
  this[0x48] = (FilterWithBufferedInput)0x0;
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


