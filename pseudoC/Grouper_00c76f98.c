// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Grouper
// Entry Point: 00c76f98
// Size: 180 bytes
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
                    /* try { // try from 00c76fe4 to 00c76fe7 has its CatchHandler @ 00c77050 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x48);
  uVar1 = *(ulong *)(this + 0x38);
  if (*(ulong *)(this + 0x40) <= *(ulong *)(this + 0x38)) {
    uVar1 = *(ulong *)(this + 0x40);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00c77010 to 00c77013 has its CatchHandler @ 00c7704c */
  UnalignedDeallocate(pvVar2);
  *(undefined ***)this = &PTR__Filter_01005f60;
  *(undefined ***)(this + 8) = &PTR__Filter_01006108;
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  operator_delete(this);
  return;
}


