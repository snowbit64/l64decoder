// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getReplacementRegInfoForField
// Entry Point: 00c52c6c
// Size: 224 bytes
// Signature: undefined __thiscall getReplacementRegInfoForField(IR_Struct * this, char * param_1, uint * param_2, uint * param_3)


/* IR_Struct::getReplacementRegInfoForField(char const*, unsigned int&, unsigned int&) */

ulong __thiscall
IR_Struct::getReplacementRegInfoForField(IR_Struct *this,char *param_1,uint *param_2,uint *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  char **ppcVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar1 = *(long *)(this + 0x30);
  lVar2 = *(long *)(this + 0x38);
  *param_2 = 0;
  *param_3 = 0;
  uVar8 = lVar2 - lVar1;
  if (uVar8 != 0) {
    uVar7 = 0;
    uVar8 = ((long)uVar8 >> 3) * 0x6db6db6db6db6db7;
    do {
      ppcVar6 = (char **)(lVar1 + uVar7 * 0x38);
      iVar3 = strcmp(*ppcVar6,param_1);
      piVar5 = (int *)ppcVar6[2];
      if ((*piVar5 != 3) || (*(char *)(*(long *)(piVar5 + 2) + 0x55) != '\0')) {
        uVar4 = 1;
        if (iVar3 != 0) goto LAB_00c52cd0;
LAB_00c52d20:
        uVar8 = 1;
        *param_3 = uVar4;
        goto LAB_00c52d30;
      }
      uVar4 = getReplacementRegListSize();
      if (iVar3 == 0) goto LAB_00c52d20;
LAB_00c52cd0:
      uVar7 = (ulong)((int)uVar7 + 1);
      *param_2 = *param_2 + uVar4;
    } while (uVar7 <= uVar8 && uVar8 - uVar7 != 0);
    uVar8 = 0;
  }
LAB_00c52d30:
  return uVar8 & 0xffffffff;
}


