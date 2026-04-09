// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: filterText
// Entry Point: 00b45f14
// Size: 488 bytes
// Signature: undefined __cdecl filterText(char * param_1, uint param_2, bool param_3)


/* TextFilterManager::filterText(char*, unsigned int, bool) */

void TextFilterManager::filterText(char *param_1,uint param_2,bool param_3)

{
  bool bVar1;
  size_t sVar2;
  char *__dest;
  bool *__s;
  ulong uVar3;
  char *pcVar4;
  uchar **__n;
  byte in_w3;
  bool *in_x4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  bool *pbVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  
  __n = (uchar **)(ulong)param_3;
  pcVar4 = (char *)(ulong)param_2;
  sVar2 = strlen(pcVar4);
  iVar12 = (int)sVar2;
  __dest = (char *)operator_new__((ulong)(iVar12 + 1));
  __s = (bool *)operator_new__((ulong)(iVar12 + 1));
  strcpy(__dest,pcVar4);
  StringUtil::toLower(__dest);
  if (iVar12 != 0) {
    __n = (uchar **)(sVar2 & 0xffffffff);
    memset(__s,0,(size_t)__n);
  }
  if (param_3) {
    __n = (uchar **)(param_1 + 0x20);
    in_x4 = __s;
    filterTextInternal((TextFilterManager *)param_1,__dest,__n,*(uint *)(param_1 + 0x18),__s,
                       (bool)(in_w3 & 1));
  }
  if ((param_3 >> 1 & 1U) != 0) {
    __n = (uchar **)(param_1 + 0x14d0);
    in_x4 = __s;
    filterTextInternal((TextFilterManager *)param_1,__dest,__n,*(uint *)(param_1 + 0x1c),__s,
                       (bool)(in_w3 & 1));
  }
  if (iVar12 != 0) {
    uVar6 = sVar2 & 0xffffffff;
    if (uVar6 < 2) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar6 - (sVar2 & 1);
      uVar9 = 0;
      pbVar8 = __s + 1;
      pcVar10 = pcVar4 + 1;
      uVar11 = 1;
      uVar3 = uVar5;
      do {
        if (pbVar8[-1] != false) {
          __n = (uchar **)(ulong)(byte)(&DAT_00524e84)[uVar9 % 6];
        }
        bVar1 = *pbVar8;
        if (bVar1 != false) {
          in_x4 = (bool *)(ulong)(byte)(&DAT_00524e84)[uVar11 % 6];
        }
        if (pbVar8[-1] != false) {
          pcVar10[-1] = (char)__n;
        }
        if (bVar1 != false) {
          *pcVar10 = (char)in_x4;
        }
        pbVar8 = pbVar8 + 2;
        pcVar10 = pcVar10 + 2;
        uVar3 = uVar3 - 2;
        uVar9 = uVar9 + 2;
        uVar11 = uVar11 + 2;
      } while (uVar3 != 0);
      if ((sVar2 & 1) == 0) goto LAB_00b46088;
    }
    pbVar8 = __s + uVar5;
    pcVar4 = pcVar4 + uVar5;
    lVar7 = uVar6 - uVar5;
    do {
      if (*pbVar8 != false) {
        *pcVar4 = (&DAT_00524e84)[(uint)((int)uVar5 + (int)((uVar5 & 0xffffffff) / 6) * -6)];
      }
      uVar5 = (ulong)((int)uVar5 + 1);
      pbVar8 = pbVar8 + 1;
      pcVar4 = pcVar4 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
LAB_00b46088:
  operator_delete__(__dest);
  operator_delete__(__s);
  return;
}


