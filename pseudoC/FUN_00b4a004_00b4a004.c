// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00b4a004
// Entry Point: 00b4a004
// Size: 12 bytes
// Signature: undefined FUN_00b4a004(void)


void FUN_00b4a004(long param_1,long *param_2)

{
  *param_2 = param_1 + 0x10;
  CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::~DL_GroupParameters_EC
            ((DL_GroupParameters_EC<CryptoPP::ECP> *)(param_2 + 1));
  return;
}


