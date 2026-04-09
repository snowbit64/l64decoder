// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: free_fn
// Entry Point: 00a98e10
// Size: 16 bytes
// Signature: undefined __cdecl free_fn(png_struct_def * param_1, void * param_2)


/* PNGUtil::free_fn(png_struct_def*, void*) */

void PNGUtil::free_fn(png_struct_def *param_1,void *param_2)

{
  if (param_2 != (void *)0x0) {
    operator_delete__(param_2);
    return;
  }
  return;
}


