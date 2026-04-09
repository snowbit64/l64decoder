// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SavePrecomputation
// Entry Point: 00ca4e3c
// Size: 148 bytes
// Signature: undefined __thiscall SavePrecomputation(DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> * this, BufferedTransformation * param_1)


/* virtual thunk to CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>
   >::SavePrecomputation(CryptoPP::BufferedTransformation&) const */

void __thiscall
CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>::SavePrecomputation
          (DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> *this,
          BufferedTransformation *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)(this + *(long *)(*(long *)this + -0x68));
  plVar1 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2);
  (**(code **)(*plVar1 + 0x58))(plVar1,param_1);
  plVar1 = (long *)(**(code **)(*plVar2 + 0x40))(plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2);
  uVar3 = (**(code **)(*plVar2 + 0x88))();
                    /* WARNING: Could not recover jumptable at 0x00ca4ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,uVar3,param_1);
  return;
}


