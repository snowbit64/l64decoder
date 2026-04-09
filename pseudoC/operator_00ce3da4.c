// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator=
// Entry Point: 00ce3da4
// Size: 36 bytes
// Signature: undefined __thiscall operator=(PolynomialMod2 * this, PolynomialMod2 * param_1)


/* CryptoPP::PolynomialMod2::TEMPNAMEPLACEHOLDERVALUE(CryptoPP::PolynomialMod2 const&) */

PolynomialMod2 * __thiscall
CryptoPP::PolynomialMod2::operator=(PolynomialMod2 *this,PolynomialMod2 *param_1)

{
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>>::Assign
            ((SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>> *)this,
             (SecBlock *)param_1);
  return this;
}


