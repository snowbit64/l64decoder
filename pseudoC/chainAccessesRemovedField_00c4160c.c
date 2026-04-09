// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: chainAccessesRemovedField
// Entry Point: 00c4160c
// Size: 472 bytes
// Signature: undefined __thiscall chainAccessesRemovedField(IR_Section * this, uint * param_1, uint param_2, IR_TypeSet * param_3)


/* IR_Section::chainAccessesRemovedField(unsigned int const*, unsigned int, IR_TypeSet*) */

bool __thiscall
IR_Section::chainAccessesRemovedField
          (IR_Section *this,uint *param_1,uint param_2,IR_TypeSet *param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int *this_00;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  
  uVar1 = param_1[1];
  uVar6 = param_1[param_2 + (uVar1 >> 0x10) + 2];
  if ((int)uVar6 < 0) {
    this_00 = (int *)IR_Function::getConstType(*(IR_Function **)this,uVar6 & 0x7fffffff);
  }
  else {
    this_00 = (int *)IR_RegisterSet::getRegisterType
                               ((IR_RegisterSet *)(*(IR_Function **)this + 0x98),uVar6);
  }
  uVar1 = uVar1 & 0xffff;
  if (*this_00 == 5) {
    this_00 = *(int **)(this_00 + 2);
  }
  if (param_2 + 1 < uVar1) {
    bVar3 = true;
    do {
      if ((int)param_1[param_2 + *(ushort *)((long)param_1 + 6) + 3] < 0) {
        uVar4 = (ulong)param_1[param_2 + *(ushort *)((long)param_1 + 6) + 3] & 0x7fffffff;
        lVar5 = *(long *)(*(long *)this + 0x80);
        iVar2 = *(int *)(lVar5 + uVar4 * 0x18);
        if (iVar2 != 6) {
          if (iVar2 == 0xc) {
            lVar5 = IR_Struct::getField(*(IR_Struct **)(this_00 + 2),
                                        *(char **)(lVar5 + uVar4 * 0x18 + 8),(uint *)0x0);
            if (lVar5 == 0) {
              return bVar3;
            }
            this_00 = *(int **)(lVar5 + 0x10);
          }
          else if (iVar2 == 0xd) {
            lVar5 = lVar5 + uVar4 * 0x18;
            if (*(char *)(lVar5 + 8) == -1) {
              uVar6 = 0;
            }
            else if (*(char *)(lVar5 + 9) == -1) {
              uVar6 = 1;
            }
            else if (*(char *)(lVar5 + 10) == -1) {
              uVar6 = 2;
            }
            else {
              uVar6 = 3;
              if (*(char *)(lVar5 + 0xb) != -1) {
                uVar6 = 4;
              }
            }
            this_00 = (int *)IR_TypeSet::getVectorType(param_3,this_00[2],uVar6);
          }
          goto LAB_00c416a0;
        }
        iVar2 = *this_00;
        if (iVar2 != 1) {
          if (iVar2 == 2) goto LAB_00c41770;
          if (iVar2 != 4) goto LAB_00c416a0;
        }
LAB_00c41698:
        this_00 = (int *)IR_Type::getElementType((IR_Type *)this_00,param_3);
      }
      else {
        iVar2 = *this_00;
        if (iVar2 == 4) goto LAB_00c41698;
        if (iVar2 == 2) {
LAB_00c41770:
          this_00 = (int *)IR_Type::getMatrixRowType((IR_Type *)this_00,param_3);
        }
        else if (iVar2 == 1) goto LAB_00c41698;
      }
LAB_00c416a0:
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


