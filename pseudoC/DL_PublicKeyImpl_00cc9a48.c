// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DL_PublicKeyImpl
// Entry Point: 00cc9a48
// Size: 324 bytes
// Signature: undefined DL_PublicKeyImpl(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP> >::DL_PublicKeyImpl()
    */

void CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>::DL_PublicKeyImpl
               (void)

{
  long *in_x0;
  long *in_x1;
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  *in_x0 = (long)&PTR__DL_Key_01004b20;
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
  DL_GroupParameters_EC<CryptoPP::ECP>::DL_GroupParameters_EC();
  lVar1 = *in_x1;
  *in_x0 = lVar1;
  *plVar3 = in_x1[0xc];
  *plVar2 = in_x1[0xd];
  *(long *)((long)in_x0 + *(long *)(lVar1 + -0x18)) = in_x1[0xe];
  in_x0[0x32] = (long)&PTR__DL_FixedBasePrecomputationImpl_00ff3438;
  in_x0[0x33] = (long)&PTR__ECPPoint_00fe9fd8;
                    /* try { // try from 00cc9b44 to 00cc9b4b has its CatchHandler @ 00cc9bb4 */
  Integer::Integer((Integer *)(in_x0 + 0x34));
                    /* try { // try from 00cc9b50 to 00cc9b53 has its CatchHandler @ 00cc9ba0 */
  Integer::Integer((Integer *)(in_x0 + 0x3a));
  *(undefined4 *)(in_x0 + 0x41) = 0;
  *(undefined *)(in_x0 + 0x40) = 1;
                    /* try { // try from 00cc9b68 to 00cc9b6b has its CatchHandler @ 00cc9b8c */
  Integer::Integer((Integer *)(in_x0 + 0x42));
  in_x0[0x49] = 0;
  in_x0[0x48] = 0;
  in_x0[0x4a] = 0;
  return;
}


