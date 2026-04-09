// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncodePublicKey
// Entry Point: 00ca5e30
// Size: 68 bytes
// Signature: undefined __thiscall DEREncodePublicKey(DL_PublicKey_EC<CryptoPP::EC2N> * this, BufferedTransformation * param_1)


/* non-virtual thunk to
   CryptoPP::DL_PublicKey_EC<CryptoPP::EC2N>::DEREncodePublicKey(CryptoPP::BufferedTransformation&)
   const */

void __thiscall
CryptoPP::DL_PublicKey_EC<CryptoPP::EC2N>::DEREncodePublicKey
          (DL_PublicKey_EC<CryptoPP::EC2N> *this,BufferedTransformation *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*(long *)(this + -8) + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x00ca5e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + 0x28) + 0x98))(this + 0x28,param_1,uVar1,this[0x1f8]);
  return;
}


