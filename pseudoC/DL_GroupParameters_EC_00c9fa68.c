// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DL_GroupParameters_EC
// Entry Point: 00c9fa68
// Size: 188 bytes
// Signature: undefined __cdecl DL_GroupParameters_EC(EC2N * param_1, EC2NPoint * param_2, Integer * param_3, Integer * param_4)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::DL_GroupParameters_EC(CryptoPP::EC2N const&,
   CryptoPP::EC2NPoint const&, CryptoPP::Integer const&, CryptoPP::Integer const&) */

void CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::DL_GroupParameters_EC
               (EC2N *param_1,EC2NPoint *param_2,Integer *param_3,Integer *param_4)

{
  Integer *in_x4;
  Integer *in_x5;
  long lVar1;
  
  DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::EC2N>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>,CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>>
  ::DL_GroupParametersImpl();
  lVar1 = *(long *)param_2;
  *(long *)param_1 = lVar1;
  *(undefined8 *)(param_1 + *(long *)(lVar1 + -0x70)) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined ***)(param_1 + 0x168) = &PTR__OID_00fecd98;
  *(undefined8 *)(param_1 + 0x170) = 0;
                    /* try { // try from 00c9fad4 to 00c9fadb has its CatchHandler @ 00c9fb44 */
  Integer::Integer((Integer *)(param_1 + 0x188));
                    /* try { // try from 00c9fae0 to 00c9fae7 has its CatchHandler @ 00c9fb34 */
  Integer::Integer((Integer *)(param_1 + 0x1b8));
  *(undefined2 *)(param_1 + 0x1e8) = 0x100;
                    /* try { // try from 00c9faf0 to 00c9fb07 has its CatchHandler @ 00c9fb24 */
  Initialize((DL_GroupParameters_EC<CryptoPP::EC2N> *)param_1,(EC2N *)param_3,(EC2NPoint *)param_4,
             in_x4,in_x5);
  return;
}


