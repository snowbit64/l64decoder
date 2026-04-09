// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: UndoLazyPut
// Entry Point: 00d1e3e8
// Size: 160 bytes
// Signature: undefined __thiscall UndoLazyPut(ByteQueue * this, ulong param_1)


/* CryptoPP::ByteQueue::UndoLazyPut(unsigned long) */

void __thiscall CryptoPP::ByteQueue::UndoLazyPut(ByteQueue *this,ulong param_1)

{
  long lVar1;
  InvalidArgument *this_00;
  basic_string abStack_50 [6];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(ulong *)(this + 0x38) < param_1) {
    this_00 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d1e448 to 00d1e457 has its CatchHandler @ 00d1e4b0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               abStack_50,"ByteQueue: size specified for UndoLazyPut is too large");
                    /* try { // try from 00d1e45c to 00d1e483 has its CatchHandler @ 00d1e488 */
    InvalidArgument::InvalidArgument(this_00,abStack_50);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&InvalidArgument::typeinfo,Exception::~Exception);
  }
  *(ulong *)(this + 0x38) = *(ulong *)(this + 0x38) - param_1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


