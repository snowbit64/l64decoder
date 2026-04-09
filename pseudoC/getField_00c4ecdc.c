// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getField
// Entry Point: 00c4ecdc
// Size: 152 bytes
// Signature: undefined __thiscall getField(IR_Struct * this, char * param_1, uint * param_2)


/* IR_Struct::getField(char const*, unsigned int*) */

char ** __thiscall IR_Struct::getField(IR_Struct *this,char *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  char **ppcVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar1 = *(long *)(this + 0x30);
  lVar2 = *(long *)(this + 0x38) - lVar1;
  if (lVar2 != 0) {
    uVar5 = 0;
    uVar6 = (lVar2 >> 3) * 0x6db6db6db6db6db7;
    do {
      ppcVar4 = (char **)(lVar1 + uVar5 * 0x38);
      iVar3 = strcmp(*ppcVar4,param_1);
      if (iVar3 == 0) {
        if (param_2 == (uint *)0x0) {
          return ppcVar4;
        }
        *param_2 = (uint)uVar5;
        return ppcVar4;
      }
      uVar5 = (ulong)((uint)uVar5 + 1);
    } while (uVar5 <= uVar6 && uVar6 - uVar5 != 0);
  }
  return (char **)0x0;
}


