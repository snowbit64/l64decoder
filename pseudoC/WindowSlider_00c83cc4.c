// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~WindowSlider
// Entry Point: 00c83cc4
// Size: 140 bytes
// Signature: undefined __thiscall ~WindowSlider(WindowSlider * this)


/* CryptoPP::WindowSlider::~WindowSlider() */

void __thiscall CryptoPP::WindowSlider::~WindowSlider(WindowSlider *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x50);
  *(undefined ***)(this + 0x30) = &PTR__Integer_0100c890;
  uVar1 = *(ulong *)(this + 0x40);
  if (*(ulong *)(this + 0x48) <= *(ulong *)(this + 0x40)) {
    uVar1 = *(ulong *)(this + 0x48);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c83d0c to 00c83d0f has its CatchHandler @ 00c83d54 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x20);
  *(undefined ***)this = &PTR__Integer_0100c890;
  uVar1 = *(ulong *)(this + 0x10);
  if (*(ulong *)(this + 0x18) <= *(ulong *)(this + 0x10)) {
    uVar1 = *(ulong *)(this + 0x18);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c83d40 to 00c83d43 has its CatchHandler @ 00c83d50 */
  UnalignedDeallocate(pvVar2);
  return;
}


