// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CipherModeFinalTemplate_CipherHolder
// Entry Point: 00bbe4ec
// Size: 140 bytes
// Signature: undefined __thiscall ~CipherModeFinalTemplate_CipherHolder(CipherModeFinalTemplate_CipherHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)0,CryptoPP::Rijndael::Enc>,CryptoPP::CBC_Encryption> * this)


/* CryptoPP::CipherModeFinalTemplate_CipherHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)0,
   CryptoPP::Rijndael::Enc>, CryptoPP::CBC_Encryption>::~CipherModeFinalTemplate_CipherHolder() */

void __thiscall
CryptoPP::
CipherModeFinalTemplate_CipherHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)0,CryptoPP::Rijndael::Enc>,CryptoPP::CBC_Encryption>
::~CipherModeFinalTemplate_CipherHolder
          (CipherModeFinalTemplate_CipherHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)0,CryptoPP::Rijndael::Enc>,CryptoPP::CBC_Encryption>
           *this)

{
  ulong uVar1;
  void *pvVar2;
  
  BlockOrientedCipherModeBase::~BlockOrientedCipherModeBase((BlockOrientedCipherModeBase *)this);
  pvVar2 = *(void **)(this + 0xa8);
  *(undefined ***)(this + 0x58) = &PTR__Base_0100fe98;
  *(undefined ***)(this + 0x60) = &PTR__Base_0100ff48;
  uVar1 = *(ulong *)(this + 0x98);
  if (*(ulong *)(this + 0xa0) <= *(ulong *)(this + 0x98)) {
    uVar1 = *(ulong *)(this + 0xa0);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00bbe53c to 00bbe53f has its CatchHandler @ 00bbe57c */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x88);
  uVar1 = *(ulong *)(this + 0x78);
  if (*(ulong *)(this + 0x80) <= *(ulong *)(this + 0x78)) {
    uVar1 = *(ulong *)(this + 0x80);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00bbe568 to 00bbe56b has its CatchHandler @ 00bbe578 */
  UnalignedDeallocate(pvVar2);
  return;
}


