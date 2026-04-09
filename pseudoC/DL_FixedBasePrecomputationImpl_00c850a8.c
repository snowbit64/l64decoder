// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DL_FixedBasePrecomputationImpl
// Entry Point: 00c850a8
// Size: 76 bytes
// Signature: undefined DL_FixedBasePrecomputationImpl(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::DL_FixedBasePrecomputationImpl() */

void CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::DL_FixedBasePrecomputationImpl
               (void)

{
  undefined8 *in_x0;
  
  *in_x0 = &PTR__DL_FixedBasePrecomputationImpl_00ff25e0;
  Integer::Integer((Integer *)(in_x0 + 1));
  *(undefined4 *)(in_x0 + 7) = 0;
                    /* try { // try from 00c850dc to 00c850df has its CatchHandler @ 00c850f4 */
  Integer::Integer((Integer *)(in_x0 + 8));
  in_x0[0xe] = 0;
  in_x0[0xf] = 0;
  in_x0[0x10] = 0;
  return;
}


