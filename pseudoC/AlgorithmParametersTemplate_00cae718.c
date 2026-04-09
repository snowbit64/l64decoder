// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AlgorithmParametersTemplate
// Entry Point: 00cae718
// Size: 92 bytes
// Signature: undefined __thiscall ~AlgorithmParametersTemplate(AlgorithmParametersTemplate<CryptoPP::ConstByteArrayParameter> * this)


/* CryptoPP::AlgorithmParametersTemplate<CryptoPP::ConstByteArrayParameter>::~AlgorithmParametersTemplate()
    */

void __thiscall
CryptoPP::AlgorithmParametersTemplate<CryptoPP::ConstByteArrayParameter>::
~AlgorithmParametersTemplate(AlgorithmParametersTemplate<CryptoPP::ConstByteArrayParameter> *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x50);
  *(undefined ***)this = &PTR__AlgorithmParametersTemplate_00ff0f20;
  uVar1 = *(ulong *)(this + 0x40);
  if (*(ulong *)(this + 0x48) <= *(ulong *)(this + 0x40)) {
    uVar1 = *(ulong *)(this + 0x48);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00cae760 to 00cae763 has its CatchHandler @ 00cae774 */
  UnalignedDeallocate(pvVar2);
  AlgorithmParametersBase::~AlgorithmParametersBase((AlgorithmParametersBase *)this);
  return;
}


