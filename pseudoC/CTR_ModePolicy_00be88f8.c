// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CTR_ModePolicy
// Entry Point: 00be88f8
// Size: 164 bytes
// Signature: undefined __thiscall ~CTR_ModePolicy(CTR_ModePolicy * this)


/* CryptoPP::CTR_ModePolicy::~CTR_ModePolicy() */

void __thiscall CryptoPP::CTR_ModePolicy::~CTR_ModePolicy(CTR_ModePolicy *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x58);
  *(undefined ***)this = &PTR__CTR_ModePolicy_0100d728;
  *(undefined ***)(this + 8) = &PTR__CTR_ModePolicy_0100d830;
  uVar1 = *(ulong *)(this + 0x48);
  if (*(ulong *)(this + 0x50) <= *(ulong *)(this + 0x48)) {
    uVar1 = *(ulong *)(this + 0x50);
  }
  *(undefined ***)(this + 0x38) = &PTR__CTR_ModePolicy_0100d8c8;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00be894c to 00be894f has its CatchHandler @ 00be89a0 */
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
                    /* try { // try from 00be898c to 00be898f has its CatchHandler @ 00be899c */
  UnalignedDeallocate(pvVar2);
  return;
}


