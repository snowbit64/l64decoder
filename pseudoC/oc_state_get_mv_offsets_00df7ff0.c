// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oc_state_get_mv_offsets
// Entry Point: 00df7ff0
// Size: 184 bytes
// Signature: undefined oc_state_get_mv_offsets(void)


undefined8 oc_state_get_mv_offsets(long param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  
  iVar1 = *(int *)(param_1 + (long)param_3 * 4 + 0x2e0);
  if (param_3 == 0) {
    uVar8 = 0;
    pcVar7 = &DAT_0054bd81 + param_5;
    pbVar5 = &DAT_0054be01 + param_5;
  }
  else {
    lVar6 = ((ulong)(*(uint *)(param_1 + 0x30) >> 1 ^ 0xffffffff) & 1) * 0x40;
    pcVar7 = &DAT_0054bd62 + (long)param_5 + 0x1f + lVar6;
    pbVar5 = &DAT_0054bde2 + (long)param_5 + 0x1f + lVar6;
    uVar8 = (ulong)~*(uint *)(param_1 + 0x30) & 1;
  }
  bVar2 = *pbVar5;
  bVar3 = (&DAT_0054bde2)[(long)param_4 + 0x1f + uVar8 * 0x40];
  iVar4 = (int)(char)(&DAT_0054bd62)[(long)param_4 + 0x1f + uVar8 * 0x40] + iVar1 * *pcVar7;
  if ((bVar3 | bVar2) != 0) {
    *param_2 = iVar4;
    param_2[1] = iVar4 + iVar1 * (char)bVar2 + (int)(char)bVar3;
    return 2;
  }
  *param_2 = iVar4;
  return 1;
}


