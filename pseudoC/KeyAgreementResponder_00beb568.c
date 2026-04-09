// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~KeyAgreementResponder
// Entry Point: 00beb568
// Size: 240 bytes
// Signature: undefined __thiscall ~KeyAgreementResponder(KeyAgreementResponder * this)


/* KeyAgreementResponder::~KeyAgreementResponder() */

void __thiscall KeyAgreementResponder::~KeyAgreementResponder(KeyAgreementResponder *this)

{
  ulong uVar1;
  void *pvVar2;
  
  Mutex::~Mutex((Mutex *)(this + 0x208));
  pvVar2 = *(void **)(this + 0x200);
  uVar1 = *(ulong *)(this + 0x1f0);
  if (*(ulong *)(this + 0x1f8) <= *(ulong *)(this + 0x1f0)) {
    uVar1 = *(ulong *)(this + 0x1f8);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00beb5a8 to 00beb5ab has its CatchHandler @ 00beb664 */
  CryptoPP::UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x1e0);
  uVar1 = *(ulong *)(this + 0x1d0);
  if (*(ulong *)(this + 0x1d8) <= *(ulong *)(this + 0x1d0)) {
    uVar1 = *(ulong *)(this + 0x1d8);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00beb5d4 to 00beb5d7 has its CatchHandler @ 00beb660 */
  CryptoPP::UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x1c0);
  uVar1 = *(ulong *)(this + 0x1b0);
  if (*(ulong *)(this + 0x1b8) <= *(ulong *)(this + 0x1b0)) {
    uVar1 = *(ulong *)(this + 0x1b8);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00beb600 to 00beb603 has its CatchHandler @ 00beb65c */
  CryptoPP::UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x1a0);
  uVar1 = *(ulong *)(this + 400);
  if (*(ulong *)(this + 0x198) <= *(ulong *)(this + 400)) {
    uVar1 = *(ulong *)(this + 0x198);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00beb62c to 00beb62f has its CatchHandler @ 00beb658 */
  CryptoPP::UnalignedDeallocate(pvVar2);
  *(undefined ***)(this + 8) = &PTR__DH_Domain_00fe9f08;
  CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::~DL_GroupParameters_EC
            ((DL_GroupParameters_EC<CryptoPP::ECP> *)(this + 0x10));
  return;
}


