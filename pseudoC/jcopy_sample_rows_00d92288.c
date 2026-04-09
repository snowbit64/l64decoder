// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jcopy_sample_rows
// Entry Point: 00d92288
// Size: 84 bytes
// Signature: undefined jcopy_sample_rows(void)


void jcopy_sample_rows(long param_1,int param_2,long param_3,int param_4,int param_5,uint param_6)

{
  void **ppvVar1;
  void **ppvVar2;
  uint uVar3;
  
  if (0 < param_5) {
    uVar3 = param_5 + 1;
    ppvVar1 = (void **)(param_3 + (long)param_4 * 8);
    ppvVar2 = (void **)(param_1 + (long)param_2 * 8);
    do {
      memcpy(*ppvVar1,*ppvVar2,(ulong)param_6);
      uVar3 = uVar3 - 1;
      ppvVar1 = ppvVar1 + 1;
      ppvVar2 = ppvVar2 + 1;
    } while (1 < uVar3);
  }
  return;
}


