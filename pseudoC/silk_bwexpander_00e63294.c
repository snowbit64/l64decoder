// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_bwexpander
// Entry Point: 00e63294
// Size: 104 bytes
// Signature: undefined silk_bwexpander(void)


void silk_bwexpander(short *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  short *psVar5;
  
  uVar2 = param_2 - 1;
  if (1 < param_2) {
    iVar3 = param_3 + -0x10000;
    uVar4 = (ulong)uVar2;
    psVar5 = param_1;
    do {
      uVar4 = uVar4 - 1;
      uVar1 = param_3 * *psVar5;
      param_3 = param_3 + ((param_3 * iVar3 >> 0xf) + 1 >> 1);
      *psVar5 = (short)((uVar1 >> 0xf) + 1 >> 1);
      psVar5 = psVar5 + 1;
    } while (uVar4 != 0);
  }
  uVar4 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
  *(short *)((long)param_1 + uVar4) =
       (short)(((uint)(param_3 * *(short *)((long)param_1 + uVar4)) >> 0xf) + 1 >> 1);
  return;
}


