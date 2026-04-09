// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LoadPrecomputation
// Entry Point: 00cb1908
// Size: 100 bytes
// Signature: undefined __thiscall LoadPrecomputation(DL_GroupParameters<CryptoPP::ECPPoint> * this, BufferedTransformation * param_1)


/* CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>::LoadPrecomputation(CryptoPP::BufferedTransformation&)
    */

void __thiscall
CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>::LoadPrecomputation
          (DL_GroupParameters<CryptoPP::ECPPoint> *this,BufferedTransformation *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)(**(code **)(*(long *)this + 0x98))();
  uVar2 = (**(code **)(*(long *)this + 0x88))(this);
  (**(code **)(*plVar1 + 0x30))(plVar1,uVar2,param_1);
  *(undefined4 *)(this + 8) = 0;
  return;
}


