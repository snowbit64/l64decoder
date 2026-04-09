// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~HMAC
// Entry Point: 00c8bf50
// Size: 224 bytes
// Signature: undefined __thiscall ~HMAC(HMAC<CryptoPP::SHA512> * this)


/* CryptoPP::HMAC<CryptoPP::SHA512>::~HMAC() */

void __thiscall CryptoPP::HMAC<CryptoPP::SHA512>::~HMAC(HMAC<CryptoPP::SHA512> *this)

{
  ulong uVar1;
  void *pvVar2;
  HMAC<CryptoPP::SHA512> *pHVar3;
  
  pHVar3 = *(HMAC<CryptoPP::SHA512> **)(this + 400);
  uVar1 = *(ulong *)(this + 0x180);
  if (*(ulong *)(this + 0x188) <= *(ulong *)(this + 0x180)) {
    uVar1 = *(ulong *)(this + 0x188);
  }
  if (this + 0xf0 + ((ulong)(uint)-(int)(this + 0xf0) & 8) == pHVar3) {
    this[0x179] = (HMAC<CryptoPP::SHA512>)0x0;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined8 *)(pHVar3 + uVar1 * 8 + -8) = 0;
    }
  }
  pHVar3 = *(HMAC<CryptoPP::SHA512> **)(this + 0xe8);
  *(undefined ***)(this + 0x38) = &PTR__IteratedHash_01000e98;
  uVar1 = *(ulong *)(this + 0xd8);
  if (*(ulong *)(this + 0xe0) <= *(ulong *)(this + 0xd8)) {
    uVar1 = *(ulong *)(this + 0xe0);
  }
  if (pHVar3 == this + 0x50) {
    this[0xd1] = (HMAC<CryptoPP::SHA512>)0x0;
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
                    /* try { // try from 00c8c020 to 00c8c027 has its CatchHandler @ 00c8c030 */
  UnalignedDeallocate(pvVar2);
  return;
}


