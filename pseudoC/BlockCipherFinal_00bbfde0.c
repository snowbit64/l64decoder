// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BlockCipherFinal
// Entry Point: 00bbfde0
// Size: 136 bytes
// Signature: undefined __thiscall ~BlockCipherFinal(BlockCipherFinal<(CryptoPP::CipherDir)1,CryptoPP::Rijndael::Dec> * this)


/* non-virtual thunk to CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)1,
   CryptoPP::Rijndael::Dec>::~BlockCipherFinal() */

void __thiscall
CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)1,CryptoPP::Rijndael::Dec>::~BlockCipherFinal
          (BlockCipherFinal<(CryptoPP::CipherDir)1,CryptoPP::Rijndael::Dec> *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x48);
  *(undefined ***)(this + -8) = &PTR__Base_0100fe98;
  *(undefined ***)this = &PTR__Base_0100ff48;
  uVar1 = *(ulong *)(this + 0x38);
  if (*(ulong *)(this + 0x40) <= *(ulong *)(this + 0x38)) {
    uVar1 = *(ulong *)(this + 0x40);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00bbfe2c to 00bbfe2f has its CatchHandler @ 00bbfe6c */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x28);
  uVar1 = *(ulong *)(this + 0x18);
  if (*(ulong *)(this + 0x20) <= *(ulong *)(this + 0x18)) {
    uVar1 = *(ulong *)(this + 0x20);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00bbfe58 to 00bbfe5b has its CatchHandler @ 00bbfe68 */
  UnalignedDeallocate(pvVar2);
  return;
}


