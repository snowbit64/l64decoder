// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BaseN_Encoder
// Entry Point: 00c768e8
// Size: 136 bytes
// Signature: undefined __thiscall ~BaseN_Encoder(BaseN_Encoder * this)


/* CryptoPP::BaseN_Encoder::~BaseN_Encoder() */

void __thiscall CryptoPP::BaseN_Encoder::~BaseN_Encoder(BaseN_Encoder *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x68);
  *(undefined ***)this = &PTR__BaseN_Encoder_00feeeb0;
  *(undefined ***)(this + 8) = &PTR__BaseN_Encoder_00fef060;
  uVar1 = *(ulong *)(this + 0x58);
  if (*(ulong *)(this + 0x60) <= *(ulong *)(this + 0x58)) {
    uVar1 = *(ulong *)(this + 0x60);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00c76934 to 00c76937 has its CatchHandler @ 00c76970 */
  UnalignedDeallocate(pvVar2);
  *(undefined ***)this = &PTR__Filter_01005f60;
  *(undefined ***)(this + 8) = &PTR__Filter_01006108;
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  operator_delete(this);
  return;
}


