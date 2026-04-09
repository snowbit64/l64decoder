// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_malloc
// Entry Point: 00d27ff8
// Size: 60 bytes
// Signature: undefined enet_malloc(void)


long enet_malloc(void)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_malloc_010483e8)();
  if (lVar1 != 0) {
    return lVar1;
  }
  lVar1 = (*(code *)PTR_abort_010483f8)();
  return lVar1;
}


