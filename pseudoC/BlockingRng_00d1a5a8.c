// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BlockingRng
// Entry Point: 00d1a5a8
// Size: 44 bytes
// Signature: undefined __thiscall ~BlockingRng(BlockingRng * this)


/* CryptoPP::BlockingRng::~BlockingRng() */

int __thiscall CryptoPP::BlockingRng::~BlockingRng(BlockingRng *this)

{
  int iVar1;
  
  *(undefined ***)this = &PTR__BlockingRng_0100eae0;
                    /* try { // try from 00d1a5c4 to 00d1a5cb has its CatchHandler @ 00d1a5d4 */
  iVar1 = close(*(int *)(this + 8));
  return iVar1;
}


