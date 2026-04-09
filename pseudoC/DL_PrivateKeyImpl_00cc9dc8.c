// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DL_PrivateKeyImpl
// Entry Point: 00cc9dc8
// Size: 284 bytes
// Signature: undefined DL_PrivateKeyImpl(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>
   >::DL_PrivateKeyImpl() */

void CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>::DL_PrivateKeyImpl
               (void)

{
  long *in_x0;
  long *in_x1;
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  *in_x0 = (long)&PTR__DL_Key_01004d28;
  plVar2 = in_x0 + 1;
  *plVar2 = (long)&PTR__ASN1Object_01002560;
  lVar1 = in_x1[5];
  plVar3 = in_x0 + 2;
  *plVar3 = lVar1;
  *(long *)((long)plVar3 + *(long *)(lVar1 + -0x70)) = in_x1[6];
  lVar1 = in_x1[4];
  *plVar3 = lVar1;
  *(long *)((long)plVar3 + *(long *)(lVar1 + -0x70)) = in_x1[7];
  lVar1 = in_x1[3];
  *plVar2 = lVar1;
  *plVar3 = in_x1[8];
  *(long *)((long)plVar2 + *(long *)(lVar1 + -0x18)) = in_x1[9];
  lVar1 = in_x1[2];
  *plVar2 = lVar1;
  *plVar3 = in_x1[10];
  *(long *)((long)plVar2 + *(long *)(lVar1 + -0x18)) = in_x1[0xb];
  ByteQueue::ByteQueue((ByteQueue *)(in_x0 + 3),0);
  lVar1 = in_x1[1];
  *plVar2 = lVar1;
  *plVar3 = in_x1[0xc];
  *(long *)((long)plVar2 + *(long *)(lVar1 + -0x18)) = in_x1[0xd];
                    /* try { // try from 00cc9ea0 to 00cc9ea3 has its CatchHandler @ 00cc9efc */
  DL_GroupParameters_EC<CryptoPP::EC2N>::DL_GroupParameters_EC();
  lVar1 = *in_x1;
  *in_x0 = lVar1;
  in_x0[1] = in_x1[0xe];
  in_x0[2] = in_x1[0xf];
  *(long *)((long)in_x0 + *(long *)(lVar1 + -0x18)) = in_x1[0x10];
                    /* try { // try from 00cc9ecc to 00cc9ecf has its CatchHandler @ 00cc9ee4 */
  Integer::Integer((Integer *)(in_x0 + 0x4a));
  return;
}


