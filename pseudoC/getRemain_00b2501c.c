// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRemain
// Entry Point: 00b2501c
// Size: 112 bytes
// Signature: undefined __thiscall getRemain(CommandLineArgumentParser * this, char * param_1, int * param_2)


/* CommandLineArgumentParser::getRemain(char const*, int*) const */

char ** __thiscall
CommandLineArgumentParser::getRemain(CommandLineArgumentParser *this,char *param_1,int *param_2)

{
  char **ppcVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(uint *)this;
  if (0 < (int)*(uint *)this) {
    ppcVar1 = *(char ***)(this + 8);
    do {
      iVar2 = strcmp(*ppcVar1,param_1);
      if (iVar2 == 0) {
        *param_2 = (int)uVar3 + -1;
        return ppcVar1 + 1;
      }
      uVar3 = uVar3 - 1;
      ppcVar1 = ppcVar1 + 1;
    } while (uVar3 != 0);
  }
  *param_2 = 0;
  return (char **)0x0;
}


