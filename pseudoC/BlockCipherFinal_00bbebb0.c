// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BlockCipherFinal
// Entry Point: 00bbebb0
// Size: 140 bytes
// Signature: undefined __thiscall ~BlockCipherFinal(BlockCipherFinal<(CryptoPP::CipherDir)0,CryptoPP::Rijndael::Enc> * this)


/* CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)0, CryptoPP::Rijndael::Enc>::~BlockCipherFinal()
    */

void __thiscall
CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)0,CryptoPP::Rijndael::Enc>::~BlockCipherFinal
          (BlockCipherFinal<(CryptoPP::CipherDir)0,CryptoPP::Rijndael::Enc> *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x50);
  *(undefined ***)this = &PTR__Base_0100fe98;
  *(undefined ***)(this + 8) = &PTR__Base_0100ff48;
  uVar1 = *(ulong *)(this + 0x40);
  if (*(ulong *)(this + 0x48) <= *(ulong *)(this + 0x40)) {
    uVar1 = *(ulong *)(this + 0x48);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00bbebfc to 00bbebff has its CatchHandler @ 00bbec40 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x30);
  uVar1 = *(ulong *)(this + 0x20);
  if (*(ulong *)(this + 0x28) <= *(ulong *)(this + 0x20)) {
    uVar1 = *(ulong *)(this + 0x28);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00bbec28 to 00bbec2b has its CatchHandler @ 00bbec3c */
  UnalignedDeallocate(pvVar2);
  operator_delete(this);
  return;
}


