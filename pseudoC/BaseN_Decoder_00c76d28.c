// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BaseN_Decoder
// Entry Point: 00c76d28
// Size: 136 bytes
// Signature: undefined __thiscall ~BaseN_Decoder(BaseN_Decoder * this)


/* CryptoPP::BaseN_Decoder::~BaseN_Decoder() */

void __thiscall CryptoPP::BaseN_Decoder::~BaseN_Decoder(BaseN_Decoder *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x60);
  *(undefined ***)this = &PTR__BaseN_Decoder_00fef0c0;
  *(undefined ***)(this + 8) = &PTR__BaseN_Decoder_00fef270;
  uVar1 = *(ulong *)(this + 0x50);
  if (*(ulong *)(this + 0x58) <= *(ulong *)(this + 0x50)) {
    uVar1 = *(ulong *)(this + 0x58);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00c76d74 to 00c76d77 has its CatchHandler @ 00c76db0 */
  UnalignedDeallocate(pvVar2);
  *(undefined ***)this = &PTR__Filter_01005f60;
  *(undefined ***)(this + 8) = &PTR__Filter_01006108;
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  operator_delete(this);
  return;
}


