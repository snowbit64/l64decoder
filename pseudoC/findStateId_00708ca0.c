// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findStateId
// Entry Point: 00708ca0
// Size: 108 bytes
// Signature: undefined __thiscall findStateId(AnimalAnimationSystemSource * this, char * param_1)


/* AnimalAnimationSystemSource::findStateId(char const*) */

ulong __thiscall
AnimalAnimationSystemSource::findStateId(AnimalAnimationSystemSource *this,char *param_1)

{
  char *__s1;
  uint uVar1;
  int iVar2;
  ulong uVar3;
  char **ppcVar4;
  
  uVar1 = *(uint *)(this + 4);
  if (uVar1 != 0) {
    uVar3 = 0;
    ppcVar4 = (char **)(this + 0x18);
    do {
      __s1 = (char *)((long)ppcVar4 + -0xf);
      if ((*(byte *)(ppcVar4 + -2) & 1) != 0) {
        __s1 = *ppcVar4;
      }
      iVar2 = strcasecmp(__s1,param_1);
      if (iVar2 == 0) goto LAB_00708cf8;
      uVar3 = uVar3 + 1;
      ppcVar4 = ppcVar4 + 3;
    } while (uVar1 != uVar3);
  }
  uVar3 = 0xffffffff;
LAB_00708cf8:
  return uVar3 & 0xffffffff;
}


