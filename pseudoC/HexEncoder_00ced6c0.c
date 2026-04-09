// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~HexEncoder
// Entry Point: 00ced6c0
// Size: 184 bytes
// Signature: undefined __thiscall ~HexEncoder(HexEncoder * this)


/* non-virtual thunk to CryptoPP::HexEncoder::~HexEncoder() */

void __thiscall CryptoPP::HexEncoder::~HexEncoder(HexEncoder *this)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this = &PTR__ProxyFilter_010065a0;
  puVar3 = (undefined8 *)(this + -8);
  *puVar3 = &PTR__ProxyFilter_01006390;
  if (*(long **)(this + 0x88) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x88) + 8))();
  }
  pvVar2 = *(void **)(this + 0x60);
  *puVar3 = &PTR__FilterWithBufferedInput_01006138;
  *(undefined ***)this = &PTR__FilterWithBufferedInput_01006348;
  uVar1 = *(ulong *)(this + 0x50);
  if (*(ulong *)(this + 0x58) <= *(ulong *)(this + 0x50)) {
    uVar1 = *(ulong *)(this + 0x58);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00ced73c to 00ced73f has its CatchHandler @ 00ced778 */
  UnalignedDeallocate(pvVar2);
  *puVar3 = &PTR__Filter_01005f60;
  *(undefined ***)this = &PTR__Filter_01006108;
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  operator_delete(puVar3);
  return;
}


