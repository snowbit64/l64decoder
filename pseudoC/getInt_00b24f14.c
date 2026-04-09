// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInt
// Entry Point: 00b24f14
// Size: 132 bytes
// Signature: undefined __thiscall getInt(CommandLineArgumentParser * this, char * param_1, int param_2)


/* CommandLineArgumentParser::getInt(char const*, int) const */

int __thiscall
CommandLineArgumentParser::getInt(CommandLineArgumentParser *this,char *param_1,int param_2)

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
        iVar3 = atoi(*(char **)(lVar4 + uVar5 * 8 + 8));
        return iVar3;
      }
      uVar5 = uVar1;
    } while (uVar2 != uVar1);
  }
  return param_2;
}


