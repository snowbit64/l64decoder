// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CBC_CTS_Encryption
// Entry Point: 00d0c26c
// Size: 156 bytes
// Signature: undefined __thiscall ~CBC_CTS_Encryption(CBC_CTS_Encryption * this)


/* non-virtual thunk to CryptoPP::CBC_CTS_Encryption::~CBC_CTS_Encryption() */

void __thiscall CryptoPP::CBC_CTS_Encryption::~CBC_CTS_Encryption(CBC_CTS_Encryption *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x48);
  *(undefined ***)(this + -8) = &PTR__BlockOrientedCipherModeBase_0100d9a8;
  *(undefined ***)this = &PTR__BlockOrientedCipherModeBase_0100da78;
  uVar1 = *(ulong *)(this + 0x38);
  if (*(ulong *)(this + 0x40) <= *(ulong *)(this + 0x38)) {
    uVar1 = *(ulong *)(this + 0x40);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00d0c2b8 to 00d0c2bb has its CatchHandler @ 00d0c30c */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x28);
  *(undefined ***)(this + -8) = &PTR__CipherModeBase_0100d378;
  *(undefined ***)this = &PTR__CipherModeBase_0100d428;
  uVar1 = *(ulong *)(this + 0x18);
  if (*(ulong *)(this + 0x20) <= *(ulong *)(this + 0x18)) {
    uVar1 = *(ulong *)(this + 0x20);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00d0c2f8 to 00d0c2fb has its CatchHandler @ 00d0c308 */
  UnalignedDeallocate(pvVar2);
  return;
}


