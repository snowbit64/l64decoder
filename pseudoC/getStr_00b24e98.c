// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getStr
// Entry Point: 00b24e98
// Size: 124 bytes
// Signature: undefined __thiscall getStr(CommandLineArgumentParser * this, char * param_1, char * param_2)


/* CommandLineArgumentParser::getStr(char const*, char const*) const */

char * __thiscall
CommandLineArgumentParser::getStr(CommandLineArgumentParser *this,char *param_1,char *param_2)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)this;
  if (0 < (int)uVar2) {
    lVar4 = *(long *)(this + 8);
    uVar5 = 0;
    do {
      iVar3 = strcmp(*(char **)(lVar4 + uVar5 * 8),param_1);
      uVar1 = uVar5 + 1;
      if (iVar3 == 0 && uVar1 < uVar2) {
        return *(char **)(lVar4 + uVar5 * 8 + 8);
      }
      uVar5 = uVar1;
    } while (uVar2 != uVar1);
  }
  return param_2;
}


