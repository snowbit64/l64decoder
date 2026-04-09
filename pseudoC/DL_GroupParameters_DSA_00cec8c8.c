// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_GroupParameters_DSA
// Entry Point: 00cec8c8
// Size: 176 bytes
// Signature: undefined __thiscall ~DL_GroupParameters_DSA(DL_GroupParameters_DSA * this)


/* CryptoPP::DL_GroupParameters_DSA::~DL_GroupParameters_DSA() */

void __thiscall
CryptoPP::DL_GroupParameters_DSA::~DL_GroupParameters_DSA(DL_GroupParameters_DSA *this)

{
  ulong uVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__DL_GroupParametersImpl_0100b6d0;
  *(undefined ***)(this + 8) = &PTR__DL_GroupParametersImpl_0100b818;
  DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::~DL_FixedBasePrecomputationImpl
            ((DL_FixedBasePrecomputationImpl<CryptoPP::Integer> *)(this + 0x58));
  *(undefined ***)(this + 0x48) = &PTR__ModExpPrecomputation_01002598;
  if (*(long **)(this + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x50) + 8))();
  }
  pvVar2 = *(void **)(this + 0x38);
  uVar1 = *(ulong *)(this + 0x28);
  if (*(ulong *)(this + 0x30) <= *(ulong *)(this + 0x28)) {
    uVar1 = *(ulong *)(this + 0x30);
  }
  *(undefined ***)this = &PTR__DL_GroupParameters_IntegerBased_0100b938;
  *(undefined ***)(this + 8) = &PTR__DL_GroupParameters_IntegerBased_0100ba68;
  *(undefined ***)(this + 0x18) = &PTR__Integer_0100c890;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00cec964 to 00cec967 has its CatchHandler @ 00cec978 */
  UnalignedDeallocate(pvVar2);
  operator_delete(this);
  return;
}


