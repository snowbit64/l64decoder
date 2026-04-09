// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFloat
// Entry Point: 00b24f98
// Size: 132 bytes
// Signature: undefined __thiscall getFloat(CommandLineArgumentParser * this, char * param_1, float param_2)


/* CommandLineArgumentParser::getFloat(char const*, float) const */

float __thiscall
CommandLineArgumentParser::getFloat(CommandLineArgumentParser *this,char *param_1,float param_2)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  
  uVar2 = *(uint *)this;
  if (0 < (int)uVar2) {
    lVar4 = *(long *)(this + 8);
    uVar5 = 0;
    do {
      iVar3 = strcmp(*(char **)(lVar4 + uVar5 * 8),param_1);
      uVar1 = uVar5 + 1;
      if (iVar3 == 0 && uVar1 < uVar2) {
        dVar6 = atof(*(char **)(lVar4 + uVar5 * 8 + 8));
        return (float)dVar6;
      }
      uVar5 = uVar1;
    } while (uVar2 != uVar1);
  }
  return param_2;
}


