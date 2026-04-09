// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~HexDecoder
// Entry Point: 00ced898
// Size: 144 bytes
// Signature: undefined __thiscall ~HexDecoder(HexDecoder * this)


/* non-virtual thunk to CryptoPP::HexDecoder::~HexDecoder() */

void __thiscall CryptoPP::HexDecoder::~HexDecoder(HexDecoder *this)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  pvVar2 = *(void **)(this + 0x58);
  *(undefined ***)this = &PTR__BaseN_Decoder_00fef270;
  uVar1 = *(ulong *)(this + 0x48);
  if (*(ulong *)(this + 0x50) <= *(ulong *)(this + 0x48)) {
    uVar1 = *(ulong *)(this + 0x50);
  }
  puVar3 = (undefined8 *)(this + -8);
  *puVar3 = &PTR__BaseN_Decoder_00fef0c0;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00ced8ec to 00ced8ef has its CatchHandler @ 00ced928 */
  UnalignedDeallocate(pvVar2);
  *puVar3 = &PTR__Filter_01005f60;
  *(undefined ***)this = &PTR__Filter_01006108;
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  operator_delete(puVar3);
  return;
}


