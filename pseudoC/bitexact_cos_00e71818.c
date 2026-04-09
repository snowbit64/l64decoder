// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: bitexact_cos
// Entry Point: 00e71818
// Size: 80 bytes
// Signature: undefined bitexact_cos(void)


int bitexact_cos(short param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1 * (int)param_1 * 8 + 0x8000 >> 0x10;
  return (((iVar1 * ((iVar1 * -0x272 + 0x4000 >> 0xf) + 0x2055) * 2 + -0x1de28000 >> 0x10) * iVar1 +
           0x4000U >> 0xf) - iVar1) + -0x8000;
}


