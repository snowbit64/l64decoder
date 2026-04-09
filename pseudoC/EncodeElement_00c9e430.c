// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: EncodeElement
// Entry Point: 00c9e430
// Size: 104 bytes
// Signature: undefined __thiscall EncodeElement(DL_GroupParameters_EC<CryptoPP::ECP> * this, bool param_1, ECPPoint * param_2, uchar * param_3)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::EncodeElement(bool, CryptoPP::ECPPoint const&,
   unsigned char*) const */

void __thiscall
CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::EncodeElement
          (DL_GroupParameters_EC<CryptoPP::ECP> *this,bool param_1,ECPPoint *param_2,uchar *param_3)

{
  ulong uVar1;
  
  if (param_1) {
                    /* WARNING: Could not recover jumptable at 0x00c9e464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x20) + 0x90))
              (*(long **)(this + 0x20),param_3,param_2,this[0x170]);
    return;
  }
  uVar1 = (**(code **)(*(long *)this + 0xc0))(this,0);
  Integer::Encode((Integer *)(param_2 + 8),param_3,uVar1 & 0xffffffff,0);
  return;
}


