// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init_caps
// Entry Point: 00e5dae8
// Size: 108 bytes
// Signature: undefined init_caps(void)


void init_caps(long param_1,long param_2,uint param_3,int param_4)

{
  long lVar1;
  short sVar2;
  short *psVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  short sVar7;
  
  uVar4 = (ulong)*(uint *)(param_1 + 8);
  if (0 < (int)*(uint *)(param_1 + 8)) {
    psVar3 = *(short **)(param_1 + 0x18);
    lVar5 = *(long *)(param_1 + 0x90);
    lVar6 = 0;
    sVar7 = *psVar3;
    do {
      sVar2 = psVar3[lVar6 + 1];
      lVar1 = lVar6 + 1;
      *(int *)(param_2 + lVar6 * 4) =
           (int)(((int)sVar2 - (int)sVar7 << (ulong)(param_3 & 0x1f)) * param_4 *
                (*(byte *)(lVar5 + (int)((int)uVar4 * (param_4 + param_3 * 2 + -1)) + lVar6) + 0x40)
                ) >> 2;
      uVar4 = (ulong)*(int *)(param_1 + 8);
      lVar6 = lVar1;
      sVar7 = sVar2;
    } while (lVar1 < (long)uVar4);
  }
  return;
}


