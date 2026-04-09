// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_GroupParameters_DSA
// Entry Point: 00cec97c
// Size: 180 bytes
// Signature: undefined __thiscall ~DL_GroupParameters_DSA(DL_GroupParameters_DSA * this)


/* non-virtual thunk to CryptoPP::DL_GroupParameters_DSA::~DL_GroupParameters_DSA() */

void __thiscall
CryptoPP::DL_GroupParameters_DSA::~DL_GroupParameters_DSA(DL_GroupParameters_DSA *this)

{
  ulong uVar1;
  void *pvVar2;
  
  *(undefined ***)(this + -8) = &PTR__DL_GroupParametersImpl_0100b6d0;
  *(undefined ***)this = &PTR__DL_GroupParametersImpl_0100b818;
  DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::~DL_FixedBasePrecomputationImpl
            ((DL_FixedBasePrecomputationImpl<CryptoPP::Integer> *)(this + 0x50));
  *(undefined ***)(this + 0x40) = &PTR__ModExpPrecomputation_01002598;
  if (*(long **)(this + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x48) + 8))();
  }
  pvVar2 = *(void **)(this + 0x30);
  uVar1 = *(ulong *)(this + 0x20);
  if (*(ulong *)(this + 0x28) <= *(ulong *)(this + 0x20)) {
    uVar1 = *(ulong *)(this + 0x28);
  }
  *(undefined ***)(this + -8) = &PTR__DL_GroupParameters_IntegerBased_0100b938;
  *(undefined ***)this = &PTR__DL_GroupParameters_IntegerBased_0100ba68;
  *(undefined ***)(this + 0x10) = &PTR__Integer_0100c890;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00ceca20 to 00ceca23 has its CatchHandler @ 00ceca30 */
  UnalignedDeallocate(pvVar2);
  return;
}


