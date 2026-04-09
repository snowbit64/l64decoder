// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MultiplyElements
// Entry Point: 00cec4a4
// Size: 72 bytes
// Signature: undefined __thiscall MultiplyElements(DL_GroupParameters_GFP * this, Integer * param_1, Integer * param_2)


/* CryptoPP::DL_GroupParameters_GFP::MultiplyElements(CryptoPP::Integer const&, CryptoPP::Integer
   const&) const */

void __thiscall
CryptoPP::DL_GroupParameters_GFP::MultiplyElements
          (DL_GroupParameters_GFP *this,Integer *param_1,Integer *param_2)

{
  Integer *pIVar1;
  
  pIVar1 = (Integer *)(**(code **)(*(long *)this + 0xa0))();
  a_times_b_mod_c(param_1,param_2,pIVar1);
  return;
}


