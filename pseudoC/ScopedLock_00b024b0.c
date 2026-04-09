// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScopedLock
// Entry Point: 00b024b0
// Size: 32 bytes
// Signature: undefined __thiscall ~ScopedLock(ScopedLock<std::__ndk1::vector<StreamableCallback*,std::__ndk1::allocator<StreamableCallback*>>> * this)


/* ScopedLock<std::__ndk1::vector<StreamableCallback*, std::__ndk1::allocator<StreamableCallback*> >
   >::~ScopedLock() */

void __thiscall
ScopedLock<std::__ndk1::vector<StreamableCallback*,std::__ndk1::allocator<StreamableCallback*>>>::
~ScopedLock(ScopedLock<std::__ndk1::vector<StreamableCallback*,std::__ndk1::allocator<StreamableCallback*>>>
            *this)

{
  if (this[0x10] ==
      (ScopedLock<std::__ndk1::vector<StreamableCallback*,std::__ndk1::allocator<StreamableCallback*>>>
       )0x0) {
                    /* try { // try from 00b024c4 to 00b024c7 has its CatchHandler @ 00b024d0 */
    Mutex::leaveCriticalSection();
  }
  return;
}


