// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Enc
// Entry Point: 00d23280
// Size: 136 bytes
// Signature: undefined __thiscall ~Enc(Enc * this)


/* non-virtual thunk to CryptoPP::Rijndael::Enc::~Enc() */

void __thiscall CryptoPP::Rijndael::Enc::~Enc(Enc *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x48);
  *(undefined ***)(this + -8) = &PTR__Base_0100fe98;
  *(undefined ***)this = &PTR__Base_0100ff48;
  uVar1 = *(ulong *)(this + 0x38);
  if (*(ulong *)(this + 0x40) <= *(ulong *)(this + 0x38)) {
    uVar1 = *(ulong *)(this + 0x40);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00d232cc to 00d232cf has its CatchHandler @ 00d2330c */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x28);
  uVar1 = *(ulong *)(this + 0x18);
  if (*(ulong *)(this + 0x20) <= *(ulong *)(this + 0x18)) {
    uVar1 = *(ulong *)(this + 0x20);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00d232f8 to 00d232fb has its CatchHandler @ 00d23308 */
  UnalignedDeallocate(pvVar2);
  return;
}


