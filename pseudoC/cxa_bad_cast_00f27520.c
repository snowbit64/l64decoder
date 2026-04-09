// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __cxa_bad_cast
// Entry Point: 00f27520
// Size: 56 bytes
// Signature: noreturn undefined __cxa_bad_cast(void)


void __cxa_bad_cast(void)

{
  bad_cast *this;
  
  this = (bad_cast *)__cxa_allocate_exception(8);
  std::bad_cast::bad_cast(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&std::bad_cast::typeinfo,std::bad_cast::~bad_cast);
}


