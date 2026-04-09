// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GCM_Base
// Entry Point: 00be8010
// Size: 224 bytes
// Signature: undefined __thiscall ~GCM_Base(GCM_Base * this)


/* CryptoPP::GCM_Base::~GCM_Base() */

void __thiscall CryptoPP::GCM_Base::~GCM_Base(GCM_Base *this)

{
  ulong uVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__GCM_Base_010090c0;
  *(undefined ***)(this + 8) = &PTR__GCM_Base_01009230;
  *(undefined ***)(this + 0x58) = &PTR__AdditiveCipherTemplate_00ff1438;
  *(undefined ***)(this + 0x10) = &PTR__GCM_Base_010092e0;
  *(undefined ***)(this + 0x60) = &PTR__AdditiveCipherTemplate_00ff1588;
  pvVar2 = *(void **)(this + 0xd8);
  *(undefined ***)(this + 0x90) = &PTR__AdditiveCipherTemplate_00ff1620;
  uVar1 = *(ulong *)(this + 200);
  if (*(ulong *)(this + 0xd0) <= *(ulong *)(this + 200)) {
    uVar1 = *(ulong *)(this + 0xd0);
  }
  *(undefined ***)(this + 0xb8) = &PTR__AdditiveCipherTemplate_00ff16a0;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00be8090 to 00be8093 has its CatchHandler @ 00be80f4 */
  UnalignedDeallocate(pvVar2);
  CTR_ModePolicy::~CTR_ModePolicy((CTR_ModePolicy *)(this + 0x58));
  pvVar2 = *(void **)(this + 0x30);
  *(undefined ***)this = &PTR__AuthenticatedSymmetricCipherBase_00feebe0;
  *(undefined ***)(this + 8) = &PTR__AuthenticatedSymmetricCipherBase_00feed28;
  uVar1 = *(ulong *)(this + 0x20);
  if (*(ulong *)(this + 0x28) <= *(ulong *)(this + 0x20)) {
    uVar1 = *(ulong *)(this + 0x28);
  }
  *(undefined ***)(this + 0x10) = &PTR__AuthenticatedSymmetricCipherBase_00feedd8;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00be80e0 to 00be80e3 has its CatchHandler @ 00be80f0 */
  UnalignedDeallocate(pvVar2);
  return;
}


