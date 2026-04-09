// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compressBound
// Entry Point: 00e259a8
// Size: 20 bytes
// Signature: undefined compressBound(void)


long compressBound(ulong param_1)

{
  return param_1 + (param_1 >> 0xc) + (param_1 >> 0xe) + (param_1 >> 0x19) + 0xd;
}


