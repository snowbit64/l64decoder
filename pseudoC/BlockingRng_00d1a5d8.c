// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BlockingRng
// Entry Point: 00d1a5d8
// Size: 56 bytes
// Signature: undefined __thiscall ~BlockingRng(BlockingRng * this)


/* CryptoPP::BlockingRng::~BlockingRng() */

void __thiscall CryptoPP::BlockingRng::~BlockingRng(BlockingRng *this)

{
  *(undefined ***)this = &PTR__BlockingRng_0100eae0;
                    /* try { // try from 00d1a5fc to 00d1a5ff has its CatchHandler @ 00d1a610 */
  close(*(int *)(this + 8));
  operator_delete(this);
  return;
}


