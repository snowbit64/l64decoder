// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_PublicKeyImpl
// Entry Point: 00ca46bc
// Size: 128 bytes
// Signature: undefined __thiscall ~DL_PublicKeyImpl(DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> * this)


/* CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N> >::~DL_PublicKeyImpl()
    */

void __thiscall
CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>::~DL_PublicKeyImpl
          (DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> *this)

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
  DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>::~DL_FixedBasePrecomputationImpl
            ((DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> *)(this + 0x208));
  lVar1 = in_x1[1];
  *plVar2 = lVar1;
  *(long *)(this + 0x10) = in_x1[10];
  *(long *)((long)plVar2 + *(long *)(lVar1 + -0x18)) = in_x1[0xb];
  DL_GroupParameters_EC<CryptoPP::EC2N>::~DL_GroupParameters_EC
            ((DL_GroupParameters_EC<CryptoPP::EC2N> *)(this + 0x18));
  return;
}


