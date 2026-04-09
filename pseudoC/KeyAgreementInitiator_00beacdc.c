// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~KeyAgreementInitiator
// Entry Point: 00beacdc
// Size: 188 bytes
// Signature: undefined __thiscall ~KeyAgreementInitiator(KeyAgreementInitiator * this)


/* KeyAgreementInitiator::~KeyAgreementInitiator() */

void __thiscall KeyAgreementInitiator::~KeyAgreementInitiator(KeyAgreementInitiator *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x1e0);
  uVar1 = *(ulong *)(this + 0x1d0);
  if (*(ulong *)(this + 0x1d8) <= *(ulong *)(this + 0x1d0)) {
    uVar1 = *(ulong *)(this + 0x1d8);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00bead14 to 00bead17 has its CatchHandler @ 00beada0 */
  CryptoPP::UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x1c0);
  uVar1 = *(ulong *)(this + 0x1b0);
  if (*(ulong *)(this + 0x1b8) <= *(ulong *)(this + 0x1b0)) {
    uVar1 = *(ulong *)(this + 0x1b8);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00bead40 to 00bead43 has its CatchHandler @ 00bead9c */
  CryptoPP::UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x1a0);
  uVar1 = *(ulong *)(this + 400);
  if (*(ulong *)(this + 0x198) <= *(ulong *)(this + 400)) {
    uVar1 = *(ulong *)(this + 0x198);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00bead6c to 00bead6f has its CatchHandler @ 00bead98 */
  CryptoPP::UnalignedDeallocate(pvVar2);
  *(undefined ***)(this + 8) = &PTR__DH_Domain_00fe9f08;
  CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::~DL_GroupParameters_EC
            ((DL_GroupParameters_EC<CryptoPP::ECP> *)(this + 0x10));
  return;
}


