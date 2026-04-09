// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dtAllocSetCustom
// Entry Point: 00dd1478
// Size: 48 bytes
// Signature: undefined __cdecl dtAllocSetCustom(_func_void_ptr_int_dtAllocHint * param_1, _func_void_void_ptr * param_2)


/* dtAllocSetCustom(void* (*)(int, dtAllocHint), void (*)(void*)) */

void dtAllocSetCustom(_func_void_ptr_int_dtAllocHint *param_1,_func_void_void_ptr *param_2)

{
  code *pcVar1;
  code *pcVar2;
  
  pcVar1 = FUN_00dd14a8;
  pcVar2 = free;
  if (param_1 != (_func_void_ptr_int_dtAllocHint *)0x0) {
    pcVar1 = param_1;
  }
  if (param_2 != (_func_void_void_ptr *)0x0) {
    pcVar2 = param_2;
  }
  PTR_FUN_01048410 = pcVar1;
  PTR_free_01048418 = pcVar2;
  return;
}


