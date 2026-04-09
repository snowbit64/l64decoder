// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_comment_query_count
// Entry Point: 00e085a8
// Size: 248 bytes
// Signature: undefined vorbis_comment_query_count(void)


ulong vorbis_comment_query_count(long *param_1,char *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  size_t sVar4;
  byte *__dest;
  char *__s;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  
  sVar4 = strlen(param_2);
  uVar12 = (uint)sVar4;
  __dest = (byte *)malloc((long)(int)(uVar12 + 2));
  __s = strcpy((char *)__dest,param_2);
  sVar4 = strlen(__s);
  uVar1 = *(uint *)(param_1 + 2);
  *(undefined2 *)(__dest + sVar4) = 0x3d;
  if ((int)uVar1 < 1) {
    uVar11 = 0;
  }
  else {
    uVar11 = (ulong)uVar1;
    if (uVar12 < 0x7fffffff) {
      uVar5 = 0;
      uVar11 = 0;
      do {
        pbVar6 = *(byte **)(*param_1 + uVar5 * 8);
        pbVar7 = __dest;
        uVar8 = (ulong)(uVar12 + 1);
        do {
          bVar2 = *pbVar6;
          bVar3 = *pbVar7;
          uVar9 = bVar2 ^ 0x20;
          if (0x19 < bVar2 - 0x61) {
            uVar9 = (uint)bVar2;
          }
          uVar10 = bVar3 ^ 0x20;
          if (0x19 < bVar3 - 0x61) {
            uVar10 = (uint)bVar3;
          }
          if (uVar9 != uVar10) goto LAB_00e08620;
          uVar8 = uVar8 - 1;
          pbVar7 = pbVar7 + 1;
          pbVar6 = pbVar6 + 1;
        } while (uVar8 != 0);
        uVar11 = (ulong)((int)uVar11 + 1);
LAB_00e08620:
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar1);
    }
  }
  free(__dest);
  return uVar11;
}


