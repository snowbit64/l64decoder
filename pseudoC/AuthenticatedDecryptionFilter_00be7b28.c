// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AuthenticatedDecryptionFilter
// Entry Point: 00be7b28
// Size: 176 bytes
// Signature: undefined __thiscall ~AuthenticatedDecryptionFilter(AuthenticatedDecryptionFilter * this)


/* CryptoPP::AuthenticatedDecryptionFilter::~AuthenticatedDecryptionFilter() */

void __thiscall
CryptoPP::AuthenticatedDecryptionFilter::~AuthenticatedDecryptionFilter
          (AuthenticatedDecryptionFilter *this)

{
  ulong uVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__AuthenticatedDecryptionFilter_01006ef8;
  *(undefined ***)(this + 8) = &PTR__AuthenticatedDecryptionFilter_01007108;
  StreamTransformationFilter::~StreamTransformationFilter
            ((StreamTransformationFilter *)(this + 0x158));
  HashVerificationFilter::~HashVerificationFilter((HashVerificationFilter *)(this + 0x90));
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
                    /* try { // try from 00be7b98 to 00be7b9b has its CatchHandler @ 00be7bd8 */
  UnalignedDeallocate(pvVar2);
  *(undefined ***)this = &PTR__Filter_01005f60;
  *(undefined ***)(this + 8) = &PTR__Filter_01006108;
  if (*(long **)(this + 0x18) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00be7bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x18) + 8))();
  return;
}


