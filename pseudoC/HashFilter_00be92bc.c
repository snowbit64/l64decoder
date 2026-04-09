// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~HashFilter
// Entry Point: 00be92bc
// Size: 196 bytes
// Signature: undefined __thiscall ~HashFilter(HashFilter * this)


/* CryptoPP::HashFilter::~HashFilter() */

void __thiscall CryptoPP::HashFilter::~HashFilter(HashFilter *this)

{
  ulong uVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__HashFilter_01006830;
  *(undefined ***)(this + 8) = &PTR__HashFilter_010069d8;
  *(undefined ***)(this + 0x30) = &PTR__HashFilter_01006a08;
  if (((byte)this[0x88] & 1) != 0) {
    operator_delete(*(void **)(this + 0x98));
  }
  if (((byte)this[0x70] & 1) != 0) {
    operator_delete(*(void **)(this + 0x80));
  }
  pvVar2 = *(void **)(this + 0x50);
  uVar1 = *(ulong *)(this + 0x40);
  if (*(ulong *)(this + 0x48) <= *(ulong *)(this + 0x40)) {
    uVar1 = *(ulong *)(this + 0x48);
  }
  *(undefined ***)(this + 0x30) = &PTR__FilterPutSpaceHelper_00feccd8;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00be9340 to 00be9343 has its CatchHandler @ 00be9380 */
  UnalignedDeallocate(pvVar2);
  *(undefined ***)this = &PTR__Filter_01005f60;
  *(undefined ***)(this + 8) = &PTR__Filter_01006108;
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00be9370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 8))();
    return;
  }
  return;
}


