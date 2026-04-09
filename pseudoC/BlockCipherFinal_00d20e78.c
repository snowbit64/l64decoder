// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BlockCipherFinal
// Entry Point: 00d20e78
// Size: 140 bytes
// Signature: undefined __thiscall ~BlockCipherFinal(BlockCipherFinal<(CryptoPP::CipherDir)0,CryptoPP::MDC<CryptoPP::SHA1>::Enc> * this)


/* CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)0,
   CryptoPP::MDC<CryptoPP::SHA1>::Enc>::~BlockCipherFinal() */

void __thiscall
CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)0,CryptoPP::MDC<CryptoPP::SHA1>::Enc>::
~BlockCipherFinal(BlockCipherFinal<(CryptoPP::CipherDir)0,CryptoPP::MDC<CryptoPP::SHA1>::Enc> *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x48);
  *(undefined ***)this = &PTR__Enc_0100f810;
  *(undefined ***)(this + 8) = &PTR__Enc_0100f8c8;
  uVar1 = *(ulong *)(this + 0x38);
  if (*(ulong *)(this + 0x40) <= *(ulong *)(this + 0x38)) {
    uVar1 = *(ulong *)(this + 0x40);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00d20ec4 to 00d20ec7 has its CatchHandler @ 00d20f08 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x28);
  uVar1 = *(ulong *)(this + 0x18);
  if (*(ulong *)(this + 0x20) <= *(ulong *)(this + 0x18)) {
    uVar1 = *(ulong *)(this + 0x20);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00d20ef0 to 00d20ef3 has its CatchHandler @ 00d20f04 */
  UnalignedDeallocate(pvVar2);
  operator_delete(this);
  return;
}


