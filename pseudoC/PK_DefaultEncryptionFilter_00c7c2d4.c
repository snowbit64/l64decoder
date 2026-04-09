// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PK_DefaultEncryptionFilter
// Entry Point: 00c7c2d4
// Size: 144 bytes
// Signature: undefined __thiscall ~PK_DefaultEncryptionFilter(PK_DefaultEncryptionFilter * this)


/* CryptoPP::PK_DefaultEncryptionFilter::~PK_DefaultEncryptionFilter() */

void __thiscall
CryptoPP::PK_DefaultEncryptionFilter::~PK_DefaultEncryptionFilter(PK_DefaultEncryptionFilter *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0xa8);
  *(undefined ***)this = &PTR__PK_DefaultEncryptionFilter_00ff06e8;
  *(undefined ***)(this + 8) = &PTR__PK_DefaultEncryptionFilter_00ff0898;
  uVar1 = *(ulong *)(this + 0x98);
  if (*(ulong *)(this + 0xa0) <= *(ulong *)(this + 0x98)) {
    uVar1 = *(ulong *)(this + 0xa0);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00c7c320 to 00c7c323 has its CatchHandler @ 00c7c364 */
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


