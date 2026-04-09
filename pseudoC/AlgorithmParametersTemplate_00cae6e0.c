// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AlgorithmParametersTemplate
// Entry Point: 00cae6e0
// Size: 36 bytes
// Signature: undefined __thiscall ~AlgorithmParametersTemplate(AlgorithmParametersTemplate<int> * this)


/* CryptoPP::AlgorithmParametersTemplate<int>::~AlgorithmParametersTemplate() */

void __thiscall
CryptoPP::AlgorithmParametersTemplate<int>::~AlgorithmParametersTemplate
          (AlgorithmParametersTemplate<int> *this)

{
                    /* try { // try from 00cae6f0 to 00cae6f3 has its CatchHandler @ 00cae704 */
  AlgorithmParametersBase::~AlgorithmParametersBase((AlgorithmParametersBase *)this);
  operator_delete(this);
  return;
}


