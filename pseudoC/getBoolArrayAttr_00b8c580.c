// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBoolArrayAttr
// Entry Point: 00b8c580
// Size: 296 bytes
// Signature: undefined __cdecl getBoolArrayAttr(char * param_1, bool * param_2, uint param_3, char param_4, char * * param_5)


/* ExpatUtil::getBoolArrayAttr(char const*, bool*, unsigned int, char, char const**) */

uint ExpatUtil::getBoolArrayAttr
               (char *param_1,bool *param_2,uint param_3,char param_4,char **param_5)

{
  ulong uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  
  pcVar4 = *param_5;
  if (pcVar4 != (char *)0x0) {
    uVar5 = 0;
    do {
      iVar2 = strcmp(pcVar4,param_1);
      if (iVar2 == 0) {
        pcVar4 = param_5[(uVar5 & 0xfffffffe) + 1];
        if (pcVar4 == (char *)0x0) {
          return 0;
        }
        if (param_3 != 0) {
          uVar5 = 0;
          while( true ) {
            pcVar4 = pcVar4 + -1;
            do {
              pcVar4 = pcVar4 + 1;
            } while (*pcVar4 == ' ');
            pcVar3 = strchr(pcVar4,(uint)(byte)param_4);
            if (pcVar3 == (char *)0x0) break;
            iVar2 = strncasecmp(pcVar4,"true",4);
            uVar1 = uVar5 + 1;
            param_2[uVar5] = iVar2 == 0;
            pcVar4 = pcVar3 + 1;
            uVar5 = uVar1;
            if (uVar1 == param_3) {
              return param_3;
            }
          }
          iVar2 = strncasecmp(pcVar4,"true",4);
          param_2[uVar5 & 0xffffffff] = iVar2 == 0;
          return (int)uVar5 + 1;
        }
        return 0;
      }
      pcVar4 = param_5[uVar5 + 2];
      uVar5 = uVar5 + 2;
    } while (pcVar4 != (char *)0x0);
  }
  return 0;
}


