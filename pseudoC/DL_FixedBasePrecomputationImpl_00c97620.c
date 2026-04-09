// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DL_FixedBasePrecomputationImpl
// Entry Point: 00c97620
// Size: 120 bytes
// Signature: undefined DL_FixedBasePrecomputationImpl(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::DL_FixedBasePrecomputationImpl() */

void CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::DL_FixedBasePrecomputationImpl
               (void)

{
  undefined8 *in_x0;
  
  *in_x0 = &PTR__DL_FixedBasePrecomputationImpl_00ff3438;
  in_x0[1] = &PTR__ECPPoint_00fe9fd8;
  Integer::Integer((Integer *)(in_x0 + 2));
                    /* try { // try from 00c97668 to 00c9766b has its CatchHandler @ 00c976ac */
  Integer::Integer((Integer *)(in_x0 + 8));
  *(undefined4 *)(in_x0 + 0xf) = 0;
  *(undefined *)(in_x0 + 0xe) = 1;
                    /* try { // try from 00c9767c to 00c9767f has its CatchHandler @ 00c97698 */
  Integer::Integer((Integer *)(in_x0 + 0x10));
  in_x0[0x16] = 0;
  in_x0[0x17] = 0;
  in_x0[0x18] = 0;
  return;
}


