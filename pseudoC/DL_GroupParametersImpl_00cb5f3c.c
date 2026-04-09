// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DL_GroupParametersImpl
// Entry Point: 00cb5f3c
// Size: 288 bytes
// Signature: undefined DL_GroupParametersImpl(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_GroupParametersImpl<CryptoPP::ModExpPrecomputation,
   CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>,
   CryptoPP::DL_GroupParameters_IntegerBased>::DL_GroupParametersImpl() */

void CryptoPP::
     DL_GroupParametersImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>,CryptoPP::DL_GroupParameters_IntegerBased>
     ::DL_GroupParametersImpl(void)

{
  long *in_x0;
  long *in_x1;
  long lVar1;
  long lVar2;
  long *plVar3;
  
  *in_x0 = (long)&PTR__ASN1Object_01002560;
  lVar1 = in_x1[5];
  plVar3 = in_x0 + 1;
  *plVar3 = lVar1;
  *(long *)((long)plVar3 + *(long *)(lVar1 + -0x70)) = in_x1[6];
  lVar1 = in_x1[4];
  *plVar3 = lVar1;
  *(long *)((long)plVar3 + *(long *)(lVar1 + -0x70)) = in_x1[7];
  lVar1 = in_x1[3];
  *plVar3 = lVar1;
  lVar1 = *(long *)(lVar1 + -0x70);
  lVar2 = in_x1[8];
  *(undefined4 *)(in_x0 + 2) = 0;
  *(long *)((long)plVar3 + lVar1) = lVar2;
  lVar1 = in_x1[2];
  *in_x0 = lVar1;
  *plVar3 = in_x1[9];
  *(long *)((long)in_x0 + *(long *)(lVar1 + -0x18)) = in_x1[10];
  lVar1 = in_x1[1];
  *in_x0 = lVar1;
  *plVar3 = in_x1[0xb];
  *(long *)((long)in_x0 + *(long *)(lVar1 + -0x18)) = in_x1[0xc];
  Integer::Integer((Integer *)(in_x0 + 3));
  lVar1 = *in_x1;
  *in_x0 = lVar1;
  *plVar3 = in_x1[0xd];
  *(long *)((long)in_x0 + *(long *)(lVar1 + -0x18)) = in_x1[0xe];
  in_x0[9] = (long)&PTR__ModExpPrecomputation_01002598;
  in_x0[10] = 0;
  in_x0[0xb] = (long)&PTR__DL_FixedBasePrecomputationImpl_00ff25e0;
                    /* try { // try from 00cb602c to 00cb6033 has its CatchHandler @ 00cb6070 */
  Integer::Integer((Integer *)(in_x0 + 0xc));
  *(undefined4 *)(in_x0 + 0x12) = 0;
                    /* try { // try from 00cb603c to 00cb603f has its CatchHandler @ 00cb605c */
  Integer::Integer((Integer *)(in_x0 + 0x13));
  in_x0[0x19] = 0;
  in_x0[0x1a] = 0;
  in_x0[0x1b] = 0;
  return;
}


