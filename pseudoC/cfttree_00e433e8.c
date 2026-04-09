// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cfttree
// Entry Point: 00e433e8
// Size: 268 bytes
// Signature: undefined __cdecl cfttree(int param_1, int param_2, int param_3, float * param_4)


/* fftimpl::cfttree(int, int, int, float*) */

uint fftimpl::cfttree(int param_1,int param_2,int param_3,float *param_4)

{
  bool bVar1;
  uint uVar2;
  
  if ((param_3 & 3U) == 0) {
    do {
      uVar2 = param_3;
      param_1 = param_1 * 4;
      param_3 = (int)uVar2 >> 2;
    } while ((uVar2 & 0xc) == 0);
    if ((uVar2 >> 2 & 1) == 0) {
      if (0x80 < param_1) {
        do {
          cftmdl2(param_1,param_4 + (param_2 - param_1));
          bVar1 = 0x203 < (uint)param_1;
          param_1 = (uint)param_1 >> 2;
        } while (bVar1);
      }
      return 0;
    }
    if (param_1 < 0x81) {
      return 1;
    }
    uVar2 = uVar2 >> 2 & 1;
    do {
      cftmdl1(param_1,param_4 + (param_2 - param_1));
      bVar1 = 0x203 < (uint)param_1;
      param_1 = (uint)param_1 >> 2;
    } while (bVar1);
  }
  else {
    if ((param_3 & 1U) != 0) {
      cftmdl1(param_1,param_4 + (param_2 - param_1));
      return 1;
    }
    cftmdl2(param_1,param_4 + (param_2 - param_1));
    uVar2 = 0;
  }
  return uVar2;
}


