// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NonblockingRng
// Entry Point: 00d1a350
// Size: 56 bytes
// Signature: undefined __thiscall ~NonblockingRng(NonblockingRng * this)


/* CryptoPP::NonblockingRng::~NonblockingRng() */

void __thiscall CryptoPP::NonblockingRng::~NonblockingRng(NonblockingRng *this)

{
  *(undefined ***)this = &PTR__NonblockingRng_0100ea50;
                    /* try { // try from 00d1a374 to 00d1a377 has its CatchHandler @ 00d1a388 */
  close(*(int *)(this + 8));
  operator_delete(this);
  return;
}


