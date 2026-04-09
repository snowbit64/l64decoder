// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileExprSelectVararg
// Entry Point: 00edccbc
// Size: 584 bytes
// Signature: undefined __thiscall compileExprSelectVararg(Compiler * this, AstExprCall * param_1, uchar param_2, uchar param_3, bool param_4, bool param_5, uchar param_6)


/* Luau::Compiler::compileExprSelectVararg(Luau::AstExprCall*, unsigned char, unsigned char, bool,
   bool, unsigned char) */

void __thiscall
Luau::Compiler::compileExprSelectVararg
          (Compiler *this,AstExprCall *param_1,uchar param_2,uchar param_3,bool param_4,bool param_5
          ,uchar param_6)

{
  long lVar1;
  uchar uVar2;
  int iVar3;
  undefined4 uVar4;
  AstExpr *pAVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  AstExpr *pAVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  byte bVar13;
  uint uVar14;
  
  pAVar5 = **(AstExpr ***)(param_1 + 0x28);
  iVar3 = *(int *)(pAVar5 + 8);
  pAVar9 = pAVar5;
  while ((pAVar9 == (AstExpr *)0x0 || (iVar3 != AstRtti<Luau::AstExprLocal>::value))) {
    if ((iVar3 != AstRtti<Luau::AstExprGroup>::value) &&
       (iVar3 != AstRtti<Luau::AstExprTypeAssertion>::value)) goto LAB_00edcdb0;
    pAVar9 = *(AstExpr **)(pAVar9 + 0x20);
    iVar3 = *(int *)(pAVar9 + 8);
  }
  if (*(long *)(this + 0x68) != 0) {
    uVar6 = *(ulong *)(pAVar9 + 0x20);
    uVar7 = *(ulong *)(this + 0x70);
    if (uVar6 != uVar7) {
      uVar8 = 0;
      uVar11 = uVar6 >> 4 ^ uVar6 >> 9;
      uVar10 = *(long *)(this + 0x60) - 1;
      goto LAB_00edcd88;
    }
  }
  goto LAB_00edcdb0;
  while( true ) {
    uVar8 = uVar8 + 1;
    uVar11 = uVar8 + uVar11;
    if ((uVar12 == uVar7 || uVar10 <= uVar8) && (uVar12 == uVar7 || uVar8 != uVar10)) break;
LAB_00edcd88:
    uVar11 = uVar11 & uVar10;
    uVar12 = *(ulong *)(*(long *)(this + 0x58) + uVar11 * 0x10);
    if (uVar12 == uVar6) {
      lVar1 = *(long *)(this + 0x58) + uVar11 * 0x10;
      if (*(char *)(lVar1 + 9) != '\0') {
        bVar13 = *(byte *)(lVar1 + 8);
        uVar14 = (uint)bVar13;
        goto LAB_00edcdd8;
      }
      break;
    }
  }
LAB_00edcdb0:
  bVar13 = param_6 + 1;
  uVar4 = *(undefined4 *)(this + 0x178);
  uVar14 = (uint)bVar13;
  *(uint *)(this + 0x178) = uVar14 + 1;
                    /* try { // try from 00edcdc4 to 00edcdd3 has its CatchHandler @ 00edcf04 */
  compileExpr(this,pAVar5,bVar13,true);
  *(undefined4 *)(this + 0x178) = uVar4;
LAB_00edcdd8:
  uVar6 = BytecodeBuilder::emitLabel();
  BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,0x49,'9',bVar13,'\0');
  compileExpr(this,*(AstExpr **)(param_1 + 0x20),param_6,true);
  if (param_6 + 1 != uVar14) {
    BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,6,(uchar)(param_6 + 1),bVar13,'\0');
  }
  BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,0x3f,param_6 + '\x02','\0','\0');
  uVar7 = BytecodeBuilder::emitLabel();
  uVar6 = BytecodeBuilder::patchSkipC(*(BytecodeBuilder **)this,uVar6,uVar7);
  if ((uVar6 & 1) != 0) {
    uVar2 = '\0';
    if (!param_5) {
      uVar2 = param_3 + '\x01';
    }
    BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,0x15,param_6,'\0',uVar2);
    if ((!param_4) && (param_3 != '\0')) {
      uVar6 = 0;
      do {
        BytecodeBuilder::emitABC
                  (*(BytecodeBuilder **)this,6,(char)uVar6 + param_2,(char)uVar6 + param_6,'\0');
        uVar6 = uVar6 + 1;
      } while (param_3 != uVar6);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  CompileError::raise((Location *)(*(long *)(param_1 + 0x20) + 0xc),
                      "Exceeded jump distance limit; simplify the code to compile");
}


