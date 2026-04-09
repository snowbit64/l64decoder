// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DL_PublicKeyImpl
// Entry Point: 00cc1df8
// Size: 384 bytes
// Signature: undefined DL_PublicKeyImpl(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_DSA>::DL_PublicKeyImpl() */

void CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_DSA>::DL_PublicKeyImpl(void)

{
  long *in_x0;
  long *in_x1;
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  *in_x0 = (long)&PTR__DL_Key_010043e0;
  plVar2 = in_x0 + 1;
  *plVar2 = (long)&PTR__ASN1Object_01002560;
  lVar1 = in_x1[4];
  plVar3 = in_x0 + 2;
  *plVar3 = lVar1;
  *(long *)((long)plVar3 + *(long *)(lVar1 + -0x70)) = in_x1[5];
  lVar1 = in_x1[3];
  *plVar2 = lVar1;
  *plVar3 = in_x1[6];
  *(long *)((long)plVar2 + *(long *)(lVar1 + -0x18)) = in_x1[7];
  lVar1 = in_x1[2];
  *plVar2 = lVar1;
  *plVar3 = in_x1[8];
  *(long *)((long)plVar2 + *(long *)(lVar1 + -0x18)) = in_x1[9];
  lVar1 = in_x1[1];
  *plVar2 = lVar1;
  *plVar3 = in_x1[10];
  *(long *)((long)plVar2 + *(long *)(lVar1 + -0x18)) = in_x1[0xb];
  in_x0[4] = (long)&PTR__NameValuePairs_00fecdc8;
  DL_GroupParametersImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>,CryptoPP::DL_GroupParameters_IntegerBased>
  ::DL_GroupParametersImpl();
  in_x0[3] = (long)&PTR__DL_GroupParameters_IntegerBasedImpl_0100b468;
  in_x0[4] = (long)&PTR__DL_GroupParameters_IntegerBasedImpl_0100b5b0;
  in_x0[4] = (long)&PTR__DL_GroupParameters_IntegerBasedImpl_0100b5b0;
  in_x0[3] = (long)&PTR__DL_GroupParameters_GFP_0100b1f0;
  in_x0[4] = (long)&PTR__DL_GroupParameters_GFP_0100b348;
  in_x0[4] = (long)&PTR__DL_GroupParameters_GFP_0100b348;
  in_x0[3] = 0x100aeb8;
  in_x0[4] = 0x100b010;
  lVar1 = *in_x1;
  *in_x0 = lVar1;
  *plVar2 = in_x1[0xc];
  *plVar3 = in_x1[0xd];
  *(long *)((long)in_x0 + *(long *)(lVar1 + -0x18)) = in_x1[0xe];
  in_x0[0x1f] = (long)&PTR__DL_FixedBasePrecomputationImpl_00ff25e0;
                    /* try { // try from 00cc1f44 to 00cc1f4b has its CatchHandler @ 00cc1f88 */
  Integer::Integer((Integer *)(in_x0 + 0x20));
  *(undefined4 *)(in_x0 + 0x26) = 0;
                    /* try { // try from 00cc1f54 to 00cc1f57 has its CatchHandler @ 00cc1f78 */
  Integer::Integer((Integer *)(in_x0 + 0x27));
  in_x0[0x2d] = 0;
  in_x0[0x2e] = 0;
  in_x0[0x2f] = 0;
  return;
}


