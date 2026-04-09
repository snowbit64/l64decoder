// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeFields
// Entry Point: 00c52294
// Size: 452 bytes
// Signature: undefined __thiscall removeFields(IR_Struct * this, bool * param_1, IR_TypeSet * param_2)


/* IR_Struct::removeFields(bool const*, IR_TypeSet*) */

undefined8 __thiscall IR_Struct::removeFields(IR_Struct *this,bool *param_1,IR_TypeSet *param_2)

{
  uint uVar1;
  size_t __n;
  bool bVar2;
  void *pvVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  uint uVar10;
  void **ppvVar11;
  ulong uVar12;
  void *__dest;
  uint uVar13;
  
  lVar7 = *(long *)(this + 0x30);
  lVar6 = *(long *)(this + 0x38);
  if (lVar6 != lVar7) {
    uVar12 = 0;
    bVar2 = false;
    uVar13 = 0;
    do {
      if (param_1[*(uint *)(lVar7 + uVar12 * 0x38 + 0x20)] == false) {
LAB_00c52364:
        pvVar3 = *(void **)(lVar7 + uVar12 * 0x38 + 0x28);
        if (pvVar3 != (void *)0x0) {
          operator_delete(pvVar3);
          lVar7 = *(long *)(this + 0x30);
          lVar6 = *(long *)(this + 0x38);
        }
        __dest = (void *)(lVar7 + uVar12 * 0x38);
        pvVar3 = (void *)((long)__dest + 0x38);
        __n = lVar6 - (long)pvVar3;
joined_r0x00c523bc:
        if (__n != 0) {
          memmove(__dest,pvVar3,__n);
        }
        lVar6 = (long)__dest + __n;
        uVar13 = uVar13 - 1;
        bVar2 = true;
        *(long *)(this + 0x38) = lVar6;
      }
      else {
        piVar9 = *(int **)(lVar7 + uVar12 * 0x38 + 0x10);
        if (*piVar9 == 4) {
          uVar10 = *(uint *)(lVar7 + uVar12 * 0x38 + 0x30);
          if (uVar10 != 0xffffffff) {
            if (uVar10 == 0) goto LAB_00c52364;
            uVar5 = 0;
            do {
              uVar1 = uVar5 & 0x1f;
              uVar5 = uVar5 + 1;
              uVar10 = uVar10 & (1 << (ulong)uVar1 ^ 0xffffffffU);
            } while (uVar10 != 0);
            if (piVar9[4] != uVar5) {
              uVar4 = IR_TypeSet::getArrayType(param_2,*(IR_Type **)(piVar9 + 2),uVar5);
              lVar6 = *(long *)(this + 0x38);
              bVar2 = true;
              *(undefined8 *)(*(long *)(this + 0x30) + uVar12 * 0x38 + 0x10) = uVar4;
            }
          }
        }
        else {
          piVar9 = *(int **)(lVar7 + uVar12 * 0x38 + 0x28);
          if ((piVar9 != (int *)0x0) && (*piVar9 != 0)) {
            operator_delete(piVar9);
            __dest = (void *)(*(long *)(this + 0x30) + uVar12 * 0x38);
            pvVar3 = (void *)((long)__dest + 0x38);
            __n = *(long *)(this + 0x38) - (long)pvVar3;
            goto joined_r0x00c523bc;
          }
        }
      }
      lVar7 = *(long *)(this + 0x30);
      uVar13 = uVar13 + 1;
      uVar12 = (ulong)uVar13;
      uVar8 = (lVar6 - lVar7 >> 3) * 0x6db6db6db6db6db7;
    } while (uVar12 <= uVar8 && uVar8 - uVar12 != 0);
    if (bVar2) {
      ppvVar11 = *(void ***)(this + 0x48);
      if (ppvVar11 != (void **)0x0) {
        pvVar3 = *ppvVar11;
        if (pvVar3 != (void *)0x0) {
          ppvVar11[1] = pvVar3;
          operator_delete(pvVar3);
        }
        operator_delete(ppvVar11);
      }
      *(undefined8 *)(this + 0x48) = 0;
      return 1;
    }
  }
  return 0;
}


