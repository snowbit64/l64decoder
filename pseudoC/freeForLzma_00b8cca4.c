// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: freeForLzma
// Entry Point: 00b8cca4
// Size: 16 bytes
// Signature: undefined __cdecl freeForLzma(void * param_1, void * param_2)


/* LZMACompressionUtil::freeForLzma(void*, void*) */

void LZMACompressionUtil::freeForLzma(void *param_1,void *param_2)

{
  if (param_2 != (void *)0x0) {
    operator_delete__(param_2);
    return;
  }
  return;
}


