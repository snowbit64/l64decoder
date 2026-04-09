// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DL_GroupParametersImpl
// Entry Point: 00c9f168
// Size: 240 bytes
// Signature: undefined DL_GroupParametersImpl(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::EC2N>,
   CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>,
   CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint> >::DL_GroupParametersImpl() */

void CryptoPP::
     DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::EC2N>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>,CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>>
     ::DL_GroupParametersImpl(void)

{
  long *in_x0;
  long *in_x1;
  long lVar1;
  long lVar2;
  
  lVar1 = in_x1[3];
  *in_x0 = lVar1;
  *(long *)((long)in_x0 + *(long *)(lVar1 + -0x70)) = in_x1[4];
  lVar1 = in_x1[2];
  *in_x0 = lVar1;
  *(long *)((long)in_x0 + *(long *)(lVar1 + -0x70)) = in_x1[5];
  lVar1 = in_x1[1];
  *in_x0 = lVar1;
  lVar1 = *(long *)(lVar1 + -0x70);
  lVar2 = in_x1[6];
  *(undefined4 *)(in_x0 + 1) = 0;
  *(long *)((long)in_x0 + lVar1) = lVar2;
  lVar1 = *in_x1;
  *in_x0 = lVar1;
  *(long *)((long)in_x0 + *(long *)(lVar1 + -0x70)) = in_x1[7];
  in_x0[2] = (long)&PTR__EcPrecomputation_01002c20;
  EC2N::EC2N((EC2N *)(in_x0 + 3));
  in_x0[0x19] = (long)&PTR__EC2NPoint_010026a8;
  in_x0[0x18] = (long)&PTR__DL_FixedBasePrecomputationImpl_00ff33d8;
                    /* try { // try from 00c9f218 to 00c9f21f has its CatchHandler @ 00c9f27c */
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(in_x0 + 0x1a));
                    /* try { // try from 00c9f224 to 00c9f227 has its CatchHandler @ 00c9f268 */
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(in_x0 + 0x1e));
  *(undefined4 *)(in_x0 + 0x23) = 0;
  *(undefined *)(in_x0 + 0x22) = 1;
                    /* try { // try from 00c9f238 to 00c9f23b has its CatchHandler @ 00c9f258 */
  Integer::Integer((Integer *)(in_x0 + 0x24));
  in_x0[0x2a] = 0;
  in_x0[0x2b] = 0;
  in_x0[0x2c] = 0;
  return;
}


