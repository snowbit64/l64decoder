// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: th_comment_query_count
// Entry Point: 00df4c48
// Size: 324 bytes
// Signature: undefined th_comment_query_count(void)


int th_comment_query_count(long *param_1,byte *param_2)

{
  char **ppcVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  size_t sVar5;
  ulong uVar6;
  char **ppcVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  
  sVar5 = strlen((char *)param_2);
  uVar17 = *(uint *)(param_1 + 2);
  uVar8 = (ulong)(int)uVar17;
  if ((int)uVar17 < 1) {
    iVar13 = 0;
  }
  else {
    lVar10 = *param_1;
    if ((int)sVar5 < 1) {
      if (uVar17 < 2) {
        iVar13 = 0;
        uVar6 = 0;
      }
      else {
        uVar6 = uVar8 & 0xfffffffffffffffe;
        iVar11 = 0;
        iVar13 = 0;
        ppcVar7 = (char **)(lVar10 + 8);
        uVar12 = uVar6;
        do {
          ppcVar1 = ppcVar7 + -1;
          pcVar2 = *ppcVar7;
          ppcVar7 = ppcVar7 + 2;
          if (**ppcVar1 == '=') {
            iVar11 = iVar11 + 1;
          }
          if (*pcVar2 == '=') {
            iVar13 = iVar13 + 1;
          }
          uVar12 = uVar12 - 2;
        } while (uVar12 != 0);
        iVar13 = iVar13 + iVar11;
        if (uVar6 == uVar8) {
          return iVar13;
        }
      }
      lVar9 = uVar8 - uVar6;
      ppcVar7 = (char **)(lVar10 + uVar6 * 8);
      do {
        if (**ppcVar7 == '=') {
          iVar13 = iVar13 + 1;
        }
        lVar9 = lVar9 + -1;
        ppcVar7 = ppcVar7 + 1;
      } while (lVar9 != 0);
    }
    else {
      iVar13 = 0;
      uVar12 = 0;
      do {
        pbVar14 = *(byte **)(lVar10 + uVar12 * 8);
        pbVar15 = pbVar14;
        pbVar16 = param_2;
        uVar6 = sVar5 & 0xffffffff;
        do {
          bVar3 = *pbVar15;
          bVar4 = *pbVar16;
          uVar17 = bVar3 ^ 0x20;
          if (0x19 < bVar3 - 0x61) {
            uVar17 = (uint)bVar3;
          }
          uVar18 = bVar4 ^ 0x20;
          if (0x19 < bVar4 - 0x61) {
            uVar18 = (uint)bVar4;
          }
          if (uVar17 != uVar18) goto LAB_00df4c90;
          uVar6 = uVar6 - 1;
          pbVar16 = pbVar16 + 1;
          pbVar15 = pbVar15 + 1;
        } while (uVar6 != 0);
        if (pbVar14[sVar5 & 0xffffffff] == 0x3d) {
          iVar13 = iVar13 + 1;
        }
LAB_00df4c90:
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar8);
    }
  }
  return iVar13;
}


