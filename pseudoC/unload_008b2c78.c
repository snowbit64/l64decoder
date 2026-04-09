// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unload
// Entry Point: 008b2c78
// Size: 56 bytes
// Signature: undefined unload(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Sample::unload() */

void Sample::unload(void)

{
  long *in_x0;
  
  if (*(char *)(in_x0 + 6) != '\0') {
    (**(code **)(*in_x0 + 0x90))();
    *(undefined4 *)(in_x0 + 5) = 0;
    *(undefined *)(in_x0 + 6) = 0;
  }
  return;
}


