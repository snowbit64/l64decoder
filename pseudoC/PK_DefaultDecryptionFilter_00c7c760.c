// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PK_DefaultDecryptionFilter
// Entry Point: 00c7c760
// Size: 144 bytes
// Signature: undefined __thiscall ~PK_DefaultDecryptionFilter(PK_DefaultDecryptionFilter * this)


/* CryptoPP::PK_DefaultDecryptionFilter::~PK_DefaultDecryptionFilter() */

void __thiscall
CryptoPP::PK_DefaultDecryptionFilter::~PK_DefaultDecryptionFilter(PK_DefaultDecryptionFilter *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0xa8);
  *(undefined ***)this = &PTR__PK_DefaultDecryptionFilter_00ff08e0;
  *(undefined ***)(this + 8) = &PTR__PK_DefaultDecryptionFilter_00ff0a90;
  uVar1 = *(ulong *)(this + 0x98);
  if (*(ulong *)(this + 0xa0) <= *(ulong *)(this + 0x98)) {
    uVar1 = *(ulong *)(this + 0xa0);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00c7c7ac to 00c7c7af has its CatchHandler @ 00c7c7f0 */
  UnalignedDeallocate(pvVar2);
  ByteQueue::~ByteQueue((ByteQueue *)(this + 0x48));
  *(undefined ***)this = &PTR__Filter_01005f60;
  *(undefined ***)(this + 8) = &PTR__Filter_01006108;
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  operator_delete(this);
  return;
}


