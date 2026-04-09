// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BaseN_Decoder
// Entry Point: 00c76db4
// Size: 140 bytes
// Signature: undefined __thiscall ~BaseN_Decoder(BaseN_Decoder * this)


/* non-virtual thunk to CryptoPP::BaseN_Decoder::~BaseN_Decoder() */

void __thiscall CryptoPP::BaseN_Decoder::~BaseN_Decoder(BaseN_Decoder *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x58);
  *(undefined ***)(this + -8) = &PTR__BaseN_Decoder_00fef0c0;
  *(undefined ***)this = &PTR__BaseN_Decoder_00fef270;
  uVar1 = *(ulong *)(this + 0x48);
  if (*(ulong *)(this + 0x50) <= *(ulong *)(this + 0x48)) {
    uVar1 = *(ulong *)(this + 0x50);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00c76e00 to 00c76e03 has its CatchHandler @ 00c76e40 */
  UnalignedDeallocate(pvVar2);
  *(undefined ***)(this + -8) = &PTR__Filter_01005f60;
  *(undefined ***)this = &PTR__Filter_01006108;
  if (*(long **)(this + 0x10) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c76e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x10) + 8))();
  return;
}


