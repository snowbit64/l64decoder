// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CBC_CTS_Encryption
// Entry Point: 00d0c1c4
// Size: 160 bytes
// Signature: undefined __thiscall ~CBC_CTS_Encryption(CBC_CTS_Encryption * this)


/* CryptoPP::CBC_CTS_Encryption::~CBC_CTS_Encryption() */

void __thiscall CryptoPP::CBC_CTS_Encryption::~CBC_CTS_Encryption(CBC_CTS_Encryption *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x50);
  *(undefined ***)this = &PTR__BlockOrientedCipherModeBase_0100d9a8;
  *(undefined ***)(this + 8) = &PTR__BlockOrientedCipherModeBase_0100da78;
  uVar1 = *(ulong *)(this + 0x40);
  if (*(ulong *)(this + 0x48) <= *(ulong *)(this + 0x40)) {
    uVar1 = *(ulong *)(this + 0x48);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00d0c210 to 00d0c213 has its CatchHandler @ 00d0c268 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x30);
  *(undefined ***)this = &PTR__CipherModeBase_0100d378;
  *(undefined ***)(this + 8) = &PTR__CipherModeBase_0100d428;
  uVar1 = *(ulong *)(this + 0x20);
  if (*(ulong *)(this + 0x28) <= *(ulong *)(this + 0x20)) {
    uVar1 = *(ulong *)(this + 0x28);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00d0c250 to 00d0c253 has its CatchHandler @ 00d0c264 */
  UnalignedDeallocate(pvVar2);
  operator_delete(this);
  return;
}


