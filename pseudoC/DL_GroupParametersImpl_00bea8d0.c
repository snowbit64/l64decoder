// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DL_GroupParametersImpl
// Entry Point: 00bea8d0
// Size: 252 bytes
// Signature: undefined __cdecl DL_GroupParametersImpl(DL_GroupParametersImpl * param_1)


/* CryptoPP::DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,
   CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,
   CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>
   >::DL_GroupParametersImpl(CryptoPP::DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,
   CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,
   CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint> > const&) */

void CryptoPP::
     DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>>
     ::DL_GroupParametersImpl(DL_GroupParametersImpl *param_1)

{
  undefined4 uVar1;
  ECP *pEVar2;
  long *in_x1;
  long in_x2;
  long lVar3;
  long lVar4;
  ECP *pEVar5;
  
  lVar3 = in_x1[3];
  pEVar5 = *(ECP **)(in_x2 + 0x18);
  *(long *)param_1 = lVar3;
  *(long *)(param_1 + *(long *)(lVar3 + -0x70)) = in_x1[4];
  lVar3 = in_x1[2];
  *(long *)param_1 = lVar3;
  *(long *)(param_1 + *(long *)(lVar3 + -0x70)) = in_x1[5];
  uVar1 = *(undefined4 *)(in_x2 + 8);
  lVar3 = in_x1[1];
  *(long *)param_1 = lVar3;
  lVar3 = *(long *)(lVar3 + -0x70);
  lVar4 = in_x1[6];
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(long *)(param_1 + lVar3) = lVar4;
  lVar3 = *in_x1;
  *(long *)param_1 = lVar3;
  *(long *)(param_1 + *(long *)(lVar3 + -0x70)) = in_x1[7];
  *(undefined ***)(param_1 + 0x10) = &PTR__EcPrecomputation_00fecea0;
  if (pEVar5 == (ECP *)0x0) {
    pEVar2 = (ECP *)0x0;
  }
  else {
    pEVar2 = (ECP *)operator_new(0xe8);
                    /* try { // try from 00bea968 to 00bea973 has its CatchHandler @ 00bea9f4 */
    ECP::ECP(pEVar2,pEVar5,false);
  }
  *(ECP **)(param_1 + 0x18) = pEVar2;
  pEVar5 = *(ECP **)(in_x2 + 0x20);
  if (pEVar5 == (ECP *)0x0) {
    pEVar2 = (ECP *)0x0;
  }
  else {
                    /* try { // try from 00bea988 to 00bea98f has its CatchHandler @ 00bea9e0 */
    pEVar2 = (ECP *)operator_new(0xe8);
                    /* try { // try from 00bea994 to 00bea99f has its CatchHandler @ 00bea9cc */
    ECP::ECP(pEVar2,pEVar5,false);
  }
  *(ECP **)(param_1 + 0x20) = pEVar2;
                    /* try { // try from 00bea9b4 to 00bea9b7 has its CatchHandler @ 00beaa08 */
  DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::DL_FixedBasePrecomputationImpl
            ((DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> *)(param_1 + 0x28),
             (DL_FixedBasePrecomputationImpl *)(in_x2 + 0x28));
  return;
}


