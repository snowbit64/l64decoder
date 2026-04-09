// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LoadPrecomputation
// Entry Point: 00c8741c
// Size: 112 bytes
// Signature: undefined __thiscall LoadPrecomputation(DL_GroupParameters<CryptoPP::Integer> * this, BufferedTransformation * param_1)


/* virtual thunk to
   CryptoPP::DL_GroupParameters<CryptoPP::Integer>::LoadPrecomputation(CryptoPP::BufferedTransformation&)
    */

void __thiscall
CryptoPP::DL_GroupParameters<CryptoPP::Integer>::LoadPrecomputation
          (DL_GroupParameters<CryptoPP::Integer> *this,BufferedTransformation *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)(this + *(long *)(*(long *)this + -0x60));
  plVar2 = (long *)(**(code **)(*plVar1 + 0x98))(plVar1);
  uVar3 = (**(code **)(*plVar1 + 0x88))(plVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,uVar3,param_1);
  *(undefined4 *)(plVar1 + 1) = 0;
  return;
}


