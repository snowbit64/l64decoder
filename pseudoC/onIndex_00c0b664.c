// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onIndex
// Entry Point: 00c0b664
// Size: 388 bytes
// Signature: undefined __thiscall onIndex(CreateIR * this, AST_TypedNode * param_1, uint param_2)


/* CreateIR::onIndex(AST_TypedNode*, unsigned int) */

void __thiscall CreateIR::onIndex(CreateIR *this,AST_TypedNode *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  CreateIR CVar3;
  long lVar4;
  int *piVar5;
  GsTOperator GVar6;
  long lVar7;
  int *this_00;
  undefined8 local_a8;
  int *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  GVar6 = 0x4f;
  if (-1 < (int)param_2) {
    GVar6 = 0x50;
  }
  pushOp(this,GVar6);
  CVar3 = this[0xe0];
  (***(code ***)param_1)(param_1,this + 8);
  lVar7 = *(long *)(this + 0x108);
  this[0xe0] = CVar3;
  local_a8 = *(undefined8 *)(lVar7 + -0x38);
  piVar5 = *(int **)(lVar7 + -0x30);
  uStack_90 = *(undefined8 *)(lVar7 + -0x20);
  local_98 = *(undefined8 *)(lVar7 + -0x28);
  uStack_80 = *(undefined8 *)(lVar7 + -0x10);
  local_88 = *(undefined8 *)(lVar7 + -0x18);
  local_50 = *(ulong *)(lVar7 + -8);
  *(undefined8 **)(this + 0x108) = (undefined8 *)(lVar7 + -0x38);
  iVar1 = *piVar5;
  this_00 = piVar5;
  if (iVar1 == 5) {
    this_00 = *(int **)(piVar5 + 2);
  }
  local_a0 = piVar5;
  local_70 = local_98;
  uStack_68 = uStack_90;
  uStack_60 = local_88;
  uStack_58 = uStack_80;
  if ((int)local_50 == 8) {
    local_78 = local_50;
    error(this,"dereference chain is too deep - break into shorter segments");
  }
  else {
    local_78 = CONCAT44((int)(local_50 >> 0x20),(int)local_50 + 1);
    *(uint *)((long)&local_98 + (local_50 & 0xffffffff) * 4) = param_2;
  }
  iVar2 = *this_00;
  if (iVar2 != 4) {
    if (iVar2 == 2) {
      piVar5 = (int *)IR_Type::getMatrixRowType((IR_Type *)this_00,*(IR_TypeSet **)(this + 0x68));
      local_a0 = piVar5;
      goto LAB_00c0b77c;
    }
    if (iVar2 != 1) goto LAB_00c0b77c;
  }
  piVar5 = (int *)IR_Type::getElementType((IR_Type *)this_00,*(IR_TypeSet **)(this + 0x68));
  local_a0 = piVar5;
LAB_00c0b77c:
  if (iVar1 == 5) {
    local_a0 = (int *)IR_TypeSet::getReferenceType(*(IR_TypeSet **)(this + 0x68),(IR_Type *)piVar5);
  }
  FUN_00c09960(this + 0x100,&local_a8);
  lVar7 = *(long *)(this + 0x120);
  *(long *)(this + 0x120) = lVar7 + -8;
  if (*(long *)(this + 0x118) == lVar7 + -8) {
    *(undefined8 *)(this + 0x108) = *(undefined8 *)(this + 0x100);
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


