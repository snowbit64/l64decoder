// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BlockOrientedCipherModeBase
// Entry Point: 00bbf4fc
// Size: 156 bytes
// Signature: undefined __thiscall ~BlockOrientedCipherModeBase(BlockOrientedCipherModeBase * this)


/* CryptoPP::BlockOrientedCipherModeBase::~BlockOrientedCipherModeBase() */

void __thiscall
CryptoPP::BlockOrientedCipherModeBase::~BlockOrientedCipherModeBase
          (BlockOrientedCipherModeBase *this)

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
                    /* try { // try from 00bbf548 to 00bbf54b has its CatchHandler @ 00bbf59c */
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
                    /* try { // try from 00bbf588 to 00bbf58b has its CatchHandler @ 00bbf598 */
  UnalignedDeallocate(pvVar2);
  return;
}


