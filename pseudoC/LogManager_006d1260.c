// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LogManager
// Entry Point: 006d1260
// Size: 16 bytes
// Signature: undefined __thiscall ~LogManager(LogManager * this)


/* LogManager::~LogManager() */

void __thiscall LogManager::~LogManager(LogManager *this)

{
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}


