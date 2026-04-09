// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncodePublicKey
// Entry Point: 00ca56dc
// Size: 84 bytes
// Signature: undefined __thiscall DEREncodePublicKey(DL_PublicKey_EC<CryptoPP::ECP> * this, BufferedTransformation * param_1)


/* non-virtual thunk to
   CryptoPP::DL_PublicKey_EC<CryptoPP::ECP>::DEREncodePublicKey(CryptoPP::BufferedTransformation&)
   const */

void __thiscall
CryptoPP::DL_PublicKey_EC<CryptoPP::ECP>::DEREncodePublicKey
          (DL_PublicKey_EC<CryptoPP::ECP> *this,BufferedTransformation *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x30);
  uVar1 = (**(code **)(*(long *)(this + -8) + 0x20))(this + -8);
                    /* WARNING: Could not recover jumptable at 0x00ca572c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x98))(plVar2,param_1,uVar1,this[0x180]);
  return;
}


