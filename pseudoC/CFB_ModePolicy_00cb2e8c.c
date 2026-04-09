// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CFB_ModePolicy
// Entry Point: 00cb2e8c
// Size: 164 bytes
// Signature: undefined __thiscall ~CFB_ModePolicy(CFB_ModePolicy * this)


/* CryptoPP::CFB_ModePolicy::~CFB_ModePolicy() */

void __thiscall CryptoPP::CFB_ModePolicy::~CFB_ModePolicy(CFB_ModePolicy *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x58);
  *(undefined ***)this = &PTR__CFB_ModePolicy_0100d4d8;
  *(undefined ***)(this + 8) = &PTR__CFB_ModePolicy_0100d5c8;
  uVar1 = *(ulong *)(this + 0x48);
  if (*(ulong *)(this + 0x50) <= *(ulong *)(this + 0x48)) {
    uVar1 = *(ulong *)(this + 0x50);
  }
  *(undefined ***)(this + 0x38) = &PTR__CFB_ModePolicy_0100d660;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00cb2ee0 to 00cb2ee3 has its CatchHandler @ 00cb2f34 */
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
                    /* try { // try from 00cb2f20 to 00cb2f23 has its CatchHandler @ 00cb2f30 */
  UnalignedDeallocate(pvVar2);
  return;
}


