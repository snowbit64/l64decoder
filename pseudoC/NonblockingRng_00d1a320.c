// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NonblockingRng
// Entry Point: 00d1a320
// Size: 44 bytes
// Signature: undefined __thiscall ~NonblockingRng(NonblockingRng * this)


/* CryptoPP::NonblockingRng::~NonblockingRng() */

int __thiscall CryptoPP::NonblockingRng::~NonblockingRng(NonblockingRng *this)

{
  int iVar1;
  
  *(undefined ***)this = &PTR__NonblockingRng_0100ea50;
                    /* try { // try from 00d1a33c to 00d1a343 has its CatchHandler @ 00d1a34c */
  iVar1 = close(*(int *)(this + 8));
  return iVar1;
}


