// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addCallback
// Entry Point: 00c62c20
// Size: 268 bytes
// Signature: undefined __thiscall addCallback(NetworkAvailability * this, _func_void_CONNECTION_STATUS_void_ptr * param_1, void * param_2)


/* NetworkAvailability::addCallback(void (*)(NetworkAvailability::CONNECTION_STATUS, void*), void*)
    */

void __thiscall
NetworkAvailability::addCallback
          (NetworkAvailability *this,_func_void_CONNECTION_STATUS_void_ptr *param_1,void *param_2)

{
  ulong uVar1;
  _func_void_CONNECTION_STATUS_void_ptr **pp_Var2;
  void *__dest;
  void *__src;
  ulong __n;
  
  Mutex::enterCriticalSection();
  pp_Var2 = *(_func_void_CONNECTION_STATUS_void_ptr ***)(this + 8);
  if (pp_Var2 == *(_func_void_CONNECTION_STATUS_void_ptr ***)(this + 0x10)) {
    __src = *(void **)this;
    __n = (long)pp_Var2 - (long)__src;
    uVar1 = ((long)__n >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)__n >> 3)) {
      uVar1 = (long)__n >> 3;
    }
    if (0x7fffffffffffffef < __n) {
      uVar1 = 0xfffffffffffffff;
    }
    if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    __dest = operator_new(uVar1 * 0x10);
    pp_Var2 = (_func_void_CONNECTION_STATUS_void_ptr **)((long)__dest + ((long)__n >> 4) * 0x10);
    *pp_Var2 = param_1;
    pp_Var2[1] = (_func_void_CONNECTION_STATUS_void_ptr *)param_2;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)this = __dest;
    *(_func_void_CONNECTION_STATUS_void_ptr ***)(this + 8) = pp_Var2 + 2;
    *(void **)(this + 0x10) = (void *)((long)__dest + uVar1 * 0x10);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *pp_Var2 = param_1;
    pp_Var2[1] = (_func_void_CONNECTION_STATUS_void_ptr *)param_2;
    *(_func_void_CONNECTION_STATUS_void_ptr ***)(this + 8) = pp_Var2 + 2;
  }
  Mutex::leaveCriticalSection();
  return;
}


