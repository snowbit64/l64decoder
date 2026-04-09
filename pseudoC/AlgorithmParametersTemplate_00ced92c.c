// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AlgorithmParametersTemplate
// Entry Point: 00ced92c
// Size: 36 bytes
// Signature: undefined __thiscall ~AlgorithmParametersTemplate(AlgorithmParametersTemplate<unsigned_char_const*> * this)


/* CryptoPP::AlgorithmParametersTemplate<unsigned char const*>::~AlgorithmParametersTemplate() */

void __thiscall
CryptoPP::AlgorithmParametersTemplate<unsigned_char_const*>::~AlgorithmParametersTemplate
          (AlgorithmParametersTemplate<unsigned_char_const*> *this)

{
                    /* try { // try from 00ced93c to 00ced93f has its CatchHandler @ 00ced950 */
  AlgorithmParametersBase::~AlgorithmParametersBase((AlgorithmParametersBase *)this);
  operator_delete(this);
  return;
}


