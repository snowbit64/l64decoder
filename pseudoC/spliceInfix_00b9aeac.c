// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: spliceInfix
// Entry Point: 00b9aeac
// Size: 276 bytes
// Signature: undefined __cdecl spliceInfix(char * param_1, uint param_2, uint param_3, char * param_4, int * param_5, int * param_6)


/* StringArithmeticUtil::spliceInfix(char const*, unsigned int, unsigned int, char const*, int*,
   int*) */

undefined8
StringArithmeticUtil::spliceInfix
          (char *param_1,uint param_2,uint param_3,char *param_4,int *param_5,int *param_6)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  
  sVar3 = strlen(param_4);
  if (param_2 < param_3) {
    lVar5 = 0;
    iVar4 = 0;
    uVar6 = 1;
    do {
      cVar1 = param_1[lVar5 + (ulong)(param_3 - 1)];
      if (cVar1 == ')') {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 - (uint)(cVar1 == '(');
      if (iVar4 < 0) {
        return 0;
      }
      if ((iVar4 == 0 && (uint)sVar3 <= uVar6) &&
         (iVar2 = strncmp(param_1 + lVar5 + (ulong)(param_3 - 1),param_4,sVar3 & 0xffffffff),
         iVar2 == 0)) {
        *param_5 = (param_3 - 1) + (int)lVar5;
        *param_6 = param_3 + (uint)sVar3 + (int)lVar5 + -1;
        return 1;
      }
      lVar5 = lVar5 + -1;
      uVar6 = uVar6 + 1;
    } while (param_2 < param_3 + (int)lVar5);
  }
  return 0;
}


