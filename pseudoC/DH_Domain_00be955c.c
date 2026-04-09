// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DH_Domain
// Entry Point: 00be955c
// Size: 196 bytes
// Signature: undefined __thiscall DH_Domain(DH_Domain<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>,CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption,2>> * this, DL_GroupParameters_EC * param_1)


/* CryptoPP::DH_Domain<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>,
   CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption, 2>
   >::DH_Domain(CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP> const&) */

void __thiscall
CryptoPP::
DH_Domain<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>,CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption,2>>
::DH_Domain(DH_Domain<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>,CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption,2>>
            *this,DL_GroupParameters_EC *param_1)

{
  undefined8 *puVar1;
  
  Algorithm::Algorithm((Algorithm *)this,true);
  *(undefined ***)this = &PTR__DH_Domain_00fe9f08;
  puVar1 = (undefined8 *)(this + 8);
  *puVar1 = &PTR__NameValuePairs_00fecdc8;
  DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>>
  ::DL_GroupParametersImpl((DL_GroupParametersImpl *)puVar1);
  *puVar1 = &PTR__DL_GroupParameters_EC_00ff34f8;
  *(undefined ***)(this + 0xf8) = &PTR__OID_00fecd98;
                    /* try { // try from 00be95e4 to 00be95e7 has its CatchHandler @ 00be9650 */
  std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::vector
            ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(this + 0x100),
             (vector *)(param_1 + 0xf8));
                    /* try { // try from 00be95f0 to 00be95f7 has its CatchHandler @ 00be9630 */
  Integer::Integer((Integer *)(this + 0x118),(Integer *)(param_1 + 0x110));
                    /* try { // try from 00be9600 to 00be9603 has its CatchHandler @ 00be9620 */
  Integer::Integer((Integer *)(this + 0x148),(Integer *)(param_1 + 0x140));
  *(undefined2 *)(this + 0x178) = *(undefined2 *)(param_1 + 0x170);
  return;
}


