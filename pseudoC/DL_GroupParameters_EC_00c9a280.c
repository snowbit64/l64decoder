// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DL_GroupParameters_EC
// Entry Point: 00c9a280
// Size: 148 bytes
// Signature: undefined __cdecl DL_GroupParameters_EC(BufferedTransformation * param_1)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::DL_GroupParameters_EC(CryptoPP::BufferedTransformation&)
    */

void CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::DL_GroupParameters_EC
               (BufferedTransformation *param_1)

{
  long *in_x1;
  BufferedTransformation *in_x2;
  long lVar1;
  
  DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>>
  ::DL_GroupParametersImpl();
  lVar1 = *in_x1;
  *(long *)param_1 = lVar1;
  *(long *)(param_1 + *(long *)(lVar1 + -0x70)) = in_x1[9];
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined ***)(param_1 + 0xf0) = &PTR__OID_00fecd98;
  *(undefined8 *)(param_1 + 0xf8) = 0;
                    /* try { // try from 00c9a2d8 to 00c9a2df has its CatchHandler @ 00c9a334 */
  Integer::Integer((Integer *)(param_1 + 0x110));
                    /* try { // try from 00c9a2e4 to 00c9a2eb has its CatchHandler @ 00c9a324 */
  Integer::Integer((Integer *)(param_1 + 0x140));
  *(undefined2 *)(param_1 + 0x170) = 0x100;
                    /* try { // try from 00c9a2f4 to 00c9a2ff has its CatchHandler @ 00c9a314 */
  BERDecode((DL_GroupParameters_EC<CryptoPP::ECP> *)param_1,in_x2);
  return;
}


