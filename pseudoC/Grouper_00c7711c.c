// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Grouper
// Entry Point: 00c7711c
// Size: 188 bytes
// Signature: undefined __thiscall ~Grouper(Grouper * this)


/* non-virtual thunk to CryptoPP::Grouper::~Grouper() */

void __thiscall CryptoPP::Grouper::~Grouper(Grouper *this)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  pvVar2 = *(void **)(this + 0x60);
  *(undefined ***)this = &PTR__Grouper_00fef460;
  uVar1 = *(ulong *)(this + 0x50);
  if (*(ulong *)(this + 0x58) <= *(ulong *)(this + 0x50)) {
    uVar1 = *(ulong *)(this + 0x58);
  }
  puVar3 = (undefined8 *)(this + -8);
  *puVar3 = &PTR__Grouper_00fef2b8;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00c77170 to 00c77173 has its CatchHandler @ 00c771dc */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x40);
  uVar1 = *(ulong *)(this + 0x30);
  if (*(ulong *)(this + 0x38) <= *(ulong *)(this + 0x30)) {
    uVar1 = *(ulong *)(this + 0x38);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00c7719c to 00c7719f has its CatchHandler @ 00c771d8 */
  UnalignedDeallocate(pvVar2);
  *puVar3 = &PTR__Filter_01005f60;
  *(undefined ***)this = &PTR__Filter_01006108;
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  operator_delete(puVar3);
  return;
}


