// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~HMAC
// Entry Point: 00be5654
// Size: 224 bytes
// Signature: undefined __thiscall ~HMAC(HMAC<CryptoPP::SHA256> * this)


/* CryptoPP::HMAC<CryptoPP::SHA256>::~HMAC() */

void __thiscall CryptoPP::HMAC<CryptoPP::SHA256>::~HMAC(HMAC<CryptoPP::SHA256> *this)

{
  ulong uVar1;
  void *pvVar2;
  HMAC<CryptoPP::SHA256> *pHVar3;
  
  pHVar3 = *(HMAC<CryptoPP::SHA256> **)(this + 0x108);
  uVar1 = *(ulong *)(this + 0xf8);
  if (*(ulong *)(this + 0x100) <= *(ulong *)(this + 0xf8)) {
    uVar1 = *(ulong *)(this + 0x100);
  }
  if (this + 0xa8 + ((ulong)(uint)-(int)(this + 0xa8) & 8) == pHVar3) {
    this[0xf1] = (HMAC<CryptoPP::SHA256>)0x0;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)(pHVar3 + uVar1 * 4 + -4) = 0;
    }
  }
  pHVar3 = *(HMAC<CryptoPP::SHA256> **)(this + 0xa0);
  *(undefined ***)(this + 0x38) = &PTR__IteratedHash_00fe9de8;
  uVar1 = *(ulong *)(this + 0x90);
  if (*(ulong *)(this + 0x98) <= *(ulong *)(this + 0x90)) {
    uVar1 = *(ulong *)(this + 0x98);
  }
  if (pHVar3 == this + 0x48) {
    this[0x89] = (HMAC<CryptoPP::SHA256>)0x0;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)(pHVar3 + uVar1 * 4 + -4) = 0;
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
                    /* try { // try from 00be5724 to 00be572b has its CatchHandler @ 00be5734 */
  UnalignedDeallocate(pvVar2);
  return;
}


