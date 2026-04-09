// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DL_FixedBasePrecomputationImpl
// Entry Point: 00c9584c
// Size: 120 bytes
// Signature: undefined DL_FixedBasePrecomputationImpl(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>::DL_FixedBasePrecomputationImpl()
    */

void CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>::DL_FixedBasePrecomputationImpl
               (void)

{
  undefined8 *in_x0;
  
  *in_x0 = &PTR__DL_FixedBasePrecomputationImpl_00ff33d8;
  in_x0[1] = &PTR__EC2NPoint_010026a8;
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(in_x0 + 2));
                    /* try { // try from 00c95894 to 00c95897 has its CatchHandler @ 00c958d8 */
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(in_x0 + 6));
  *(undefined4 *)(in_x0 + 0xb) = 0;
  *(undefined *)(in_x0 + 10) = 1;
                    /* try { // try from 00c958a8 to 00c958ab has its CatchHandler @ 00c958c4 */
  Integer::Integer((Integer *)(in_x0 + 0xc));
  in_x0[0x12] = 0;
  in_x0[0x13] = 0;
  in_x0[0x14] = 0;
  return;
}


