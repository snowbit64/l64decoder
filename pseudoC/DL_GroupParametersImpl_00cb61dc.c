// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DL_GroupParametersImpl
// Entry Point: 00cb61dc
// Size: 312 bytes
// Signature: undefined __cdecl DL_GroupParametersImpl(DL_GroupParametersImpl * param_1)


/* CryptoPP::DL_GroupParametersImpl<CryptoPP::ModExpPrecomputation,
   CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>,
   CryptoPP::DL_GroupParameters_IntegerBased>::DL_GroupParametersImpl(CryptoPP::DL_GroupParametersImpl<CryptoPP::ModExpPrecomputation,
   CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>,
   CryptoPP::DL_GroupParameters_IntegerBased> const&) */

void CryptoPP::
     DL_GroupParametersImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>,CryptoPP::DL_GroupParameters_IntegerBased>
     ::DL_GroupParametersImpl(DL_GroupParametersImpl *param_1)

{
  undefined4 uVar1;
  MontgomeryRepresentation *this;
  long *in_x1;
  long in_x2;
  long lVar2;
  long lVar3;
  MontgomeryRepresentation *pMVar4;
  long *plVar5;
  
  uVar1 = *(undefined4 *)(in_x2 + 0x10);
  *(undefined ***)param_1 = &PTR__ASN1Object_01002560;
  lVar2 = in_x1[5];
  plVar5 = (long *)(param_1 + 8);
  *plVar5 = lVar2;
  *(long *)((long)plVar5 + *(long *)(lVar2 + -0x70)) = in_x1[6];
  lVar2 = in_x1[4];
  *plVar5 = lVar2;
  *(long *)((long)plVar5 + *(long *)(lVar2 + -0x70)) = in_x1[7];
  lVar2 = in_x1[3];
  *plVar5 = lVar2;
  lVar2 = *(long *)(lVar2 + -0x70);
  lVar3 = in_x1[8];
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(long *)((long)plVar5 + lVar2) = lVar3;
  lVar2 = in_x1[2];
  *(long *)param_1 = lVar2;
  *plVar5 = in_x1[9];
  *(long *)(param_1 + *(long *)(lVar2 + -0x18)) = in_x1[10];
  lVar2 = in_x1[1];
  *(long *)param_1 = lVar2;
  *plVar5 = in_x1[0xb];
  *(long *)(param_1 + *(long *)(lVar2 + -0x18)) = in_x1[0xc];
  Integer::Integer((Integer *)(param_1 + 0x18),(Integer *)(in_x2 + 0x18));
  lVar2 = *in_x1;
  *(long *)param_1 = lVar2;
  pMVar4 = *(MontgomeryRepresentation **)(in_x2 + 0x50);
  *plVar5 = in_x1[0xd];
  *(long *)(param_1 + *(long *)(lVar2 + -0x18)) = in_x1[0xe];
  *(undefined ***)(param_1 + 0x48) = &PTR__ModExpPrecomputation_01002598;
  if (pMVar4 == (MontgomeryRepresentation *)0x0) {
    this = (MontgomeryRepresentation *)0x0;
  }
  else {
                    /* try { // try from 00cb62d0 to 00cb62d7 has its CatchHandler @ 00cb6324 */
    this = (MontgomeryRepresentation *)operator_new(0xf8);
                    /* try { // try from 00cb62dc to 00cb62e3 has its CatchHandler @ 00cb6314 */
    MontgomeryRepresentation::MontgomeryRepresentation(this,pMVar4);
  }
  *(MontgomeryRepresentation **)(param_1 + 0x50) = this;
                    /* try { // try from 00cb62f8 to 00cb62fb has its CatchHandler @ 00cb632c */
  DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::DL_FixedBasePrecomputationImpl
            ((DL_FixedBasePrecomputationImpl<CryptoPP::Integer> *)(param_1 + 0x58),
             (DL_FixedBasePrecomputationImpl *)(in_x2 + 0x58));
  return;
}


