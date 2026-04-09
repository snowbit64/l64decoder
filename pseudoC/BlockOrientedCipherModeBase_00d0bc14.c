// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BlockOrientedCipherModeBase
// Entry Point: 00d0bc14
// Size: 156 bytes
// Signature: undefined __thiscall ~BlockOrientedCipherModeBase(BlockOrientedCipherModeBase * this)


/* non-virtual thunk to CryptoPP::BlockOrientedCipherModeBase::~BlockOrientedCipherModeBase() */

void __thiscall
CryptoPP::BlockOrientedCipherModeBase::~BlockOrientedCipherModeBase
          (BlockOrientedCipherModeBase *this)

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
                    /* try { // try from 00d0bc60 to 00d0bc63 has its CatchHandler @ 00d0bcb4 */
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
                    /* try { // try from 00d0bca0 to 00d0bca3 has its CatchHandler @ 00d0bcb0 */
  UnalignedDeallocate(pvVar2);
  return;
}


