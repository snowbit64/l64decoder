// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InitState
// Entry Point: 00d23d60
// Size: 28 bytes
// Signature: undefined __cdecl InitState(uint * param_1)


/* CryptoPP::SHA1::InitState(unsigned int*) */

void CryptoPP::SHA1::InitState(uint *param_1)

{
  *(undefined8 *)(param_1 + 2) = 0x1032547698badcfe;
  *(undefined8 *)param_1 = 0xefcdab8967452301;
  param_1[4] = 0xc3d2e1f0;
  return;
}


