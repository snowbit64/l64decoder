// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CipherModeBase
// Entry Point: 00d0bb64
// Size: 84 bytes
// Signature: undefined __thiscall ~CipherModeBase(CipherModeBase * this)


/* non-virtual thunk to CryptoPP::CipherModeBase::~CipherModeBase() */

void __thiscall CryptoPP::CipherModeBase::~CipherModeBase(CipherModeBase *this)

{
  ulong uVar1;
  void *pvVar2;
  
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
                    /* try { // try from 00d0bbac to 00d0bbaf has its CatchHandler @ 00d0bbb8 */
  UnalignedDeallocate(pvVar2);
  return;
}


