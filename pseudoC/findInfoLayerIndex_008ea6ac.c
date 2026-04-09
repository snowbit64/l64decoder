// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findInfoLayerIndex
// Entry Point: 008ea6ac
// Size: 140 bytes
// Signature: undefined __thiscall findInfoLayerIndex(BaseTerrain * this, char * param_1)


/* BaseTerrain::findInfoLayerIndex(char const*) const */

ulong __thiscall BaseTerrain::findInfoLayerIndex(BaseTerrain *this,char *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  byte *pbVar4;
  byte *__s2;
  ulong uVar5;
  ulong uVar6;
  
  lVar1 = *(long *)(this + 0x50);
  lVar2 = *(long *)(this + 0x58) - lVar1;
  if (lVar2 != 0) {
    uVar5 = 0;
    uVar6 = (lVar2 >> 3) * 0x2e8ba2e8ba2e8ba3;
    do {
      pbVar4 = (byte *)(lVar1 + uVar5 * 0x58);
      __s2 = *(byte **)(pbVar4 + 0x10);
      if ((*pbVar4 & 1) == 0) {
        __s2 = pbVar4 + 1;
      }
      iVar3 = strcmp(param_1,(char *)__s2);
      if (iVar3 == 0) {
        return uVar5;
      }
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (uVar5 <= uVar6 && uVar6 - uVar5 != 0);
  }
  return 0xffffffff;
}


