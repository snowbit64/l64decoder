// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LazyPutter
// Entry Point: 00cce534
// Size: 24 bytes
// Signature: undefined __thiscall ~LazyPutter(LazyPutter * this)


/* CryptoPP::LazyPutter::~LazyPutter() */

void __thiscall CryptoPP::LazyPutter::~LazyPutter(LazyPutter *this)

{
                    /* try { // try from 00cce540 to 00cce543 has its CatchHandler @ 00cce54c */
  ByteQueue::FinalizeLazyPut();
  return;
}


