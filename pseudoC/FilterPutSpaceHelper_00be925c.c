// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~FilterPutSpaceHelper
// Entry Point: 00be925c
// Size: 92 bytes
// Signature: undefined __thiscall ~FilterPutSpaceHelper(FilterPutSpaceHelper * this)


/* CryptoPP::FilterPutSpaceHelper::~FilterPutSpaceHelper() */

void __thiscall CryptoPP::FilterPutSpaceHelper::~FilterPutSpaceHelper(FilterPutSpaceHelper *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x20);
  *(undefined ***)this = &PTR__FilterPutSpaceHelper_00feccd8;
  uVar1 = *(ulong *)(this + 0x10);
  if (*(ulong *)(this + 0x18) <= *(ulong *)(this + 0x10)) {
    uVar1 = *(ulong *)(this + 0x18);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00be92a4 to 00be92a7 has its CatchHandler @ 00be92b8 */
  UnalignedDeallocate(pvVar2);
  operator_delete(this);
  return;
}


