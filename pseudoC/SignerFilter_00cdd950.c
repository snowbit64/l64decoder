// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SignerFilter
// Entry Point: 00cdd950
// Size: 164 bytes
// Signature: undefined __thiscall ~SignerFilter(SignerFilter * this)


/* non-virtual thunk to CryptoPP::SignerFilter::~SignerFilter() */

void __thiscall CryptoPP::SignerFilter::~SignerFilter(SignerFilter *this)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  pvVar2 = *(void **)(this + 0x60);
  *(undefined ***)this = &PTR__SignerFilter_01007a88;
  uVar1 = *(ulong *)(this + 0x50);
  if (*(ulong *)(this + 0x58) <= *(ulong *)(this + 0x50)) {
    uVar1 = *(ulong *)(this + 0x58);
  }
  puVar3 = (undefined8 *)(this + -8);
  *puVar3 = &PTR__SignerFilter_010078d8;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00cdd9a4 to 00cdd9a7 has its CatchHandler @ 00cdd9f4 */
  UnalignedDeallocate(pvVar2);
  if (*(long **)(this + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x38) + 8))();
  }
  *puVar3 = &PTR__Filter_01005f60;
  *(undefined ***)this = &PTR__Filter_01006108;
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  operator_delete(puVar3);
  return;
}


