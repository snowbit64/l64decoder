// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_GroupParametersImpl
// Entry Point: 00be9d20
// Size: 120 bytes
// Signature: undefined __thiscall ~DL_GroupParametersImpl(DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>> * this)


/* CryptoPP::DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,
   CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,
   CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint> >::~DL_GroupParametersImpl() */

void __thiscall
CryptoPP::
DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>>
::~DL_GroupParametersImpl
          (DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>>
           *this)

{
  long *in_x1;
  long lVar1;
  
  lVar1 = *in_x1;
  *(long *)this = lVar1;
  *(long *)(this + *(long *)(lVar1 + -0x70)) = in_x1[7];
  DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::~DL_FixedBasePrecomputationImpl
            ((DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> *)(this + 0x28));
  *(undefined ***)(this + 0x10) = &PTR__EcPrecomputation_00fecea0;
  if (*(long **)(this + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 8))();
  }
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00be9d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 8))();
    return;
  }
  return;
}


