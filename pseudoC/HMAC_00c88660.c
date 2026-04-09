// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~HMAC
// Entry Point: 00c88660
// Size: 212 bytes
// Signature: undefined __thiscall ~HMAC(HMAC<CryptoPP::SHA1> * this)


/* CryptoPP::HMAC<CryptoPP::SHA1>::~HMAC() */

void __thiscall CryptoPP::HMAC<CryptoPP::SHA1>::~HMAC(HMAC<CryptoPP::SHA1> *this)

{
  ulong uVar1;
  void *pvVar2;
  HMAC<CryptoPP::SHA1> *pHVar3;
  
  pHVar3 = *(HMAC<CryptoPP::SHA1> **)(this + 0x100);
  uVar1 = *(ulong *)(this + 0xf0);
  if (*(ulong *)(this + 0xf8) <= *(ulong *)(this + 0xf0)) {
    uVar1 = *(ulong *)(this + 0xf8);
  }
  if (pHVar3 == this + 0xa8) {
    this[0xe9] = (HMAC<CryptoPP::SHA1>)0x0;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)(pHVar3 + uVar1 * 4 + -4) = 0;
    }
  }
  pHVar3 = *(HMAC<CryptoPP::SHA1> **)(this + 0xa0);
  *(undefined ***)(this + 0x38) = &PTR__IteratedHash_00fe9de8;
  uVar1 = *(ulong *)(this + 0x90);
  if (*(ulong *)(this + 0x98) <= *(ulong *)(this + 0x90)) {
    uVar1 = *(ulong *)(this + 0x98);
  }
  if (pHVar3 == this + 0x48) {
    this[0x89] = (HMAC<CryptoPP::SHA1>)0x0;
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
                    /* try { // try from 00c88724 to 00c8872b has its CatchHandler @ 00c88734 */
  UnalignedDeallocate(pvVar2);
  return;
}


