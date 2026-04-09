// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: EncodeElement
// Entry Point: 00ca34b0
// Size: 92 bytes
// Signature: undefined __thiscall EncodeElement(DL_GroupParameters_EC<CryptoPP::EC2N> * this, bool param_1, EC2NPoint * param_2, uchar * param_3)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::EncodeElement(bool, CryptoPP::EC2NPoint const&,
   unsigned char*) const */

void __thiscall
CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::EncodeElement
          (DL_GroupParameters_EC<CryptoPP::EC2N> *this,bool param_1,EC2NPoint *param_2,
          uchar *param_3)

{
  ulong uVar1;
  
  if (param_1) {
                    /* WARNING: Could not recover jumptable at 0x00ca34dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(this + 0x18) + 0x90))(this + 0x18,param_3,param_2,this[0x1e8]);
    return;
  }
  uVar1 = (**(code **)(*(long *)this + 0xc0))(this,0);
  PolynomialMod2::Encode((PolynomialMod2 *)(param_2 + 8),param_3,uVar1 & 0xffffffff);
  return;
}


