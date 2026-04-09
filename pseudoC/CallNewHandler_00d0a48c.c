// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CallNewHandler
// Entry Point: 00d0a48c
// Size: 88 bytes
// Signature: undefined CallNewHandler(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::CallNewHandler() */

void CryptoPP::CallNewHandler(void)

{
  _func_void *UNRECOVERED_JUMPTABLE;
  bad_alloc *this;
  
  UNRECOVERED_JUMPTABLE = (_func_void *)std::set_new_handler((_func_void *)0x0);
  if (UNRECOVERED_JUMPTABLE != (_func_void *)0x0) {
    std::set_new_handler(UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x00d0a4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  this = (bad_alloc *)__cxa_allocate_exception(8);
  std::bad_alloc::bad_alloc(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&std::bad_alloc::typeinfo,std::bad_alloc::~bad_alloc);
}


