// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AlgorithmParameters
// Entry Point: 00c73d6c
// Size: 68 bytes
// Signature: undefined __thiscall ~AlgorithmParameters(AlgorithmParameters * this)


/* CryptoPP::AlgorithmParameters::~AlgorithmParameters() */

void __thiscall CryptoPP::AlgorithmParameters::~AlgorithmParameters(AlgorithmParameters *this)

{
  *(undefined ***)this = &PTR__AlgorithmParameters_00feeb08;
  if (*(long **)(this + 8) != (long *)0x0) {
                    /* try { // try from 00c73d9c to 00c73d9f has its CatchHandler @ 00c73db0 */
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  operator_delete(this);
  return;
}


