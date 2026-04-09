// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_KeyImpl
// Entry Point: 00cc08b0
// Size: 224 bytes
// Signature: undefined __thiscall ~DL_KeyImpl(DL_KeyImpl<CryptoPP::X509PublicKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID> * this)


/* CryptoPP::DL_KeyImpl<CryptoPP::X509PublicKey, CryptoPP::DL_GroupParameters_DSA,
   CryptoPP::OID>::~DL_KeyImpl() */

void __thiscall
CryptoPP::DL_KeyImpl<CryptoPP::X509PublicKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID>::
~DL_KeyImpl(DL_KeyImpl<CryptoPP::X509PublicKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID> *this
           )

{
  ulong uVar1;
  void *pvVar2;
  long *in_x1;
  long lVar3;
  
  lVar3 = *in_x1;
  *(long *)this = lVar3;
  *(long *)(this + 8) = in_x1[9];
  *(long *)(this + *(long *)(lVar3 + -0x18)) = in_x1[10];
  *(undefined ***)(this + 0x10) = &PTR__DL_GroupParametersImpl_0100b6d0;
  *(undefined ***)(this + 0x18) = &PTR__DL_GroupParametersImpl_0100b818;
  *(undefined ***)(this + 0x18) = &PTR__DL_GroupParametersImpl_0100b818;
  DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::~DL_FixedBasePrecomputationImpl
            ((DL_FixedBasePrecomputationImpl<CryptoPP::Integer> *)(this + 0x68));
  *(undefined ***)(this + 0x58) = &PTR__ModExpPrecomputation_01002598;
  if (*(long **)(this + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x60) + 8))();
  }
  *(undefined ***)(this + 0x10) = &PTR__DL_GroupParameters_IntegerBased_0100b938;
  *(undefined ***)(this + 0x18) = &PTR__DL_GroupParameters_IntegerBased_0100ba68;
  *(undefined ***)(this + 0x18) = &PTR__DL_GroupParameters_IntegerBased_0100ba68;
  pvVar2 = *(void **)(this + 0x48);
  uVar1 = *(ulong *)(this + 0x38);
  if (*(ulong *)(this + 0x40) <= *(ulong *)(this + 0x38)) {
    uVar1 = *(ulong *)(this + 0x40);
  }
  *(undefined ***)(this + 0x28) = &PTR__Integer_0100c890;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00cc097c to 00cc097f has its CatchHandler @ 00cc0990 */
  UnalignedDeallocate(pvVar2);
  return;
}


