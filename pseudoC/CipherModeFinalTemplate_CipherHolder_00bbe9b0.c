// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CipherModeFinalTemplate_CipherHolder
// Entry Point: 00bbe9b0
// Size: 152 bytes
// Signature: undefined __thiscall ~CipherModeFinalTemplate_CipherHolder(CipherModeFinalTemplate_CipherHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)0,CryptoPP::Rijndael::Enc>,CryptoPP::CBC_Encryption> * this)


/* non-virtual thunk to
   CryptoPP::CipherModeFinalTemplate_CipherHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)0,
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
  
  BlockOrientedCipherModeBase::~BlockOrientedCipherModeBase
            ((BlockOrientedCipherModeBase *)(this + -8));
  pvVar2 = *(void **)(this + 0xa0);
  *(undefined ***)(this + 0x50) = &PTR__Base_0100fe98;
  *(undefined ***)(this + 0x58) = &PTR__Base_0100ff48;
  uVar1 = *(ulong *)(this + 0x90);
  if (*(ulong *)(this + 0x98) <= *(ulong *)(this + 0x90)) {
    uVar1 = *(ulong *)(this + 0x98);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00bbea08 to 00bbea0b has its CatchHandler @ 00bbea4c */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x80);
  uVar1 = *(ulong *)(this + 0x70);
  if (*(ulong *)(this + 0x78) <= *(ulong *)(this + 0x70)) {
    uVar1 = *(ulong *)(this + 0x78);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00bbea34 to 00bbea37 has its CatchHandler @ 00bbea48 */
  UnalignedDeallocate(pvVar2);
  operator_delete((BlockOrientedCipherModeBase *)(this + -8));
  return;
}


