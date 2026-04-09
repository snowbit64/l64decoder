// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileLValueUse
// Entry Point: 00edb1d8
// Size: 476 bytes
// Signature: undefined __thiscall compileLValueUse(Compiler * this, LValue * param_1, uchar param_2, bool param_3)


/* Luau::Compiler::compileLValueUse(Luau::Compiler::LValue const&, unsigned char, bool) */

void __thiscall
Luau::Compiler::compileLValueUse(Compiler *this,LValue *param_1,uchar param_2,bool param_3)

{
  uchar uVar1;
  uint uVar2;
  BytecodeBuilder *pBVar3;
  LValue LVar4;
  LuauOpcode LVar5;
  
  if (0 < *(int *)(this + 0xc)) {
    BytecodeBuilder::setDebugLine(*(BytecodeBuilder **)this,*(int *)(param_1 + 0x18) + 1);
  }
  switch(*(undefined4 *)param_1) {
  case 0:
    pBVar3 = *(BytecodeBuilder **)this;
    LVar5 = 6;
    LVar4 = param_1[4];
    if (param_3) {
      BytecodeBuilder::emitABC(pBVar3,6,(uchar)LVar4,param_2,'\0');
      return;
    }
    break;
  case 1:
    pBVar3 = *(BytecodeBuilder **)this;
    LVar5 = 9;
    if (param_3) {
      LVar5 = 10;
    }
    LVar4 = param_1[5];
    break;
  case 2:
    uVar2 = BytecodeBuilder::addConstantString
                      (*(undefined8 *)this,*(undefined8 *)(param_1 + 8),
                       *(undefined8 *)(param_1 + 0x10));
    if ((int)uVar2 < 0) {
LAB_00edb3a4:
                    /* WARNING: Subroutine does not return */
      CompileError::raise((Location *)(param_1 + 0x18),
                          "Exceeded constant limit; simplify the code to compile");
    }
    pBVar3 = *(BytecodeBuilder **)this;
    LVar5 = 7;
    if (param_3) {
      LVar5 = 8;
    }
    uVar1 = BytecodeBuilder::getStringHash
                      (*(BytecodeBuilder **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    LVar4 = (LValue)0x0;
    goto LAB_00edb354;
  case 3:
    uVar2 = BytecodeBuilder::addConstantString
                      (*(undefined8 *)this,*(undefined8 *)(param_1 + 8),
                       *(undefined8 *)(param_1 + 0x10));
    if ((int)uVar2 < 0) goto LAB_00edb3a4;
    pBVar3 = *(BytecodeBuilder **)this;
    LVar4 = param_1[4];
    LVar5 = 0xf;
    if (param_3) {
      LVar5 = 0x10;
    }
    uVar1 = BytecodeBuilder::getStringHash
                      (*(BytecodeBuilder **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
LAB_00edb354:
    BytecodeBuilder::emitABC(pBVar3,LVar5,param_2,(uchar)LVar4,uVar1);
    BytecodeBuilder::emitAux(*(BytecodeBuilder **)this,uVar2);
    return;
  case 4:
    pBVar3 = *(BytecodeBuilder **)this;
    LVar5 = 0x11;
    if (param_3) {
      LVar5 = 0x12;
    }
    LVar4 = param_1[7];
    goto LAB_00edb388;
  case 5:
    pBVar3 = *(BytecodeBuilder **)this;
    LVar4 = param_1[6];
    LVar5 = 0xd;
    if (param_3) {
      LVar5 = 0xe;
    }
LAB_00edb388:
    BytecodeBuilder::emitABC(pBVar3,LVar5,param_2,(uchar)param_1[4],(uchar)LVar4);
    return;
  default:
    return;
  }
  BytecodeBuilder::emitABC(pBVar3,LVar5,param_2,(uchar)LVar4,'\0');
  return;
}


