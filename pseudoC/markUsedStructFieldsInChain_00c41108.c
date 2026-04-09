// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: markUsedStructFieldsInChain
// Entry Point: 00c41108
// Size: 1036 bytes
// Signature: undefined __thiscall markUsedStructFieldsInChain(IR_Section * this, uint * param_1, uint param_2, IR_TypeSet * param_3, uint param_4, bool param_5, uint param_6)


/* IR_Section::markUsedStructFieldsInChain(unsigned int const*, unsigned int, IR_TypeSet*, unsigned
   int, bool, unsigned int) const */

void __thiscall
IR_Section::markUsedStructFieldsInChain
          (IR_Section *this,uint *param_1,uint param_2,IR_TypeSet *param_3,uint param_4,bool param_5
          ,uint param_6)

{
  uint uVar1;
  int iVar2;
  int *this_00;
  undefined4 *puVar3;
  IR_Type *pIVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  
  uVar1 = param_1[1];
  uVar8 = param_1[param_2 + (uVar1 >> 0x10) + 2];
  if ((int)uVar8 < 0) {
    this_00 = (int *)IR_Function::getConstType(*(IR_Function **)this,uVar8 & 0x7fffffff);
  }
  else {
    this_00 = (int *)IR_RegisterSet::getRegisterType
                               ((IR_RegisterSet *)(*(IR_Function **)this + 0x98),uVar8);
  }
  uVar1 = uVar1 & 0xffff;
  if (*this_00 == 5) {
    this_00 = *(int **)(this_00 + 2);
  }
  if (param_2 + 1 < uVar1) {
    lVar12 = 0;
    lVar9 = 0;
    do {
      if (-1 < (int)param_1[param_2 + *(ushort *)((long)param_1 + 6) + 3]) {
        switch(*this_00) {
        case 1:
        case 4:
          if (lVar9 != 0) {
            *(undefined4 *)(lVar9 + 0x30) = 0xffffffff;
          }
          this_00 = (int *)IR_Type::getElementType((IR_Type *)this_00,param_3);
          break;
        case 2:
          this_00 = (int *)IR_Type::getMatrixRowType((IR_Type *)this_00,param_3);
          break;
        case 6:
          this_00 = *(int **)(this_00 + 2);
        }
        if (lVar12 == 0) goto LAB_00c411c4;
        puVar11 = (undefined8 *)(lVar12 + 0x28);
        if ((undefined4 *)*puVar11 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)operator_new(0x10);
          *(undefined4 **)(lVar12 + 0x28) = puVar3;
          lVar12 = 0;
          *puVar3 = 0;
          lVar7 = 0;
        }
        else {
          lVar12 = 0;
          *(undefined4 *)*puVar11 = 0;
          lVar7 = 0;
        }
        goto switchD_00c41314_caseD_3;
      }
      uVar5 = (ulong)param_1[param_2 + *(ushort *)((long)param_1 + 6) + 3] & 0x7fffffff;
      lVar10 = *(long *)(*(long *)this + 0x80);
      iVar2 = *(int *)(lVar10 + uVar5 * 0x18);
      if (iVar2 != 6) {
        if (iVar2 != 0xc) {
          if (iVar2 == 0xd) {
            lVar10 = lVar10 + uVar5 * 0x18;
            if (*(char *)(lVar10 + 8) == -1) {
              uVar8 = 0;
            }
            else if (*(char *)(lVar10 + 9) == -1) {
              uVar8 = 1;
            }
            else if (*(char *)(lVar10 + 10) == -1) {
              uVar8 = 2;
            }
            else {
              uVar8 = 3;
              if (*(char *)(lVar10 + 0xb) != -1) {
                uVar8 = 4;
              }
            }
            this_00 = (int *)IR_TypeSet::getVectorType(param_3,this_00[2],uVar8);
          }
          goto LAB_00c411c4;
        }
        if (*this_00 == 6) {
          lVar7 = lVar9;
          if (**(int **)(this_00 + 2) != 3) goto LAB_00c41384;
        }
        else {
          if (*this_00 != 3) {
LAB_00c41384:
            pIVar4 = (IR_Type *)
                     IR_TypeSet::findStruct
                               (*(IR_TypeSet **)(*(long *)this + 0x38),
                                *(char **)(lVar10 + uVar5 * 0x18 + 8));
            this_00 = (int *)IR_TypeSet::getPointerType
                                       (*(IR_TypeSet **)(*(long *)this + 0x38),pIVar4);
            IR_Struct::setNoFieldsConstant();
            goto LAB_00c41428;
          }
          lVar12 = IR_Struct::getField(*(IR_Struct **)(this_00 + 2),
                                       *(char **)(lVar10 + uVar5 * 0x18 + 8),(uint *)0x0);
          this_00 = *(int **)(lVar12 + 0x10);
          *(uint *)(lVar12 + 0x20) = *(uint *)(lVar12 + 0x20) | param_4;
          lVar7 = lVar12;
        }
        goto switchD_00c41314_caseD_3;
      }
      lVar7 = 0;
      switch(*this_00) {
      case 1:
        this_00 = (int *)IR_Type::getElementType((IR_Type *)this_00,param_3);
        break;
      case 2:
        this_00 = (int *)IR_Type::getMatrixRowType((IR_Type *)this_00,param_3);
        break;
      default:
        goto switchD_00c41314_caseD_3;
      case 4:
        if (lVar9 != 0) {
          uVar8 = *(uint *)(lVar10 + uVar5 * 0x18 + 8);
          if (uVar8 < 0x20) {
            uVar8 = *(uint *)(lVar9 + 0x30) | 1 << (ulong)(uVar8 & 0x1f);
          }
          else {
            uVar8 = 0xffffffff;
          }
          *(uint *)(lVar9 + 0x30) = uVar8;
        }
        this_00 = (int *)IR_Type::getElementType((IR_Type *)this_00,param_3);
LAB_00c41428:
        lVar12 = 0;
        break;
      case 6:
        lVar12 = 0;
        lVar7 = 0;
        this_00 = *(int **)(this_00 + 2);
        goto switchD_00c41314_caseD_3;
      }
LAB_00c411c4:
      lVar7 = 0;
switchD_00c41314_caseD_3:
      param_2 = param_2 + 1;
      lVar9 = lVar7;
    } while (uVar1 - 1 != param_2);
  }
  else {
    lVar12 = 0;
  }
  if (!param_5) {
    return;
  }
  if ((int)param_6 < 0) {
    if (lVar12 == 0) {
      return;
    }
    if (2 < **(uint **)(lVar12 + 0x10)) {
      return;
    }
    if (6 < (*(uint **)(lVar12 + 0x10))[2] - 3) {
      return;
    }
    puVar11 = (undefined8 *)(*(long *)(*(long *)this + 0x80) + (ulong)(param_6 & 0x7fffffff) * 0x18)
    ;
    if (*(IR_Const **)(lVar12 + 0x28) != (IR_Const *)0x0) {
      uVar5 = IR_Const::operator==(*(IR_Const **)(lVar12 + 0x28),(IR_Const *)puVar11);
      if ((uVar5 & 1) != 0) {
        return;
      }
      **(undefined4 **)(lVar12 + 0x28) = 0;
      return;
    }
    puVar6 = (undefined8 *)operator_new(0x10);
    uVar13 = *puVar11;
    puVar6[1] = puVar11[1];
    *puVar6 = uVar13;
  }
  else {
    if (lVar12 == 0) {
      return;
    }
    if (2 < **(uint **)(lVar12 + 0x10)) {
      return;
    }
    if (6 < (*(uint **)(lVar12 + 0x10))[2] - 3) {
      return;
    }
    if (*(undefined4 **)(lVar12 + 0x28) != (undefined4 *)0x0) {
      **(undefined4 **)(lVar12 + 0x28) = 0;
      return;
    }
    puVar6 = (undefined8 *)operator_new(0x10);
    *(undefined4 *)puVar6 = 0;
  }
  *(undefined8 **)(lVar12 + 0x28) = puVar6;
  return;
}


