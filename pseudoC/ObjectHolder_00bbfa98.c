// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ObjectHolder
// Entry Point: 00bbfa98
// Size: 136 bytes
// Signature: undefined __thiscall ~ObjectHolder(ObjectHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)1,CryptoPP::Rijndael::Dec>> * this)


/* CryptoPP::ObjectHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)1,
   CryptoPP::Rijndael::Dec> >::~ObjectHolder() */

void __thiscall
CryptoPP::ObjectHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)1,CryptoPP::Rijndael::Dec>>::
~ObjectHolder(ObjectHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)1,CryptoPP::Rijndael::Dec>>
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
                    /* try { // try from 00bbfae4 to 00bbfae7 has its CatchHandler @ 00bbfb24 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x30);
  uVar1 = *(ulong *)(this + 0x20);
  if (*(ulong *)(this + 0x28) <= *(ulong *)(this + 0x20)) {
    uVar1 = *(ulong *)(this + 0x28);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00bbfb10 to 00bbfb13 has its CatchHandler @ 00bbfb20 */
  UnalignedDeallocate(pvVar2);
  return;
}


