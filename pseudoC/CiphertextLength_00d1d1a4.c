// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CiphertextLength
// Entry Point: 00d1d1a4
// Size: 80 bytes
// Signature: undefined __thiscall CiphertextLength(PK_FixedLengthCryptoSystemImpl<CryptoPP::PK_Encryptor> * this, ulong param_1)


/* CryptoPP::PK_FixedLengthCryptoSystemImpl<CryptoPP::PK_Encryptor>::CiphertextLength(unsigned long)
   const */

undefined8 __thiscall
CryptoPP::PK_FixedLengthCryptoSystemImpl<CryptoPP::PK_Encryptor>::CiphertextLength
          (PK_FixedLengthCryptoSystemImpl<CryptoPP::PK_Encryptor> *this,ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*(long *)this + 0x30))();
  if (uVar1 < param_1) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00d1d1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(long *)this + 0x28))(this);
  return uVar2;
}


