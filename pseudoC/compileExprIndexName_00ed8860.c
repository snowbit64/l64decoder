// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileExprIndexName
// Entry Point: 00ed8860
// Size: 1092 bytes
// Signature: undefined __thiscall compileExprIndexName(Compiler * this, AstExprIndexName * param_1, uchar param_2)


/* WARNING: Type propagation algorithm not settling */
/* Luau::Compiler::compileExprIndexName(Luau::AstExprIndexName*, unsigned char) */

void __thiscall
Luau::Compiler::compileExprIndexName(Compiler *this,AstExprIndexName *param_1,uchar param_2)

{
  long lVar1;
  AstExprIndexName *pAVar2;
  uchar uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  size_t sVar8;
  undefined8 uVar9;
  AstExpr *pAVar10;
  AstExprIndexName *pAVar11;
  char *pcVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  AstExpr *pAVar16;
  ulong uVar17;
  char *pcVar18;
  ulong uVar19;
  ulong uVar20;
  BytecodeBuilder *this_00;
  char *pcVar21;
  BytecodeBuilder *pBVar22;
  AstExprIndexName *pAVar23;
  
  if (0 < *(int *)(this + 0xc)) {
    BytecodeBuilder::setDebugLine(*(BytecodeBuilder **)this,*(int *)(param_1 + 0xc) + 1);
  }
  pAVar11 = *(AstExprIndexName **)(param_1 + 0x20);
  if (*(int *)(pAVar11 + 8) == AstRtti<Luau::AstExprIndexName>::value &&
      pAVar11 != (AstExprIndexName *)0x0) {
    if (*(int *)(*(AstExprIndexName **)(pAVar11 + 0x20) + 8) == AstRtti<Luau::AstExprGlobal>::value)
    {
      iVar6 = *(int *)(this + 8);
      pAVar2 = pAVar11;
      pAVar11 = *(AstExprIndexName **)(pAVar11 + 0x20);
      pAVar23 = param_1;
      goto joined_r0x00ed8920;
    }
  }
  else if ((*(int *)(pAVar11 + 8) == AstRtti<Luau::AstExprGlobal>::value) &&
          (pAVar11 != (AstExprIndexName *)0x0)) {
    pAVar23 = (AstExprIndexName *)0x0;
    iVar6 = *(int *)(this + 8);
    pAVar2 = param_1;
joined_r0x00ed8920:
    if (0 < iVar6) {
      pcVar21 = *(char **)(pAVar11 + 0x20);
      if ((*(long *)(this + 0x90) != 0) && (pcVar12 = *(char **)(this + 0x98), pcVar12 != pcVar21))
      {
        uVar13 = 0;
        uVar14 = (ulong)pcVar21 >> 4 ^ (ulong)pcVar21 >> 9;
        uVar15 = *(long *)(this + 0x88) - 1;
        do {
          uVar14 = uVar14 & uVar15;
          pcVar18 = *(char **)(*(long *)(this + 0x80) + uVar14 * 0x10);
          if (pcVar18 == pcVar21) {
            if (*(int *)(*(long *)(this + 0x80) + uVar14 * 0x10 + 8) != 0) goto LAB_00ed8ac4;
            break;
          }
          uVar13 = uVar13 + 1;
          uVar14 = uVar13 + uVar14;
        } while (pcVar18 != pcVar12 && uVar13 < uVar15 || pcVar18 != pcVar12 && uVar13 == uVar15);
      }
      uVar9 = *(undefined8 *)this;
      sVar8 = strlen(pcVar21);
      uVar4 = BytecodeBuilder::addConstantString(uVar9,pcVar21,sVar8);
      pcVar21 = *(char **)(pAVar2 + 0x28);
      uVar9 = *(undefined8 *)this;
      sVar8 = strlen(pcVar21);
      uVar5 = BytecodeBuilder::addConstantString(uVar9,pcVar21,sVar8);
      if (pAVar23 == (AstExprIndexName *)0x0) {
        iVar6 = -1;
      }
      else {
        pcVar21 = *(char **)(pAVar23 + 0x28);
        uVar9 = *(undefined8 *)this;
        sVar8 = strlen(pcVar21);
        iVar6 = BytecodeBuilder::addConstantString(uVar9,pcVar21,sVar8);
      }
      if (((int)(uVar5 | uVar4) < 0) || (pAVar23 != (AstExprIndexName *)0x0 && iVar6 < 0)) {
                    /* WARNING: Subroutine does not return */
        CompileError::raise((Location *)(param_1 + 0xc),
                            "Exceeded constant limit; simplify the code to compile");
      }
      if ((((int)uVar4 < 0x400) && ((int)uVar5 < 0x400)) && (iVar6 < 0x400)) {
        if (pAVar23 == (AstExprIndexName *)0x0) {
          uVar4 = BytecodeBuilder::getImportId(uVar4,uVar5);
          uVar13 = BytecodeBuilder::addImport(*(BytecodeBuilder **)this,uVar4);
        }
        else {
          uVar4 = BytecodeBuilder::getImportId(uVar4,uVar5,iVar6);
          uVar13 = BytecodeBuilder::addImport(*(BytecodeBuilder **)this,uVar4);
        }
        if ((uVar13 >> 0xf & 0x1ffff) == 0) {
          BytecodeBuilder::emitAD(*(BytecodeBuilder **)this,0xc,param_2,(short)uVar13);
          BytecodeBuilder::emitAux(*(BytecodeBuilder **)this,uVar4);
          return;
        }
      }
    }
  }
LAB_00ed8ac4:
  uVar4 = *(uint *)(this + 0x178);
  pAVar10 = *(AstExpr **)(param_1 + 0x20);
  iVar6 = *(int *)(pAVar10 + 8);
  pAVar16 = pAVar10;
  while ((pAVar16 == (AstExpr *)0x0 || (iVar6 != AstRtti<Luau::AstExprLocal>::value))) {
    if ((iVar6 != AstRtti<Luau::AstExprGroup>::value) &&
       (iVar6 != AstRtti<Luau::AstExprTypeAssertion>::value)) goto LAB_00ed8b80;
    pAVar16 = *(AstExpr **)(pAVar16 + 0x20);
    iVar6 = *(int *)(pAVar16 + 8);
  }
  if (*(long *)(this + 0x68) != 0) {
    uVar13 = *(ulong *)(pAVar16 + 0x20);
    uVar14 = *(ulong *)(this + 0x70);
    if (uVar13 != uVar14) {
      uVar15 = 0;
      uVar19 = uVar13 >> 4 ^ uVar13 >> 9;
      uVar17 = *(long *)(this + 0x60) - 1;
      goto LAB_00ed8b58;
    }
  }
LAB_00ed8b80:
  uVar5 = uVar4 + 1;
  if (0xff < uVar5) {
                    /* try { // try from 00ed8c80 to 00ed8c93 has its CatchHandler @ 00ed8cac */
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(pAVar10 + 0xc),
                        "Out of registers when trying to allocate %d registers: exceeded limit %d",1
                        ,0xff);
  }
  *(uint *)(this + 0x178) = uVar5;
  if (uVar5 <= *(uint *)(this + 0x17c)) {
    uVar5 = *(uint *)(this + 0x17c);
  }
  *(uint *)(this + 0x17c) = uVar5;
                    /* try { // try from 00ed8ba0 to 00ed8bcf has its CatchHandler @ 00ed8cac */
  compileExpr(this,pAVar10,(uchar)uVar4,true);
  iVar6 = *(int *)(this + 0xc);
  uVar5 = uVar4;
joined_r0x00ed8c64:
  if (0 < iVar6) {
    BytecodeBuilder::setDebugLine(*(BytecodeBuilder **)this,*(int *)(param_1 + 0x30) + 1);
  }
  pBVar22 = *(BytecodeBuilder **)(param_1 + 0x28);
                    /* try { // try from 00ed8bd4 to 00ed8bdf has its CatchHandler @ 00ed8ca4 */
  uVar9 = __strlen_chk(pBVar22,0xffffffffffffffff);
                    /* try { // try from 00ed8be8 to 00ed8c7b has its CatchHandler @ 00ed8cb4 */
  uVar7 = BytecodeBuilder::addConstantString(*(undefined8 *)this,pBVar22,uVar9);
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(param_1 + 0xc),
                        "Exceeded constant limit; simplify the code to compile");
  }
  this_00 = *(BytecodeBuilder **)this;
  uVar3 = BytecodeBuilder::getStringHash(pBVar22,uVar9);
  BytecodeBuilder::emitABC(this_00,0xf,param_2,(uchar)uVar5,uVar3);
  BytecodeBuilder::emitAux(*(BytecodeBuilder **)this,uVar7);
  *(uint *)(this + 0x178) = uVar4;
  return;
  while( true ) {
    uVar15 = uVar15 + 1;
    uVar19 = uVar15 + uVar19;
    if ((uVar20 == uVar14 || uVar17 <= uVar15) && (uVar20 == uVar14 || uVar15 != uVar17)) break;
LAB_00ed8b58:
    uVar19 = uVar19 & uVar17;
    uVar20 = *(ulong *)(*(long *)(this + 0x58) + uVar19 * 0x10);
    if (uVar20 == uVar13) {
      lVar1 = *(long *)(this + 0x58) + uVar19 * 0x10;
      if (*(char *)(lVar1 + 9) != '\0') {
        iVar6 = *(int *)(this + 0xc);
        uVar5 = (uint)*(byte *)(lVar1 + 8);
        goto joined_r0x00ed8c64;
      }
      break;
    }
  }
  goto LAB_00ed8b80;
}


