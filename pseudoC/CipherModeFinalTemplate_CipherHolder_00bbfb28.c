// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CipherModeFinalTemplate_CipherHolder
// Entry Point: 00bbfb28
// Size: 208 bytes
// Signature: undefined __thiscall ~CipherModeFinalTemplate_CipherHolder(CipherModeFinalTemplate_CipherHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)1,CryptoPP::Rijndael::Dec>,CryptoPP::CBC_Decryption> * this)


/* CryptoPP::CipherModeFinalTemplate_CipherHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)1,
   CryptoPP::Rijndael::Dec>, CryptoPP::CBC_Decryption>::~CipherModeFinalTemplate_CipherHolder() */

void __thiscall
CryptoPP::
CipherModeFinalTemplate_CipherHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)1,CryptoPP::Rijndael::Dec>,CryptoPP::CBC_Decryption>
::~CipherModeFinalTemplate_CipherHolder
          (CipherModeFinalTemplate_CipherHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)1,CryptoPP::Rijndael::Dec>,CryptoPP::CBC_Decryption>
           *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x70);
  *(undefined ***)this = &PTR__CBC_Decryption_0100db28;
  *(undefined ***)(this + 8) = &PTR__CBC_Decryption_0100dc08;
  uVar1 = *(ulong *)(this + 0x60);
  if (*(ulong *)(this + 0x68) <= *(ulong *)(this + 0x60)) {
    uVar1 = *(ulong *)(this + 0x68);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00bbfb74 to 00bbfb77 has its CatchHandler @ 00bbfc00 */
  UnalignedDeallocate(pvVar2);
  BlockOrientedCipherModeBase::~BlockOrientedCipherModeBase((BlockOrientedCipherModeBase *)this);
  pvVar2 = *(void **)(this + 200);
  *(undefined ***)(this + 0x78) = &PTR__Base_0100fe98;
  *(undefined ***)(this + 0x80) = &PTR__Base_0100ff48;
  uVar1 = *(ulong *)(this + 0xb8);
  if (*(ulong *)(this + 0xc0) <= *(ulong *)(this + 0xb8)) {
    uVar1 = *(ulong *)(this + 0xc0);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00bbfbbc to 00bbfbbf has its CatchHandler @ 00bbfbfc */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0xa8);
  uVar1 = *(ulong *)(this + 0x98);
  if (*(ulong *)(this + 0xa0) <= *(ulong *)(this + 0x98)) {
    uVar1 = *(ulong *)(this + 0xa0);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00bbfbe8 to 00bbfbeb has its CatchHandler @ 00bbfbf8 */
  UnalignedDeallocate(pvVar2);
  return;
}


