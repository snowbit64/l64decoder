// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~KDF2_RNG
// Entry Point: 00d05074
// Size: 80 bytes
// Signature: undefined __thiscall ~KDF2_RNG(KDF2_RNG * this)


/* CryptoPP::KDF2_RNG::~KDF2_RNG() */

void __thiscall CryptoPP::KDF2_RNG::~KDF2_RNG(KDF2_RNG *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x28);
  *(undefined ***)this = &PTR__KDF2_RNG_0100cbb8;
  uVar1 = *(ulong *)(this + 0x18);
  if (*(ulong *)(this + 0x20) <= *(ulong *)(this + 0x18)) {
    uVar1 = *(ulong *)(this + 0x20);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00d050b8 to 00d050bb has its CatchHandler @ 00d050c4 */
  UnalignedDeallocate(pvVar2);
  return;
}


