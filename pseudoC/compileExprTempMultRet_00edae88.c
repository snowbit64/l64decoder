// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileExprTempMultRet
// Entry Point: 00edae88
// Size: 372 bytes
// Signature: undefined __thiscall compileExprTempMultRet(Compiler * this, AstExpr * param_1, uchar param_2)


/* Luau::Compiler::compileExprTempMultRet(Luau::AstExpr*, unsigned char) */

bool __thiscall
Luau::Compiler::compileExprTempMultRet(Compiler *this,AstExpr *param_1,uchar param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  ulong uVar4;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((param_1 == (AstExpr *)0x0) || (iVar1 != AstRtti<Luau::AstExprCall>::value)) {
    bVar3 = iVar1 != AstRtti<Luau::AstExprVarargs>::value;
    if (param_1 == (AstExpr *)0x0 || bVar3) {
      compileExpr(this,param_1,param_2,true);
      return param_1 != (AstExpr *)0x0 && !bVar3;
    }
    uVar2 = *(undefined4 *)(this + 0x178);
    *(uint *)(this + 0x178) = (uint)param_2;
    if (0 < *(int *)(this + 0xc)) {
                    /* try { // try from 00edaf98 to 00edafb3 has its CatchHandler @ 00edaffc */
      BytecodeBuilder::setDebugLine(*(BytecodeBuilder **)this,*(int *)(param_1 + 0xc) + 1);
    }
    BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,0x3f,param_2,'\0','\0');
    *(undefined4 *)(this + 0x178) = uVar2;
    return true;
  }
  if ((1 < *(int *)(this + 8)) && (uVar4 = isExprMultRet(this,param_1), (uVar4 & 1) == 0)) {
    compileExpr(this,param_1,param_2,true);
    return false;
  }
  uVar2 = *(undefined4 *)(this + 0x178);
  *(uint *)(this + 0x178) = (uint)param_2;
                    /* try { // try from 00edaeec to 00edaf07 has its CatchHandler @ 00edb004 */
  compileExprCall(this,(AstExprCall *)param_1,param_2,'\0',true,true);
  *(undefined4 *)(this + 0x178) = uVar2;
  return true;
}


