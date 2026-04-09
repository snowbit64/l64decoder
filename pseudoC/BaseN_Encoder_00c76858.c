// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BaseN_Encoder
// Entry Point: 00c76858
// Size: 140 bytes
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
                    /* try { // try from 00c768a4 to 00c768a7 has its CatchHandler @ 00c768e4 */
  UnalignedDeallocate(pvVar2);
  *(undefined ***)this = &PTR__Filter_01005f60;
  *(undefined ***)(this + 8) = &PTR__Filter_01006108;
  if (*(long **)(this + 0x18) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c768d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x18) + 8))();
  return;
}


