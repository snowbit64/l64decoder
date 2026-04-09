// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScopedLock
// Entry Point: 00965dd8
// Size: 32 bytes
// Signature: undefined __thiscall ~ScopedLock(ScopedLock<SmallVector<ICommandList*,5u>> * this)


/* ScopedLock<SmallVector<ICommandList*, 5u> >::~ScopedLock() */

void __thiscall
ScopedLock<SmallVector<ICommandList*,5u>>::~ScopedLock
          (ScopedLock<SmallVector<ICommandList*,5u>> *this)

{
  if (this[0x10] == (ScopedLock<SmallVector<ICommandList*,5u>>)0x0) {
                    /* try { // try from 00965dec to 00965def has its CatchHandler @ 00965df8 */
    Mutex::leaveCriticalSection();
  }
  return;
}


