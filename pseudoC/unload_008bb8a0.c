// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unload
// Entry Point: 008bb8a0
// Size: 64 bytes
// Signature: undefined unload(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SampleChunk::unload() */

void SampleChunk::unload(void)

{
  long in_x0;
  
  if (*(void **)(in_x0 + 0x90) != (void *)0x0) {
    operator_delete__(*(void **)(in_x0 + 0x90));
  }
  *(undefined8 *)(in_x0 + 0x90) = 0;
  if (*(void **)(in_x0 + 0x68) != (void *)0x0) {
    operator_delete__(*(void **)(in_x0 + 0x68));
  }
  *(undefined8 *)(in_x0 + 0x68) = 0;
  *(undefined *)(in_x0 + 0x20) = 0;
  return;
}


