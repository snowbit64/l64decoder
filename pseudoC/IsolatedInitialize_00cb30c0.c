// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsolatedInitialize
// Entry Point: 00cb30c0
// Size: 16 bytes
// Signature: undefined __cdecl IsolatedInitialize(NameValuePairs * param_1)


/* CryptoPP::Store::IsolatedInitialize(CryptoPP::NameValuePairs const&) */

void CryptoPP::Store::IsolatedInitialize(NameValuePairs *param_1)

{
  param_1[0x18] = (NameValuePairs)0x0;
                    /* WARNING: Could not recover jumptable at 0x00cb30cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x180))();
  return;
}


