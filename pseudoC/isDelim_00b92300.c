// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isDelim
// Entry Point: 00b92300
// Size: 72 bytes
// Signature: undefined __cdecl isDelim(uchar param_1)


/* Preprocessor::isDelim(unsigned char) */

bool Preprocessor::isDelim(uchar param_1)

{
  return param_1 != 0x5f &&
         (0x19 < (param_1 & 0xdf) - 0x41 && (-1 < (char)param_1 && 9 < param_1 - 0x30));
}


