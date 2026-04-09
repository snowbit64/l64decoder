// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onIndirectIndex
// Entry Point: 00c0bc38
// Size: 220 bytes
// Signature: undefined __thiscall onIndirectIndex(CreateIR * this, AST_TypedNode * param_1, AST_TypedNode * param_2)


/* CreateIR::onIndirectIndex(AST_TypedNode*, AST_TypedNode*) */

void __thiscall
CreateIR::onIndirectIndex(CreateIR *this,AST_TypedNode *param_1,AST_TypedNode *param_2)

{
  CreateIR CVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined4 local_ac;
  uint local_a8 [14];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  CVar1 = this[0xe0];
  this[0xe0] = (CreateIR)0x0;
  (***(code ***)param_2)(param_2,this + 8);
  lVar4 = *(long *)(this + 0x108);
  this[0xe0] = CVar1;
  local_e0 = *(undefined4 *)(lVar4 + -0x38);
  local_ac = *(undefined4 *)(lVar4 + -4);
  uStack_b4 = *(undefined8 *)(lVar4 + -0xc);
  local_bc = *(undefined8 *)(lVar4 + -0x14);
  uStack_c4 = *(undefined8 *)(lVar4 + -0x1c);
  local_cc = *(undefined8 *)(lVar4 + -0x24);
  uStack_d4 = *(undefined8 *)(lVar4 + -0x2c);
  local_dc = *(undefined8 *)(lVar4 + -0x34);
  *(undefined4 **)(this + 0x108) = (undefined4 *)(lVar4 + -0x38);
  local_70 = local_dc;
  uStack_68 = uStack_d4;
  local_60 = local_cc;
  uStack_58 = uStack_c4;
  uStack_50 = local_bc;
  uStack_48 = uStack_b4;
  local_40 = local_ac;
  uVar3 = IR_TypeSet::getScalarType(*(IR_TypeSet **)(this + 0x68),6);
  resolveToValue(local_a8,this,&local_e0,uVar3);
  onIndex(this,param_1,local_a8[0]);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


