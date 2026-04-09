// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DL_KeyImpl
// Entry Point: 00cc1274
// Size: 304 bytes
// Signature: undefined DL_KeyImpl(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_KeyImpl<CryptoPP::PKCS8PrivateKey, CryptoPP::DL_GroupParameters_DSA,
   CryptoPP::OID>::DL_KeyImpl() */

void CryptoPP::DL_KeyImpl<CryptoPP::PKCS8PrivateKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID>
     ::DL_KeyImpl(void)

{
  long *in_x0;
  long *in_x1;
  long lVar1;
  long *plVar2;
  
  *in_x0 = (long)&PTR__ASN1Object_01002560;
  lVar1 = in_x1[4];
  plVar2 = in_x0 + 1;
  *plVar2 = lVar1;
  *(long *)((long)plVar2 + *(long *)(lVar1 + -0x70)) = in_x1[5];
  lVar1 = in_x1[3];
  *plVar2 = lVar1;
  *(long *)((long)plVar2 + *(long *)(lVar1 + -0x70)) = in_x1[6];
  lVar1 = in_x1[2];
  *in_x0 = lVar1;
  *plVar2 = in_x1[7];
  *(long *)((long)in_x0 + *(long *)(lVar1 + -0x18)) = in_x1[8];
  lVar1 = in_x1[1];
  *in_x0 = lVar1;
  *plVar2 = in_x1[9];
  *(long *)((long)in_x0 + *(long *)(lVar1 + -0x18)) = in_x1[10];
  ByteQueue::ByteQueue((ByteQueue *)(in_x0 + 2),0);
  lVar1 = *in_x1;
  *in_x0 = lVar1;
  *plVar2 = in_x1[0xb];
  *(long *)((long)in_x0 + *(long *)(lVar1 + -0x18)) = in_x1[0xc];
  in_x0[0xc] = (long)&PTR__NameValuePairs_00fecdc8;
                    /* try { // try from 00cc1344 to 00cc1357 has its CatchHandler @ 00cc13a4 */
  DL_GroupParametersImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>,CryptoPP::DL_GroupParameters_IntegerBased>
  ::DL_GroupParametersImpl();
  in_x0[0xb] = (long)&PTR__DL_GroupParameters_IntegerBasedImpl_0100b468;
  in_x0[0xc] = (long)&PTR__DL_GroupParameters_IntegerBasedImpl_0100b5b0;
  in_x0[0xc] = (long)&PTR__DL_GroupParameters_IntegerBasedImpl_0100b5b0;
  in_x0[0xb] = (long)&PTR__DL_GroupParameters_GFP_0100b1f0;
  in_x0[0xc] = (long)&PTR__DL_GroupParameters_GFP_0100b348;
  in_x0[0xc] = (long)&PTR__DL_GroupParameters_GFP_0100b348;
  in_x0[0xb] = 0x100aeb8;
  in_x0[0xc] = 0x100b010;
  return;
}


