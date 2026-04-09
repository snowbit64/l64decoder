// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsolatedInitialize
// Entry Point: 00cb9208
// Size: 16 bytes
// Signature: undefined __cdecl IsolatedInitialize(NameValuePairs * param_1)


/* CryptoPP::SourceTemplate<CryptoPP::StringStore>::IsolatedInitialize(CryptoPP::NameValuePairs
   const&) */

void CryptoPP::SourceTemplate<CryptoPP::StringStore>::IsolatedInitialize(NameValuePairs *param_1)

{
  param_1[0x48] = (NameValuePairs)0x0;
                    /* WARNING: Could not recover jumptable at 0x00cb9214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x180))();
  return;
}


