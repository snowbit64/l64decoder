// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~StreamTransformationFilter
// Entry Point: 00be9064
// Size: 200 bytes
// Signature: undefined __thiscall ~StreamTransformationFilter(StreamTransformationFilter * this)


/* CryptoPP::StreamTransformationFilter::~StreamTransformationFilter() */

void __thiscall
CryptoPP::StreamTransformationFilter::~StreamTransformationFilter(StreamTransformationFilter *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0xb0);
  *(undefined ***)(this + 0x90) = &PTR__FilterPutSpaceHelper_00feccd8;
  uVar1 = *(ulong *)(this + 0xa0);
  if (*(ulong *)(this + 0xa8) <= *(ulong *)(this + 0xa0)) {
    uVar1 = *(ulong *)(this + 0xa8);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00be90ac to 00be90af has its CatchHandler @ 00be9130 */
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
                    /* try { // try from 00be90ec to 00be90ef has its CatchHandler @ 00be912c */
  UnalignedDeallocate(pvVar2);
  *(undefined ***)this = &PTR__Filter_01005f60;
  *(undefined ***)(this + 8) = &PTR__Filter_01006108;
  if (*(long **)(this + 0x18) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00be911c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x18) + 8))();
  return;
}


