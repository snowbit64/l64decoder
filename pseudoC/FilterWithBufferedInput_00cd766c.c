// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FilterWithBufferedInput
// Entry Point: 00cd766c
// Size: 304 bytes
// Signature: undefined __thiscall FilterWithBufferedInput(FilterWithBufferedInput * this, ulong param_1, ulong param_2, ulong param_3, BufferedTransformation * param_4)


/* CryptoPP::FilterWithBufferedInput::FilterWithBufferedInput(unsigned long, unsigned long, unsigned
   long, CryptoPP::BufferedTransformation*) */

void __thiscall
CryptoPP::FilterWithBufferedInput::FilterWithBufferedInput
          (FilterWithBufferedInput *this,ulong param_1,ulong param_2,ulong param_3,
          BufferedTransformation *param_4)

{
  long lVar1;
  undefined8 uVar2;
  InvalidArgument *this_00;
  basic_string abStack_60 [6];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Algorithm::Algorithm((Algorithm *)this,false);
  *(BufferedTransformation **)(this + 0x18) = param_4;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(ulong *)(this + 0x30) = param_1;
  *(ulong *)(this + 0x38) = param_2;
  *(ulong *)(this + 0x40) = param_3;
  this[0x48] = (FilterWithBufferedInput)0x0;
  *(undefined ***)this = &PTR__FilterWithBufferedInput_01006138;
  *(undefined ***)(this + 8) = &PTR__FilterWithBufferedInput_01006348;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x58) = 0xffffffffffffffff;
  if (((param_1 == 0xffffffffffffffff) || (param_2 == 0)) || (param_3 == 0xffffffffffffffff)) {
    this_00 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cd775c to 00cd776b has its CatchHandler @ 00cd77c0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               abStack_60,"FilterWithBufferedInput: invalid buffer size");
                    /* try { // try from 00cd7770 to 00cd7797 has its CatchHandler @ 00cd779c */
    InvalidArgument::InvalidArgument(this_00,abStack_60);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&InvalidArgument::typeinfo,Exception::~Exception);
  }
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
                    /* try { // try from 00cd76f8 to 00cd7707 has its CatchHandler @ 00cd77d0 */
    UnalignedDeallocate((void *)0x0);
    uVar2 = UnalignedAllocate(param_1);
  }
  *(ulong *)(this + 0x78) = param_1;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = uVar2;
  *(undefined8 *)(this + 0x58) = 0xffffffffffffffff;
  *(ulong *)(this + 0x60) = param_1;
  *(undefined8 *)(this + 0x68) = uVar2;
  *(undefined8 *)(this + 0x70) = 1;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


