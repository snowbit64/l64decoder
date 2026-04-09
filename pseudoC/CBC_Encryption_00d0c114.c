// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CBC_Encryption
// Entry Point: 00d0c114
// Size: 168 bytes
// Signature: undefined __thiscall ~CBC_Encryption(CBC_Encryption * this)


/* non-virtual thunk to CryptoPP::CBC_Encryption::~CBC_Encryption() */

void __thiscall CryptoPP::CBC_Encryption::~CBC_Encryption(CBC_Encryption *this)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  pvVar2 = *(void **)(this + 0x48);
  *(undefined ***)this = &PTR__BlockOrientedCipherModeBase_0100da78;
  uVar1 = *(ulong *)(this + 0x38);
  if (*(ulong *)(this + 0x40) <= *(ulong *)(this + 0x38)) {
    uVar1 = *(ulong *)(this + 0x40);
  }
  puVar3 = (undefined8 *)(this + -8);
  *puVar3 = &PTR__BlockOrientedCipherModeBase_0100d9a8;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00d0c168 to 00d0c16b has its CatchHandler @ 00d0c1c0 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x28);
  *puVar3 = &PTR__CipherModeBase_0100d378;
  *(undefined ***)this = &PTR__CipherModeBase_0100d428;
  uVar1 = *(ulong *)(this + 0x18);
  if (*(ulong *)(this + 0x20) <= *(ulong *)(this + 0x18)) {
    uVar1 = *(ulong *)(this + 0x20);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00d0c1a8 to 00d0c1ab has its CatchHandler @ 00d0c1bc */
  UnalignedDeallocate(pvVar2);
  operator_delete(puVar3);
  return;
}


