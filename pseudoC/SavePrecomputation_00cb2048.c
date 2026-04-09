// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SavePrecomputation
// Entry Point: 00cb2048
// Size: 92 bytes
// Signature: undefined __thiscall SavePrecomputation(DL_GroupParameters<CryptoPP::EC2NPoint> * this, BufferedTransformation * param_1)


/* CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>::SavePrecomputation(CryptoPP::BufferedTransformation&)
   const */

void __thiscall
CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>::SavePrecomputation
          (DL_GroupParameters<CryptoPP::EC2NPoint> *this,BufferedTransformation *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)(**(code **)(*(long *)this + 0x90))();
  uVar2 = (**(code **)(*(long *)this + 0x88))(this);
                    /* WARNING: Could not recover jumptable at 0x00cb20a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,uVar2,param_1);
  return;
}


