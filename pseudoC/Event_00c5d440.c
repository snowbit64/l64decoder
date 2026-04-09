// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Event
// Entry Point: 00c5d440
// Size: 72 bytes
// Signature: undefined __thiscall Event(Event * this, bool param_1, bool param_2)


/* Event::Event(bool, bool) */

int __thiscall Event::Event(Event *this,bool param_1,bool param_2)

{
  int iVar1;
  
  pthread_mutex_init((pthread_mutex_t *)this,(pthread_mutexattr_t *)0x0);
  iVar1 = pthread_cond_init((pthread_cond_t *)(this + 0x28),(pthread_condattr_t *)0x0);
  this[0x58] = (Event)param_1;
  this[0x59] = (Event)param_2;
  return iVar1;
}


