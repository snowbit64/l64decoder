// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getUIntArrayAttr
// Entry Point: 00b8c6a8
// Size: 236 bytes
// Signature: undefined __cdecl getUIntArrayAttr(char * param_1, uint * param_2, uint param_3, char param_4, char * * param_5)


/* ExpatUtil::getUIntArrayAttr(char const*, unsigned int*, unsigned int, char, char const**) */

ulong ExpatUtil::getUIntArrayAttr
                (char *param_1,uint *param_2,uint param_3,char param_4,char **param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  
  pcVar4 = *param_5;
  if (pcVar4 != (char *)0x0) {
    uVar5 = 0;
    do {
      iVar3 = strcmp(pcVar4,param_1);
      if (iVar3 == 0) {
        pcVar4 = param_5[(uVar5 & 0xfffffffe) + 1];
        if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0' && param_3 != 0)) {
          uVar5 = 0;
          do {
            pcVar4 = (char *)StringUtil::strtouint(pcVar4,param_2 + uVar5);
            uVar5 = uVar5 + 1;
            cVar1 = *pcVar4;
            do {
              if (cVar1 == '\0') goto LAB_00b8c72c;
              pcVar4 = pcVar4 + 1;
              bVar2 = cVar1 != param_4;
              cVar1 = *pcVar4;
            } while (bVar2);
          } while ((*pcVar4 != '\0') && (uVar5 < param_3));
          goto LAB_00b8c72c;
        }
        break;
      }
      pcVar4 = param_5[uVar5 + 2];
      uVar5 = uVar5 + 2;
    } while (pcVar4 != (char *)0x0);
  }
  uVar5 = 0;
LAB_00b8c72c:
  return uVar5 & 0xffffffff;
}


