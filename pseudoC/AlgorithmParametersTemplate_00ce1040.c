// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AlgorithmParametersTemplate
// Entry Point: 00ce1040
// Size: 36 bytes
// Signature: undefined __thiscall ~AlgorithmParametersTemplate(AlgorithmParametersTemplate<CryptoPP::BlockPaddingSchemeDef::BlockPaddingScheme> * this)


/* CryptoPP::AlgorithmParametersTemplate<CryptoPP::BlockPaddingSchemeDef::BlockPaddingScheme>::~AlgorithmParametersTemplate()
    */

void __thiscall
CryptoPP::AlgorithmParametersTemplate<CryptoPP::BlockPaddingSchemeDef::BlockPaddingScheme>::
~AlgorithmParametersTemplate
          (AlgorithmParametersTemplate<CryptoPP::BlockPaddingSchemeDef::BlockPaddingScheme> *this)

{
                    /* try { // try from 00ce1050 to 00ce1053 has its CatchHandler @ 00ce1064 */
  AlgorithmParametersBase::~AlgorithmParametersBase((AlgorithmParametersBase *)this);
  operator_delete(this);
  return;
}


