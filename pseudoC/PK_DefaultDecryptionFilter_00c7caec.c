// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PK_DefaultDecryptionFilter
// Entry Point: 00c7caec
// Size: 156 bytes
// Signature: undefined __thiscall ~PK_DefaultDecryptionFilter(PK_DefaultDecryptionFilter * this)


/* non-virtual thunk to CryptoPP::PK_DefaultDecryptionFilter::~PK_DefaultDecryptionFilter() */

void __thiscall
CryptoPP::PK_DefaultDecryptionFilter::~PK_DefaultDecryptionFilter(PK_DefaultDecryptionFilter *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0xa0);
  *(undefined ***)this = &PTR__PK_DefaultDecryptionFilter_00ff0a90;
  uVar1 = *(ulong *)(this + 0x90);
  if (*(ulong *)(this + 0x98) <= *(ulong *)(this + 0x90)) {
    uVar1 = *(ulong *)(this + 0x98);
  }
  *(undefined ***)(this + -8) = &PTR__PK_DefaultDecryptionFilter_00ff08e0;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00c7cb40 to 00c7cb43 has its CatchHandler @ 00c7cb88 */
  UnalignedDeallocate(pvVar2);
  ByteQueue::~ByteQueue((ByteQueue *)(this + 0x40));
  *(undefined ***)(this + -8) = &PTR__Filter_01005f60;
  *(undefined ***)this = &PTR__Filter_01006108;
  if (*(long **)(this + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c7cb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x10) + 8))();
    return;
  }
  return;
}


