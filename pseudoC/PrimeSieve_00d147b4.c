// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PrimeSieve
// Entry Point: 00d147b4
// Size: 204 bytes
// Signature: undefined __thiscall ~PrimeSieve(PrimeSieve * this)


/* CryptoPP::PrimeSieve::~PrimeSieve() */

void __thiscall CryptoPP::PrimeSieve::~PrimeSieve(PrimeSieve *this)

{
  ulong uVar1;
  void *pvVar2;
  
  if (*(void **)(this + 0x98) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x98));
  }
  pvVar2 = *(void **)(this + 0x80);
  uVar1 = *(ulong *)(this + 0x70);
  if (*(ulong *)(this + 0x78) <= *(ulong *)(this + 0x70)) {
    uVar1 = *(ulong *)(this + 0x78);
  }
  *(undefined ***)(this + 0x60) = &PTR__Integer_0100c890;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00d14808 to 00d1480b has its CatchHandler @ 00d14888 */
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
                    /* try { // try from 00d1483c to 00d1483f has its CatchHandler @ 00d14884 */
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
                    /* try { // try from 00d14870 to 00d14873 has its CatchHandler @ 00d14880 */
  UnalignedDeallocate(pvVar2);
  return;
}


