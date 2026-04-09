// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addField
// Entry Point: 00c51644
// Size: 372 bytes
// Signature: undefined __thiscall addField(IR_Struct * this, IR_StructField * param_1)


/* IR_Struct::addField(IR_StructField const&) */

undefined4 __thiscall IR_Struct::addField(IR_Struct *this,IR_StructField *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  int **ppiVar6;
  int *piVar7;
  int iVar8;
  char *__s2;
  void **ppvVar9;
  ulong uVar10;
  ulong uVar11;
  
  lVar1 = *(long *)(this + 0x30);
  lVar2 = *(long *)(this + 0x38) - lVar1;
  if (lVar2 != 0) {
    uVar10 = 0;
    __s2 = *(char **)param_1;
    uVar11 = (lVar2 >> 3) * 0x6db6db6db6db6db7;
    do {
      iVar3 = strcmp(*(char **)(lVar1 + uVar10 * 0x38),__s2);
      if (iVar3 == 0) {
        return 0;
      }
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (uVar10 <= uVar11 && uVar11 - uVar10 != 0);
  }
  FUN_00c517b8(this + 0x30,param_1);
  piVar5 = *(int **)(param_1 + 0x10);
  iVar3 = *piVar5;
  ppiVar6 = (int **)(piVar5 + 2);
  piVar7 = piVar5;
  iVar8 = iVar3;
  if ((iVar3 != 0) || (1 < *(int *)ppiVar6 - 1U)) {
    do {
      if (3 < iVar8 - 4U) {
        if ((iVar8 != 3) || (*(char *)(*(long *)(piVar7 + 2) + 0x50) == '\0')) goto LAB_00c5171c;
        break;
      }
      piVar7 = *ppiVar6;
      ppiVar6 = (int **)(piVar7 + 2);
      iVar8 = *piVar7;
    } while (*piVar7 != 0 || 1 < *(int *)ppiVar6 - 1U);
  }
  this[0x50] = (IR_Struct)0x1;
LAB_00c5171c:
  ppvVar9 = *(void ***)(this + 0x48);
  if (ppvVar9 != (void **)0x0) {
    pvVar4 = *ppvVar9;
    if (pvVar4 != (void *)0x0) {
      ppvVar9[1] = pvVar4;
      operator_delete(pvVar4);
    }
    operator_delete(ppvVar9);
    piVar5 = *(int **)(param_1 + 0x10);
    iVar3 = *piVar5;
  }
  *(undefined8 *)(this + 0x48) = 0;
  if (iVar3 - 7U < 2) {
    this[0x55] = (IR_Struct)0x0;
  }
  else if (iVar3 == 3) {
    this[0x55] = (IR_Struct)((byte)this[0x55] & *(byte *)(*(long *)(piVar5 + 2) + 0x55));
  }
  return 1;
}


