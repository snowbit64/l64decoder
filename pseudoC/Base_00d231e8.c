// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Base
// Entry Point: 00d231e8
// Size: 136 bytes
// Signature: undefined __thiscall ~Base(Base * this)


/* non-virtual thunk to CryptoPP::Rijndael::Base::~Base() */

void __thiscall CryptoPP::Rijndael::Base::~Base(Base *this)

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
                    /* try { // try from 00d23234 to 00d23237 has its CatchHandler @ 00d23274 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x28);
  uVar1 = *(ulong *)(this + 0x18);
  if (*(ulong *)(this + 0x20) <= *(ulong *)(this + 0x18)) {
    uVar1 = *(ulong *)(this + 0x20);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00d23260 to 00d23263 has its CatchHandler @ 00d23270 */
  UnalignedDeallocate(pvVar2);
  return;
}


