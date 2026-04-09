// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_sigm_Q15
// Entry Point: 00e850b0
// Size: 128 bytes
// Signature: undefined silk_sigm_Q15(void)


int silk_sigm_Q15(uint param_1)

{
  int iVar1;
  long lVar2;
  
  if ((int)param_1 < 0) {
    iVar1 = 0;
    if (0xffffff40 < param_1) {
      lVar2 = (ulong)(-param_1 >> 5) * 4;
      return *(int *)(&DAT_00568ee4 + lVar2) -
             (int)*(short *)(&DAT_00568efc + lVar2) * (-param_1 & 0x1f);
    }
  }
  else {
    if (0xbf < param_1) {
      return 0x7fff;
    }
    lVar2 = (ulong)(param_1 >> 5) * 4;
    iVar1 = *(int *)(&DAT_00568f14 + lVar2) +
            (int)*(short *)(&DAT_00568efc + lVar2) * (param_1 & 0x1f);
  }
  return iVar1;
}


