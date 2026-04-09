// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InitState
// Entry Point: 00d24eac
// Size: 20 bytes
// Signature: undefined __cdecl InitState(uint * param_1)


/* CryptoPP::SHA224::InitState(unsigned int*) */

void CryptoPP::SHA224::InitState(uint *param_1)

{
  *(undefined8 *)(param_1 + 2) = 0xf70e59393070dd17;
  *(undefined8 *)param_1 = 0x367cd507c1059ed8;
  *(undefined8 *)(param_1 + 6) = 0xbefa4fa464f98fa7;
  *(undefined8 *)(param_1 + 4) = 0x68581511ffc00b31;
  return;
}


