// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DL_GroupParameters_EC
// Entry Point: 00c99820
// Size: 132 bytes
// Signature: undefined DL_GroupParameters_EC(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::DL_GroupParameters_EC() */

void CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::DL_GroupParameters_EC(void)

{
  undefined8 *in_x0;
  
  *in_x0 = &PTR__NameValuePairs_00fecdc8;
  DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>>
  ::DL_GroupParametersImpl();
  in_x0[0x20] = 0;
  in_x0[0x21] = 0;
  *in_x0 = &PTR__DL_GroupParameters_EC_00ff34f8;
  in_x0[0x1e] = &PTR__OID_00fecd98;
  in_x0[0x1f] = 0;
                    /* try { // try from 00c9987c to 00c99883 has its CatchHandler @ 00c998b8 */
  Integer::Integer((Integer *)(in_x0 + 0x22));
                    /* try { // try from 00c99888 to 00c9988b has its CatchHandler @ 00c998a4 */
  Integer::Integer((Integer *)(in_x0 + 0x28));
  *(undefined2 *)(in_x0 + 0x2e) = 0x100;
  return;
}


