// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: is
// Entry Point: 00b24e1c
// Size: 124 bytes
// Signature: undefined __thiscall is(CommandLineArgumentParser * this, char * param_1)


/* CommandLineArgumentParser::is(char const*) const */

bool __thiscall CommandLineArgumentParser::is(CommandLineArgumentParser *this,char *param_1)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  char **ppcVar6;
  
  uVar1 = *(uint *)this;
  if ((int)uVar1 < 1) {
    bVar3 = false;
  }
  else {
    ppcVar6 = *(char ***)(this + 8);
    iVar4 = strcmp(*ppcVar6,param_1);
    if (iVar4 == 0) {
      bVar3 = true;
    }
    else {
      uVar2 = 1;
      do {
        uVar5 = uVar2;
        if (uVar1 == uVar5) break;
        iVar4 = strcmp(ppcVar6[uVar5],param_1);
        uVar2 = uVar5 + 1;
      } while (iVar4 != 0);
      bVar3 = uVar5 < uVar1;
    }
  }
  return bVar3;
}


