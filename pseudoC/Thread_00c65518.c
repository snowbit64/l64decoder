// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Thread
// Entry Point: 00c65518
// Size: 84 bytes
// Signature: undefined __thiscall ~Thread(Thread * this)


/* Thread::~Thread() */

Thread * __thiscall Thread::~Thread(Thread *this)

{
  uint uVar1;
  Thread *pTVar2;
  
  this[0x10] = (Thread)0x1;
  pTVar2 = this;
  if (*(long *)this != 0) {
                    /* try { // try from 00c6553c to 00c65543 has its CatchHandler @ 00c6556c */
    uVar1 = pthread_join(*(pthread_t *)(this + 0x38),(void **)0x0);
    pTVar2 = (Thread *)(ulong)uVar1;
    *(undefined8 *)this = 0;
  }
  if (((byte)this[0x18] & 1) == 0) {
    return pTVar2;
  }
  pTVar2 = *(Thread **)(this + 0x28);
  operator_delete(pTVar2);
  return pTVar2;
}


