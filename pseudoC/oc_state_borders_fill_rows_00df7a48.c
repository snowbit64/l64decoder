// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oc_state_borders_fill_rows
// Entry Point: 00df7a48
// Size: 220 bytes
// Signature: undefined oc_state_borders_fill_rows(void)


void oc_state_borders_fill_rows(long param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong __n;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = ~*(uint *)(param_1 + 0x30) & 1;
  }
  lVar3 = param_1 + (long)param_2 * 0x48 + (long)param_3 * 0x18;
  lVar5 = (long)*(int *)(lVar3 + 0x1a8);
  lVar4 = lVar5 * param_4;
  if (lVar4 - lVar5 * param_5 != 0) {
    __n = (ulong)(0x10 >> (ulong)uVar2);
    lVar7 = ((long)param_5 - (long)param_4) * lVar5;
    pbVar6 = (byte *)(*(long *)(lVar3 + 0x1b0) + lVar4);
    iVar1 = *(int *)(param_1 + (long)param_2 * 0x48 + (long)param_3 * 0x18 + 0x1a0);
    do {
      memset(pbVar6 + -__n,(uint)*pbVar6,__n);
      memset(pbVar6 + iVar1,(uint)(pbVar6 + iVar1)[-1],__n);
      pbVar6 = pbVar6 + lVar5;
      lVar7 = lVar7 - lVar5;
    } while (lVar7 != 0);
  }
  return;
}


