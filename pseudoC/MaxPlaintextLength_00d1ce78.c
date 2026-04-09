// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MaxPlaintextLength
// Entry Point: 00d1ce78
// Size: 80 bytes
// Signature: undefined __thiscall MaxPlaintextLength(PK_FixedLengthCryptoSystemImpl<CryptoPP::PK_Decryptor> * this, ulong param_1)


/* CryptoPP::PK_FixedLengthCryptoSystemImpl<CryptoPP::PK_Decryptor>::MaxPlaintextLength(unsigned
   long) const */

undefined8 __thiscall
CryptoPP::PK_FixedLengthCryptoSystemImpl<CryptoPP::PK_Decryptor>::MaxPlaintextLength
          (PK_FixedLengthCryptoSystemImpl<CryptoPP::PK_Decryptor> *this,ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*(long *)this + 0x28))();
  if (uVar1 == param_1) {
                    /* WARNING: Could not recover jumptable at 0x00d1ceb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(long *)this + 0x30))(this);
    return uVar2;
  }
  return 0;
}


