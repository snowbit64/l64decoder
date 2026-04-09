// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetModulusAndSubgroupGenerator
// Entry Point: 00c87ca4
// Size: 128 bytes
// Signature: undefined __thiscall SetModulusAndSubgroupGenerator(DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>> * this, Integer * param_1, Integer * param_2)


/* CryptoPP::DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,
   CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>
   >::SetModulusAndSubgroupGenerator(CryptoPP::Integer const&, CryptoPP::Integer const&) */

void __thiscall
CryptoPP::
DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>>
::SetModulusAndSubgroupGenerator
          (DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>>
           *this,Integer *param_1,Integer *param_2)

{
  MontgomeryRepresentation *this_00;
  DL_GroupPrecomputation *pDVar1;
  
  this_00 = (MontgomeryRepresentation *)operator_new(0xf8);
                    /* try { // try from 00c87ccc to 00c87cd3 has its CatchHandler @ 00c87d24 */
  MontgomeryRepresentation::MontgomeryRepresentation(this_00,param_1);
  if (*(long **)(this + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x50) + 8))();
  }
  *(MontgomeryRepresentation **)(this + 0x50) = this_00;
  pDVar1 = (DL_GroupPrecomputation *)(**(code **)(*(long *)this + 0xc0))(this);
  DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::SetBase
            ((DL_FixedBasePrecomputationImpl<CryptoPP::Integer> *)(this + 0x58),pDVar1,param_2);
  *(undefined4 *)(this + 0x10) = 0;
  return;
}


