// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onUnaryPrefixOperator
// Entry Point: 00c0c568
// Size: 1540 bytes
// Signature: undefined __thiscall onUnaryPrefixOperator(CreateIR * this, GsTOperator param_1, SHC_Type * param_2, AST_TypedNode * param_3)


/* CreateIR::onUnaryPrefixOperator(GsTOperator, SHC_Type*, AST_TypedNode*) */

void __thiscall
CreateIR::onUnaryPrefixOperator
          (CreateIR *this,GsTOperator param_1,SHC_Type *param_2,AST_TypedNode *param_3)

{
  undefined8 uVar1;
  long lVar2;
  CreateIR CVar3;
  long lVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  IR_Type *pIVar10;
  IR_OPCODE IVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  IR_InstructionSequence *this_00;
  int iVar16;
  IR_Type *pIVar17;
  uint uVar18;
  undefined4 local_198;
  undefined8 local_194;
  undefined8 uStack_18c;
  undefined8 local_184;
  undefined8 uStack_17c;
  long local_174;
  undefined8 uStack_16c;
  undefined4 local_164;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  long local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined8 local_120;
  IR_Type *pIStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long local_f0;
  undefined8 local_e8;
  IR_Type *pIStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  long local_b8;
  undefined8 local_b0;
  IR_Type *pIStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  pushOp(this,param_1);
  if (param_1 - 0xd < 2) {
    CVar3 = this[0xe0];
    lVar14 = *(long *)(this + 0xe8);
    lVar2 = *(long *)(this + 0xf0);
    this[0xe0] = (CreateIR)0x1;
    (***(code ***)param_3)(param_3,this + 8);
    lVar13 = *(long *)(this + 0x108);
    this[0xe0] = CVar3;
    uVar1 = *(undefined8 *)(lVar13 + -0x38);
    pIVar17 = *(IR_Type **)(lVar13 + -0x30);
    uStack_158 = *(undefined8 *)(lVar13 + -0x20);
    local_160 = *(undefined8 *)(lVar13 + -0x28);
    uStack_148 = *(undefined8 *)(lVar13 + -0x10);
    local_150 = *(undefined8 *)(lVar13 + -0x18);
    local_140 = *(long *)(lVar13 + -8);
    *(undefined8 **)(this + 0x108) = (undefined8 *)(lVar13 + -0x38);
    uVar6 = *(GsTBasicType *)(*(long *)(param_3 + 0x20) + 8) - 3;
    if (uVar6 < 7) {
      lVar13 = 0x1c;
      if (param_1 != 0xd) {
        lVar13 = 0x38;
      }
      iVar16 = *(int *)(s_opcodeMap + (ulong)uVar6 * 4 + lVar13);
    }
    else {
      iVar16 = 0;
    }
    uVar5 = getIRCONSTForType(this,1,*(GsTBasicType *)(*(long *)(param_3 + 0x20) + 8));
    uVar6 = IR_Type::getNumIRRegisters();
    uVar7 = IR_RegisterSet::allocateReg
                      ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),pIVar17,(char *)0x0);
    local_b0 = CONCAT44(local_b0._4_4_,uVar7);
    local_80 = (ulong)local_80._4_4_ << 0x20;
    pIStack_a8 = pIVar17;
    if (1 < uVar6) {
      uVar8 = 1;
      do {
        pIVar10 = (IR_Type *)
                  IR_Type::getIRRegisterType
                            (pIVar17,uVar8,*(IR_TypeSet **)(*(long *)(this + 0x70) + 0x38));
        IR_RegisterSet::allocateReg
                  ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),pIVar10,(char *)0x0);
        uVar8 = uVar8 + 1;
      } while (uVar6 != uVar8);
    }
    if (iVar16 == 0) {
      error(this,"unsupported prefix operation for type");
      FUN_00c09960(this + 0x100,&local_b0);
      lVar14 = *(long *)(this + 0x120);
      *(long *)(this + 0x120) = lVar14 + -8;
      if (*(long *)(this + 0x118) == lVar14 + -8) {
        *(undefined8 *)(this + 0x108) = *(undefined8 *)(this + 0x100);
      }
      goto LAB_00c0cb38;
    }
    uStack_d0 = uStack_158;
    local_d8 = local_160;
    uStack_c0 = uStack_148;
    local_c8 = local_150;
    local_b8 = local_140;
    pIStack_118 = pIStack_a8;
    local_120 = local_b0;
    uStack_108 = uStack_98;
    local_110 = local_a0;
    uStack_f8 = uStack_88;
    uStack_100 = local_90;
    local_f0 = local_80;
    local_e8 = uVar1;
    pIStack_e0 = pIVar17;
    codeAssignUpdate(this,&local_e8,&local_120,0,uVar5,iVar16);
    FUN_00c09960(this + 0x100,&local_b0);
    lVar13 = *(long *)(this + 0xf0);
    lVar15 = lVar13 - *(long *)(this + 0xe8);
    while (((ulong)(lVar2 - lVar14) >> 3 & 0xffffffff) < (ulong)(lVar15 >> 3)) {
      this_00 = *(IR_InstructionSequence **)(lVar13 + -8);
      *(IR_InstructionSequence ***)(this + 0xf0) = (IR_InstructionSequence **)(lVar13 + -8);
      IR_InstructionSequence::emitSequence(*(IR_InstructionSequence **)(this + 0x78),this_00);
      if (this_00 != (IR_InstructionSequence *)0x0) {
        IR_InstructionSequence::~IR_InstructionSequence(this_00);
        operator_delete(this_00);
      }
      lVar13 = *(long *)(this + 0xf0);
      lVar15 = lVar13 - *(long *)(this + 0xe8);
    }
    goto LAB_00c0cb1c;
  }
  if (param_1 == 10) {
    CVar3 = this[0xe0];
    this[0xe0] = (CreateIR)0x1;
    (***(code ***)param_3)(param_3,this + 8);
    lVar14 = *(long *)(this + 0x108);
    this[0xe0] = CVar3;
    local_b0 = *(undefined8 *)(lVar14 + -0x38);
    piVar12 = *(int **)(lVar14 + -0x30);
    uStack_158 = *(undefined8 *)(lVar14 + -0x20);
    local_160 = *(undefined8 *)(lVar14 + -0x28);
    uStack_148 = *(undefined8 *)(lVar14 + -0x10);
    local_150 = *(undefined8 *)(lVar14 + -0x18);
    local_140 = *(long *)(lVar14 + -8);
    *(undefined8 **)(this + 0x108) = (undefined8 *)(lVar14 + -0x38);
    if (*piVar12 == 5) {
      piVar12 = *(int **)(piVar12 + 2);
    }
    local_a0 = local_160;
    uStack_98 = uStack_158;
    local_90 = local_150;
    uStack_88 = uStack_148;
    local_80 = local_140;
    pIStack_a8 = (IR_Type *)
                 IR_TypeSet::getPointerType(*(IR_TypeSet **)(this + 0x68),(IR_Type *)piVar12);
    goto LAB_00c0cb18;
  }
  if (param_1 == 9) {
    onDerefPointerObject(this,param_3);
    goto LAB_00c0cb1c;
  }
  CVar3 = this[0xe0];
  this[0xe0] = (CreateIR)0x0;
  (***(code ***)param_3)(param_3,this + 8);
  lVar14 = *(long *)(this + 0x108);
  this[0xe0] = CVar3;
  local_198 = *(undefined4 *)(lVar14 + -0x38);
  local_164 = *(undefined4 *)(lVar14 + -4);
  uStack_16c = *(undefined8 *)(lVar14 + -0xc);
  local_174 = *(long *)(lVar14 + -0x14);
  uStack_17c = *(undefined8 *)(lVar14 + -0x1c);
  local_184 = *(undefined8 *)(lVar14 + -0x24);
  uStack_18c = *(undefined8 *)(lVar14 + -0x2c);
  local_194 = *(undefined8 *)(lVar14 + -0x34);
  *(undefined4 **)(this + 0x108) = (undefined4 *)(lVar14 + -0x38);
  pIVar17 = *(IR_Type **)(param_2 + 8);
  local_160 = local_194;
  uStack_158 = uStack_18c;
  local_150 = local_184;
  uStack_148 = uStack_17c;
  local_140 = local_174;
  uStack_138 = uStack_16c;
  local_130 = local_164;
  resolveToValue(&local_b0,this,&local_198,*(undefined8 *)(param_3 + 0x20));
  uVar6 = (uint)local_b0;
  uVar8 = IR_Type::getNumIRRegisters();
  uVar9 = IR_RegisterSet::allocateReg
                    ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),pIVar17,(char *)0x0);
  local_b0 = CONCAT44(local_b0._4_4_,uVar9);
  local_80 = (ulong)local_80._4_4_ << 0x20;
  pIStack_a8 = pIVar17;
  if (1 < uVar8) {
    uVar18 = 1;
    do {
      pIVar10 = (IR_Type *)
                IR_Type::getIRRegisterType
                          (pIVar17,uVar18,*(IR_TypeSet **)(*(long *)(this + 0x70) + 0x38));
      IR_RegisterSet::allocateReg
                ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),pIVar10,(char *)0x0);
      uVar18 = uVar18 + 1;
    } while (uVar8 != uVar18);
  }
  lVar14 = 0;
  IVar11 = 0x25;
  switch(param_1) {
  case 6:
    lVar14 = 6;
  default:
switchD_00c0c960_caseD_9:
    uVar8 = *(int *)(*(long *)(param_3 + 0x20) + 8) - 3;
    if ((uVar8 < 7) &&
       (IVar11 = *(IR_OPCODE *)(s_opcodeMap + (ulong)uVar8 * 4 + lVar14 * 0x1c), IVar11 != 0))
    break;
    error(this,"unsupported unary operation for type");
    goto LAB_00c0cb18;
  case 7:
    break;
  case 8:
    lVar14 = 10;
    goto switchD_00c0c960_caseD_9;
  case 0xf:
    IVar11 = 0x37;
    break;
  case 0x10:
    IVar11 = 0x3d;
    break;
  case 0x11:
    IVar11 = 0x43;
    break;
  case 0x12:
    IVar11 = 0x49;
    break;
  case 0x13:
    IVar11 = 0x2b;
    break;
  case 0x14:
    IVar11 = 0x31;
    break;
  case 0x15:
    IVar11 = 0x4a;
    break;
  case 0x16:
    IVar11 = 0x2c;
    break;
  case 0x17:
    IVar11 = 0x32;
    break;
  case 0x18:
    IVar11 = 0x38;
    break;
  case 0x19:
    IVar11 = 0x3e;
    break;
  case 0x1a:
    IVar11 = 0x44;
    break;
  case 0x1b:
    IVar11 = 0x4b;
    break;
  case 0x1c:
    IVar11 = 0x26;
    break;
  case 0x1d:
    IVar11 = 0x33;
    break;
  case 0x1e:
    IVar11 = 0x39;
    break;
  case 0x1f:
    IVar11 = 0x3f;
    break;
  case 0x20:
    IVar11 = 0x45;
    break;
  case 0x21:
    IVar11 = 0x27;
    break;
  case 0x22:
    IVar11 = 0x2d;
    break;
  case 0x23:
    IVar11 = 0x4c;
    break;
  case 0x24:
    IVar11 = 0x3a;
    break;
  case 0x25:
    IVar11 = 0x40;
    break;
  case 0x26:
    IVar11 = 0x46;
    break;
  case 0x27:
    IVar11 = 0x28;
    break;
  case 0x28:
    IVar11 = 0x2e;
    break;
  case 0x29:
    IVar11 = 0x4d;
    break;
  case 0x2a:
    IVar11 = 0x34;
    break;
  case 0x2b:
    IVar11 = 0x41;
    break;
  case 0x2c:
    IVar11 = 0x47;
    break;
  case 0x2d:
    IVar11 = 0x29;
    break;
  case 0x2e:
    IVar11 = 0x2f;
    break;
  case 0x2f:
    IVar11 = 0x4e;
    break;
  case 0x30:
    IVar11 = 0x35;
    break;
  case 0x31:
    IVar11 = 0x3b;
    break;
  case 0x32:
    IVar11 = 0x48;
    break;
  case 0x33:
    IVar11 = 0x2a;
    break;
  case 0x34:
    IVar11 = 0x30;
    break;
  case 0x35:
    IVar11 = 0x4f;
    break;
  case 0x36:
    IVar11 = 0x36;
    break;
  case 0x37:
    IVar11 = 0x3c;
    break;
  case 0x38:
    IVar11 = 0x42;
  }
  IR_InstructionSequence::emit(*(IR_InstructionSequence **)(this + 0x78),IVar11,uVar9,uVar6);
LAB_00c0cb18:
  FUN_00c09960(this + 0x100,&local_b0);
LAB_00c0cb1c:
  lVar14 = *(long *)(this + 0x120);
  *(long *)(this + 0x120) = lVar14 + -8;
  if (*(long *)(this + 0x118) == lVar14 + -8) {
    *(undefined8 *)(this + 0x108) = *(undefined8 *)(this + 0x100);
  }
LAB_00c0cb38:
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


