// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProxyFilter
// Entry Point: 00be4be0
// Size: 180 bytes
// Signature: undefined __thiscall ~ProxyFilter(ProxyFilter * this)


/* CryptoPP::ProxyFilter::~ProxyFilter() */

void __thiscall CryptoPP::ProxyFilter::~ProxyFilter(ProxyFilter *this)

{
  ulong uVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__ProxyFilter_01006390;
  *(undefined ***)(this + 8) = &PTR__ProxyFilter_010065a0;
  if (*(long **)(this + 0x90) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x90) + 8))();
  }
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
                    /* try { // try from 00be4c54 to 00be4c57 has its CatchHandler @ 00be4c94 */
  UnalignedDeallocate(pvVar2);
  *(undefined ***)this = &PTR__Filter_01005f60;
  *(undefined ***)(this + 8) = &PTR__Filter_01006108;
  if (*(long **)(this + 0x18) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00be4c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x18) + 8))();
  return;
}


