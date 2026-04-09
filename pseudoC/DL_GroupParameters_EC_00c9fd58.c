// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DL_GroupParameters_EC
// Entry Point: 00c9fd58
// Size: 148 bytes
// Signature: undefined __cdecl DL_GroupParameters_EC(BufferedTransformation * param_1)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::DL_GroupParameters_EC(CryptoPP::BufferedTransformation&)
    */

void CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::DL_GroupParameters_EC
               (BufferedTransformation *param_1)

{
  long *in_x1;
  BufferedTransformation *in_x2;
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
                    /* try { // try from 00c9fdb0 to 00c9fdb7 has its CatchHandler @ 00c9fe0c */
  Integer::Integer((Integer *)(param_1 + 0x188));
                    /* try { // try from 00c9fdbc to 00c9fdc3 has its CatchHandler @ 00c9fdfc */
  Integer::Integer((Integer *)(param_1 + 0x1b8));
  *(undefined2 *)(param_1 + 0x1e8) = 0x100;
                    /* try { // try from 00c9fdcc to 00c9fdd7 has its CatchHandler @ 00c9fdec */
  BERDecode((DL_GroupParameters_EC<CryptoPP::EC2N> *)param_1,in_x2);
  return;
}


