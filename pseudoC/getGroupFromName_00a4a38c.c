// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getGroupFromName
// Entry Point: 00a4a38c
// Size: 212 bytes
// Signature: undefined __cdecl getGroupFromName(char * param_1)


/* AudioSource::getGroupFromName(char const*) */

undefined4 AudioSource::getGroupFromName(char *param_1)

{
  int iVar1;
  long **pplVar2;
  long **pplVar3;
  long *plVar4;
  long **pplVar5;
  long **pplVar6;
  
  if (s_groups == (long **)&DAT_02112cc0) {
    pplVar5 = (long **)&s_defaultGroup;
  }
  else {
    pplVar5 = (long **)&s_defaultGroup;
    pplVar6 = s_groups;
    do {
      plVar4 = (long *)((long)pplVar6 + 0x29);
      if ((*(byte *)(pplVar6 + 5) & 1) != 0) {
        plVar4 = pplVar6[7];
      }
      iVar1 = strcasecmp(param_1,(char *)plVar4);
      if (iVar1 == 0) {
        pplVar5 = pplVar6 + 4;
        break;
      }
      pplVar2 = (long **)pplVar6[1];
      if ((long **)pplVar6[1] == (long **)0x0) {
        pplVar2 = pplVar6 + 2;
        pplVar3 = (long **)*pplVar2;
        if ((long **)*pplVar3 != pplVar6) {
          do {
            plVar4 = *pplVar2;
            pplVar2 = (long **)(plVar4 + 2);
            pplVar3 = (long **)*pplVar2;
          } while (*pplVar3 != plVar4);
        }
      }
      else {
        do {
          pplVar3 = pplVar2;
          pplVar2 = (long **)*pplVar3;
        } while ((long **)*pplVar3 != (long **)0x0);
      }
      pplVar6 = pplVar3;
    } while (pplVar3 != (long **)&DAT_02112cc0);
  }
  return *(undefined4 *)pplVar5;
}


