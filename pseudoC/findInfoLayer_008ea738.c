// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findInfoLayer
// Entry Point: 008ea738
// Size: 164 bytes
// Signature: undefined __thiscall findInfoLayer(BaseTerrain * this, char * param_1)


/* BaseTerrain::findInfoLayer(char const*) const */

long __thiscall BaseTerrain::findInfoLayer(BaseTerrain *this,char *param_1)

{
  long lVar1;
  int iVar2;
  byte *pbVar3;
  byte *__s2;
  ulong uVar4;
  ulong uVar5;
  
  lVar1 = *(long *)(this + 0x50);
  if (*(long *)(this + 0x58) - lVar1 != 0) {
    uVar4 = 0;
    uVar5 = (*(long *)(this + 0x58) - lVar1 >> 3) * 0x2e8ba2e8ba2e8ba3;
    do {
      pbVar3 = (byte *)(lVar1 + uVar4 * 0x58);
      __s2 = *(byte **)(pbVar3 + 0x10);
      if ((*pbVar3 & 1) == 0) {
        __s2 = pbVar3 + 1;
      }
      iVar2 = strcmp(param_1,(char *)__s2);
      if (iVar2 == 0) {
        if (uVar4 == 0xffffffff) {
          return 0;
        }
        return lVar1 + (long)(int)uVar4 * 0x58;
      }
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (uVar4 <= uVar5 && uVar5 - uVar4 != 0);
  }
  return 0;
}


