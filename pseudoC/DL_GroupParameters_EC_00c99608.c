// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DL_GroupParameters_EC
// Entry Point: 00c99608
// Size: 120 bytes
// Signature: undefined DL_GroupParameters_EC(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::DL_GroupParameters_EC() */

void CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::DL_GroupParameters_EC(void)

{
  long *in_x0;
  long *in_x1;
  long lVar1;
  
  DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>>
  ::DL_GroupParametersImpl();
  lVar1 = *in_x1;
  *in_x0 = lVar1;
  *(long *)((long)in_x0 + *(long *)(lVar1 + -0x70)) = in_x1[9];
  in_x0[0x20] = 0;
  in_x0[0x21] = 0;
  in_x0[0x1e] = (long)&PTR__OID_00fecd98;
  in_x0[0x1f] = 0;
                    /* try { // try from 00c99658 to 00c9965f has its CatchHandler @ 00c99694 */
  Integer::Integer((Integer *)(in_x0 + 0x22));
                    /* try { // try from 00c99664 to 00c99667 has its CatchHandler @ 00c99680 */
  Integer::Integer((Integer *)(in_x0 + 0x28));
  *(undefined2 *)(in_x0 + 0x2e) = 0x100;
  return;
}


