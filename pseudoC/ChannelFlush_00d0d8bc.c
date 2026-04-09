// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ChannelFlush
// Entry Point: 00d0d8bc
// Size: 296 bytes
// Signature: undefined __thiscall ChannelFlush(Unflushable<CryptoPP::Multichannel<CryptoPP::Filter>> * this, basic_string * param_1, bool param_2, int param_3, bool param_4)


/* CryptoPP::Unflushable<CryptoPP::Multichannel<CryptoPP::Filter>
   >::ChannelFlush(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, bool, int, bool) */

uint __thiscall
CryptoPP::Unflushable<CryptoPP::Multichannel<CryptoPP::Filter>>::ChannelFlush
          (Unflushable<CryptoPP::Multichannel<CryptoPP::Filter>> *this,basic_string *param_1,
          bool param_2,int param_3,bool param_4)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  CannotFlush *this_00;
  basic_string abStack_60 [6];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((param_2) && (uVar3 = (**(code **)(*(long *)this + 0x198))(this), (uVar3 & 1) == 0)) {
    this_00 = (CannotFlush *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d0d9a4 to 00d0d9b3 has its CatchHandler @ 00d0da0c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               abStack_60,"Unflushable<T>: this object has buffered input that cannot be flushed");
                    /* try { // try from 00d0d9b8 to 00d0d9df has its CatchHandler @ 00d0d9e4 */
    CannotFlush::CannotFlush(this_00,abStack_60);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&CannotFlush::typeinfo,Exception::~Exception);
  }
  plVar4 = (long *)(**(code **)(*(long *)this + 0x160))(this);
  if ((param_3 == 0) || (plVar4 == (long *)0x0)) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return 0;
    }
  }
  else {
    uVar2 = (**(code **)(*plVar4 + 0x140))(plVar4,param_1,param_2,param_3 + -1,param_4);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return uVar2 & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


