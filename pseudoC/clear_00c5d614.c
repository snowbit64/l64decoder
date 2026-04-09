// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clear
// Entry Point: 00c5d614
// Size: 40 bytes
// Signature: undefined clear(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Event::clear() */

int Event::clear(void)

{
  int iVar1;
  pthread_mutex_t *in_x0;
  
  pthread_mutex_lock(in_x0);
  *(undefined *)((long)in_x0 + 0x58) = 0;
  iVar1 = pthread_mutex_unlock(in_x0);
  return iVar1;
}


