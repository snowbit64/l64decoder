// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gsParser_get_column
// Entry Point: 00c21b30
// Size: 36 bytes
// Signature: undefined __cdecl gsParser_get_column(void * param_1)


/* gsParser_get_column(void*) */

undefined4 gsParser_get_column(void *param_1)

{
  long lVar1;
  
  if ((*(long *)((long)param_1 + 0x28) != 0) &&
     (lVar1 = *(long *)(*(long *)((long)param_1 + 0x28) + *(long *)((long)param_1 + 0x18) * 8),
     lVar1 != 0)) {
    return *(undefined4 *)(lVar1 + 0x30);
  }
  return 0;
}


