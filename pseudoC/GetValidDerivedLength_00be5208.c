// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetValidDerivedLength
// Entry Point: 00be5208
// Size: 80 bytes
// Signature: undefined __thiscall GetValidDerivedLength(PKCS5_PBKDF2_HMAC<CryptoPP::SHA256> * this, ulong param_1)


/* CryptoPP::PKCS5_PBKDF2_HMAC<CryptoPP::SHA256>::GetValidDerivedLength(unsigned long) const */

ulong __thiscall
CryptoPP::PKCS5_PBKDF2_HMAC<CryptoPP::SHA256>::GetValidDerivedLength
          (PKCS5_PBKDF2_HMAC<CryptoPP::SHA256> *this,ulong param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0x30))();
  if (uVar1 < param_1) {
                    /* WARNING: Could not recover jumptable at 0x00be5244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(long *)this + 0x30))(this);
    return uVar1;
  }
  return param_1;
}


