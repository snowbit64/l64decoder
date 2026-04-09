// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~OFB_ModePolicy
// Entry Point: 00d0bd70
// Size: 84 bytes
// Signature: undefined __thiscall ~OFB_ModePolicy(OFB_ModePolicy * this)


/* non-virtual thunk to CryptoPP::OFB_ModePolicy::~OFB_ModePolicy() */

void __thiscall CryptoPP::OFB_ModePolicy::~OFB_ModePolicy(OFB_ModePolicy *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + -8);
  *(undefined ***)(this + -0x38) = &PTR__CipherModeBase_0100d378;
  *(undefined ***)(this + -0x30) = &PTR__CipherModeBase_0100d428;
  uVar1 = *(ulong *)(this + -0x18);
  if (*(ulong *)(this + -0x10) <= *(ulong *)(this + -0x18)) {
    uVar1 = *(ulong *)(this + -0x10);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00d0bdb8 to 00d0bdbb has its CatchHandler @ 00d0bdc4 */
  UnalignedDeallocate(pvVar2);
  return;
}


