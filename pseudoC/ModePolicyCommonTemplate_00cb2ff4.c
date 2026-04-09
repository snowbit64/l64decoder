// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ModePolicyCommonTemplate
// Entry Point: 00cb2ff4
// Size: 84 bytes
// Signature: undefined __thiscall ~ModePolicyCommonTemplate(ModePolicyCommonTemplate<CryptoPP::AdditiveCipherAbstractPolicy> * this)


/* CryptoPP::ModePolicyCommonTemplate<CryptoPP::AdditiveCipherAbstractPolicy>::~ModePolicyCommonTemplate()
    */

void __thiscall
CryptoPP::ModePolicyCommonTemplate<CryptoPP::AdditiveCipherAbstractPolicy>::
~ModePolicyCommonTemplate(ModePolicyCommonTemplate<CryptoPP::AdditiveCipherAbstractPolicy> *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x30);
  *(undefined ***)this = &PTR__CipherModeBase_0100d378;
  *(undefined ***)(this + 8) = &PTR__CipherModeBase_0100d428;
  uVar1 = *(ulong *)(this + 0x20);
  if (*(ulong *)(this + 0x28) <= *(ulong *)(this + 0x20)) {
    uVar1 = *(ulong *)(this + 0x28);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00cb303c to 00cb303f has its CatchHandler @ 00cb3048 */
  UnalignedDeallocate(pvVar2);
  return;
}


