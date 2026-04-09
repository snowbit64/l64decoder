// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScopedLock
// Entry Point: 00a1f614
// Size: 32 bytes
// Signature: undefined __thiscall ~ScopedLock(ScopedLock<std::__ndk1::unordered_map<unsigned_long_long,RenderQueue::ThreadData*,std::__ndk1::hash<unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_long_const,RenderQueue::ThreadData*>>>> * this)


/* ScopedLock<std::__ndk1::unordered_map<unsigned long long, RenderQueue::ThreadData*,
   std::__ndk1::hash<unsigned long long>, std::__ndk1::equal_to<unsigned long long>,
   std::__ndk1::allocator<std::__ndk1::pair<unsigned long long const, RenderQueue::ThreadData*> > >
   >::~ScopedLock() */

void __thiscall
ScopedLock<std::__ndk1::unordered_map<unsigned_long_long,RenderQueue::ThreadData*,std::__ndk1::hash<unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_long_const,RenderQueue::ThreadData*>>>>
::~ScopedLock(ScopedLock<std::__ndk1::unordered_map<unsigned_long_long,RenderQueue::ThreadData*,std::__ndk1::hash<unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_long_const,RenderQueue::ThreadData*>>>>
              *this)

{
  if (this[0x10] ==
      (ScopedLock<std::__ndk1::unordered_map<unsigned_long_long,RenderQueue::ThreadData*,std::__ndk1::hash<unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_long_const,RenderQueue::ThreadData*>>>>
       )0x0) {
                    /* try { // try from 00a1f628 to 00a1f62b has its CatchHandler @ 00a1f634 */
    Mutex::leaveCriticalSection();
  }
  return;
}


