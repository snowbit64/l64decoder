// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNamedClipIndex
// Entry Point: 00749018
// Size: 116 bytes
// Signature: undefined __thiscall getNamedClipIndex(CharacterSet * this, char * param_1)


/* CharacterSet::getNamedClipIndex(char const*) */

ulong __thiscall CharacterSet::getNamedClipIndex(CharacterSet *this,char *param_1)

{
  char *__s1;
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  lVar1 = *(long *)(*(long *)(this + 0x40) + 0x70);
  lVar2 = *(long *)(*(long *)(this + 0x40) + 0x78) - lVar1;
  if (lVar2 != 0) {
    uVar5 = 0;
    do {
      lVar4 = *(long *)(lVar1 + uVar5 * 8);
      __s1 = (char *)(lVar4 + 9);
      if ((*(byte *)(lVar4 + 8) & 1) != 0) {
        __s1 = *(char **)(lVar4 + 0x18);
      }
      iVar3 = strcmp(__s1,param_1);
      if (iVar3 == 0) {
        return uVar5;
      }
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (uVar5 < (ulong)(lVar2 >> 3));
  }
  return 0xffffffff;
}


