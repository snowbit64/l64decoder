// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InitState
// Entry Point: 00d25d3c
// Size: 28 bytes
// Signature: undefined __cdecl InitState(ulong * param_1)


/* CryptoPP::SHA384::InitState(unsigned long*) */

void CryptoPP::SHA384::InitState(ulong *param_1)

{
  param_1[5] = 0x8eb44a8768581511;
  param_1[4] = 0x67332667ffc00b31;
  param_1[7] = 0x47b5481dbefa4fa4;
  param_1[6] = 0xdb0c2e0d64f98fa7;
  param_1[1] = 0x629a292a367cd507;
  *param_1 = 0xcbbb9d5dc1059ed8;
  param_1[3] = 0x152fecd8f70e5939;
  param_1[2] = 0x9159015a3070dd17;
  return;
}


