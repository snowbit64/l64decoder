// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 00fa7a60
// Size: 12 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btClock::reset() */

int btClock::reset(void)

{
  int iVar1;
  timeval **in_x0;
  
  iVar1 = gettimeofday(*in_x0,(__timezone_ptr_t)0x0);
  return iVar1;
}


