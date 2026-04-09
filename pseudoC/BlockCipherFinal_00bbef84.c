// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BlockCipherFinal
// Entry Point: 00bbef84
// Size: 148 bytes
// Signature: undefined __thiscall ~BlockCipherFinal(BlockCipherFinal<(CryptoPP::CipherDir)0,CryptoPP::Rijndael::Enc> * this)


/* non-virtual thunk to CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)0,
   CryptoPP::Rijndael::Enc>::~BlockCipherFinal() */

void __thiscall
CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)0,CryptoPP::Rijndael::Enc>::~BlockCipherFinal
          (BlockCipherFinal<(CryptoPP::CipherDir)0,CryptoPP::Rijndael::Enc> *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x48);
  *(undefined ***)this = &PTR__Base_0100ff48;
  uVar1 = *(ulong *)(this + 0x38);
  if (*(ulong *)(this + 0x40) <= *(ulong *)(this + 0x38)) {
    uVar1 = *(ulong *)(this + 0x40);
  }
  *(undefined ***)(this + -8) = &PTR__Base_0100fe98;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00bbefd8 to 00bbefdb has its CatchHandler @ 00bbf01c */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x28);
  uVar1 = *(ulong *)(this + 0x18);
  if (*(ulong *)(this + 0x20) <= *(ulong *)(this + 0x18)) {
    uVar1 = *(ulong *)(this + 0x20);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00bbf004 to 00bbf007 has its CatchHandler @ 00bbf018 */
  UnalignedDeallocate(pvVar2);
  operator_delete(this + -8);
  return;
}


