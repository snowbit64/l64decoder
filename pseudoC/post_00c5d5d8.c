// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: post
// Entry Point: 00c5d5d8
// Size: 60 bytes
// Signature: undefined post(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Event::post() */

int Event::post(void)

{
  int iVar1;
  pthread_mutex_t *in_x0;
  
  pthread_mutex_lock(in_x0);
  if (*(char *)((long)in_x0 + 0x58) == '\0') {
    *(undefined *)((long)in_x0 + 0x58) = 1;
    pthread_cond_signal((pthread_cond_t *)(in_x0 + 1));
  }
  iVar1 = pthread_mutex_unlock(in_x0);
  return iVar1;
}


