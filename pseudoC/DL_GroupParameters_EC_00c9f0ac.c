// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DL_GroupParameters_EC
// Entry Point: 00c9f0ac
// Size: 120 bytes
// Signature: undefined DL_GroupParameters_EC(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::DL_GroupParameters_EC() */

void CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::DL_GroupParameters_EC(void)

{
  long *in_x0;
  long *in_x1;
  long lVar1;
  
  DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::EC2N>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>,CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>>
  ::DL_GroupParametersImpl();
  lVar1 = *in_x1;
  *in_x0 = lVar1;
  *(long *)((long)in_x0 + *(long *)(lVar1 + -0x70)) = in_x1[9];
  in_x0[0x2f] = 0;
  in_x0[0x30] = 0;
  in_x0[0x2d] = (long)&PTR__OID_00fecd98;
  in_x0[0x2e] = 0;
                    /* try { // try from 00c9f0fc to 00c9f103 has its CatchHandler @ 00c9f138 */
  Integer::Integer((Integer *)(in_x0 + 0x31));
                    /* try { // try from 00c9f108 to 00c9f10b has its CatchHandler @ 00c9f124 */
  Integer::Integer((Integer *)(in_x0 + 0x37));
  *(undefined2 *)(in_x0 + 0x3d) = 0x100;
  return;
}


