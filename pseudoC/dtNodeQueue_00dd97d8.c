// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~dtNodeQueue
// Entry Point: 00dd97d8
// Size: 8 bytes
// Signature: undefined __thiscall ~dtNodeQueue(dtNodeQueue * this)


/* dtNodeQueue::~dtNodeQueue() */

void __thiscall dtNodeQueue::~dtNodeQueue(dtNodeQueue *this)

{
  dtFree(*(void **)this);
  return;
}


