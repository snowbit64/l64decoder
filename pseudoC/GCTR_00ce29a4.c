// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GCTR
// Entry Point: 00ce29a4
// Size: 120 bytes
// Signature: undefined __thiscall ~GCTR(GCTR * this)


/* non-virtual thunk to CryptoPP::GCM_Base::GCTR::~GCTR() */

void __thiscall CryptoPP::GCM_Base::GCTR::~GCTR(GCTR *this)

{
  ulong uVar1;
  void *pvVar2;
  
  *(undefined ***)(this + -0x30) = &PTR__AdditiveCipherTemplate_00ff1588;
  *(undefined ***)(this + 0x28) = &PTR__AdditiveCipherTemplate_00ff16a0;
  uVar1 = *(ulong *)(this + 0x38);
  if (*(ulong *)(this + 0x40) <= *(ulong *)(this + 0x38)) {
    uVar1 = *(ulong *)(this + 0x40);
  }
  *(undefined ***)this = &PTR__AdditiveCipherTemplate_00ff1620;
  pvVar2 = *(void **)(this + 0x48);
  *(undefined ***)(this + -0x38) = &PTR__AdditiveCipherTemplate_00ff1438;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00ce2a08 to 00ce2a0b has its CatchHandler @ 00ce2a1c */
  UnalignedDeallocate(pvVar2);
  CTR_ModePolicy::~CTR_ModePolicy((CTR_ModePolicy *)(this + -0x38));
  return;
}


