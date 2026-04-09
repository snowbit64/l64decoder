// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DL_GroupParameters_EC
// Entry Point: 00c9f298
// Size: 132 bytes
// Signature: undefined DL_GroupParameters_EC(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::DL_GroupParameters_EC() */

void CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::DL_GroupParameters_EC(void)

{
  undefined8 *in_x0;
  
  *in_x0 = &PTR__NameValuePairs_00fecdc8;
  DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::EC2N>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>,CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>>
  ::DL_GroupParametersImpl();
  in_x0[0x2f] = 0;
  in_x0[0x30] = 0;
  *in_x0 = &PTR__DL_GroupParameters_EC_00ff36f0;
  in_x0[0x2d] = &PTR__OID_00fecd98;
  in_x0[0x2e] = 0;
                    /* try { // try from 00c9f2f4 to 00c9f2fb has its CatchHandler @ 00c9f330 */
  Integer::Integer((Integer *)(in_x0 + 0x31));
                    /* try { // try from 00c9f300 to 00c9f303 has its CatchHandler @ 00c9f31c */
  Integer::Integer((Integer *)(in_x0 + 0x37));
  *(undefined2 *)(in_x0 + 0x3d) = 0x100;
  return;
}


