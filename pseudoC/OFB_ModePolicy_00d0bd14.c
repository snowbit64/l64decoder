// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~OFB_ModePolicy
// Entry Point: 00d0bd14
// Size: 84 bytes
// Signature: undefined __thiscall ~OFB_ModePolicy(OFB_ModePolicy * this)


/* non-virtual thunk to CryptoPP::OFB_ModePolicy::~OFB_ModePolicy() */

void __thiscall CryptoPP::OFB_ModePolicy::~OFB_ModePolicy(OFB_ModePolicy *this)

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
                    /* try { // try from 00d0bd5c to 00d0bd5f has its CatchHandler @ 00d0bd68 */
  UnalignedDeallocate(pvVar2);
  return;
}


