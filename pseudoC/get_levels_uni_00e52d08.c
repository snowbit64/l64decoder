// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: get_levels___uni
// Entry Point: 00e52d08
// Size: 44 bytes
// Signature: undefined get_levels___uni(void)


int get_levels___uni(int param_1)

{
  long lVar1;
  
  lVar1 = (long)param_1 * 0xc;
  return (*(int *)(&DAT_0055ff44 + lVar1) << 1 | 1U) + *(int *)(&DAT_0055ff48 + lVar1) * 4 <<
         (ulong)(*(uint *)(&DAT_0055ff40 + lVar1) & 0x1f);
}


