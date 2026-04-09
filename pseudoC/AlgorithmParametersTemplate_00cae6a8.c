// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AlgorithmParametersTemplate
// Entry Point: 00cae6a8
// Size: 36 bytes
// Signature: undefined __thiscall ~AlgorithmParametersTemplate(AlgorithmParametersTemplate<bool> * this)


/* CryptoPP::AlgorithmParametersTemplate<bool>::~AlgorithmParametersTemplate() */

void __thiscall
CryptoPP::AlgorithmParametersTemplate<bool>::~AlgorithmParametersTemplate
          (AlgorithmParametersTemplate<bool> *this)

{
                    /* try { // try from 00cae6b8 to 00cae6bb has its CatchHandler @ 00cae6cc */
  AlgorithmParametersBase::~AlgorithmParametersBase((AlgorithmParametersBase *)this);
  operator_delete(this);
  return;
}


