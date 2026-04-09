// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btAlignedAllocSetCustomAligned
// Entry Point: 00f9af60
// Size: 52 bytes
// Signature: undefined __cdecl btAlignedAllocSetCustomAligned(_func_void_ptr_ulong_int * param_1, _func_void_void_ptr * param_2)


/* btAlignedAllocSetCustomAligned(void* (*)(unsigned long, int), void (*)(void*)) */

void btAlignedAllocSetCustomAligned(_func_void_ptr_ulong_int *param_1,_func_void_void_ptr *param_2)

{
  code *pcVar1;
  code *pcVar2;
  
  pcVar1 = FUN_00f9af94;
  if (param_1 != (_func_void_ptr_ulong_int *)0x0) {
    pcVar1 = param_1;
  }
  pcVar2 = FUN_00f9aff0;
  if (param_2 != (_func_void_void_ptr *)0x0) {
    pcVar2 = param_2;
  }
  PTR_FUN_01048e38 = pcVar1;
  PTR_FUN_01048e40 = pcVar2;
  return;
}


