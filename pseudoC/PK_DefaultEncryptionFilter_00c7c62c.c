// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PK_DefaultEncryptionFilter
// Entry Point: 00c7c62c
// Size: 152 bytes
// Signature: undefined __thiscall ~PK_DefaultEncryptionFilter(PK_DefaultEncryptionFilter * this)


/* non-virtual thunk to CryptoPP::PK_DefaultEncryptionFilter::~PK_DefaultEncryptionFilter() */

void __thiscall
CryptoPP::PK_DefaultEncryptionFilter::~PK_DefaultEncryptionFilter(PK_DefaultEncryptionFilter *this)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  pvVar2 = *(void **)(this + 0xa0);
  *(undefined ***)this = &PTR__PK_DefaultEncryptionFilter_00ff0898;
  uVar1 = *(ulong *)(this + 0x90);
  if (*(ulong *)(this + 0x98) <= *(ulong *)(this + 0x90)) {
    uVar1 = *(ulong *)(this + 0x98);
  }
  puVar3 = (undefined8 *)(this + -8);
  *puVar3 = &PTR__PK_DefaultEncryptionFilter_00ff06e8;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00c7c680 to 00c7c683 has its CatchHandler @ 00c7c6c4 */
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


