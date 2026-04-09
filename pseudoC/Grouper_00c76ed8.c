// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Grouper
// Entry Point: 00c76ed8
// Size: 184 bytes
// Signature: undefined __thiscall ~Grouper(Grouper * this)


/* CryptoPP::Grouper::~Grouper() */

void __thiscall CryptoPP::Grouper::~Grouper(Grouper *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x68);
  *(undefined ***)this = &PTR__Grouper_00fef2b8;
  *(undefined ***)(this + 8) = &PTR__Grouper_00fef460;
  uVar1 = *(ulong *)(this + 0x58);
  if (*(ulong *)(this + 0x60) <= *(ulong *)(this + 0x58)) {
    uVar1 = *(ulong *)(this + 0x60);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00c76f24 to 00c76f27 has its CatchHandler @ 00c76f94 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x48);
  uVar1 = *(ulong *)(this + 0x38);
  if (*(ulong *)(this + 0x40) <= *(ulong *)(this + 0x38)) {
    uVar1 = *(ulong *)(this + 0x40);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00c76f50 to 00c76f53 has its CatchHandler @ 00c76f90 */
  UnalignedDeallocate(pvVar2);
  *(undefined ***)this = &PTR__Filter_01005f60;
  *(undefined ***)(this + 8) = &PTR__Filter_01006108;
  if (*(long **)(this + 0x18) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c76f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x18) + 8))();
  return;
}


