// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncodePublicKey
// Entry Point: 00ca79e8
// Size: 68 bytes
// Signature: undefined __thiscall DEREncodePublicKey(DL_PublicKey_ECGDSA<CryptoPP::EC2N> * this, BufferedTransformation * param_1)


/* CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::EC2N>::DEREncodePublicKey(CryptoPP::BufferedTransformation&)
   const */

void __thiscall
CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::EC2N>::DEREncodePublicKey
          (DL_PublicKey_ECGDSA<CryptoPP::EC2N> *this,BufferedTransformation *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x00ca7a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + 0x30) + 0x98))(this + 0x30,param_1,uVar1,this[0x200]);
  return;
}


