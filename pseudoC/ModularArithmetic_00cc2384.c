// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ModularArithmetic
// Entry Point: 00cc2384
// Size: 208 bytes
// Signature: undefined __thiscall ~ModularArithmetic(ModularArithmetic * this)


/* CryptoPP::ModularArithmetic::~ModularArithmetic() */

void __thiscall CryptoPP::ModularArithmetic::~ModularArithmetic(ModularArithmetic *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x98);
  uVar1 = *(ulong *)(this + 0x88);
  if (*(ulong *)(this + 0x90) <= *(ulong *)(this + 0x88)) {
    uVar1 = *(ulong *)(this + 0x90);
  }
  *(undefined ***)this = &PTR__ModularArithmetic_0100c910;
  *(undefined ***)(this + 0x78) = &PTR__Integer_0100c890;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00cc23dc to 00cc23df has its CatchHandler @ 00cc245c */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x68);
  *(undefined ***)(this + 0x48) = &PTR__Integer_0100c890;
  uVar1 = *(ulong *)(this + 0x58);
  if (*(ulong *)(this + 0x60) <= *(ulong *)(this + 0x58)) {
    uVar1 = *(ulong *)(this + 0x60);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00cc2410 to 00cc2413 has its CatchHandler @ 00cc2458 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x38);
  *(undefined ***)(this + 0x18) = &PTR__Integer_0100c890;
  uVar1 = *(ulong *)(this + 0x28);
  if (*(ulong *)(this + 0x30) <= *(ulong *)(this + 0x28)) {
    uVar1 = *(ulong *)(this + 0x30);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00cc2444 to 00cc2447 has its CatchHandler @ 00cc2454 */
  UnalignedDeallocate(pvVar2);
  return;
}


