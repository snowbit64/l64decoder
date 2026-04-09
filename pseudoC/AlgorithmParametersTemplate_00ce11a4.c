// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AlgorithmParametersTemplate
// Entry Point: 00ce11a4
// Size: 36 bytes
// Signature: undefined __thiscall ~AlgorithmParametersTemplate(AlgorithmParametersTemplate<unsigned_int> * this)


/* CryptoPP::AlgorithmParametersTemplate<unsigned int>::~AlgorithmParametersTemplate() */

void __thiscall
CryptoPP::AlgorithmParametersTemplate<unsigned_int>::~AlgorithmParametersTemplate
          (AlgorithmParametersTemplate<unsigned_int> *this)

{
                    /* try { // try from 00ce11b4 to 00ce11b7 has its CatchHandler @ 00ce11c8 */
  AlgorithmParametersBase::~AlgorithmParametersBase((AlgorithmParametersBase *)this);
  operator_delete(this);
  return;
}


