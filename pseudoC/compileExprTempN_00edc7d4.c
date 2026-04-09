// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileExprTempN
// Entry Point: 00edc7d4
// Size: 268 bytes
// Signature: undefined __thiscall compileExprTempN(Compiler * this, AstExpr * param_1, uchar param_2, uchar param_3, bool param_4)


/* Luau::Compiler::compileExprTempN(Luau::AstExpr*, unsigned char, unsigned char, bool) */

void __thiscall
Luau::Compiler::compileExprTempN
          (Compiler *this,AstExpr *param_1,uchar param_2,uchar param_3,bool param_4)

{
  ulong uVar1;
  
  if ((param_1 != (AstExpr *)0x0) && (*(int *)(param_1 + 8) == AstRtti<Luau::AstExprCall>::value)) {
    compileExprCall(this,(AstExprCall *)param_1,param_2,param_3,param_4,false);
    return;
  }
  if ((param_1 != (AstExpr *)0x0) && (*(int *)(param_1 + 8) == AstRtti<Luau::AstExprVarargs>::value)
     ) {
    if (0 < *(int *)(this + 0xc)) {
      BytecodeBuilder::setDebugLine(*(BytecodeBuilder **)this,*(int *)(param_1 + 0xc) + 1);
    }
    BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,0x3f,param_2,param_3 + '\x01','\0');
    return;
  }
  compileExpr(this,param_1,param_2,true);
  if (1 < param_3) {
    uVar1 = 1;
    do {
      BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,2,(char)uVar1 + param_2,'\0','\0');
      uVar1 = uVar1 + 1;
    } while (param_3 != uVar1);
  }
  return;
}


