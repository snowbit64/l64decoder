// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_PublicKeyImpl
// Entry Point: 00ca3dd4
// Size: 128 bytes
// Signature: undefined __thiscall ~DL_PublicKeyImpl(DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> * this)


/* CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP> >::~DL_PublicKeyImpl()
    */

void __thiscall
CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>::~DL_PublicKeyImpl
          (DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> *this)

{
  long *in_x1;
  long lVar1;
  long *plVar2;
  
  lVar1 = *in_x1;
  *(long *)this = lVar1;
  plVar2 = (long *)(this + 8);
  *plVar2 = in_x1[0xc];
  *(long *)(this + 0x10) = in_x1[0xd];
  *(long *)(this + *(long *)(lVar1 + -0x18)) = in_x1[0xe];
  DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::~DL_FixedBasePrecomputationImpl
            ((DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> *)(this + 400));
  lVar1 = in_x1[1];
  *plVar2 = lVar1;
  *(long *)(this + 0x10) = in_x1[10];
  *(long *)((long)plVar2 + *(long *)(lVar1 + -0x18)) = in_x1[0xb];
  DL_GroupParameters_EC<CryptoPP::ECP>::~DL_GroupParameters_EC
            ((DL_GroupParameters_EC<CryptoPP::ECP> *)(this + 0x18));
  return;
}


