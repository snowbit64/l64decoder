// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SimultaneousExponentiate
// Entry Point: 00c84188
// Size: 76 bytes
// Signature: undefined __thiscall SimultaneousExponentiate(AbstractRing<CryptoPP::Integer> * this, Integer * param_1, Integer * param_2, Integer * param_3, uint param_4)


/* CryptoPP::AbstractRing<CryptoPP::Integer>::SimultaneousExponentiate(CryptoPP::Integer*,
   CryptoPP::Integer const&, CryptoPP::Integer const*, unsigned int) const */

void __thiscall
CryptoPP::AbstractRing<CryptoPP::Integer>::SimultaneousExponentiate
          (AbstractRing<CryptoPP::Integer> *this,Integer *param_1,Integer *param_2,Integer *param_3,
          uint param_4)

{
  AbstractGroup<CryptoPP::Integer> *this_00;
  
  this_00 = (AbstractGroup<CryptoPP::Integer> *)(**(code **)(*(long *)this + 0xb8))();
  AbstractGroup<CryptoPP::Integer>::SimultaneousMultiply(this_00,param_1,param_2,param_3,param_4);
  return;
}


