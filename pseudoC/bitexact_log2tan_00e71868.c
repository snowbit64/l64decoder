// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: bitexact_log2tan
// Entry Point: 00e71868
// Size: 88 bytes
// Signature: undefined bitexact_log2tan(void)


int bitexact_log2tan(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(short)(param_1 << (ulong)((int)LZCOUNT(param_1) - 0x11U & 0x1f));
  iVar2 = (int)(short)(param_2 << (ulong)((int)LZCOUNT(param_2) - 0x11U & 0x1f));
  return ((((iVar1 * -0xa25 + 0x4000 >> 0xf) + 0x1efc) * iVar1 + 0x4000 >> 0xf) +
         ((int)LZCOUNT(param_2) - (int)LZCOUNT(param_1)) * 0x800) -
         (((iVar2 * -0xa25 + 0x4000 >> 0xf) + 0x1efc) * iVar2 + 0x4000 >> 0xf);
}


