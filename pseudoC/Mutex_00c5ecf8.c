// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Mutex
// Entry Point: 00c5ecf8
// Size: 20 bytes
// Signature: undefined __thiscall ~Mutex(Mutex * this)


/* Mutex::~Mutex() */

int __thiscall Mutex::~Mutex(Mutex *this)

{
  int iVar1;
  
                    /* try { // try from 00c5ed00 to 00c5ed03 has its CatchHandler @ 00c5ed0c */
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)this);
  return iVar1;
}


