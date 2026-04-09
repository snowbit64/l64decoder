// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Enc
// Entry Point: 00d20640
// Size: 136 bytes
// Signature: undefined __thiscall ~Enc(Enc * this)


/* CryptoPP::MDC<CryptoPP::SHA1>::Enc::~Enc() */

void __thiscall CryptoPP::MDC<CryptoPP::SHA1>::Enc::~Enc(Enc *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x48);
  *(undefined ***)this = &PTR__Enc_0100f810;
  *(undefined ***)(this + 8) = &PTR__Enc_0100f8c8;
  uVar1 = *(ulong *)(this + 0x38);
  if (*(ulong *)(this + 0x40) <= *(ulong *)(this + 0x38)) {
    uVar1 = *(ulong *)(this + 0x40);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00d2068c to 00d2068f has its CatchHandler @ 00d206cc */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x28);
  uVar1 = *(ulong *)(this + 0x18);
  if (*(ulong *)(this + 0x20) <= *(ulong *)(this + 0x18)) {
    uVar1 = *(ulong *)(this + 0x20);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00d206b8 to 00d206bb has its CatchHandler @ 00d206c8 */
  UnalignedDeallocate(pvVar2);
  return;
}


