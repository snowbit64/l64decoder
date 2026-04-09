// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SignerFilter
// Entry Point: 00cdd758
// Size: 160 bytes
// Signature: undefined __thiscall ~SignerFilter(SignerFilter * this)


/* CryptoPP::SignerFilter::~SignerFilter() */

void __thiscall CryptoPP::SignerFilter::~SignerFilter(SignerFilter *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x68);
  *(undefined ***)this = &PTR__SignerFilter_010078d8;
  *(undefined ***)(this + 8) = &PTR__SignerFilter_01007a88;
  uVar1 = *(ulong *)(this + 0x58);
  if (*(ulong *)(this + 0x60) <= *(ulong *)(this + 0x58)) {
    uVar1 = *(ulong *)(this + 0x60);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00cdd7a4 to 00cdd7a7 has its CatchHandler @ 00cdd7f8 */
  UnalignedDeallocate(pvVar2);
  if (*(long **)(this + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x40) + 8))();
  }
  *(undefined ***)this = &PTR__Filter_01005f60;
  *(undefined ***)(this + 8) = &PTR__Filter_01006108;
  if (*(long **)(this + 0x18) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00cdd7e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x18) + 8))();
  return;
}


