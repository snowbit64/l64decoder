// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileExprUnary
// Entry Point: 00ed9bcc
// Size: 364 bytes
// Signature: undefined __thiscall compileExprUnary(Compiler * this, AstExprUnary * param_1, uchar param_2)


/* Luau::Compiler::compileExprUnary(Luau::AstExprUnary*, unsigned char) */

void __thiscall Luau::Compiler::compileExprUnary(Compiler *this,AstExprUnary *param_1,uchar param_2)

{
  uint uVar1;
  LuauOpcode LVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  AstExpr *pAVar6;
  uchar uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  AstExpr *pAVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  pAVar6 = *(AstExpr **)(param_1 + 0x20);
  iVar4 = *(int *)(this + 0x178);
  iVar5 = *(int *)(pAVar6 + 8);
  pAVar11 = pAVar6;
  while ((pAVar11 == (AstExpr *)0x0 || (iVar5 != AstRtti<Luau::AstExprLocal>::value))) {
    if ((iVar5 != AstRtti<Luau::AstExprGroup>::value) &&
       (iVar5 != AstRtti<Luau::AstExprTypeAssertion>::value)) goto LAB_00ed9ca4;
    pAVar11 = *(AstExpr **)(pAVar11 + 0x20);
    iVar5 = *(int *)(pAVar11 + 8);
  }
  if (*(long *)(this + 0x68) != 0) {
    uVar8 = *(ulong *)(pAVar11 + 0x20);
    uVar9 = *(ulong *)(this + 0x70);
    if (uVar8 != uVar9) {
      uVar10 = 0;
      uVar13 = uVar8 >> 4 ^ uVar8 >> 9;
      uVar12 = *(long *)(this + 0x60) - 1;
      goto LAB_00ed9c7c;
    }
  }
  goto LAB_00ed9ca4;
  while( true ) {
    uVar10 = uVar10 + 1;
    uVar13 = uVar10 + uVar13;
    if ((uVar14 == uVar9 || uVar12 <= uVar10) && (uVar14 == uVar9 || uVar10 != uVar12)) break;
LAB_00ed9c7c:
    uVar13 = uVar13 & uVar12;
    uVar14 = *(ulong *)(*(long *)(this + 0x58) + uVar13 * 0x10);
    if (uVar14 == uVar8) {
      lVar3 = *(long *)(this + 0x58) + uVar13 * 0x10;
      if (*(char *)(lVar3 + 9) != '\0') {
        uVar7 = *(uchar *)(lVar3 + 8);
        goto LAB_00ed9cd8;
      }
      break;
    }
  }
LAB_00ed9ca4:
  uVar1 = iVar4 + 1;
  if (0xff < uVar1) {
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(pAVar6 + 0xc),
                        "Out of registers when trying to allocate %d registers: exceeded limit %d",1
                        ,0xff);
  }
  *(uint *)(this + 0x178) = uVar1;
  if (uVar1 <= *(uint *)(this + 0x17c)) {
    uVar1 = *(uint *)(this + 0x17c);
  }
  *(uint *)(this + 0x17c) = uVar1;
  uVar7 = (uchar)iVar4;
                    /* try { // try from 00ed9cc4 to 00ed9d37 has its CatchHandler @ 00ed9d38 */
  compileExpr(this,pAVar6,uVar7,true);
LAB_00ed9cd8:
  LVar2 = *(uint *)(param_1 + 0x1c) + 0x32;
  if (2 < *(uint *)(param_1 + 0x1c)) {
    LVar2 = 0;
  }
  BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,LVar2,param_2,uVar7,'\0');
  *(int *)(this + 0x178) = iVar4;
  return;
}


