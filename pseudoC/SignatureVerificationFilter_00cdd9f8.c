// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SignatureVerificationFilter
// Entry Point: 00cdd9f8
// Size: 224 bytes
// Signature: undefined __thiscall ~SignatureVerificationFilter(SignatureVerificationFilter * this)


/* CryptoPP::SignatureVerificationFilter::~SignatureVerificationFilter() */

void __thiscall
CryptoPP::SignatureVerificationFilter::~SignatureVerificationFilter
          (SignatureVerificationFilter *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0xc0);
  *(undefined ***)this = &PTR__SignatureVerificationFilter_01007138;
  *(undefined ***)(this + 8) = &PTR__SignatureVerificationFilter_01007348;
  uVar1 = *(ulong *)(this + 0xb0);
  if (*(ulong *)(this + 0xb8) <= *(ulong *)(this + 0xb0)) {
    uVar1 = *(ulong *)(this + 0xb8);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00cdda44 to 00cdda47 has its CatchHandler @ 00cddadc */
  UnalignedDeallocate(pvVar2);
  if (*(long **)(this + 0x98) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x98) + 8))();
  }
  pvVar2 = *(void **)(this + 0x68);
  *(undefined ***)this = &PTR__FilterWithBufferedInput_01006138;
  *(undefined ***)(this + 8) = &PTR__FilterWithBufferedInput_01006348;
  uVar1 = *(ulong *)(this + 0x58);
  if (*(ulong *)(this + 0x60) <= *(ulong *)(this + 0x58)) {
    uVar1 = *(ulong *)(this + 0x60);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00cdda98 to 00cdda9b has its CatchHandler @ 00cddad8 */
  UnalignedDeallocate(pvVar2);
  *(undefined ***)this = &PTR__Filter_01005f60;
  *(undefined ***)(this + 8) = &PTR__Filter_01006108;
  if (*(long **)(this + 0x18) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00cddac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x18) + 8))();
  return;
}


