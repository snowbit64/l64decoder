// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLevenshteinDistance
// Entry Point: 00ba015c
// Size: 416 bytes
// Signature: undefined __cdecl getLevenshteinDistance(char * param_1, char * param_2)


/* StringUtil::getLevenshteinDistance(char const*, char const*) */

ulong StringUtil::getLevenshteinDistance(char *param_1,char *param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  size_t sVar6;
  uint *puVar7;
  uint *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int iVar20;
  
  if (param_1 == param_2) {
LAB_00ba01e4:
    sVar6 = 0;
    goto LAB_00ba02e0;
  }
  sVar5 = strlen(param_1);
  sVar6 = strlen(param_2);
  uVar16 = (uint)sVar5;
  if (uVar16 == 0) goto LAB_00ba02e0;
  uVar14 = (uint)sVar6;
  if (uVar14 == 0) {
    sVar6 = sVar5 & 0xffffffff;
    goto LAB_00ba02e0;
  }
  iVar4 = strcmp(param_1,param_2);
  if (iVar4 == 0) goto LAB_00ba01e4;
  uVar17 = (ulong)(uVar14 + 1);
  puVar7 = (uint *)operator_new__(uVar17 << 2);
  puVar8 = (uint *)operator_new__(uVar17 << 2);
  if (uVar14 != 0xffffffff) {
    if (uVar14 + 1 < 8) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar17 & 0xfffffff8;
      uVar19 = 0x300000002;
      uVar18 = 0x100000000;
      puVar10 = (undefined8 *)(puVar7 + 4);
      uVar11 = uVar9;
      do {
        iVar4 = (int)((ulong)uVar18 >> 0x20);
        iVar20 = (int)((ulong)uVar19 >> 0x20);
        uVar11 = uVar11 - 8;
        puVar10[-1] = uVar19;
        puVar10[-2] = uVar18;
        puVar10[1] = CONCAT44(iVar20 + 4,(int)uVar19 + 4);
        *puVar10 = CONCAT44(iVar4 + 4,(int)uVar18 + 4);
        puVar10 = puVar10 + 4;
        uVar18 = CONCAT44(iVar4 + 8,(int)uVar18 + 8);
        uVar19 = CONCAT44(iVar20 + 8,(int)uVar19 + 8);
      } while (uVar11 != 0);
      if (uVar9 == uVar17) goto LAB_00ba0240;
    }
    do {
      puVar7[uVar9] = (uint)uVar9;
      uVar9 = uVar9 + 1;
    } while (uVar17 != uVar9);
  }
LAB_00ba0240:
  if (uVar14 < 2) {
    uVar14 = 1;
  }
  if (uVar16 < 2) {
    uVar16 = 1;
  }
  uVar17 = 0;
  do {
    puVar15 = puVar7;
    puVar7 = puVar8;
    uVar9 = uVar17 + 1;
    uVar13 = uVar9 & 0xffffffff;
    uVar12 = *puVar15;
    *puVar7 = (uint)uVar9;
    uVar11 = 0;
    do {
      uVar2 = uVar11 + 1;
      uVar3 = puVar15[uVar11 + 1];
      uVar1 = uVar3 + 1;
      if ((int)uVar13 + 1U <= uVar1) {
        uVar1 = (int)uVar13 + 1;
      }
      if (param_1[uVar17] != param_2[uVar11]) {
        uVar12 = uVar12 + 1;
      }
      if (uVar1 <= uVar12) {
        uVar12 = uVar1;
      }
      uVar13 = (ulong)uVar12;
      puVar7[uVar11 + 1] = uVar12;
      uVar11 = uVar2;
      uVar12 = uVar3;
    } while (uVar14 != uVar2);
    puVar8 = puVar15;
    uVar17 = uVar9;
  } while (uVar9 != uVar16);
  operator_delete__(puVar7);
  operator_delete__(puVar15);
  sVar6 = (size_t)puVar7[sVar6 & 0xffffffff];
LAB_00ba02e0:
  return sVar6 & 0xffffffff;
}


