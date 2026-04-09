// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onBinaryArithmetic
// Entry Point: 00c0be00
// Size: 1896 bytes
// Signature: undefined __thiscall onBinaryArithmetic(CreateIR * this, GsTOperator param_1, SHC_Type * param_2, AST_TypedNode * param_3, AST_TypedNode * param_4)


/* CreateIR::onBinaryArithmetic(GsTOperator, SHC_Type*, AST_TypedNode*, AST_TypedNode*) */

void __thiscall
CreateIR::onBinaryArithmetic
          (CreateIR *this,GsTOperator param_1,SHC_Type *param_2,AST_TypedNode *param_3,
          AST_TypedNode *param_4)

{
  CreateIR CVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  IR_Type *pIVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  IR_Type *this_00;
  IR_InstructionSequence *this_01;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  IR_OPCODE IVar21;
  int *piVar22;
  ulong uVar23;
  uint uVar24;
  undefined4 local_268;
  undefined8 local_264;
  undefined8 uStack_25c;
  undefined8 local_254;
  undefined8 uStack_24c;
  undefined8 local_244;
  undefined8 uStack_23c;
  undefined4 local_234;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined4 local_200;
  undefined4 local_1f8;
  undefined8 local_1f4;
  undefined8 uStack_1ec;
  undefined8 local_1e4;
  undefined8 uStack_1dc;
  undefined8 local_1d4;
  undefined8 uStack_1cc;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  ulong local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  ulong local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  uint local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  uint auStack_a0 [4];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  uVar18 = *(undefined8 *)(param_3 + 0x20);
  uVar19 = *(undefined8 *)(param_4 + 0x20);
  pushOp(this,param_1);
  if (((uint)(&GISLParserUtil::s_operatorFlags)[param_1] >> 2 & 1) != 0) {
    CVar1 = this[0xe0];
    lVar14 = *(long *)(this + 0xe8);
    lVar16 = *(long *)(this + 0xf0);
    this[0xe0] = (CreateIR)0x1;
    (***(code ***)param_3)(param_3,this + 8);
    lVar15 = *(long *)(this + 0x108);
    this[0xe0] = CVar1;
    uStack_a8 = (undefined4)*(undefined8 *)(lVar15 + -0x30);
    uStack_a4 = (undefined4)((ulong)*(undefined8 *)(lVar15 + -0x30) >> 0x20);
    local_b0 = (uint)*(undefined8 *)(lVar15 + -0x38);
    uStack_ac = (undefined4)((ulong)*(undefined8 *)(lVar15 + -0x38) >> 0x20);
    auStack_a0[2] = (uint)*(undefined8 *)(lVar15 + -0x20);
    auStack_a0[3] = (uint)((ulong)*(undefined8 *)(lVar15 + -0x20) >> 0x20);
    auStack_a0[0] = (uint)*(undefined8 *)(lVar15 + -0x28);
    auStack_a0[1] = (uint)((ulong)*(undefined8 *)(lVar15 + -0x28) >> 0x20);
    uStack_88 = (undefined4)*(undefined8 *)(lVar15 + -0x10);
    uStack_84 = (undefined4)((ulong)*(undefined8 *)(lVar15 + -0x10) >> 0x20);
    local_90 = (undefined4)*(undefined8 *)(lVar15 + -0x18);
    uStack_8c = (undefined4)((ulong)*(undefined8 *)(lVar15 + -0x18) >> 0x20);
    uVar18 = *(undefined8 *)(lVar15 + -8);
    *(long *)(this + 0x108) = lVar15 + -0x38;
    this[0xe0] = (CreateIR)0x0;
    iStack_80 = (int)uVar18;
    uStack_7c = (undefined4)((ulong)uVar18 >> 0x20);
    (***(code ***)param_4)(param_4,this + 8);
    lVar15 = *(long *)(this + 0x108);
    this[0xe0] = CVar1;
    local_100 = *(undefined8 *)(lVar15 + -8);
    uStack_108 = *(undefined8 *)(lVar15 + -0x10);
    local_110 = *(ulong *)(lVar15 + -0x18);
    uStack_128 = *(undefined8 *)(lVar15 + -0x30);
    local_130 = *(undefined8 *)(lVar15 + -0x38);
    uStack_118 = *(undefined8 *)(lVar15 + -0x20);
    local_120 = *(undefined8 *)(lVar15 + -0x28);
    *(long *)(this + 0x108) = lVar15 + -0x38;
    local_f0 = local_130;
    uStack_e8 = uStack_128;
    local_e0 = local_120;
    uStack_d8 = uStack_118;
    local_d0 = local_110;
    uStack_c8 = uStack_108;
    local_c0 = local_100;
    resolveToValue(&local_f0,this,&local_130,uVar19);
    if (this[0xe0] != (CreateIR)0x0) {
      error(this,"assignment statement in lvalue place");
      FUN_00c09960(this + 0x100,&local_f0);
      lVar14 = *(long *)(this + 0x118);
      lVar16 = *(long *)(this + 0x120);
      goto LAB_00c0c504;
    }
    if (10 < param_1 - 0x89) {
      lVar15 = 0;
      goto LAB_00c0c298;
    }
    iVar13 = 0x1a;
    switch(param_1) {
    case 0x89:
      goto switchD_00c0c154_caseD_89;
    case 0x8a:
      lVar15 = 1;
      break;
    case 0x8b:
      lVar15 = 2;
      break;
    case 0x8c:
      lVar15 = 3;
      break;
    case 0x8d:
      lVar15 = 4;
      break;
    case 0x8e:
      lVar15 = 5;
      break;
    case 0x8f:
      lVar15 = 7;
      break;
    case 0x90:
      lVar15 = 8;
      break;
    case 0x91:
      lVar15 = 9;
      break;
    case 0x92:
      lVar15 = 0xb;
      break;
    case 0x93:
      lVar15 = 0xc;
    }
LAB_00c0c298:
    uVar8 = *(int *)(*(long *)(param_3 + 0x20) + 8) - 3;
    if ((6 < uVar8) ||
       (iVar13 = *(int *)(s_opcodeMap + (ulong)uVar8 * 4 + lVar15 * 0x1c), iVar13 == 0)) {
      error(this,"unsupported assignment operation for type");
      lVar14 = -0x90;
      goto LAB_00c0c4fc;
    }
switchD_00c0c154_caseD_89:
    uStack_168 = CONCAT44(uStack_a4,uStack_a8);
    local_170 = CONCAT44(uStack_ac,local_b0);
    uStack_158 = CONCAT44(auStack_a0[3],auStack_a0[2]);
    local_160 = CONCAT44(auStack_a0[1],auStack_a0[0]);
    uStack_148 = CONCAT44(uStack_84,uStack_88);
    local_150 = CONCAT44(uStack_8c,local_90);
    uStack_1a8 = uStack_e8;
    local_1b0 = local_f0;
    local_140 = CONCAT44(uStack_7c,iStack_80);
    uStack_198 = uStack_d8;
    local_1a0 = local_e0;
    uStack_188 = uStack_c8;
    local_190 = local_d0;
    local_180 = local_c0;
    codeAssignUpdate(this,&local_170,&local_1b0,iVar13);
    FUN_00c09960(this + 0x100,&local_f0);
    lVar15 = *(long *)(this + 0xf0);
    lVar11 = lVar15 - *(long *)(this + 0xe8);
    while (((ulong)(lVar16 - lVar14) >> 3 & 0xffffffff) < (ulong)(lVar11 >> 3)) {
      this_01 = *(IR_InstructionSequence **)(lVar15 + -8);
      *(IR_InstructionSequence ***)(this + 0xf0) = (IR_InstructionSequence **)(lVar15 + -8);
      IR_InstructionSequence::emitSequence(*(IR_InstructionSequence **)(this + 0x78),this_01);
      if (this_01 != (IR_InstructionSequence *)0x0) {
        IR_InstructionSequence::~IR_InstructionSequence(this_01);
        operator_delete(this_01);
      }
      lVar15 = *(long *)(this + 0xf0);
      lVar11 = lVar15 - *(long *)(this + 0xe8);
    }
    goto LAB_00c0c500;
  }
  this_00 = *(IR_Type **)(param_2 + 8);
  CVar1 = this[0xe0];
  this[0xe0] = (CreateIR)0x0;
  (***(code ***)param_3)(param_3,this + 8);
  uVar6 = uStack_a4;
  uVar4 = uStack_a8;
  this[0xe0] = CVar1;
  uStack_a8 = SUB84(this_00,0);
  uVar5 = uStack_a8;
  uStack_a4 = (undefined4)((ulong)this_00 >> 0x20);
  uVar7 = uStack_a4;
  if (param_1 == 0x53) {
    lVar14 = *(long *)(this + 0x108);
    uVar18 = *(undefined8 *)(lVar14 + -0x38);
    uStack_e8 = *(undefined8 *)(lVar14 + -0x20);
    local_f0 = *(undefined8 *)(lVar14 + -0x28);
    piVar22 = *(int **)(lVar14 + -0x30);
    uStack_d8 = *(undefined8 *)(lVar14 + -0x10);
    local_e0 = *(undefined8 *)(lVar14 + -0x18);
    local_d0 = *(ulong *)(lVar14 + -8);
    *(undefined8 **)(this + 0x108) = (undefined8 *)(lVar14 + -0x38);
    lVar14 = (**(code **)(*(long *)param_4 + 0x30))(param_4);
    iVar13 = *piVar22;
    local_b0 = (uint)uVar18;
    uStack_ac = (undefined4)((ulong)uVar18 >> 0x20);
    uStack_a8 = SUB84(piVar22,0);
    uStack_a4 = (undefined4)((ulong)piVar22 >> 0x20);
    auStack_a0[2] = (uint)uStack_e8;
    auStack_a0[3] = (uint)((ulong)uStack_e8 >> 0x20);
    auStack_a0[0] = (uint)local_f0;
    auStack_a0[1] = (uint)((ulong)local_f0 >> 0x20);
    uStack_88 = (undefined4)uStack_d8;
    uStack_84 = (undefined4)((ulong)uStack_d8 >> 0x20);
    local_90 = (undefined4)local_e0;
    uStack_8c = (undefined4)((ulong)local_e0 >> 0x20);
    iVar17 = (int)local_d0;
    uStack_7c = (undefined4)(local_d0 >> 0x20);
    iStack_80 = iVar17;
    if (iVar17 == 8) {
      error(this,"dereference chain is too deep - break into shorter segments");
    }
    else {
      uVar20 = local_d0 & 0xffffffff;
      lVar16 = *(long *)(lVar14 + 0x50);
      uStack_1b8 = 0xff000000ff;
      local_1c0 = 0xff000000ff;
      if (*(long *)(lVar14 + 0x58) == lVar16) {
        uStack_1b8._4_1_ = 0xff;
        uStack_1b8._0_1_ = 0xff;
        local_1c0._4_1_ = 0xff;
        local_1c0._0_1_ = 0xff;
      }
      else {
        uVar23 = 0;
        do {
          lVar11 = (**(code **)(**(long **)(lVar16 + uVar23 * 8) + 0x28))();
          lVar16 = *(long *)(lVar14 + 0x50);
          lVar15 = *(long *)(lVar14 + 0x58);
          *(int *)((long)&local_1c0 + uVar23 * 4) = *(int *)(*(long *)(lVar11 + 0x48) + 4) + 0x80;
          uVar23 = (ulong)((int)uVar23 + 1);
        } while (uVar23 < (ulong)(lVar15 - lVar16 >> 3));
      }
      uVar18 = uStack_228;
      local_230 = CONCAT44(local_230._4_4_,0xd);
      uVar8 = IR_Function::storeConst(*(IR_Function **)(this + 0x70),(IR_Const *)&local_230);
      iStack_80 = iVar17 + 1;
      auStack_a0[uVar20] = uVar8 | 0x80000000;
      uStack_a8 = uVar5;
      uStack_a4 = uVar7;
      if (iVar13 == 5) {
        uVar18 = IR_TypeSet::getReferenceType(*(IR_TypeSet **)(this + 0x68),this_00);
        uStack_a8 = (undefined4)uVar18;
        uStack_a4 = (undefined4)((ulong)uVar18 >> 0x20);
      }
    }
    goto LAB_00c0c4f4;
  }
  lVar14 = *(long *)(this + 0x108);
  local_1f8 = *(undefined4 *)(lVar14 + -0x38);
  uStack_1ec = *(undefined8 *)(lVar14 + -0x2c);
  local_1f4 = *(undefined8 *)(lVar14 + -0x34);
  uStack_1dc = *(undefined8 *)(lVar14 + -0x1c);
  local_1e4 = *(undefined8 *)(lVar14 + -0x24);
  uStack_1cc = *(undefined8 *)(lVar14 + -0xc);
  local_1d4 = *(undefined8 *)(lVar14 + -0x14);
  local_1c4 = *(undefined4 *)(lVar14 + -4);
  *(undefined4 **)(this + 0x108) = (undefined4 *)(lVar14 + -0x38);
  local_f0 = local_1f4;
  uStack_e8 = uStack_1ec;
  local_e0 = local_1e4;
  uStack_d8 = uStack_1dc;
  local_d0 = local_1d4;
  uStack_c8 = uStack_1cc;
  uStack_a8 = uVar4;
  uStack_a4 = uVar6;
  local_c0._0_4_ = local_1c4;
  resolveToValue(&local_b0,this,&local_1f8,uVar18);
  uVar8 = local_b0;
  uStack_e8 = CONCAT44(auStack_a0[0],uStack_a4);
  local_f0 = CONCAT44(uStack_a8,uStack_ac);
  uStack_d8 = CONCAT44(local_90,auStack_a0[3]);
  local_e0 = CONCAT44(auStack_a0[2],auStack_a0[1]);
  CVar1 = this[0xe0];
  this[0xe0] = (CreateIR)0x0;
  uStack_c8 = CONCAT44(iStack_80,uStack_84);
  local_d0 = CONCAT44(uStack_88,uStack_8c);
  local_c0 = CONCAT44(local_c0._4_4_,uStack_7c);
  (***(code ***)param_4)(param_4,this + 8);
  lVar14 = *(long *)(this + 0x108);
  this[0xe0] = CVar1;
  local_268 = *(undefined4 *)(lVar14 + -0x38);
  local_234 = *(undefined4 *)(lVar14 + -4);
  uStack_23c = *(undefined8 *)(lVar14 + -0xc);
  local_244 = *(undefined8 *)(lVar14 + -0x14);
  uStack_24c = *(undefined8 *)(lVar14 + -0x1c);
  local_254 = *(undefined8 *)(lVar14 + -0x24);
  uStack_25c = *(undefined8 *)(lVar14 + -0x2c);
  local_264 = *(undefined8 *)(lVar14 + -0x34);
  *(undefined4 **)(this + 0x108) = (undefined4 *)(lVar14 + -0x38);
  local_230 = local_264;
  uStack_228 = uStack_25c;
  local_220 = local_254;
  uStack_218 = uStack_24c;
  local_210 = local_244;
  uStack_208 = uStack_23c;
  local_200 = local_234;
  resolveToValue(&local_b0,this,&local_268,uVar19);
  uVar3 = local_b0;
  if (0x15 < param_1 - 0x39) {
    lVar14 = 0;
    goto LAB_00c0c400;
  }
  IVar21 = 0x1a;
  switch(param_1) {
  case 0x39:
    lVar14 = 1;
    break;
  case 0x3a:
    lVar14 = 2;
    break;
  case 0x3b:
    lVar14 = 3;
    break;
  case 0x3c:
    lVar14 = 4;
    break;
  case 0x3d:
    lVar14 = 5;
    break;
  case 0x3e:
    lVar14 = 0xc;
    break;
  case 0x3f:
    lVar14 = 0xb;
    break;
  case 0x40:
    lVar14 = 7;
    break;
  case 0x41:
    lVar14 = 8;
    break;
  case 0x42:
    lVar14 = 9;
    break;
  default:
    lVar14 = 0xd;
    break;
  case 0x44:
  case 0x46:
    lVar14 = 0xe;
    break;
  case 0x47:
    lVar14 = 0xf;
    break;
  case 0x48:
    lVar14 = 0x11;
    break;
  case 0x49:
    lVar14 = 0x10;
    break;
  case 0x4a:
    lVar14 = 0x12;
    break;
  case 0x4b:
    goto switchD_00c0c118_caseD_4b;
  case 0x4c:
    IVar21 = 0xa2;
    goto switchD_00c0c118_caseD_4b;
  case 0x4d:
    IVar21 = 0xa3;
    goto switchD_00c0c118_caseD_4b;
  case 0x4e:
    IVar21 = 0xa1;
    goto switchD_00c0c118_caseD_4b;
  }
LAB_00c0c400:
  uVar9 = *(int *)(*(long *)(param_3 + 0x20) + 8) - 3;
  if (uVar9 < 7) {
    IVar21 = *(IR_OPCODE *)(s_opcodeMap + (ulong)uVar9 * 4 + lVar14 * 0x1c);
  }
  else {
    IVar21 = 0;
  }
switchD_00c0c118_caseD_4b:
  uVar9 = IR_Type::getNumIRRegisters();
  uVar10 = IR_RegisterSet::allocateReg
                     ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),this_00,(char *)0x0);
  iStack_80 = 0;
  local_b0 = uVar10;
  uStack_a8 = uVar5;
  uStack_a4 = uVar7;
  if (1 < uVar9) {
    uVar24 = 1;
    do {
      pIVar12 = (IR_Type *)
                IR_Type::getIRRegisterType
                          (this_00,uVar24,*(IR_TypeSet **)(*(long *)(this + 0x70) + 0x38));
      IR_RegisterSet::allocateReg
                ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),pIVar12,(char *)0x0);
      uVar24 = uVar24 + 1;
    } while (uVar9 != uVar24);
  }
  if (IVar21 == 0x1a) {
    IR_InstructionSequence::emit(*(IR_InstructionSequence **)(this + 0x78),0x1a,uVar10,uVar3);
  }
  else if (IVar21 == 0) {
    error(this,"unsupported binary operation for type");
  }
  else {
    IR_InstructionSequence::emit
              (*(IR_InstructionSequence **)(this + 0x78),IVar21,uVar10,uVar8,uVar3);
  }
LAB_00c0c4f4:
  lVar14 = -0x50;
LAB_00c0c4fc:
  FUN_00c09960(this + 0x100,&stack0xffffffffffffffa0 + lVar14);
LAB_00c0c500:
  lVar14 = *(long *)(this + 0x118);
  lVar16 = *(long *)(this + 0x120);
LAB_00c0c504:
  *(long *)(this + 0x120) = lVar16 + -8;
  if (lVar14 == lVar16 + -8) {
    *(undefined8 *)(this + 0x108) = *(undefined8 *)(this + 0x100);
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


