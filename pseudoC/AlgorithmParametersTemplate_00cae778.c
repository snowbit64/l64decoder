// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AlgorithmParametersTemplate
// Entry Point: 00cae778
// Size: 100 bytes
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
                    /* try { // try from 00cae7c0 to 00cae7c3 has its CatchHandler @ 00cae7f0 */
  UnalignedDeallocate(pvVar2);
                    /* try { // try from 00cae7c4 to 00cae7cb has its CatchHandler @ 00cae7dc */
  AlgorithmParametersBase::~AlgorithmParametersBase((AlgorithmParametersBase *)this);
  operator_delete(this);
  return;
}


