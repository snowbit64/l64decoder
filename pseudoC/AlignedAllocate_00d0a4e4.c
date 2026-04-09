// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AlignedAllocate
// Entry Point: 00d0a4e4
// Size: 124 bytes
// Signature: undefined __cdecl AlignedAllocate(ulong param_1)


/* CryptoPP::AlignedAllocate(unsigned long) */

void CryptoPP::AlignedAllocate(ulong param_1)

{
  long lVar1;
  _func_void *p_Var2;
  bad_alloc *this;
  
  lVar1 = memalign(0x10,param_1);
  while( true ) {
    if (lVar1 != 0) {
      return;
    }
    p_Var2 = (_func_void *)std::set_new_handler((_func_void *)0x0);
    if (p_Var2 == (_func_void *)0x0) break;
    std::set_new_handler(p_Var2);
    (*p_Var2)();
    lVar1 = memalign(0x10,param_1);
  }
  this = (bad_alloc *)__cxa_allocate_exception(8);
  std::bad_alloc::bad_alloc(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&std::bad_alloc::typeinfo,std::bad_alloc::~bad_alloc);
}


