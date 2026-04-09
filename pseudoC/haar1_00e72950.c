// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: haar1
// Entry Point: 00e72950
// Size: 152 bytes
// Signature: undefined haar1(void)


void haar1(short *param_1,int param_2,uint param_3)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  ulong uVar6;
  short *psVar7;
  ulong uVar8;
  
  if ((0 < (int)param_3) && (1 < param_2)) {
    uVar1 = param_2 >> 1;
    uVar6 = 0;
    if ((int)uVar1 < 2) {
      uVar1 = 1;
    }
    psVar5 = param_1 + param_3;
    uVar8 = (ulong)uVar1;
    psVar7 = psVar5;
    psVar4 = param_1;
    do {
      do {
        sVar2 = *psVar5;
        uVar8 = uVar8 - 1;
        iVar3 = *param_1 * 0x5a82 + 0x4000;
        *param_1 = (short)((uint)(iVar3 + sVar2 * 0x5a82) >> 0xf);
        param_1 = (short *)((long)param_1 +
                           (-(ulong)((param_3 << 1) >> 0x1f) & 0xfffffffe00000000 |
                           (ulong)(param_3 << 1) << 1));
        *psVar5 = (short)((uint)(iVar3 + sVar2 * -0x5a82) >> 0xf);
        psVar5 = psVar5 + (ulong)param_3 * 2;
      } while (uVar8 != 0);
      uVar6 = uVar6 + 1;
      psVar5 = psVar7 + 1;
      param_1 = psVar4 + 1;
      uVar8 = (ulong)uVar1;
      psVar7 = psVar5;
      psVar4 = param_1;
    } while (uVar6 != param_3);
  }
  return;
}


