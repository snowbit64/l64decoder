// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findOrCreateStruct
// Entry Point: 00c53ea4
// Size: 176 bytes
// Signature: undefined __thiscall findOrCreateStruct(IR_TypeSet * this, char * param_1, IR_QualFlags param_2)


/* IR_TypeSet::findOrCreateStruct(char const*, IR_QualFlags) */

long __thiscall IR_TypeSet::findOrCreateStruct(IR_TypeSet *this,char *param_1,IR_QualFlags param_2)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  byte *__s1;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = *(long *)(this + 0xda0);
  lVar2 = *(long *)(this + 0xda8) - lVar5;
  if (lVar2 != 0) {
    uVar6 = 0;
    do {
      lVar4 = *(long *)(lVar5 + uVar6 * 0x10);
      pbVar3 = *(byte **)(lVar4 + 8);
      __s1 = *(byte **)(pbVar3 + 0x10);
      if ((*pbVar3 & 1) == 0) {
        __s1 = pbVar3 + 1;
      }
      iVar1 = strcmp((char *)__s1,param_1);
      if (iVar1 == 0) {
        return lVar4;
      }
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (uVar6 < (ulong)(lVar2 >> 4));
  }
  lVar2 = createEmptyStruct(this,param_1,param_2);
  return lVar2;
}


