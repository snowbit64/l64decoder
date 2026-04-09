// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AlgorithmParametersTemplate
// Entry Point: 00cb9014
// Size: 36 bytes
// Signature: undefined __thiscall ~AlgorithmParametersTemplate(AlgorithmParametersTemplate<int_const*> * this)


/* CryptoPP::AlgorithmParametersTemplate<int const*>::~AlgorithmParametersTemplate() */

void __thiscall
CryptoPP::AlgorithmParametersTemplate<int_const*>::~AlgorithmParametersTemplate
          (AlgorithmParametersTemplate<int_const*> *this)

{
                    /* try { // try from 00cb9024 to 00cb9027 has its CatchHandler @ 00cb9038 */
  AlgorithmParametersBase::~AlgorithmParametersBase((AlgorithmParametersBase *)this);
  operator_delete(this);
  return;
}


