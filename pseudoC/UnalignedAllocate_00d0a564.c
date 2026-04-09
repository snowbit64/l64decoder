// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: UnalignedAllocate
// Entry Point: 00d0a564
// Size: 112 bytes
// Signature: undefined __cdecl UnalignedAllocate(ulong param_1)


/* CryptoPP::UnalignedAllocate(unsigned long) */

void CryptoPP::UnalignedAllocate(ulong param_1)

{
  void *pvVar1;
  _func_void *p_Var2;
  bad_alloc *this;
  
  pvVar1 = malloc(param_1);
  while( true ) {
    if (pvVar1 != (void *)0x0) {
      return;
    }
    p_Var2 = (_func_void *)std::set_new_handler((_func_void *)0x0);
    if (p_Var2 == (_func_void *)0x0) break;
    std::set_new_handler(p_Var2);
    (*p_Var2)();
    pvVar1 = malloc(param_1);
  }
  this = (bad_alloc *)__cxa_allocate_exception(8);
  std::bad_alloc::bad_alloc(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&std::bad_alloc::typeinfo,std::bad_alloc::~bad_alloc);
}


