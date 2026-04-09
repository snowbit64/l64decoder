// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btClock
// Entry Point: 00fa7a34
// Size: 44 bytes
// Signature: undefined __thiscall btClock(btClock * this)


/* btClock::btClock() */

int __thiscall btClock::btClock(btClock *this)

{
  int iVar1;
  timeval *__tv;
  
  __tv = (timeval *)operator_new(0x10);
  *(timeval **)this = __tv;
  iVar1 = gettimeofday(__tv,(__timezone_ptr_t)0x0);
  return iVar1;
}


