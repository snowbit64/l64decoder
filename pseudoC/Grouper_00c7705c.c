// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Grouper
// Entry Point: 00c7705c
// Size: 184 bytes
// Signature: undefined __thiscall ~Grouper(Grouper * this)


/* non-virtual thunk to CryptoPP::Grouper::~Grouper() */

void __thiscall CryptoPP::Grouper::~Grouper(Grouper *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x60);
  *(undefined ***)(this + -8) = &PTR__Grouper_00fef2b8;
  *(undefined ***)this = &PTR__Grouper_00fef460;
  uVar1 = *(ulong *)(this + 0x50);
  if (*(ulong *)(this + 0x58) <= *(ulong *)(this + 0x50)) {
    uVar1 = *(ulong *)(this + 0x58);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00c770a8 to 00c770ab has its CatchHandler @ 00c77118 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x40);
  uVar1 = *(ulong *)(this + 0x30);
  if (*(ulong *)(this + 0x38) <= *(ulong *)(this + 0x30)) {
    uVar1 = *(ulong *)(this + 0x38);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00c770d4 to 00c770d7 has its CatchHandler @ 00c77114 */
  UnalignedDeallocate(pvVar2);
  *(undefined ***)(this + -8) = &PTR__Filter_01005f60;
  *(undefined ***)this = &PTR__Filter_01006108;
  if (*(long **)(this + 0x10) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c77104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x10) + 8))();
  return;
}


