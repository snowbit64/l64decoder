// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callHandler
// Entry Point: 00724fc0
// Size: 20 bytes
// Signature: undefined callHandler(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DynamicAvoidance::callHandler() */

void DynamicAvoidance::callHandler(void)

{
  long in_x0;
  
  *(undefined *)(in_x0 + 0x88) = 1;
  Event::post();
  return;
}


