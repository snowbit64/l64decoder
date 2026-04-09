// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScopedLock
// Entry Point: 006dfe18
// Size: 32 bytes
// Signature: undefined __thiscall ~ScopedLock(ScopedLock<FileManager::AccessHistory> * this)


/* ScopedLock<FileManager::AccessHistory>::~ScopedLock() */

void __thiscall
ScopedLock<FileManager::AccessHistory>::~ScopedLock(ScopedLock<FileManager::AccessHistory> *this)

{
  if (this[0x10] == (ScopedLock<FileManager::AccessHistory>)0x0) {
                    /* try { // try from 006dfe2c to 006dfe2f has its CatchHandler @ 006dfe38 */
    Mutex::leaveCriticalSection();
  }
  return;
}


