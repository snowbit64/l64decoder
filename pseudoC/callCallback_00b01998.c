// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callCallback
// Entry Point: 00b01998
// Size: 28 bytes
// Signature: undefined __cdecl callCallback(_func_void_void_ptr_bool * param_1, void * param_2, bool param_3)


/* SaveHelper::callCallback(void (*)(void*, bool), void*, bool) */

void SaveHelper::callCallback(_func_void_void_ptr_bool *param_1,void *param_2,bool param_3)

{
  if (param_1 != (_func_void_void_ptr_bool *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b019ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*param_1)(param_2,param_3);
    return;
  }
  return;
}


