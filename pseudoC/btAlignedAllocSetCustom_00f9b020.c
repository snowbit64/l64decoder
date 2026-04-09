// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btAlignedAllocSetCustom
// Entry Point: 00f9b020
// Size: 52 bytes
// Signature: undefined __cdecl btAlignedAllocSetCustom(_func_void_ptr_ulong * param_1, _func_void_void_ptr * param_2)


/* btAlignedAllocSetCustom(void* (*)(unsigned long), void (*)(void*)) */

void btAlignedAllocSetCustom(_func_void_ptr_ulong *param_1,_func_void_void_ptr *param_2)

{
  code *pcVar1;
  code *pcVar2;
  
  pcVar1 = FUN_00f9b00c;
  if (param_1 != (_func_void_ptr_ulong *)0x0) {
    pcVar1 = param_1;
  }
  pcVar2 = free;
  if (param_2 != (_func_void_void_ptr *)0x0) {
    pcVar2 = param_2;
  }
  PTR_FUN_01048e48 = pcVar1;
  PTR_free_01048e50 = pcVar2;
  return;
}


