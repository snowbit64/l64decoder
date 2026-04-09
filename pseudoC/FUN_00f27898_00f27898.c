// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f27898
// Entry Point: 00f27898
// Size: 136 bytes
// Signature: noreturn undefined FUN_00f27898(void)


void FUN_00f27898(long param_1)

{
  undefined auStack_4a0 [624];
  undefined auStack_230 [528];
  
  FUN_00f2b278(auStack_230);
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_00f27760(auStack_230,auStack_4a0,param_1);
  }
  else {
    FUN_00f27920(auStack_230,auStack_4a0,param_1,*(long *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18));
  }
  fprintf((FILE *)0x2249f40,"libunwind: %s - %s\n","_Unwind_Resume","_Unwind_Resume() can\'t return"
         );
  fflush((FILE *)0x2249f40);
                    /* WARNING: Subroutine does not return */
  abort();
}


