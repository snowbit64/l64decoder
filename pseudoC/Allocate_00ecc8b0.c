// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Allocate
// Entry Point: 00ecc8b0
// Size: 76 bytes
// Signature: undefined Allocate(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VHACD::Volume::Allocate() */

void VHACD::Volume::Allocate(void)

{
  long in_x0;
  void *__s;
  ulong __n;
  
  if (*(void **)(in_x0 + 0x70) != (void *)0x0) {
    operator_delete__(*(void **)(in_x0 + 0x70));
  }
  __n = *(long *)(in_x0 + 0x48) * *(long *)(in_x0 + 0x40) * *(long *)(in_x0 + 0x50);
  __s = operator_new__(__n);
  *(void **)(in_x0 + 0x70) = __s;
  memset(__s,0,__n);
  return;
}


