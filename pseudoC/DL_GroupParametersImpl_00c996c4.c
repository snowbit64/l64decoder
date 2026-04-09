// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DL_GroupParametersImpl
// Entry Point: 00c996c4
// Size: 236 bytes
// Signature: undefined DL_GroupParametersImpl(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,
   CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,
   CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint> >::DL_GroupParametersImpl() */

void CryptoPP::
     DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>>
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
  in_x0[6] = (long)&PTR__ECPPoint_00fe9fd8;
  in_x0[2] = (long)&PTR__EcPrecomputation_00fecea0;
  in_x0[4] = 0;
  in_x0[5] = (long)&PTR__DL_FixedBasePrecomputationImpl_00ff3438;
  in_x0[3] = 0;
                    /* try { // try from 00c99770 to 00c99777 has its CatchHandler @ 00c997d4 */
  Integer::Integer((Integer *)(in_x0 + 7));
                    /* try { // try from 00c9977c to 00c9977f has its CatchHandler @ 00c997c4 */
  Integer::Integer((Integer *)(in_x0 + 0xd));
  *(undefined4 *)(in_x0 + 0x14) = 0;
  *(undefined *)(in_x0 + 0x13) = 1;
                    /* try { // try from 00c99790 to 00c99793 has its CatchHandler @ 00c997b0 */
  Integer::Integer((Integer *)(in_x0 + 0x15));
  in_x0[0x1b] = 0;
  in_x0[0x1c] = 0;
  in_x0[0x1d] = 0;
  return;
}


