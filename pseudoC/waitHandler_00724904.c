// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: waitHandler
// Entry Point: 00724904
// Size: 32 bytes
// Signature: undefined waitHandler(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DynamicAvoidance::waitHandler() */

void DynamicAvoidance::waitHandler(void)

{
  long in_x0;
  
  if (*(char *)(in_x0 + 0x88) != '\0') {
    *(undefined *)(in_x0 + 0x88) = 0;
    Event::wait((Event *)(in_x0 + 0xe8),0xffffffff);
    return;
  }
  return;
}


