// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: splitIntoFloats
// Entry Point: 00b9cd18
// Size: 144 bytes
// Signature: undefined __cdecl splitIntoFloats(char * param_1, float * param_2, uint param_3, char param_4)


/* StringUtil::splitIntoFloats(char const*, float*, unsigned int, char) */

uint StringUtil::splitIntoFloats(char *param_1,float *param_2,uint param_3,char param_4)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  
  cVar3 = *param_1;
  if (cVar3 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar2 = 0;
    pcVar5 = param_1 + 1;
    do {
      if (cVar3 == param_4) {
        uVar1 = (ulong)uVar2;
        uVar2 = uVar2 + 1;
        atof(param_1,param_2 + uVar1);
        param_1 = pcVar5;
        if (uVar2 == param_3) {
          return param_3;
        }
      }
      if (param_3 <= uVar2) break;
      cVar3 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar3 != '\0');
    uVar4 = uVar2 + 1;
    atof(param_1,param_2 + uVar2);
  }
  return uVar4;
}


