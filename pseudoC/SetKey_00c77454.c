// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetKey
// Entry Point: 00c77454
// Size: 80 bytes
// Signature: undefined __thiscall SetKey(SimpleKeyingInterface * this, uchar * param_1, ulong param_2, NameValuePairs * param_3)


/* CryptoPP::SimpleKeyingInterface::SetKey(unsigned char const*, unsigned long,
   CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::SimpleKeyingInterface::SetKey
          (SimpleKeyingInterface *this,uchar *param_1,ulong param_2,NameValuePairs *param_3)

{
  ThrowIfInvalidKeyLength(this,param_2);
                    /* WARNING: Could not recover jumptable at 0x00c774a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x78))(this,param_1,param_2 & 0xffffffff,param_3);
  return;
}


