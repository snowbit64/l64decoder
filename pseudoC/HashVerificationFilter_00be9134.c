// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~HashVerificationFilter
// Entry Point: 00be9134
// Size: 204 bytes
// Signature: undefined __thiscall ~HashVerificationFilter(HashVerificationFilter * this)


/* CryptoPP::HashVerificationFilter::~HashVerificationFilter() */

void __thiscall
CryptoPP::HashVerificationFilter::~HashVerificationFilter(HashVerificationFilter *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0xc0);
  *(undefined ***)this = &PTR__HashVerificationFilter_01006a28;
  *(undefined ***)(this + 8) = &PTR__HashVerificationFilter_01006c38;
  uVar1 = *(ulong *)(this + 0xb0);
  if (*(ulong *)(this + 0xb8) <= *(ulong *)(this + 0xb0)) {
    uVar1 = *(ulong *)(this + 0xb8);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00be9180 to 00be9183 has its CatchHandler @ 00be9204 */
  UnalignedDeallocate(pvVar2);
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
                    /* try { // try from 00be91c0 to 00be91c3 has its CatchHandler @ 00be9200 */
  UnalignedDeallocate(pvVar2);
  *(undefined ***)this = &PTR__Filter_01005f60;
  *(undefined ***)(this + 8) = &PTR__Filter_01006108;
  if (*(long **)(this + 0x18) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00be91f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x18) + 8))();
  return;
}


