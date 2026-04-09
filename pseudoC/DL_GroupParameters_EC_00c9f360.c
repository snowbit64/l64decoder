// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DL_GroupParameters_EC
// Entry Point: 00c9f360
// Size: 148 bytes
// Signature: undefined __cdecl DL_GroupParameters_EC(OID * param_1)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::DL_GroupParameters_EC(CryptoPP::OID const&) */

void CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::DL_GroupParameters_EC(OID *param_1)

{
  long *in_x1;
  OID *in_x2;
  long lVar1;
  
  DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::EC2N>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>,CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>>
  ::DL_GroupParametersImpl();
  lVar1 = *in_x1;
  *(long *)param_1 = lVar1;
  *(long *)(param_1 + *(long *)(lVar1 + -0x70)) = in_x1[9];
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined ***)(param_1 + 0x168) = &PTR__OID_00fecd98;
  *(undefined8 *)(param_1 + 0x170) = 0;
                    /* try { // try from 00c9f3b8 to 00c9f3bf has its CatchHandler @ 00c9f414 */
  Integer::Integer((Integer *)(param_1 + 0x188));
                    /* try { // try from 00c9f3c4 to 00c9f3cb has its CatchHandler @ 00c9f404 */
  Integer::Integer((Integer *)(param_1 + 0x1b8));
  *(undefined2 *)(param_1 + 0x1e8) = 0x100;
                    /* try { // try from 00c9f3d4 to 00c9f3df has its CatchHandler @ 00c9f3f4 */
  Initialize((DL_GroupParameters_EC<CryptoPP::EC2N> *)param_1,in_x2);
  return;
}


