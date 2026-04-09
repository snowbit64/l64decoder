// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_bwexpander_32
// Entry Point: 00e61d1c
// Size: 96 bytes
// Signature: undefined silk_bwexpander_32(void)


void silk_bwexpander_32(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  
  uVar1 = param_2 - 1;
  if (1 < param_2) {
    iVar2 = param_3 + -0x10000;
    uVar3 = (ulong)uVar1;
    piVar4 = param_1;
    do {
      lVar5 = (long)param_3;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + ((param_3 * iVar2 >> 0xf) + 1 >> 1);
      *piVar4 = (int)((ulong)(*piVar4 * lVar5) >> 0x10);
      piVar4 = piVar4 + 1;
    } while (uVar3 != 0);
  }
  uVar3 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  *(int *)((long)param_1 + uVar3) =
       (int)((ulong)((long)*(int *)((long)param_1 + uVar3) * (long)param_3) >> 0x10);
  return;
}


