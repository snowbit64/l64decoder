// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Semaphore
// Entry Point: 00c6503c
// Size: 12 bytes
// Signature: undefined __thiscall Semaphore(Semaphore * this, int param_1)


/* Semaphore::Semaphore(int) */

int __thiscall Semaphore::Semaphore(Semaphore *this,int param_1)

{
  int iVar1;
  
  iVar1 = sem_init((sem_t *)this,0,param_1);
  return iVar1;
}


