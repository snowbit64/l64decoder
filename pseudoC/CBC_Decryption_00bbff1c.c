// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CBC_Decryption
// Entry Point: 00bbff1c
// Size: 96 bytes
// Signature: undefined __thiscall ~CBC_Decryption(CBC_Decryption * this)


/* CryptoPP::CBC_Decryption::~CBC_Decryption() */

void __thiscall CryptoPP::CBC_Decryption::~CBC_Decryption(CBC_Decryption *this)

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
                    /* try { // try from 00bbff68 to 00bbff6b has its CatchHandler @ 00bbff7c */
  UnalignedDeallocate(pvVar2);
  BlockOrientedCipherModeBase::~BlockOrientedCipherModeBase((BlockOrientedCipherModeBase *)this);
  return;
}


