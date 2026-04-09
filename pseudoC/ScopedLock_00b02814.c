// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScopedLock
// Entry Point: 00b02814
// Size: 32 bytes
// Signature: undefined __thiscall ~ScopedLock(ScopedLock<std::__ndk1::deque<Streamable*,std::__ndk1::allocator<Streamable*>>> * this)


/* ScopedLock<std::__ndk1::deque<Streamable*, std::__ndk1::allocator<Streamable*> > >::~ScopedLock()
    */

void __thiscall
ScopedLock<std::__ndk1::deque<Streamable*,std::__ndk1::allocator<Streamable*>>>::~ScopedLock
          (ScopedLock<std::__ndk1::deque<Streamable*,std::__ndk1::allocator<Streamable*>>> *this)

{
  if (this[0x10] ==
      (ScopedLock<std::__ndk1::deque<Streamable*,std::__ndk1::allocator<Streamable*>>>)0x0) {
                    /* try { // try from 00b02828 to 00b0282b has its CatchHandler @ 00b02834 */
    Mutex::leaveCriticalSection();
  }
  return;
}


