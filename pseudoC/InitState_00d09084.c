// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InitState
// Entry Point: 00d09084
// Size: 16 bytes
// Signature: undefined __cdecl InitState(uint * param_1)


/* CryptoPP::Weak1::MD5::InitState(unsigned int*) */

void CryptoPP::Weak1::MD5::InitState(uint *param_1)

{
  *(undefined8 *)(param_1 + 2) = 0x1032547698badcfe;
  *(undefined8 *)param_1 = 0xefcdab8967452301;
  return;
}


