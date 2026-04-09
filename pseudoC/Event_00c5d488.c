// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Event
// Entry Point: 00c5d488
// Size: 44 bytes
// Signature: undefined __thiscall ~Event(Event * this)


/* Event::~Event() */

int __thiscall Event::~Event(Event *this)

{
  int iVar1;
  
                    /* try { // try from 00c5d49c to 00c5d4a7 has its CatchHandler @ 00c5d4b4 */
  pthread_cond_destroy((pthread_cond_t *)(this + 0x28));
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)this);
  return iVar1;
}


