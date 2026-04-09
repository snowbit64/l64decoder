// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileExpr
// Entry Point: 00ed7c3c
// Size: 1744 bytes
// Signature: undefined __thiscall compileExpr(Compiler * this, AstExpr * param_1, uchar param_2, bool param_3)


/* Luau::Compiler::compileExpr(Luau::AstExpr*, unsigned char, bool) */

void __thiscall
Luau::Compiler::compileExpr(Compiler *this,AstExpr *param_1,uchar param_2,bool param_3)

{
  long lVar1;
  AstExprGlobal AVar2;
  int iVar3;
  BytecodeBuilder *this_00;
  LuauOpcode LVar4;
  AstLocal *pAVar5;
  int *piVar6;
  bool bVar7;
  AstExprGlobal *pAVar8;
  AstLocal *pAVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  AstExprGlobal *pAVar13;
  AstLocal *pAVar14;
  
  do {
    if (0 < *(int *)(this + 0xc)) {
      BytecodeBuilder::setDebugLine
                (*(BytecodeBuilder **)this,*(int *)((AstExprGlobal *)param_1 + 0xc) + 1);
    }
    if (((1 < *(int *)(this + 0x10)) &&
        (*(int *)((AstExprGlobal *)param_1 + 8) != AstRtti<Luau::AstStatBlock>::value)) &&
       (*(int *)((AstExprGlobal *)param_1 + 8) != AstRtti<Luau::AstStatTypeAlias>::value)) {
      BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,0x45,'\0','\0','\0');
    }
    if ((*(long *)(this + 0xe0) != 0) &&
       (pAVar8 = *(AstExprGlobal **)(this + 0xe8), pAVar8 != (AstExprGlobal *)param_1)) {
      uVar10 = 0;
      uVar12 = (ulong)param_1 >> 4 ^ (ulong)param_1 >> 9;
      uVar11 = *(long *)(this + 0xd8) - 1;
      do {
        uVar12 = uVar12 & uVar11;
        pAVar13 = *(AstExprGlobal **)(*(long *)(this + 0xd0) + uVar12 * 0x18);
        if (pAVar13 == (AstExprGlobal *)param_1) {
          piVar6 = (int *)(*(long *)(this + 0xd0) + uVar12 * 0x18 + 8);
          if (*piVar6 != 0) {
            compileExprConstant(this,param_1,(Constant *)piVar6,param_2);
            return;
          }
          break;
        }
        uVar10 = uVar10 + 1;
        uVar12 = uVar10 + uVar12;
      } while (pAVar13 != pAVar8 && uVar10 < uVar11 || pAVar13 != pAVar8 && uVar10 == uVar11);
    }
    iVar3 = *(int *)((AstExprGlobal *)param_1 + 8);
    if ((param_1 == (AstExpr *)0x0) || (iVar3 != AstRtti<Luau::AstExprGroup>::value)) {
      if (iVar3 == AstRtti<Luau::AstExprConstantNil>::value) {
        this_00 = *(BytecodeBuilder **)this;
        LVar4 = 2;
        AVar2 = (AstExprGlobal)0x0;
        goto LAB_00ed8228;
      }
      if ((param_1 != (AstExpr *)0x0) && (iVar3 == AstRtti<Luau::AstExprConstantBool>::value)) {
        this_00 = *(BytecodeBuilder **)this;
        LVar4 = 3;
        AVar2 = ((AstExprGlobal *)param_1)[0x1c];
        goto LAB_00ed8228;
      }
      if ((param_1 != (AstExpr *)0x0) && (iVar3 == AstRtti<Luau::AstExprConstantNumber>::value)) {
        uVar10 = BytecodeBuilder::addConstantNumber
                           (*(BytecodeBuilder **)this,*(double *)((AstExprGlobal *)param_1 + 0x20));
        iVar3 = (int)uVar10;
joined_r0x00ed7f44:
        if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
          CompileError::raise((Location *)((AstExprGlobal *)param_1 + 0xc),
                              "Exceeded constant limit; simplify the code to compile");
        }
        if ((uVar10 >> 0xf & 0x1ffff) != 0) {
          BytecodeBuilder::emitAD(*(BytecodeBuilder **)this,0x42,param_2,0);
          BytecodeBuilder::emitAux(*(BytecodeBuilder **)this,(uint)uVar10);
          return;
        }
        BytecodeBuilder::emitAD(*(BytecodeBuilder **)this,5,param_2,(short)uVar10);
        return;
      }
      if ((param_1 != (AstExpr *)0x0) && (iVar3 == AstRtti<Luau::AstExprConstantString>::value)) {
        uVar10 = BytecodeBuilder::addConstantString
                           (*(undefined8 *)this,*(undefined8 *)((AstExprGlobal *)param_1 + 0x20),
                            *(undefined8 *)((AstExprGlobal *)param_1 + 0x28));
        iVar3 = (int)uVar10;
        goto joined_r0x00ed7f44;
      }
      if ((param_1 != (AstExpr *)0x0) && (iVar3 == AstRtti<Luau::AstExprLocal>::value)) {
        if (*(long *)(this + 0x68) == 0) {
          pAVar5 = *(AstLocal **)((AstExprGlobal *)param_1 + 0x20);
          goto LAB_00ed820c;
        }
        pAVar5 = *(AstLocal **)((AstExprGlobal *)param_1 + 0x20);
        pAVar9 = *(AstLocal **)(this + 0x70);
        if (pAVar5 == pAVar9) goto LAB_00ed820c;
        uVar10 = 0;
        uVar12 = (ulong)pAVar5 >> 4 ^ (ulong)pAVar5 >> 9;
        uVar11 = *(long *)(this + 0x60) - 1;
        break;
      }
      if ((param_1 != (AstExpr *)0x0) && (iVar3 == AstRtti<Luau::AstExprGlobal>::value)) {
        compileExprGlobal(this,(AstExprGlobal *)param_1,param_2);
        return;
      }
      if ((param_1 != (AstExpr *)0x0) && (iVar3 == AstRtti<Luau::AstExprVarargs>::value)) {
        if (0 < *(int *)(this + 0xc)) {
          BytecodeBuilder::setDebugLine
                    (*(BytecodeBuilder **)this,*(int *)((AstExprGlobal *)param_1 + 0xc) + 1);
        }
        this_00 = *(BytecodeBuilder **)this;
        LVar4 = 0x3f;
        AVar2 = (AstExprGlobal)0x2;
        goto LAB_00ed8228;
      }
      if ((param_1 != (AstExpr *)0x0) && (iVar3 == AstRtti<Luau::AstExprCall>::value)) {
        if ((param_3) && (*(int *)(this + 0x178) - 1U == (uint)param_2)) {
          bVar7 = true;
        }
        else {
          bVar7 = false;
        }
        compileExprCall(this,(AstExprCall *)param_1,param_2,'\x01',bVar7,false);
        return;
      }
      if ((param_1 != (AstExpr *)0x0) && (iVar3 == AstRtti<Luau::AstExprIndexName>::value)) {
        compileExprIndexName(this,(AstExprIndexName *)param_1,param_2);
        return;
      }
      if ((param_1 != (AstExpr *)0x0) && (iVar3 == AstRtti<Luau::AstExprIndexExpr>::value)) {
        compileExprIndexExpr(this,(AstExprIndexExpr *)param_1,param_2);
        return;
      }
      if ((param_1 != (AstExpr *)0x0) && (iVar3 == AstRtti<Luau::AstExprFunction>::value)) {
        compileExprFunction(this,(AstExprFunction *)param_1,param_2);
        return;
      }
      if ((param_1 != (AstExpr *)0x0) && (iVar3 == AstRtti<Luau::AstExprTable>::value)) {
        compileExprTable(this,(AstExprTable *)param_1,param_2,param_3);
        return;
      }
      if ((param_1 != (AstExpr *)0x0) && (iVar3 == AstRtti<Luau::AstExprUnary>::value)) {
        compileExprUnary(this,(AstExprUnary *)param_1,param_2);
        return;
      }
      if ((param_1 != (AstExpr *)0x0) && (iVar3 == AstRtti<Luau::AstExprBinary>::value)) {
        compileExprBinary(this,(AstExprBinary *)param_1,param_2,param_3);
        return;
      }
      if ((param_1 == (AstExpr *)0x0) || (iVar3 != AstRtti<Luau::AstExprTypeAssertion>::value)) {
        if ((param_1 != (AstExpr *)0x0) && (iVar3 == AstRtti<Luau::AstExprIfElse>::value)) {
          compileExprIfElse((AstExprIfElse *)this,(uchar)param_1,(bool)param_2);
          return;
        }
        if (iVar3 != AstRtti<Luau::AstExprInterpString>::value) {
          param_1 = (AstExpr *)0x0;
        }
        if ((FFlag::LuauInterpolatedStringBaseSupport != '\0') && (param_1 != (AstExpr *)0x0)) {
          compileExprInterpString((AstExprInterpString *)this,(uchar)param_1,(bool)param_2);
          return;
        }
        return;
      }
    }
    param_1 = *(AstExpr **)((AstExprGlobal *)param_1 + 0x20);
  } while( true );
  while( true ) {
    uVar10 = uVar10 + 1;
    uVar12 = uVar10 + uVar12;
    if ((pAVar14 == pAVar9 || uVar11 <= uVar10) && (pAVar14 == pAVar9 || uVar10 != uVar11)) break;
    uVar12 = uVar12 & uVar11;
    pAVar14 = *(AstLocal **)(*(long *)(this + 0x58) + uVar12 * 0x10);
    if (pAVar14 == pAVar5) {
      lVar1 = *(long *)(this + 0x58) + uVar12 * 0x10;
      if (*(char *)(lVar1 + 9) != '\0') {
        this_00 = *(BytecodeBuilder **)this;
        LVar4 = 6;
        AVar2 = *(AstExprGlobal *)(lVar1 + 8);
        goto LAB_00ed8228;
      }
      break;
    }
  }
LAB_00ed820c:
  AVar2 = (AstExprGlobal)getUpval(this,pAVar5);
  this_00 = *(BytecodeBuilder **)this;
  LVar4 = 9;
LAB_00ed8228:
  BytecodeBuilder::emitABC(this_00,LVar4,param_2,(uchar)AVar2,'\0');
  return;
}


