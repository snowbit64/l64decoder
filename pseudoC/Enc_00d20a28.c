// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Enc
// Entry Point: 00d20a28
// Size: 136 bytes
// Signature: undefined __thiscall ~Enc(Enc * this)


/* non-virtual thunk to CryptoPP::MDC<CryptoPP::SHA1>::Enc::~Enc() */

void __thiscall CryptoPP::MDC<CryptoPP::SHA1>::Enc::~Enc(Enc *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x40);
  *(undefined ***)(this + -8) = &PTR__Enc_0100f810;
  *(undefined ***)this = &PTR__Enc_0100f8c8;
  uVar1 = *(ulong *)(this + 0x30);
  if (*(ulong *)(this + 0x38) <= *(ulong *)(this + 0x30)) {
    uVar1 = *(ulong *)(this + 0x38);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00d20a74 to 00d20a77 has its CatchHandler @ 00d20ab4 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x20);
  uVar1 = *(ulong *)(this + 0x10);
  if (*(ulong *)(this + 0x18) <= *(ulong *)(this + 0x10)) {
    uVar1 = *(ulong *)(this + 0x18);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00d20aa0 to 00d20aa3 has its CatchHandler @ 00d20ab0 */
  UnalignedDeallocate(pvVar2);
  return;
}


