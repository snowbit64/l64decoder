// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_PublicKey_EC
// Entry Point: 00ca5730
// Size: 128 bytes
// Signature: undefined __thiscall ~DL_PublicKey_EC(DL_PublicKey_EC<CryptoPP::EC2N> * this)


/* CryptoPP::DL_PublicKey_EC<CryptoPP::EC2N>::~DL_PublicKey_EC() */

void __thiscall
CryptoPP::DL_PublicKey_EC<CryptoPP::EC2N>::~DL_PublicKey_EC(DL_PublicKey_EC<CryptoPP::EC2N> *this)

{
  long in_x1;
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(in_x1 + 8);
  *(long *)this = lVar1;
  plVar2 = (long *)(this + 8);
  *plVar2 = *(long *)(in_x1 + 0x68);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(in_x1 + 0x70);
  *(undefined8 *)(this + *(long *)(lVar1 + -0x18)) = *(undefined8 *)(in_x1 + 0x78);
  DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>::~DL_FixedBasePrecomputationImpl
            ((DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> *)(this + 0x208));
  lVar1 = *(long *)(in_x1 + 0x10);
  *plVar2 = lVar1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(in_x1 + 0x58);
  *(undefined8 *)((long)plVar2 + *(long *)(lVar1 + -0x18)) = *(undefined8 *)(in_x1 + 0x60);
  DL_GroupParameters_EC<CryptoPP::EC2N>::~DL_GroupParameters_EC
            ((DL_GroupParameters_EC<CryptoPP::EC2N> *)(this + 0x18));
  return;
}


