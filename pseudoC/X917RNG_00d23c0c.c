// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~X917RNG
// Entry Point: 00d23c0c
// Size: 248 bytes
// Signature: undefined __thiscall ~X917RNG(X917RNG * this)


/* CryptoPP::X917RNG::~X917RNG() */

void __thiscall CryptoPP::X917RNG::~X917RNG(X917RNG *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x90);
  *(undefined ***)this = &PTR__X917RNG_01010338;
  uVar1 = *(ulong *)(this + 0x80);
  if (*(ulong *)(this + 0x88) <= *(ulong *)(this + 0x80)) {
    uVar1 = *(ulong *)(this + 0x88);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00d23c54 to 00d23c57 has its CatchHandler @ 00d23d10 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x70);
  uVar1 = *(ulong *)(this + 0x60);
  if (*(ulong *)(this + 0x68) <= *(ulong *)(this + 0x60)) {
    uVar1 = *(ulong *)(this + 0x68);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00d23c80 to 00d23c83 has its CatchHandler @ 00d23d0c */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x50);
  uVar1 = *(ulong *)(this + 0x40);
  if (*(ulong *)(this + 0x48) <= *(ulong *)(this + 0x40)) {
    uVar1 = *(ulong *)(this + 0x48);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00d23cac to 00d23caf has its CatchHandler @ 00d23d08 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x30);
  uVar1 = *(ulong *)(this + 0x20);
  if (*(ulong *)(this + 0x28) <= *(ulong *)(this + 0x20)) {
    uVar1 = *(ulong *)(this + 0x28);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00d23cd8 to 00d23cdb has its CatchHandler @ 00d23d04 */
  UnalignedDeallocate(pvVar2);
  if (*(long **)(this + 8) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d23cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 8) + 8))();
  return;
}


