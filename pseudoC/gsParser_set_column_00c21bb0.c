// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gsParser_set_column
// Entry Point: 00c21bb0
// Size: 52 bytes
// Signature: undefined __cdecl gsParser_set_column(int param_1, void * param_2)


/* gsParser_set_column(int, void*) */

void gsParser_set_column(int param_1,void *param_2)

{
  long lVar1;
  
  if ((*(long *)((long)param_2 + 0x28) != 0) &&
     (lVar1 = *(long *)(*(long *)((long)param_2 + 0x28) + *(long *)((long)param_2 + 0x18) * 8),
     lVar1 != 0)) {
    *(int *)(lVar1 + 0x30) = param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00c21450("yyset_column called with no buffer");
}


