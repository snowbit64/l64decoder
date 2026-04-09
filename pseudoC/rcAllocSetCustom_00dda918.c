// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rcAllocSetCustom
// Entry Point: 00dda918
// Size: 48 bytes
// Signature: undefined __cdecl rcAllocSetCustom(_func_void_ptr_int_rcAllocHint * param_1, _func_void_void_ptr * param_2)


/* rcAllocSetCustom(void* (*)(int, rcAllocHint), void (*)(void*)) */

void rcAllocSetCustom(_func_void_ptr_int_rcAllocHint *param_1,_func_void_void_ptr *param_2)

{
  code *pcVar1;
  code *pcVar2;
  
  pcVar1 = FUN_00dda948;
  pcVar2 = free;
  if (param_1 != (_func_void_ptr_int_rcAllocHint *)0x0) {
    pcVar1 = param_1;
  }
  if (param_2 != (_func_void_void_ptr *)0x0) {
    pcVar2 = param_2;
  }
  PTR_FUN_01048420 = pcVar1;
  PTR_free_01048428 = pcVar2;
  return;
}


