// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~HexEncoder
// Entry Point: 00ced608
// Size: 180 bytes
// Signature: undefined __thiscall ~HexEncoder(HexEncoder * this)


/* non-virtual thunk to CryptoPP::HexEncoder::~HexEncoder() */

void __thiscall CryptoPP::HexEncoder::~HexEncoder(HexEncoder *this)

{
  ulong uVar1;
  void *pvVar2;
  
  *(undefined ***)(this + -8) = &PTR__ProxyFilter_01006390;
  *(undefined ***)this = &PTR__ProxyFilter_010065a0;
  if (*(long **)(this + 0x88) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x88) + 8))();
  }
  pvVar2 = *(void **)(this + 0x60);
  *(undefined ***)(this + -8) = &PTR__FilterWithBufferedInput_01006138;
  *(undefined ***)this = &PTR__FilterWithBufferedInput_01006348;
  uVar1 = *(ulong *)(this + 0x50);
  if (*(ulong *)(this + 0x58) <= *(ulong *)(this + 0x50)) {
    uVar1 = *(ulong *)(this + 0x58);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00ced67c to 00ced67f has its CatchHandler @ 00ced6bc */
  UnalignedDeallocate(pvVar2);
  *(undefined ***)(this + -8) = &PTR__Filter_01005f60;
  *(undefined ***)this = &PTR__Filter_01006108;
  if (*(long **)(this + 0x10) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00ced6ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x10) + 8))();
  return;
}


