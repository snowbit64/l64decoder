// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getConstantIndex
// Entry Point: 00edbe78
// Size: 312 bytes
// Signature: undefined __thiscall getConstantIndex(Compiler * this, AstExpr * param_1)


/* Luau::Compiler::getConstantIndex(Luau::AstExpr*) */

undefined8 __thiscall Luau::Compiler::getConstantIndex(Compiler *this,AstExpr *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  AstExpr *pAVar6;
  
  if ((*(long *)(this + 0xe0) != 0) && (*(AstExpr **)(this + 0xe8) != param_1)) {
    lVar3 = *(long *)(this + 0xd0);
    uVar5 = 0;
    uVar4 = (ulong)param_1 >> 4 ^ (ulong)param_1 >> 9;
    while( true ) {
      uVar4 = uVar4 & *(long *)(this + 0xd8) - 1U;
      pAVar6 = *(AstExpr **)(lVar3 + uVar4 * 0x18);
      if (pAVar6 == param_1) break;
      if (pAVar6 == *(AstExpr **)(this + 0xe8)) {
        return 0xffffffff;
      }
      uVar5 = uVar5 + 1;
      uVar4 = uVar5 + uVar4;
      if (*(long *)(this + 0xd8) - 1U < uVar5) {
        return 0xffffffff;
      }
    }
    switch(*(undefined4 *)(lVar3 + uVar4 * 0x18 + 8)) {
    case 1:
      uVar2 = BytecodeBuilder::addConstantNil();
      iVar1 = (int)uVar2;
      break;
    case 2:
      uVar2 = BytecodeBuilder::addConstantBoolean
                        (*(BytecodeBuilder **)this,*(bool *)(lVar3 + uVar4 * 0x18 + 0x10));
      iVar1 = (int)uVar2;
      break;
    case 3:
      uVar2 = BytecodeBuilder::addConstantNumber
                        (*(BytecodeBuilder **)this,*(double *)(lVar3 + uVar4 * 0x18 + 0x10));
      iVar1 = (int)uVar2;
      break;
    case 4:
      lVar3 = lVar3 + uVar4 * 0x18;
      uVar2 = BytecodeBuilder::addConstantString
                        (*(undefined8 *)this,*(undefined8 *)(lVar3 + 0x10),
                         *(undefined4 *)(lVar3 + 0xc));
      iVar1 = (int)uVar2;
      break;
    default:
      goto switchD_00edbf1c_caseD_4;
    }
    if (-1 < iVar1) {
      return uVar2;
    }
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(param_1 + 0xc),
                        "Exceeded constant limit; simplify the code to compile");
  }
switchD_00edbf1c_caseD_4:
  return 0xffffffff;
}


