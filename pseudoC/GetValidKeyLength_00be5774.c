// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetValidKeyLength
// Entry Point: 00be5774
// Size: 24 bytes
// Signature: undefined __thiscall GetValidKeyLength(SimpleKeyingInterfaceImpl<CryptoPP::HMAC_Base,CryptoPP::HMAC<CryptoPP::SHA256>> * this, ulong param_1)


/* CryptoPP::SimpleKeyingInterfaceImpl<CryptoPP::HMAC_Base, CryptoPP::HMAC<CryptoPP::SHA256>
   >::GetValidKeyLength(unsigned long) const */

ulong __thiscall
CryptoPP::SimpleKeyingInterfaceImpl<CryptoPP::HMAC_Base,CryptoPP::HMAC<CryptoPP::SHA256>>::
GetValidKeyLength(SimpleKeyingInterfaceImpl<CryptoPP::HMAC_Base,CryptoPP::HMAC<CryptoPP::SHA256>>
                  *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  if (0x7ffffffe < param_1) {
    uVar1 = 0x7fffffff;
  }
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}


