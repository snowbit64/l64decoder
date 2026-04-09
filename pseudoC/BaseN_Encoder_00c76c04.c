// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BaseN_Encoder
// Entry Point: 00c76c04
// Size: 144 bytes
// Signature: undefined __thiscall ~BaseN_Encoder(BaseN_Encoder * this)


/* non-virtual thunk to CryptoPP::BaseN_Encoder::~BaseN_Encoder() */

void __thiscall CryptoPP::BaseN_Encoder::~BaseN_Encoder(BaseN_Encoder *this)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  pvVar2 = *(void **)(this + 0x60);
  *(undefined ***)this = &PTR__BaseN_Encoder_00fef060;
  uVar1 = *(ulong *)(this + 0x50);
  if (*(ulong *)(this + 0x58) <= *(ulong *)(this + 0x50)) {
    uVar1 = *(ulong *)(this + 0x58);
  }
  puVar3 = (undefined8 *)(this + -8);
  *puVar3 = &PTR__BaseN_Encoder_00feeeb0;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00c76c58 to 00c76c5b has its CatchHandler @ 00c76c94 */
  UnalignedDeallocate(pvVar2);
  *puVar3 = &PTR__Filter_01005f60;
  *(undefined ***)this = &PTR__Filter_01006108;
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  operator_delete(puVar3);
  return;
}


