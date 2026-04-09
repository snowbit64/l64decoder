// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncodePublicKey
// Entry Point: 00ca6c04
// Size: 80 bytes
// Signature: undefined __thiscall DEREncodePublicKey(DL_PublicKey_ECGDSA<CryptoPP::ECP> * this, BufferedTransformation * param_1)


/* CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::ECP>::DEREncodePublicKey(CryptoPP::BufferedTransformation&)
   const */

void __thiscall
CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::ECP>::DEREncodePublicKey
          (DL_PublicKey_ECGDSA<CryptoPP::ECP> *this,BufferedTransformation *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x38);
  uVar1 = (**(code **)(*(long *)this + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x00ca6c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x98))(plVar2,param_1,uVar1,this[0x188]);
  return;
}


