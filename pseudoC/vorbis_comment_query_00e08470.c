// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_comment_query
// Entry Point: 00e08470
// Size: 312 bytes
// Signature: undefined vorbis_comment_query(void)


long vorbis_comment_query(long *param_1,char *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  size_t sVar4;
  byte *__dest;
  char *__s;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  
  sVar4 = strlen(param_2);
  uVar12 = (uint)sVar4;
  __dest = (byte *)malloc((long)(int)(uVar12 + 2));
  __s = strcpy((char *)__dest,param_2);
  sVar4 = strlen(__s);
  iVar3 = *(int *)(param_1 + 2);
  *(undefined2 *)(__dest + sVar4) = 0x3d;
  if (0 < iVar3) {
    lVar11 = *param_1;
    if (uVar12 < 0x7fffffff) {
      uVar13 = 0;
      uVar5 = 0;
      do {
        pbVar6 = *(byte **)(lVar11 + uVar13 * 8);
        pbVar7 = __dest;
        uVar8 = (ulong)(uVar12 + 1);
        do {
          bVar1 = *pbVar6;
          bVar2 = *pbVar7;
          uVar9 = bVar1 ^ 0x20;
          if (0x19 < bVar1 - 0x61) {
            uVar9 = (uint)bVar1;
          }
          uVar10 = bVar2 ^ 0x20;
          if (0x19 < bVar2 - 0x61) {
            uVar10 = (uint)bVar2;
          }
          if (uVar9 != uVar10) goto LAB_00e084f0;
          uVar8 = uVar8 - 1;
          pbVar7 = pbVar7 + 1;
          pbVar6 = pbVar6 + 1;
        } while (uVar8 != 0);
        if (uVar5 == param_3) goto LAB_00e08584;
        uVar5 = uVar5 + 1;
LAB_00e084f0:
        uVar13 = uVar13 + 1;
      } while (uVar13 != (long)iVar3);
    }
    else {
      uVar13 = (ulong)param_3;
      if (uVar13 <= (long)iVar3 - 1U) {
LAB_00e08584:
        free(__dest);
        return *(long *)(lVar11 + uVar13 * 8) + (long)(int)(uVar12 + 1);
      }
    }
  }
  free(__dest);
  return 0;
}


