// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clear
// Entry Point: 00c55a44
// Size: 56 bytes
// Signature: undefined clear(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SHC_PoolAllocator::clear() */

void SHC_PoolAllocator::clear(void)

{
  void **ppvVar1;
  long in_x0;
  void *pvVar2;
  
  ppvVar1 = (void **)*(void **)(in_x0 + 0x30);
  while (ppvVar1 != (void **)0x0) {
    pvVar2 = *ppvVar1;
    operator_delete__(ppvVar1);
    *(void **)(in_x0 + 0x30) = pvVar2;
    ppvVar1 = (void **)pvVar2;
  }
  return;
}


