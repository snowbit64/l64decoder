// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CipherModeFinalTemplate_ExternalCipher
// Entry Point: 00caf08c
// Size: 156 bytes
// Signature: undefined __thiscall ~CipherModeFinalTemplate_ExternalCipher(CipherModeFinalTemplate_ExternalCipher<CryptoPP::ECB_OneWay> * this)


/* non-virtual thunk to
   CryptoPP::CipherModeFinalTemplate_ExternalCipher<CryptoPP::ECB_OneWay>::~CipherModeFinalTemplate_ExternalCipher()
    */

void __thiscall
CryptoPP::CipherModeFinalTemplate_ExternalCipher<CryptoPP::ECB_OneWay>::
~CipherModeFinalTemplate_ExternalCipher
          (CipherModeFinalTemplate_ExternalCipher<CryptoPP::ECB_OneWay> *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x48);
  *(undefined ***)(this + -8) = &PTR__BlockOrientedCipherModeBase_0100d9a8;
  *(undefined ***)this = &PTR__BlockOrientedCipherModeBase_0100da78;
  uVar1 = *(ulong *)(this + 0x38);
  if (*(ulong *)(this + 0x40) <= *(ulong *)(this + 0x38)) {
    uVar1 = *(ulong *)(this + 0x40);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00caf0d8 to 00caf0db has its CatchHandler @ 00caf12c */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x28);
  *(undefined ***)(this + -8) = &PTR__CipherModeBase_0100d378;
  *(undefined ***)this = &PTR__CipherModeBase_0100d428;
  uVar1 = *(ulong *)(this + 0x18);
  if (*(ulong *)(this + 0x20) <= *(ulong *)(this + 0x18)) {
    uVar1 = *(ulong *)(this + 0x20);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00caf118 to 00caf11b has its CatchHandler @ 00caf128 */
  UnalignedDeallocate(pvVar2);
  return;
}


