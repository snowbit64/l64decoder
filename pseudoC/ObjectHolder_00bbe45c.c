// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ObjectHolder
// Entry Point: 00bbe45c
// Size: 136 bytes
// Signature: undefined __thiscall ~ObjectHolder(ObjectHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)0,CryptoPP::Rijndael::Enc>> * this)


/* CryptoPP::ObjectHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)0,
   CryptoPP::Rijndael::Enc> >::~ObjectHolder() */

void __thiscall
CryptoPP::ObjectHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)0,CryptoPP::Rijndael::Enc>>::
~ObjectHolder(ObjectHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)0,CryptoPP::Rijndael::Enc>>
              *this)

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
                    /* try { // try from 00bbe4a8 to 00bbe4ab has its CatchHandler @ 00bbe4e8 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x30);
  uVar1 = *(ulong *)(this + 0x20);
  if (*(ulong *)(this + 0x28) <= *(ulong *)(this + 0x20)) {
    uVar1 = *(ulong *)(this + 0x28);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00bbe4d4 to 00bbe4d7 has its CatchHandler @ 00bbe4e4 */
  UnalignedDeallocate(pvVar2);
  return;
}


