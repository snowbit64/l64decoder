// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onCCast
// Entry Point: 00c0d5b8
// Size: 1084 bytes
// Signature: undefined __thiscall onCCast(CreateIR * this, GsTOperator param_1, AST_Node * param_2)


/* CreateIR::onCCast(GsTOperator, AST_Node*) */

void __thiscall CreateIR::onCCast(CreateIR *this,GsTOperator param_1,AST_Node *param_2)

{
  CreateIR CVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  IR_Type *pIVar9;
  IR_OPCODE IVar10;
  long lVar11;
  int *this_00;
  uint uVar12;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  uint local_b8 [2];
  int *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar7 = (**(code **)(**(long **)(this + 0x58) + 0x18))();
  lVar8 = (**(code **)(*(long *)param_2 + 0x18))(param_2);
  bVar3 = false;
  if (param_1 - 0xf < 0x77) {
    IVar10 = 0;
    switch(param_1) {
    case 0xf:
      bVar3 = false;
      IVar10 = 0x37;
      break;
    case 0x10:
      bVar3 = false;
      IVar10 = 0x3d;
      break;
    case 0x11:
      bVar3 = false;
      IVar10 = 0x43;
      break;
    case 0x12:
      bVar3 = false;
      IVar10 = 0x49;
      break;
    case 0x13:
      bVar3 = false;
      IVar10 = 0x2b;
      break;
    case 0x14:
      bVar3 = false;
      IVar10 = 0x31;
      break;
    case 0x15:
      bVar3 = false;
      IVar10 = 0x4a;
      break;
    case 0x16:
      bVar3 = false;
      IVar10 = 0x2c;
      break;
    case 0x17:
      bVar3 = false;
      IVar10 = 0x32;
      break;
    case 0x18:
      bVar3 = false;
      IVar10 = 0x38;
      break;
    case 0x19:
      bVar3 = false;
      IVar10 = 0x3e;
      break;
    case 0x1a:
      bVar3 = false;
      IVar10 = 0x44;
      break;
    case 0x1b:
      bVar3 = false;
      IVar10 = 0x4b;
      break;
    case 0x1c:
      bVar3 = false;
      IVar10 = 0x26;
      break;
    case 0x1d:
      bVar3 = false;
      IVar10 = 0x33;
      break;
    case 0x1e:
      bVar3 = false;
      IVar10 = 0x39;
      break;
    case 0x1f:
      bVar3 = false;
      IVar10 = 0x3f;
      break;
    case 0x20:
      bVar3 = false;
      IVar10 = 0x45;
      break;
    case 0x21:
      bVar3 = false;
      IVar10 = 0x27;
      break;
    case 0x22:
      bVar3 = false;
      IVar10 = 0x2d;
      break;
    case 0x23:
      bVar3 = false;
      IVar10 = 0x4c;
      break;
    case 0x24:
      bVar3 = false;
      IVar10 = 0x3a;
      break;
    case 0x25:
      bVar3 = false;
      IVar10 = 0x40;
      break;
    case 0x26:
      bVar3 = false;
      IVar10 = 0x46;
      break;
    case 0x27:
      bVar3 = false;
      IVar10 = 0x28;
      break;
    case 0x28:
      bVar3 = false;
      IVar10 = 0x2e;
      break;
    case 0x29:
      bVar3 = false;
      IVar10 = 0x4d;
      break;
    case 0x2a:
      bVar3 = false;
      IVar10 = 0x34;
      break;
    case 0x2b:
      bVar3 = false;
      IVar10 = 0x41;
      break;
    case 0x2c:
      bVar3 = false;
      IVar10 = 0x47;
      break;
    case 0x2d:
      bVar3 = false;
      IVar10 = 0x29;
      break;
    case 0x2e:
      bVar3 = false;
      IVar10 = 0x2f;
      break;
    case 0x2f:
      bVar3 = false;
      IVar10 = 0x4e;
      break;
    case 0x30:
      bVar3 = false;
      IVar10 = 0x35;
      break;
    case 0x31:
      bVar3 = false;
      IVar10 = 0x3b;
      break;
    case 0x32:
      bVar3 = false;
      IVar10 = 0x48;
      break;
    case 0x33:
      bVar3 = false;
      IVar10 = 0x2a;
      break;
    case 0x34:
      bVar3 = false;
      IVar10 = 0x30;
      break;
    case 0x35:
      bVar3 = false;
      IVar10 = 0x4f;
      break;
    case 0x36:
      bVar3 = false;
      IVar10 = 0x36;
      break;
    case 0x37:
      bVar3 = false;
      IVar10 = 0x3c;
      break;
    case 0x38:
      bVar3 = false;
      IVar10 = 0x42;
      break;
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
      break;
    default:
      IVar10 = 0x10;
      bVar3 = true;
    }
  }
  else {
    IVar10 = 0;
  }
  pushOp(this,param_1);
  CVar1 = this[0xe0];
  this[0xe0] = (CreateIR)0x0;
  (***(code ***)param_2)(param_2,this + 8);
  lVar11 = *(long *)(this + 0x108);
  this[0xe0] = CVar1;
  this_00 = *(int **)(lVar7 + 0x20);
  local_f0 = *(undefined8 *)(lVar11 + -0x38);
  uStack_d8 = *(undefined8 *)(lVar11 + -0x20);
  local_e0 = *(undefined8 *)(lVar11 + -0x28);
  uStack_c8 = *(undefined8 *)(lVar11 + -0x10);
  uStack_d0 = *(undefined8 *)(lVar11 + -0x18);
  local_e8 = *(undefined8 *)(lVar11 + -0x30);
  local_c0 = *(undefined8 *)(lVar11 + -8);
  *(undefined8 **)(this + 0x108) = (undefined8 *)(lVar11 + -0x38);
  local_80 = local_e0;
  uStack_78 = uStack_d8;
  uStack_70 = uStack_d0;
  uStack_68 = uStack_c8;
  local_60 = local_c0;
  resolveToValue(local_b8,this,&local_f0,*(undefined8 *)(lVar8 + 0x20));
  uVar4 = local_b8[0];
  uStack_78 = uStack_a0;
  local_80 = local_a8;
  uStack_68 = uStack_90;
  uStack_70 = local_98;
  if (bVar3) {
    if (*local_b0 == 0) {
      IVar10 = 0x1a;
      if (*this_00 != 0) {
        IVar10 = 0x12;
      }
    }
    else {
      IVar10 = 0x10;
    }
  }
  uVar5 = IR_Type::getNumIRRegisters();
  uVar6 = IR_RegisterSet::allocateReg
                    ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),(IR_Type *)this_00,
                     (char *)0x0);
  local_88 = 0;
  local_b8[0] = uVar6;
  local_b0 = this_00;
  if (1 < uVar5) {
    uVar12 = 1;
    do {
      pIVar9 = (IR_Type *)
               IR_Type::getIRRegisterType
                         ((IR_Type *)this_00,uVar12,*(IR_TypeSet **)(*(long *)(this + 0x70) + 0x38))
      ;
      IR_RegisterSet::allocateReg
                ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),pIVar9,(char *)0x0);
      uVar12 = uVar12 + 1;
    } while (uVar5 != uVar12);
  }
  if (IVar10 == 0) {
    error(this,"unsupported cast operation for type");
  }
  else {
    IR_InstructionSequence::emit(*(IR_InstructionSequence **)(this + 0x78),IVar10,uVar6,uVar4);
  }
  FUN_00c09960(this + 0x100,local_b8);
  lVar7 = *(long *)(this + 0x120);
  *(long *)(this + 0x120) = lVar7 + -8;
  if (*(long *)(this + 0x118) == lVar7 + -8) {
    *(undefined8 *)(this + 0x108) = *(undefined8 *)(this + 0x100);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


