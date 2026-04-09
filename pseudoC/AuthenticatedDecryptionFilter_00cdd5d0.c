// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AuthenticatedDecryptionFilter
// Entry Point: 00cdd5d0
// Size: 172 bytes
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
                    /* try { // try from 00cdd640 to 00cdd643 has its CatchHandler @ 00cdd67c */
  UnalignedDeallocate(pvVar2);
  *(undefined ***)this = &PTR__Filter_01005f60;
  *(undefined ***)(this + 8) = &PTR__Filter_01006108;
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  operator_delete(this);
  return;
}


