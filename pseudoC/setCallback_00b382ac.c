// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCallback
// Entry Point: 00b382ac
// Size: 8 bytes
// Signature: undefined __thiscall setCallback(AndroidHTTPSRequest * this, _func_bool_void_ptr_longlong_longlong * param_1, void * param_2)


/* AndroidHTTPSRequest::setCallback(bool (*)(void*, long long, long long), void*) */

void __thiscall
AndroidHTTPSRequest::setCallback
          (AndroidHTTPSRequest *this,_func_bool_void_ptr_longlong_longlong *param_1,void *param_2)

{
  *(_func_bool_void_ptr_longlong_longlong **)(this + 8) = param_1;
  *(void **)(this + 0x10) = param_2;
  return;
}


