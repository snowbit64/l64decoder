// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InitState
// Entry Point: 00d24ec0
// Size: 20 bytes
// Signature: undefined __cdecl InitState(uint * param_1)


/* CryptoPP::SHA256::InitState(unsigned int*) */

void CryptoPP::SHA256::InitState(uint *param_1)

{
  *(undefined8 *)(param_1 + 2) = 0xa54ff53a3c6ef372;
  *(undefined8 *)param_1 = 0xbb67ae856a09e667;
  *(undefined8 *)(param_1 + 6) = 0x5be0cd191f83d9ab;
  *(undefined8 *)(param_1 + 4) = 0x9b05688c510e527f;
  return;
}


