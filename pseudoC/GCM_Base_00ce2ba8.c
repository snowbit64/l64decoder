// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GCM_Base
// Entry Point: 00ce2ba8
// Size: 224 bytes
// Signature: undefined __thiscall ~GCM_Base(GCM_Base * this)


/* non-virtual thunk to CryptoPP::GCM_Base::~GCM_Base() */

void __thiscall CryptoPP::GCM_Base::~GCM_Base(GCM_Base *this)

{
  ulong uVar1;
  void *pvVar2;
  
  *(undefined ***)(this + -8) = &PTR__GCM_Base_010090c0;
  *(undefined ***)this = &PTR__GCM_Base_01009230;
  *(undefined ***)(this + 8) = &PTR__GCM_Base_010092e0;
  *(undefined ***)(this + 0x58) = &PTR__AdditiveCipherTemplate_00ff1588;
  *(undefined ***)(this + 0x88) = &PTR__AdditiveCipherTemplate_00ff1620;
  *(undefined ***)(this + 0xb0) = &PTR__AdditiveCipherTemplate_00ff16a0;
  pvVar2 = *(void **)(this + 0xd0);
  uVar1 = *(ulong *)(this + 0xc0);
  if (*(ulong *)(this + 200) <= *(ulong *)(this + 0xc0)) {
    uVar1 = *(ulong *)(this + 200);
  }
  *(undefined ***)(this + 0x50) = &PTR__AdditiveCipherTemplate_00ff1438;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00ce2c28 to 00ce2c2b has its CatchHandler @ 00ce2c8c */
  UnalignedDeallocate(pvVar2);
  CTR_ModePolicy::~CTR_ModePolicy((CTR_ModePolicy *)(this + 0x50));
  pvVar2 = *(void **)(this + 0x28);
  *(undefined ***)(this + -8) = &PTR__AuthenticatedSymmetricCipherBase_00feebe0;
  *(undefined ***)this = &PTR__AuthenticatedSymmetricCipherBase_00feed28;
  uVar1 = *(ulong *)(this + 0x18);
  if (*(ulong *)(this + 0x20) <= *(ulong *)(this + 0x18)) {
    uVar1 = *(ulong *)(this + 0x20);
  }
  *(undefined ***)(this + 8) = &PTR__AuthenticatedSymmetricCipherBase_00feedd8;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00ce2c78 to 00ce2c7b has its CatchHandler @ 00ce2c88 */
  UnalignedDeallocate(pvVar2);
  return;
}


