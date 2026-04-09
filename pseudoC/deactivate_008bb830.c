// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deactivate
// Entry Point: 008bb830
// Size: 56 bytes
// Signature: undefined deactivate(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SampleChunk::deactivate() */

void SampleChunk::deactivate(void)

{
  long in_x0;
  
  if (*(long **)(in_x0 + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x48) + 8))();
  }
  *(undefined8 *)(in_x0 + 0x48) = 0;
  *(undefined4 *)(in_x0 + 0x18) = 0;
  return;
}


