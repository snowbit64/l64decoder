// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScopedLock
// Entry Point: 0096a218
// Size: 32 bytes
// Signature: undefined __thiscall ~ScopedLock(ScopedLock<std::__ndk1::vector<unsigned_long_long,std::__ndk1::allocator<unsigned_long_long>>> * this)


/* ScopedLock<std::__ndk1::vector<unsigned long long, std::__ndk1::allocator<unsigned long long> >
   >::~ScopedLock() */

void __thiscall
ScopedLock<std::__ndk1::vector<unsigned_long_long,std::__ndk1::allocator<unsigned_long_long>>>::
~ScopedLock(ScopedLock<std::__ndk1::vector<unsigned_long_long,std::__ndk1::allocator<unsigned_long_long>>>
            *this)

{
  if (this[0x10] ==
      (ScopedLock<std::__ndk1::vector<unsigned_long_long,std::__ndk1::allocator<unsigned_long_long>>>
       )0x0) {
                    /* try { // try from 0096a22c to 0096a22f has its CatchHandler @ 0096a238 */
    Mutex::leaveCriticalSection();
  }
  return;
}


