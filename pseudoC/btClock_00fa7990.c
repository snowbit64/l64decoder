// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btClock
// Entry Point: 00fa7990
// Size: 16 bytes
// Signature: undefined __thiscall ~btClock(btClock * this)


/* btClock::~btClock() */

void __thiscall btClock::~btClock(btClock *this)

{
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}


