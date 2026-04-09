// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AlgorithmParametersTemplate
// Entry Point: 00d05f14
// Size: 36 bytes
// Signature: undefined __thiscall ~AlgorithmParametersTemplate(AlgorithmParametersTemplate<CryptoPP::Integer::RandomNumberType> * this)


/* CryptoPP::AlgorithmParametersTemplate<CryptoPP::Integer::RandomNumberType>::~AlgorithmParametersTemplate()
    */

void __thiscall
CryptoPP::AlgorithmParametersTemplate<CryptoPP::Integer::RandomNumberType>::
~AlgorithmParametersTemplate(AlgorithmParametersTemplate<CryptoPP::Integer::RandomNumberType> *this)

{
                    /* try { // try from 00d05f24 to 00d05f27 has its CatchHandler @ 00d05f38 */
  AlgorithmParametersBase::~AlgorithmParametersBase((AlgorithmParametersBase *)this);
  operator_delete(this);
  return;
}


