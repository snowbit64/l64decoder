// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clear
// Entry Point: 00b9b0b8
// Size: 80 bytes
// Signature: undefined clear(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StringStream::clear() */

void StringStream::clear(void)

{
  void **in_x0;
  void *pvVar1;
  void **ppvVar2;
  
  ppvVar2 = (void **)*in_x0;
  while (ppvVar2 != (void **)0x0) {
    pvVar1 = *ppvVar2;
    *in_x0 = ppvVar2[2];
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
    }
    operator_delete(ppvVar2);
    ppvVar2 = (void **)*in_x0;
  }
  *in_x0 = (void *)0x0;
  in_x0[1] = (void *)0x0;
  return;
}


