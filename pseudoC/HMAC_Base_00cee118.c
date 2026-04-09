// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~HMAC_Base
// Entry Point: 00cee118
// Size: 84 bytes
// Signature: undefined __thiscall ~HMAC_Base(HMAC_Base * this)


/* non-virtual thunk to CryptoPP::HMAC_Base::~HMAC_Base() */

void __thiscall CryptoPP::HMAC_Base::~HMAC_Base(HMAC_Base *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x20);
  *(undefined ***)(this + -8) = &PTR__HMAC_Base_0100c658;
  *(undefined ***)this = &PTR__HMAC_Base_0100c718;
  uVar1 = *(ulong *)(this + 0x10);
  if (*(ulong *)(this + 0x18) <= *(ulong *)(this + 0x10)) {
    uVar1 = *(ulong *)(this + 0x18);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00cee160 to 00cee163 has its CatchHandler @ 00cee16c */
  UnalignedDeallocate(pvVar2);
  return;
}


