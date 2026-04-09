// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetGenerator
// Entry Point: 00c87c60
// Size: 68 bytes
// Signature: undefined GetGenerator(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,
   CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer> >::GetGenerator() const */

long * CryptoPP::
       DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>>
       ::GetGenerator(void)

{
  long *in_x0;
  long *plVar1;
  ulong uVar2;
  
  plVar1 = (long *)(**(code **)(*in_x0 + 0xc0))();
  uVar2 = (**(code **)(*plVar1 + 0x10))();
  plVar1 = in_x0 + 0xc;
  if ((uVar2 & 1) == 0) {
    plVar1 = (long *)in_x0[0x19];
  }
  return plVar1;
}


