// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetValidKeyLength
// Entry Point: 00bbec5c
// Size: 40 bytes
// Signature: undefined __thiscall GetValidKeyLength(SimpleKeyingInterfaceImpl<CryptoPP::TwoBases<CryptoPP::BlockCipher,CryptoPP::Rijndael_Info>,CryptoPP::TwoBases<CryptoPP::BlockCipher,CryptoPP::Rijndael_Info>> * this, ulong param_1)


/* CryptoPP::SimpleKeyingInterfaceImpl<CryptoPP::TwoBases<CryptoPP::BlockCipher,
   CryptoPP::Rijndael_Info>, CryptoPP::TwoBases<CryptoPP::BlockCipher, CryptoPP::Rijndael_Info>
   >::GetValidKeyLength(unsigned long) const */

ulong __thiscall
CryptoPP::
SimpleKeyingInterfaceImpl<CryptoPP::TwoBases<CryptoPP::BlockCipher,CryptoPP::Rijndael_Info>,CryptoPP::TwoBases<CryptoPP::BlockCipher,CryptoPP::Rijndael_Info>>
::GetValidKeyLength(SimpleKeyingInterfaceImpl<CryptoPP::TwoBases<CryptoPP::BlockCipher,CryptoPP::Rijndael_Info>,CryptoPP::TwoBases<CryptoPP::BlockCipher,CryptoPP::Rijndael_Info>>
                    *this,ulong param_1)

{
  ulong uVar1;
  
  if (param_1 < 0x11) {
    return 0x10;
  }
  uVar1 = 0x20;
  if (param_1 < 0x20) {
    uVar1 = param_1 + 7 & 0xfffffffffffffff8;
  }
  return uVar1;
}


