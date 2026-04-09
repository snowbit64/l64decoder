// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~HexEncoder
// Entry Point: 00ced530
// Size: 176 bytes
// Signature: undefined __thiscall ~HexEncoder(HexEncoder * this)


/* CryptoPP::HexEncoder::~HexEncoder() */

void __thiscall CryptoPP::HexEncoder::~HexEncoder(HexEncoder *this)

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
                    /* try { // try from 00ced5a4 to 00ced5a7 has its CatchHandler @ 00ced5e0 */
  UnalignedDeallocate(pvVar2);
  *(undefined ***)this = &PTR__Filter_01005f60;
  *(undefined ***)(this + 8) = &PTR__Filter_01006108;
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  operator_delete(this);
  return;
}


