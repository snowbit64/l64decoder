// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AlgorithmParametersTemplate
// Entry Point: 00cc0cf8
// Size: 108 bytes
// Signature: undefined __thiscall ~AlgorithmParametersTemplate(AlgorithmParametersTemplate<CryptoPP::Integer> * this)


/* CryptoPP::AlgorithmParametersTemplate<CryptoPP::Integer>::~AlgorithmParametersTemplate() */

void __thiscall
CryptoPP::AlgorithmParametersTemplate<CryptoPP::Integer>::~AlgorithmParametersTemplate
          (AlgorithmParametersTemplate<CryptoPP::Integer> *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x40);
  uVar1 = *(ulong *)(this + 0x30);
  if (*(ulong *)(this + 0x38) <= *(ulong *)(this + 0x30)) {
    uVar1 = *(ulong *)(this + 0x38);
  }
  *(undefined ***)this = &PTR__AlgorithmParametersTemplate_01003db0;
  *(undefined ***)(this + 0x20) = &PTR__Integer_0100c890;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00cc0d50 to 00cc0d53 has its CatchHandler @ 00cc0d64 */
  UnalignedDeallocate(pvVar2);
  AlgorithmParametersBase::~AlgorithmParametersBase((AlgorithmParametersBase *)this);
  return;
}


