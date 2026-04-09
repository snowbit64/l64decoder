// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: searchText
// Entry Point: 00b45a24
// Size: 216 bytes
// Signature: undefined __thiscall searchText(TextFilterManager * this, char * param_1, uint param_2)


/* TextFilterManager::searchText(char const*, unsigned int) */

bool __thiscall TextFilterManager::searchText(TextFilterManager *this,char *param_1,uint param_2)

{
  bool bVar1;
  size_t sVar2;
  char *__dest;
  char *pcVar3;
  char **ppcVar4;
  ulong uVar5;
  
  sVar2 = strlen(param_1);
  __dest = (char *)operator_new__(sVar2 + 1);
  pcVar3 = strcpy(__dest,param_1);
  StringUtil::toLower(pcVar3);
  if (((param_2 & 1) != 0) && (uVar5 = (ulong)*(uint *)(this + 0x18), *(uint *)(this + 0x18) != 0))
  {
    ppcVar4 = (char **)(this + 0x20);
    do {
      pcVar3 = strstr(__dest,*ppcVar4);
      if (pcVar3 != (char *)0x0) {
        bVar1 = true;
        goto LAB_00b45adc;
      }
      ppcVar4 = ppcVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (((param_2 >> 1 & 1) == 0) ||
     (uVar5 = (ulong)*(uint *)(this + 0x1c), *(uint *)(this + 0x1c) == 0)) {
    bVar1 = false;
  }
  else {
    ppcVar4 = (char **)(this + 0x14d0);
    do {
      uVar5 = uVar5 - 1;
      pcVar3 = strstr(__dest,*ppcVar4);
      if (pcVar3 != (char *)0x0) break;
      ppcVar4 = ppcVar4 + 1;
    } while (uVar5 != 0);
    bVar1 = pcVar3 != (char *)0x0;
  }
LAB_00b45adc:
  operator_delete__(__dest);
  return bVar1;
}


