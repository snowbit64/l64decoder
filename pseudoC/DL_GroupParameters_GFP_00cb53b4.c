// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_GroupParameters_GFP
// Entry Point: 00cb53b4
// Size: 176 bytes
// Signature: undefined __thiscall ~DL_GroupParameters_GFP(DL_GroupParameters_GFP * this)


/* CryptoPP::DL_GroupParameters_GFP::~DL_GroupParameters_GFP() */

void __thiscall
CryptoPP::DL_GroupParameters_GFP::~DL_GroupParameters_GFP(DL_GroupParameters_GFP *this)

{
  ulong uVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__DL_GroupParametersImpl_0100a4f8;
  *(undefined ***)(this + 8) = &PTR__DL_GroupParametersImpl_0100a640;
  *(undefined ***)(this + 8) = &PTR__DL_GroupParametersImpl_0100a640;
  DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::~DL_FixedBasePrecomputationImpl
            ((DL_FixedBasePrecomputationImpl<CryptoPP::Integer> *)(this + 0x58));
  *(undefined ***)(this + 0x48) = &PTR__ModExpPrecomputation_01002598;
  if (*(long **)(this + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x50) + 8))();
  }
  *(undefined ***)this = &PTR__DL_GroupParameters_IntegerBased_0100a760;
  *(undefined ***)(this + 8) = &PTR__DL_GroupParameters_IntegerBased_0100a890;
  *(undefined ***)(this + 8) = &PTR__DL_GroupParameters_IntegerBased_0100a890;
  pvVar2 = *(void **)(this + 0x38);
  uVar1 = *(ulong *)(this + 0x28);
  if (*(ulong *)(this + 0x30) <= *(ulong *)(this + 0x28)) {
    uVar1 = *(ulong *)(this + 0x30);
  }
  *(undefined ***)(this + 0x18) = &PTR__Integer_0100c890;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00cb5454 to 00cb5457 has its CatchHandler @ 00cb5464 */
  UnalignedDeallocate(pvVar2);
  return;
}


