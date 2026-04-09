// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onStructField
// Entry Point: 00c0b4f0
// Size: 372 bytes
// Signature: undefined __thiscall onStructField(CreateIR * this, AST_TypedNode * param_1, uint param_2)


/* CreateIR::onStructField(AST_TypedNode*, unsigned int) */

void __thiscall CreateIR::onStructField(CreateIR *this,AST_TypedNode *param_1,uint param_2)

{
  int iVar1;
  CreateIR CVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined4 local_b8 [2];
  undefined8 local_b0;
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
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pushOp(this,0x51);
  CVar2 = this[0xe0];
  (***(code ***)param_1)(param_1,this + 8);
  lVar6 = *(long *)(this + 0x108);
  this[0xe0] = CVar2;
  local_a8 = *(undefined8 *)(lVar6 + -0x38);
  local_a0 = *(int **)(lVar6 + -0x30);
  uStack_90 = *(undefined8 *)(lVar6 + -0x20);
  local_98 = *(undefined8 *)(lVar6 + -0x28);
  uStack_80 = *(undefined8 *)(lVar6 + -0x10);
  local_88 = *(undefined8 *)(lVar6 + -0x18);
  local_78 = *(ulong *)(lVar6 + -8);
  *(undefined8 **)(this + 0x108) = (undefined8 *)(lVar6 + -0x38);
  iVar1 = *local_a0;
  piVar7 = local_a0;
  if (iVar1 == 5) {
    piVar7 = *(int **)(local_a0 + 2);
  }
  iVar5 = (int)local_78;
  local_70 = local_98;
  uStack_68 = uStack_90;
  uStack_60 = local_88;
  uStack_58 = uStack_80;
  local_50 = local_78;
  if (iVar5 == 8) {
    error(this,"dereference chain is too deep - break into shorter segments");
  }
  else {
    puVar8 = (undefined8 *)(*(long *)(*(long *)(piVar7 + 2) + 0x30) + (ulong)param_2 * 0x38);
    uVar9 = local_78 & 0xffffffff;
    local_b0 = *puVar8;
    local_b8[0] = 0xc;
    uVar4 = IR_Function::storeConst(*(IR_Function **)(this + 0x70),(IR_Const *)local_b8);
    local_78 = CONCAT44(local_78._4_4_,iVar5 + 1);
    *(uint *)((long)&local_98 + uVar9 * 4) = uVar4 | 0x80000000;
    local_a0 = (int *)puVar8[2];
    if (iVar1 == 5) {
      local_a0 = (int *)IR_TypeSet::getReferenceType
                                  (*(IR_TypeSet **)(this + 0x68),(IR_Type *)local_a0);
    }
  }
  FUN_00c09960(this + 0x100,&local_a8);
  lVar6 = *(long *)(this + 0x120);
  *(long *)(this + 0x120) = lVar6 + -8;
  if (*(long *)(this + 0x118) == lVar6 + -8) {
    *(undefined8 *)(this + 0x108) = *(undefined8 *)(this + 0x100);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


