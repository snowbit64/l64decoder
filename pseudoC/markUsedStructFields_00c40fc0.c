// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: markUsedStructFields
// Entry Point: 00c40fc0
// Size: 328 bytes
// Signature: undefined __thiscall markUsedStructFields(IR_Section * this, IR_TypeSet * param_1, uint param_2, uint param_3, bool param_4)


/* IR_Section::markUsedStructFields(IR_TypeSet*, unsigned int, unsigned int, bool) */

void __thiscall
IR_Section::markUsedStructFields
          (IR_Section *this,IR_TypeSet *param_1,uint param_2,uint param_3,bool param_4)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar7 = *(long *)(this + 0x20);
  if (*(long *)(this + 0x28) != lVar7) {
    uVar8 = 0;
    do {
      puVar2 = *(uint **)(lVar7 + uVar8 * 8);
      uVar6 = puVar2[1] >> 0x10;
      if ((*puVar2 == 0x19 && *(int *)(this + 0x38) == 0) && param_4) {
        if (0xffff < puVar2[1]) {
          puVar2 = puVar2 + 2;
          if (uVar6 < 2) {
            uVar6 = 1;
          }
          uVar9 = (ulong)uVar6;
          do {
            if ((-1 < (int)*puVar2) &&
               (piVar1 = (int *)IR_RegisterSet::getRegisterType
                                          ((IR_RegisterSet *)(*(long *)this + 0x98),*puVar2),
               *piVar1 == 3)) {
              IR_Struct::setNoFieldsConstant();
            }
            puVar2 = puVar2 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
      }
      else {
        uVar4 = *puVar2 & 0xfffffffd;
        if (uVar4 == 0xd) {
          uVar6 = puVar2[(ulong)uVar6 + 2];
          if ((param_3 != 0) || ((int)uVar6 < 0)) {
            uVar3 = 1;
            bVar5 = true;
            uVar4 = param_3;
            goto LAB_00c41014;
          }
        }
        else if (uVar4 == 0xc && param_2 != 0) {
          uVar3 = 0;
          bVar5 = false;
          uVar6 = 0;
          uVar4 = param_2;
LAB_00c41014:
          markUsedStructFieldsInChain(this,puVar2,uVar3,param_1,uVar4,bVar5,uVar6);
        }
      }
      lVar7 = *(long *)(this + 0x20);
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (uVar8 < (ulong)(*(long *)(this + 0x28) - lVar7 >> 3));
  }
  return;
}


