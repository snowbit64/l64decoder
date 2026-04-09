// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ECB_OneWay
// Entry Point: 00d0bdcc
// Size: 160 bytes
// Signature: undefined __thiscall ~ECB_OneWay(ECB_OneWay * this)


/* CryptoPP::ECB_OneWay::~ECB_OneWay() */

void __thiscall CryptoPP::ECB_OneWay::~ECB_OneWay(ECB_OneWay *this)

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
                    /* try { // try from 00d0be18 to 00d0be1b has its CatchHandler @ 00d0be70 */
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
                    /* try { // try from 00d0be58 to 00d0be5b has its CatchHandler @ 00d0be6c */
  UnalignedDeallocate(pvVar2);
  operator_delete(this);
  return;
}


