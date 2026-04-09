// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PrimeAndGenerator
// Entry Point: 00ceb2d8
// Size: 192 bytes
// Signature: undefined __thiscall ~PrimeAndGenerator(PrimeAndGenerator * this)


/* CryptoPP::PrimeAndGenerator::~PrimeAndGenerator() */

void __thiscall CryptoPP::PrimeAndGenerator::~PrimeAndGenerator(PrimeAndGenerator *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x80);
  *(undefined ***)(this + 0x60) = &PTR__Integer_0100c890;
  uVar1 = *(ulong *)(this + 0x70);
  if (*(ulong *)(this + 0x78) <= *(ulong *)(this + 0x70)) {
    uVar1 = *(ulong *)(this + 0x78);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00ceb320 to 00ceb323 has its CatchHandler @ 00ceb3a0 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x50);
  *(undefined ***)(this + 0x30) = &PTR__Integer_0100c890;
  uVar1 = *(ulong *)(this + 0x40);
  if (*(ulong *)(this + 0x48) <= *(ulong *)(this + 0x40)) {
    uVar1 = *(ulong *)(this + 0x48);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00ceb354 to 00ceb357 has its CatchHandler @ 00ceb39c */
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
                    /* try { // try from 00ceb388 to 00ceb38b has its CatchHandler @ 00ceb398 */
  UnalignedDeallocate(pvVar2);
  return;
}


