// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DL_PublicKeyImpl
// Entry Point: 00cca30c
// Size: 328 bytes
// Signature: undefined DL_PublicKeyImpl(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N> >::DL_PublicKeyImpl()
    */

void CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>::DL_PublicKeyImpl
               (void)

{
  long *in_x0;
  long *in_x1;
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  *in_x0 = (long)&PTR__DL_Key_01004f88;
  plVar3 = in_x0 + 1;
  *plVar3 = (long)&PTR__ASN1Object_01002560;
  lVar1 = in_x1[4];
  plVar2 = in_x0 + 2;
  *plVar2 = lVar1;
  *(long *)((long)plVar2 + *(long *)(lVar1 + -0x70)) = in_x1[5];
  lVar1 = in_x1[3];
  *plVar3 = lVar1;
  *plVar2 = in_x1[6];
  *(long *)((long)plVar3 + *(long *)(lVar1 + -0x18)) = in_x1[7];
  lVar1 = in_x1[2];
  *plVar3 = lVar1;
  *plVar2 = in_x1[8];
  *(long *)((long)plVar3 + *(long *)(lVar1 + -0x18)) = in_x1[9];
  lVar1 = in_x1[1];
  *plVar3 = lVar1;
  *plVar2 = in_x1[10];
  *(long *)((long)plVar3 + *(long *)(lVar1 + -0x18)) = in_x1[0xb];
  DL_GroupParameters_EC<CryptoPP::EC2N>::DL_GroupParameters_EC();
  lVar1 = *in_x1;
  *in_x0 = lVar1;
  *plVar3 = in_x1[0xc];
  *plVar2 = in_x1[0xd];
  *(long *)((long)in_x0 + *(long *)(lVar1 + -0x18)) = in_x1[0xe];
  in_x0[0x41] = (long)&PTR__DL_FixedBasePrecomputationImpl_00ff33d8;
  in_x0[0x42] = (long)&PTR__EC2NPoint_010026a8;
                    /* try { // try from 00cca40c to 00cca413 has its CatchHandler @ 00cca47c */
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(in_x0 + 0x43));
                    /* try { // try from 00cca418 to 00cca41b has its CatchHandler @ 00cca468 */
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(in_x0 + 0x47));
  *(undefined4 *)(in_x0 + 0x4c) = 0;
  *(undefined *)(in_x0 + 0x4b) = 1;
                    /* try { // try from 00cca430 to 00cca433 has its CatchHandler @ 00cca454 */
  Integer::Integer((Integer *)(in_x0 + 0x4d));
  in_x0[0x54] = 0;
  in_x0[0x53] = 0;
  in_x0[0x55] = 0;
  return;
}


