// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AuthenticatedDecryptionFilter
// Entry Point: 00cdd690
// Size: 188 bytes
// Signature: undefined __thiscall ~AuthenticatedDecryptionFilter(AuthenticatedDecryptionFilter * this)


/* non-virtual thunk to CryptoPP::AuthenticatedDecryptionFilter::~AuthenticatedDecryptionFilter() */

void __thiscall
CryptoPP::AuthenticatedDecryptionFilter::~AuthenticatedDecryptionFilter
          (AuthenticatedDecryptionFilter *this)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(this + -8);
  *puVar3 = &PTR__AuthenticatedDecryptionFilter_01006ef8;
  *(undefined ***)this = &PTR__AuthenticatedDecryptionFilter_01007108;
  StreamTransformationFilter::~StreamTransformationFilter
            ((StreamTransformationFilter *)(this + 0x150));
  HashVerificationFilter::~HashVerificationFilter((HashVerificationFilter *)(this + 0x88));
  pvVar2 = *(void **)(this + 0x60);
  *puVar3 = &PTR__FilterWithBufferedInput_01006138;
  uVar1 = *(ulong *)(this + 0x50);
  if (*(ulong *)(this + 0x58) <= *(ulong *)(this + 0x50)) {
    uVar1 = *(ulong *)(this + 0x58);
  }
  *(undefined ***)this = &PTR__FilterWithBufferedInput_01006348;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00cdd70c to 00cdd70f has its CatchHandler @ 00cdd74c */
  UnalignedDeallocate(pvVar2);
  *puVar3 = &PTR__Filter_01005f60;
  *(undefined ***)this = &PTR__Filter_01006108;
  if (*(long **)(this + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00cdd73c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x10) + 8))();
    return;
  }
  return;
}


