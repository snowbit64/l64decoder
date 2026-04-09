// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~HMAC
// Entry Point: 00c8b0d0
// Size: 224 bytes
// Signature: undefined __thiscall ~HMAC(HMAC<CryptoPP::SHA384> * this)


/* CryptoPP::HMAC<CryptoPP::SHA384>::~HMAC() */

void __thiscall CryptoPP::HMAC<CryptoPP::SHA384>::~HMAC(HMAC<CryptoPP::SHA384> *this)

{
  ulong uVar1;
  void *pvVar2;
  HMAC<CryptoPP::SHA384> *pHVar3;
  
  pHVar3 = *(HMAC<CryptoPP::SHA384> **)(this + 400);
  uVar1 = *(ulong *)(this + 0x180);
  if (*(ulong *)(this + 0x188) <= *(ulong *)(this + 0x180)) {
    uVar1 = *(ulong *)(this + 0x188);
  }
  if (this + 0xf0 + ((ulong)(uint)-(int)(this + 0xf0) & 8) == pHVar3) {
    this[0x179] = (HMAC<CryptoPP::SHA384>)0x0;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined8 *)(pHVar3 + uVar1 * 8 + -8) = 0;
    }
  }
  pHVar3 = *(HMAC<CryptoPP::SHA384> **)(this + 0xe8);
  *(undefined ***)(this + 0x38) = &PTR__IteratedHash_01000e98;
  uVar1 = *(ulong *)(this + 0xd8);
  if (*(ulong *)(this + 0xe0) <= *(ulong *)(this + 0xd8)) {
    uVar1 = *(ulong *)(this + 0xe0);
  }
  if (pHVar3 == this + 0x50) {
    this[0xd1] = (HMAC<CryptoPP::SHA384>)0x0;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined8 *)(pHVar3 + uVar1 * 8 + -8) = 0;
    }
  }
  pvVar2 = *(void **)(this + 0x28);
  *(undefined ***)this = &PTR__HMAC_Base_0100c658;
  *(undefined ***)(this + 8) = &PTR__HMAC_Base_0100c718;
  uVar1 = *(ulong *)(this + 0x18);
  if (*(ulong *)(this + 0x20) <= *(ulong *)(this + 0x18)) {
    uVar1 = *(ulong *)(this + 0x20);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00c8b1a0 to 00c8b1a7 has its CatchHandler @ 00c8b1b0 */
  UnalignedDeallocate(pvVar2);
  return;
}


