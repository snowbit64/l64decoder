// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Dec
// Entry Point: 00d23318
// Size: 136 bytes
// Signature: undefined __thiscall ~Dec(Dec * this)


/* non-virtual thunk to CryptoPP::Rijndael::Dec::~Dec() */

void __thiscall CryptoPP::Rijndael::Dec::~Dec(Dec *this)

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
                    /* try { // try from 00d23364 to 00d23367 has its CatchHandler @ 00d233a4 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x28);
  uVar1 = *(ulong *)(this + 0x18);
  if (*(ulong *)(this + 0x20) <= *(ulong *)(this + 0x18)) {
    uVar1 = *(ulong *)(this + 0x20);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00d23390 to 00d23393 has its CatchHandler @ 00d233a0 */
  UnalignedDeallocate(pvVar2);
  return;
}


