// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0075edd0
// Entry Point: 0075edd0
// Size: 52 bytes
// Signature: noreturn undefined FUN_0075edd0(void)


void FUN_0075edd0(void)

{
  bad_cast *this;
  
  this = (bad_cast *)__cxa_allocate_exception(8);
  std::bad_cast::bad_cast(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&std::bad_cast::typeinfo,std::bad_cast::~bad_cast);
}


