// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PK_DefaultDecryptionFilter
// Entry Point: 00c7cb8c
// Size: 152 bytes
// Signature: undefined __thiscall ~PK_DefaultDecryptionFilter(PK_DefaultDecryptionFilter * this)


/* non-virtual thunk to CryptoPP::PK_DefaultDecryptionFilter::~PK_DefaultDecryptionFilter() */

void __thiscall
CryptoPP::PK_DefaultDecryptionFilter::~PK_DefaultDecryptionFilter(PK_DefaultDecryptionFilter *this)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  pvVar2 = *(void **)(this + 0xa0);
  *(undefined ***)this = &PTR__PK_DefaultDecryptionFilter_00ff0a90;
  uVar1 = *(ulong *)(this + 0x90);
  if (*(ulong *)(this + 0x98) <= *(ulong *)(this + 0x90)) {
    uVar1 = *(ulong *)(this + 0x98);
  }
  puVar3 = (undefined8 *)(this + -8);
  *puVar3 = &PTR__PK_DefaultDecryptionFilter_00ff08e0;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00c7cbe0 to 00c7cbe3 has its CatchHandler @ 00c7cc24 */
  UnalignedDeallocate(pvVar2);
  ByteQueue::~ByteQueue((ByteQueue *)(this + 0x40));
  *puVar3 = &PTR__Filter_01005f60;
  *(undefined ***)this = &PTR__Filter_01006108;
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  operator_delete(puVar3);
  return;
}


