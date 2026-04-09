// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SavePrecomputation
// Entry Point: 00ca44cc
// Size: 136 bytes
// Signature: undefined __thiscall SavePrecomputation(DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> * this, BufferedTransformation * param_1)


/* CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>
   >::SavePrecomputation(CryptoPP::BufferedTransformation&) const */

void __thiscall
CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>::SavePrecomputation
          (DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> *this,
          BufferedTransformation *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)(**(code **)(*(long *)this + 0x10))();
  (**(code **)(*plVar1 + 0x58))(plVar1,param_1);
  plVar1 = (long *)(**(code **)(*(long *)this + 0x40))(this);
  plVar2 = (long *)(**(code **)(*(long *)this + 0x10))(this);
  uVar3 = (**(code **)(*plVar2 + 0x88))();
                    /* WARNING: Could not recover jumptable at 0x00ca4550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,uVar3,param_1);
  return;
}


