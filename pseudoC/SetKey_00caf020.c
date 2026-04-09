// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetKey
// Entry Point: 00caf020
// Size: 48 bytes
// Signature: undefined __cdecl SetKey(uchar * param_1, ulong param_2, NameValuePairs * param_3)


/* CryptoPP::ECB_OneWay::SetKey(unsigned char const*, unsigned long, CryptoPP::NameValuePairs
   const&) */

void CryptoPP::ECB_OneWay::SetKey(uchar *param_1,ulong param_2,NameValuePairs *param_3)

{
  (**(code **)(**(long **)(param_1 + 0x10) + 0x38))();
  BlockOrientedCipherModeBase::ResizeBuffers();
  return;
}


