// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: th_comment_query
// Entry Point: 00df4b34
// Size: 276 bytes
// Signature: undefined th_comment_query(void)


char * th_comment_query(undefined8 *param_1,char *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  size_t sVar3;
  long lVar4;
  char **ppcVar5;
  int iVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  
  sVar3 = strlen(param_2);
  lVar4 = (long)*(int *)(param_1 + 2);
  if (0 < *(int *)(param_1 + 2)) {
    ppcVar5 = (char **)*param_1;
    if ((int)sVar3 < 1) {
      iVar6 = 0;
      do {
        pcVar8 = *ppcVar5;
        if (*pcVar8 == '=') {
          if (iVar6 == param_3) goto LAB_00df4c1c;
          iVar6 = iVar6 + 1;
        }
        lVar4 = lVar4 + -1;
        ppcVar5 = ppcVar5 + 1;
      } while (lVar4 != 0);
    }
    else {
      iVar6 = 0;
      lVar7 = 0;
      do {
        pcVar8 = ppcVar5[lVar7];
        uVar9 = 0;
        do {
          bVar1 = pcVar8[uVar9];
          bVar2 = param_2[uVar9];
          uVar10 = bVar1 ^ 0x20;
          if (0x19 < bVar1 - 0x61) {
            uVar10 = (uint)bVar1;
          }
          uVar11 = bVar2 ^ 0x20;
          if (0x19 < bVar2 - 0x61) {
            uVar11 = (uint)bVar2;
          }
          if (uVar10 != uVar11) goto LAB_00df4b80;
          uVar9 = uVar9 + 1;
        } while ((sVar3 & 0xffffffff) != uVar9);
        if (pcVar8[sVar3 & 0xffffffff] == '=') {
          if (iVar6 == param_3) {
LAB_00df4c1c:
            return pcVar8 + (long)(int)sVar3 + 1;
          }
          iVar6 = iVar6 + 1;
        }
LAB_00df4b80:
        lVar7 = lVar7 + 1;
      } while (lVar7 != lVar4);
    }
  }
  return (char *)0x0;
}


