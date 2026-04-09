// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SavePrecomputation
// Entry Point: 00c874e8
// Size: 104 bytes
// Signature: undefined __thiscall SavePrecomputation(DL_GroupParameters<CryptoPP::Integer> * this, BufferedTransformation * param_1)


/* virtual thunk to
   CryptoPP::DL_GroupParameters<CryptoPP::Integer>::SavePrecomputation(CryptoPP::BufferedTransformation&)
   const */

void __thiscall
CryptoPP::DL_GroupParameters<CryptoPP::Integer>::SavePrecomputation
          (DL_GroupParameters<CryptoPP::Integer> *this,BufferedTransformation *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)(this + *(long *)(*(long *)this + -0x68));
  plVar2 = (long *)(**(code **)(*plVar1 + 0x90))(plVar1);
  uVar3 = (**(code **)(*plVar1 + 0x88))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00c8754c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,uVar3,param_1);
  return;
}


