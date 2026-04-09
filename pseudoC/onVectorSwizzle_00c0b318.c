// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onVectorSwizzle
// Entry Point: 00c0b318
// Size: 472 bytes
// Signature: undefined __thiscall onVectorSwizzle(CreateIR * this, AST_TypedNode * param_1, uint * param_2, uint param_3)


/* CreateIR::onVectorSwizzle(AST_TypedNode*, unsigned int const*, unsigned int) */

void __thiscall
CreateIR::onVectorSwizzle(CreateIR *this,AST_TypedNode *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  CreateIR CVar2;
  long lVar3;
  uint uVar4;
  IR_TypeSet *this_00;
  int iVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  undefined4 local_e0 [2];
  undefined local_d8;
  undefined local_d7;
  undefined local_d6;
  undefined local_d5;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b8;
  int *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pushOp(this,0x52);
  CVar2 = this[0xe0];
  (***(code ***)param_1)(param_1,this + 8);
  lVar6 = *(long *)(this + 0x108);
  this[0xe0] = CVar2;
  local_b8 = *(undefined8 *)(lVar6 + -0x38);
  local_b0 = *(int **)(lVar6 + -0x30);
  uStack_a0 = *(undefined8 *)(lVar6 + -0x20);
  local_a8 = *(undefined8 *)(lVar6 + -0x28);
  uStack_90 = *(undefined8 *)(lVar6 + -0x10);
  local_98 = *(undefined8 *)(lVar6 + -0x18);
  local_88 = *(ulong *)(lVar6 + -8);
  *(undefined8 **)(this + 0x108) = (undefined8 *)(lVar6 + -0x38);
  iVar1 = *local_b0;
  piVar7 = local_b0;
  if (iVar1 == 5) {
    piVar7 = *(int **)(local_b0 + 2);
  }
  iVar5 = (int)local_88;
  local_80 = local_a8;
  uStack_78 = uStack_a0;
  uStack_70 = local_98;
  uStack_68 = uStack_90;
  local_60 = local_88;
  if (iVar5 == 8) {
    error(this,"dereference chain is too deep - break into shorter segments");
  }
  else {
    uVar8 = local_88 & 0xffffffff;
    uStack_c8 = 0xff000000ff;
    local_d0 = 0xff000000ff;
    if (param_3 == 0) {
      local_d5 = 0xff;
      local_d6 = 0xff;
      local_d7 = 0xff;
      local_d8 = 0xff;
    }
    else {
      memcpy(&local_d0,param_2,(ulong)param_3 << 2);
      local_d8 = (undefined)local_d0;
      local_d7 = local_d0._4_1_;
      local_d6 = (undefined)uStack_c8;
      local_d5 = uStack_c8._4_1_;
    }
    local_e0[0] = 0xd;
    uVar4 = IR_Function::storeConst(*(IR_Function **)(this + 0x70),(IR_Const *)local_e0);
    this_00 = *(IR_TypeSet **)(this + 0x68);
    local_88 = CONCAT44(local_88._4_4_,iVar5 + 1);
    *(uint *)((long)&local_a8 + uVar8 * 4) = uVar4 | 0x80000000;
    if (param_3 < 2) {
      local_b0 = (int *)IR_TypeSet::getScalarType(this_00,piVar7[2]);
    }
    else {
      local_b0 = (int *)IR_TypeSet::getVectorType(this_00,piVar7[2],param_3);
    }
    if (iVar1 == 5) {
      local_b0 = (int *)IR_TypeSet::getReferenceType
                                  (*(IR_TypeSet **)(this + 0x68),(IR_Type *)local_b0);
    }
  }
  FUN_00c09960(this + 0x100,&local_b8);
  lVar6 = *(long *)(this + 0x120);
  *(long *)(this + 0x120) = lVar6 + -8;
  if (*(long *)(this + 0x118) == lVar6 + -8) {
    *(undefined8 *)(this + 0x108) = *(undefined8 *)(this + 0x100);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


