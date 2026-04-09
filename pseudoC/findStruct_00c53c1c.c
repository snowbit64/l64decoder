// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findStruct
// Entry Point: 00c53c1c
// Size: 128 bytes
// Signature: undefined __thiscall findStruct(IR_TypeSet * this, char * param_1)


/* IR_TypeSet::findStruct(char const*) */

long __thiscall IR_TypeSet::findStruct(IR_TypeSet *this,char *param_1)

{
  long lVar1;
  int iVar2;
  byte *pbVar3;
  byte *__s1;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = *(long *)(this + 0xda0);
  lVar1 = *(long *)(this + 0xda8) - lVar5;
  if (lVar1 != 0) {
    uVar6 = 0;
    do {
      lVar4 = *(long *)(lVar5 + uVar6 * 0x10);
      pbVar3 = *(byte **)(lVar4 + 8);
      __s1 = *(byte **)(pbVar3 + 0x10);
      if ((*pbVar3 & 1) == 0) {
        __s1 = pbVar3 + 1;
      }
      iVar2 = strcmp((char *)__s1,param_1);
      if (iVar2 == 0) {
        return lVar4;
      }
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (uVar6 < (ulong)(lVar1 >> 4));
  }
  return 0;
}


