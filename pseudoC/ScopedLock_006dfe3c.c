// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScopedLock
// Entry Point: 006dfe3c
// Size: 32 bytes
// Signature: undefined __thiscall ~ScopedLock(ScopedLock<std::__ndk1::map<unsigned_long_long,Lockable<FileManager::AccessHistory>,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_long_const,Lockable<FileManager::AccessHistory>>>>> * this)


/* ScopedLock<std::__ndk1::map<unsigned long long, Lockable<FileManager::AccessHistory>,
   std::__ndk1::less<unsigned long long>, std::__ndk1::allocator<std::__ndk1::pair<unsigned long
   long const, Lockable<FileManager::AccessHistory> > > > >::~ScopedLock() */

void __thiscall
ScopedLock<std::__ndk1::map<unsigned_long_long,Lockable<FileManager::AccessHistory>,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_long_const,Lockable<FileManager::AccessHistory>>>>>
::~ScopedLock(ScopedLock<std::__ndk1::map<unsigned_long_long,Lockable<FileManager::AccessHistory>,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_long_const,Lockable<FileManager::AccessHistory>>>>>
              *this)

{
  if (this[0x10] ==
      (ScopedLock<std::__ndk1::map<unsigned_long_long,Lockable<FileManager::AccessHistory>,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_long_const,Lockable<FileManager::AccessHistory>>>>>
       )0x0) {
                    /* try { // try from 006dfe50 to 006dfe53 has its CatchHandler @ 006dfe5c */
    Mutex::leaveCriticalSection();
  }
  return;
}


