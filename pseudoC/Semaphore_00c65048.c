// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Semaphore
// Entry Point: 00c65048
// Size: 20 bytes
// Signature: undefined __thiscall ~Semaphore(Semaphore * this)


/* Semaphore::~Semaphore() */

int __thiscall Semaphore::~Semaphore(Semaphore *this)

{
  int iVar1;
  
                    /* try { // try from 00c65050 to 00c65053 has its CatchHandler @ 00c6505c */
  iVar1 = sem_destroy((sem_t *)this);
  return iVar1;
}


