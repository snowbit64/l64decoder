// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: chainAccessesConstantField
// Entry Point: 00c418fc
// Size: 584 bytes
// Signature: undefined __thiscall chainAccessesConstantField(IR_Section * this, uint * param_1, uint param_2, IR_TypeSet * param_3, IR_Const * * param_4)


/* IR_Section::chainAccessesConstantField(unsigned int const*, unsigned int, IR_TypeSet*,
   IR_Const*&) */

bool __thiscall
IR_Section::chainAccessesConstantField
          (IR_Section *this,uint *param_1,uint param_2,IR_TypeSet *param_3,IR_Const **param_4)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  IR_Type *pIVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar1 = param_1[1];
  uVar6 = param_1[param_2 + (uVar1 >> 0x10) + 2];
  if ((int)uVar6 < 0) {
    piVar4 = (int *)IR_Function::getConstType(*(IR_Function **)this,uVar6 & 0x7fffffff);
  }
  else {
    piVar4 = (int *)IR_RegisterSet::getRegisterType
                              ((IR_RegisterSet *)(*(IR_Function **)this + 0x98),uVar6);
  }
  uVar1 = uVar1 & 0xffff;
  if (*piVar4 == 5) {
    piVar4 = *(int **)(piVar4 + 2);
  }
  if (param_2 + 1 < uVar1) {
    bVar3 = true;
    do {
      if ((int)param_1[param_2 + *(ushort *)((long)param_1 + 6) + 3] < 0) {
        uVar7 = (ulong)param_1[param_2 + *(ushort *)((long)param_1 + 6) + 3] & 0x7fffffff;
        lVar8 = *(long *)(*(long *)this + 0x80);
        iVar2 = *(int *)(lVar8 + uVar7 * 0x18);
        if (iVar2 == 6) {
          iVar2 = *piVar4;
          if (iVar2 != 1) {
            if (iVar2 == 2) goto switchD_00c419e0_caseD_2;
            if (iVar2 != 4) goto switchD_00c419e0_caseD_3;
          }
          goto switchD_00c419e0_caseD_1;
        }
        if (iVar2 == 0xc) {
          if (*piVar4 == 6) {
            if (**(int **)(piVar4 + 2) != 3) goto LAB_00c41ad8;
          }
          else if (*piVar4 == 3) {
            lVar8 = IR_Struct::getField(*(IR_Struct **)(piVar4 + 2),
                                        *(char **)(lVar8 + uVar7 * 0x18 + 8),(uint *)0x0);
            piVar4 = *(int **)(lVar8 + 0x28);
            if ((piVar4 != (int *)0x0) && (*piVar4 != 0)) {
              *param_4 = (IR_Const *)piVar4;
              return bVar3;
            }
            piVar4 = *(int **)(lVar8 + 0x10);
          }
          else {
LAB_00c41ad8:
            pIVar5 = (IR_Type *)
                     IR_TypeSet::findStruct
                               (*(IR_TypeSet **)(*(long *)this + 0x38),
                                *(char **)(lVar8 + uVar7 * 0x18 + 8));
            piVar4 = (int *)IR_TypeSet::getPointerType
                                      (*(IR_TypeSet **)(*(long *)this + 0x38),pIVar5);
          }
        }
        else if (iVar2 == 0xd) {
          lVar8 = lVar8 + uVar7 * 0x18;
          if (*(char *)(lVar8 + 8) == -1) {
            uVar6 = 0;
          }
          else if (*(char *)(lVar8 + 9) == -1) {
            uVar6 = 1;
          }
          else if (*(char *)(lVar8 + 10) == -1) {
            uVar6 = 2;
          }
          else {
            uVar6 = 3;
            if (*(char *)(lVar8 + 0xb) != -1) {
              uVar6 = 4;
            }
          }
          piVar4 = (int *)IR_TypeSet::getVectorType(param_3,piVar4[2],uVar6);
        }
      }
      else {
        switch(*piVar4) {
        case 1:
        case 4:
switchD_00c419e0_caseD_1:
          piVar4 = (int *)IR_Type::getElementType((IR_Type *)piVar4,param_3);
          break;
        case 2:
switchD_00c419e0_caseD_2:
          piVar4 = (int *)IR_Type::getMatrixRowType((IR_Type *)piVar4,param_3);
          break;
        case 6:
          piVar4 = *(int **)(piVar4 + 2);
        }
      }
switchD_00c419e0_caseD_3:
      uVar6 = param_2 + 2;
      param_2 = param_2 + 1;
      bVar3 = uVar6 < uVar1;
    } while (uVar1 - 1 != param_2);
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}


