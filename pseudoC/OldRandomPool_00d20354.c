// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~OldRandomPool
// Entry Point: 00d20354
// Size: 132 bytes
// Signature: undefined __thiscall ~OldRandomPool(OldRandomPool * this)


/* CryptoPP::OldRandomPool::~OldRandomPool() */

void __thiscall CryptoPP::OldRandomPool::~OldRandomPool(OldRandomPool *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x40);
  *(undefined ***)this = &PTR__OldRandomPool_0100f748;
  uVar1 = *(ulong *)(this + 0x30);
  if (*(ulong *)(this + 0x38) <= *(ulong *)(this + 0x30)) {
    uVar1 = *(ulong *)(this + 0x38);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00d2039c to 00d2039f has its CatchHandler @ 00d203dc */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x20);
  uVar1 = *(ulong *)(this + 0x10);
  if (*(ulong *)(this + 0x18) <= *(ulong *)(this + 0x10)) {
    uVar1 = *(ulong *)(this + 0x18);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00d203c8 to 00d203cb has its CatchHandler @ 00d203d8 */
  UnalignedDeallocate(pvVar2);
  return;
}


