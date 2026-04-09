// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SignerFilter
// Entry Point: 00cdd8ac
// Size: 160 bytes
// Signature: undefined __thiscall ~SignerFilter(SignerFilter * this)


/* non-virtual thunk to CryptoPP::SignerFilter::~SignerFilter() */

void __thiscall CryptoPP::SignerFilter::~SignerFilter(SignerFilter *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x60);
  *(undefined ***)(this + -8) = &PTR__SignerFilter_010078d8;
  *(undefined ***)this = &PTR__SignerFilter_01007a88;
  uVar1 = *(ulong *)(this + 0x50);
  if (*(ulong *)(this + 0x58) <= *(ulong *)(this + 0x50)) {
    uVar1 = *(ulong *)(this + 0x58);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00cdd8f8 to 00cdd8fb has its CatchHandler @ 00cdd94c */
  UnalignedDeallocate(pvVar2);
  if (*(long **)(this + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x38) + 8))();
  }
  *(undefined ***)(this + -8) = &PTR__Filter_01005f60;
  *(undefined ***)this = &PTR__Filter_01006108;
  if (*(long **)(this + 0x10) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00cdd93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x10) + 8))();
  return;
}


