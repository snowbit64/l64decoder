// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Base
// Entry Point: 00bbf060
// Size: 136 bytes
// Signature: undefined __thiscall ~Base(Base * this)


/* CryptoPP::Rijndael::Base::~Base() */

void __thiscall CryptoPP::Rijndael::Base::~Base(Base *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x50);
  *(undefined ***)this = &PTR__Base_0100fe98;
  *(undefined ***)(this + 8) = &PTR__Base_0100ff48;
  uVar1 = *(ulong *)(this + 0x40);
  if (*(ulong *)(this + 0x48) <= *(ulong *)(this + 0x40)) {
    uVar1 = *(ulong *)(this + 0x48);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00bbf0ac to 00bbf0af has its CatchHandler @ 00bbf0ec */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x30);
  uVar1 = *(ulong *)(this + 0x20);
  if (*(ulong *)(this + 0x28) <= *(ulong *)(this + 0x20)) {
    uVar1 = *(ulong *)(this + 0x28);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00bbf0d8 to 00bbf0db has its CatchHandler @ 00bbf0e8 */
  UnalignedDeallocate(pvVar2);
  return;
}


