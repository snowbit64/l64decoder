// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onDerefPointerObject
// Entry Point: 00c0b860
// Size: 392 bytes
// Signature: undefined __thiscall onDerefPointerObject(CreateIR * this, AST_TypedNode * param_1)


/* CreateIR::onDerefPointerObject(AST_TypedNode*) */

void __thiscall CreateIR::onDerefPointerObject(CreateIR *this,AST_TypedNode *param_1)

{
  CreateIR CVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  IR_TypeSet *this_00;
  int *piVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined4 local_a8 [2];
  byte *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pushOp(this,9);
  CVar1 = this[0xe0];
  (***(code ***)param_1)(param_1,this + 8);
  lVar6 = *(long *)(this + 0x108);
  this[0xe0] = CVar1;
  uVar10 = *(undefined8 *)(lVar6 + -0x38);
  uStack_80 = *(undefined8 *)(lVar6 + -0x20);
  local_88 = *(undefined8 *)(lVar6 + -0x28);
  uStack_70 = *(undefined8 *)(lVar6 + -0x10);
  local_78 = *(undefined8 *)(lVar6 + -0x18);
  local_68 = *(ulong *)(lVar6 + -8);
  lVar8 = *(long *)(lVar6 + -0x30);
  *(undefined8 **)(this + 0x108) = (undefined8 *)(lVar6 + -0x38);
  piVar5 = *(int **)(lVar8 + 8);
  local_98 = uVar10;
  local_60 = local_88;
  uStack_58 = uStack_80;
  uStack_50 = local_78;
  uStack_48 = uStack_70;
  local_40 = local_68;
  if (*piVar5 == 3) {
    IR_Struct::setIsStructBuffer();
    uVar3 = (uint)local_68;
    uVar9 = local_68 & 0xffffffff;
    if ((uint)local_68 < 7) {
      pbVar7 = *(byte **)(*(long *)(lVar8 + 8) + 8);
      local_a0 = *(byte **)(pbVar7 + 0x10);
      if ((*pbVar7 & 1) == 0) {
        local_a0 = pbVar7 + 1;
      }
      local_a8[0] = 0xc;
      uVar4 = IR_Function::storeConst(*(IR_Function **)(this + 0x70),(IR_Const *)local_a8);
      local_68 = CONCAT44(local_68._4_4_,uVar3 + 1);
      *(uint *)((long)&local_88 + uVar9 * 4) = uVar4 | 0x80000000;
      uVar9 = local_68 & 0xffffffff;
      local_68 = CONCAT44(local_68._4_4_,(uint)local_68 + 1);
      *(int *)((long)&local_88 + uVar9 * 4) = (int)uVar10 + 1;
    }
    else {
      error(this,"dereference chain is too deep - break into shorter segments");
    }
    this_00 = *(IR_TypeSet **)(this + 0x68);
    piVar5 = *(int **)(lVar8 + 8);
  }
  else {
    this_00 = *(IR_TypeSet **)(this + 0x68);
  }
  local_90 = IR_TypeSet::getReferenceType(this_00,(IR_Type *)piVar5);
  FUN_00c09960(this + 0x100,&local_98);
  lVar6 = *(long *)(this + 0x120);
  *(long *)(this + 0x120) = lVar6 + -8;
  if (*(long *)(this + 0x118) == lVar6 + -8) {
    *(undefined8 *)(this + 0x108) = *(undefined8 *)(this + 0x100);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


