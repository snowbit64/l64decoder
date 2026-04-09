// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeCallback
// Entry Point: 00c62d2c
// Size: 144 bytes
// Signature: undefined __thiscall removeCallback(NetworkAvailability * this, _func_void_CONNECTION_STATUS_void_ptr * param_1)


/* NetworkAvailability::removeCallback(void (*)(NetworkAvailability::CONNECTION_STATUS, void*)) */

void __thiscall
NetworkAvailability::removeCallback
          (NetworkAvailability *this,_func_void_CONNECTION_STATUS_void_ptr *param_1)

{
  size_t __n;
  _func_void_CONNECTION_STATUS_void_ptr **pp_Var1;
  _func_void_CONNECTION_STATUS_void_ptr **__dest;
  
  Mutex::enterCriticalSection();
  __dest = *(_func_void_CONNECTION_STATUS_void_ptr ***)this;
  pp_Var1 = *(_func_void_CONNECTION_STATUS_void_ptr ***)(this + 8);
  if (__dest != pp_Var1) {
    do {
      while (*__dest != param_1) {
        __dest = __dest + 2;
        if (__dest == pp_Var1) goto LAB_00c62da4;
      }
      __n = (long)pp_Var1 - (long)(__dest + 2);
      if (__n != 0) {
        memmove(__dest,__dest + 2,__n);
      }
      pp_Var1 = (_func_void_CONNECTION_STATUS_void_ptr **)((long)__dest + __n);
      *(_func_void_CONNECTION_STATUS_void_ptr ***)(this + 8) = pp_Var1;
    } while (__dest != pp_Var1);
  }
LAB_00c62da4:
  Mutex::leaveCriticalSection();
  return;
}


