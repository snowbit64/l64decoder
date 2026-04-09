// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~HMAC_Base
// Entry Point: 00be59f4
// Size: 84 bytes
// Signature: undefined __thiscall ~HMAC_Base(HMAC_Base * this)


/* CryptoPP::HMAC_Base::~HMAC_Base() */

void __thiscall CryptoPP::HMAC_Base::~HMAC_Base(HMAC_Base *this)

{
  ulong uVar1;
  void *pvVar2;
  
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
                    /* try { // try from 00be5a3c to 00be5a3f has its CatchHandler @ 00be5a48 */
  UnalignedDeallocate(pvVar2);
  return;
}


