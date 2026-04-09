// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SimultaneousExponentiate
// Entry Point: 00c90940
// Size: 76 bytes
// Signature: undefined __thiscall SimultaneousExponentiate(AbstractRing<CryptoPP::PolynomialMod2> * this, PolynomialMod2 * param_1, PolynomialMod2 * param_2, Integer * param_3, uint param_4)


/* CryptoPP::AbstractRing<CryptoPP::PolynomialMod2>::SimultaneousExponentiate(CryptoPP::PolynomialMod2*,
   CryptoPP::PolynomialMod2 const&, CryptoPP::Integer const*, unsigned int) const */

void __thiscall
CryptoPP::AbstractRing<CryptoPP::PolynomialMod2>::SimultaneousExponentiate
          (AbstractRing<CryptoPP::PolynomialMod2> *this,PolynomialMod2 *param_1,
          PolynomialMod2 *param_2,Integer *param_3,uint param_4)

{
  AbstractGroup<CryptoPP::PolynomialMod2> *this_00;
  
  this_00 = (AbstractGroup<CryptoPP::PolynomialMod2> *)(**(code **)(*(long *)this + 0xb8))();
  AbstractGroup<CryptoPP::PolynomialMod2>::SimultaneousMultiply
            (this_00,param_1,param_2,param_3,param_4);
  return;
}


