// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: incrementRecursionCounter
// Entry Point: 00eeaeb0
// Size: 68 bytes
// Signature: undefined __thiscall incrementRecursionCounter(Parser * this, char * param_1)


/* Luau::Parser::incrementRecursionCounter(char const*) */

Parser * __thiscall Luau::Parser::incrementRecursionCounter(Parser *this,char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  Parser PVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  Parser *pPVar11;
  Parser *pPVar12;
  AstExprFunction *pAVar13;
  AstStatFunction *this_00;
  AstExpr *pAVar14;
  AstStatExpr *this_01;
  char *__s1;
  Op OVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 uStack_b8;
  uint uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  bool abStack_a4 [4];
  undefined auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  AstExpr *pAStack_80;
  long lStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  
  uVar9 = FInt::LuauRecursionLimit;
  iVar6 = *(int *)(this + 0xbc);
  *(uint *)(this + 0xbc) = iVar6 + 1U;
  if (iVar6 + 1U <= uVar9) {
    return this;
  }
  pPVar11 = (Parser *)
            ParseError::raise((Location *)(this + 0x2c),
                              "Exceeded allowed recursion depth; simplify your %s to make the code compile"
                              ,param_1);
  pcStack_68 = parseStat;
  lVar8 = tpidr_el0;
  lStack_78 = *(long *)(lVar8 + 0x28);
  switch(*(undefined4 *)(pPVar11 + 0x28)) {
  case 0x120:
    puStack_70 = &stack0xfffffffffffffff0;
    pPVar11 = (Parser *)parseBreak();
    break;
  case 0x121:
    uVar16 = *(undefined8 *)(pPVar11 + 0x2c);
    puStack_70 = &stack0xfffffffffffffff0;
    nextLexeme();
    lVar4 = *(long *)(pPVar11 + 0x130);
    lVar5 = *(long *)(pPVar11 + 0x138);
    pPVar12 = (Parser *)parseBlockNoScope();
    restoreLocals(pPVar11,(uint)((ulong)(lVar5 - lVar4) >> 3));
    *(undefined8 *)(pPVar12 + 0xc) = uVar16;
    uStack_b4 = (uint)uVar16;
    iStack_b0 = (int)((ulong)uVar16 >> 0x20);
    uStack_b8 = 0x121;
    if (*(int *)(pPVar11 + 0x28) == 0x124) {
      if (((*(uint *)(pPVar11 + 0x2c) != uStack_b4) && (*(int *)(pPVar11 + 0x30) != iStack_b0)) &&
         (*(uint *)(pPVar11 + 0xe4) < uStack_b4)) {
        *(ulong *)(pPVar11 + 0xe0) = CONCAT44(uStack_b4,0x121);
        *(int *)(pPVar11 + 0xe8) = iStack_b0;
      }
LAB_00eeb178:
      nextLexeme();
    }
    else {
      expectMatchEndAndConsumeFail(pPVar11,0x124,(MatchLexeme *)&uStack_b8);
      Lexer::lookahead();
      if (auStack_a0._0_4_ == 0x124) {
        nextLexeme();
        goto LAB_00eeb178;
      }
    }
    if (*(long *)(lVar8 + 0x28) == lStack_78) {
      return pPVar12;
    }
    goto LAB_00eeb37c;
  default:
    iVar6 = *(int *)(pPVar11 + 0x2c);
    iVar2 = *(int *)(pPVar11 + 0x30);
    iVar1 = *(int *)(pPVar11 + 0x34);
    iVar3 = *(int *)(pPVar11 + 0x38);
    puStack_70 = &stack0xfffffffffffffff0;
    pAVar14 = (AstExpr *)parsePrimaryExpr(pPVar11,true);
    if (*(int *)(pAVar14 + 8) == AstRtti<Luau::AstExprCall>::value) {
      this_01 = (AstStatExpr *)Allocator::allocate(*(Allocator **)(pPVar11 + 0x80),0x28);
      AstStatExpr::AstStatExpr(this_01,(Location *)(pAVar14 + 0xc),pAVar14);
      if (*(long *)(lVar8 + 0x28) == lStack_78) {
        return (Parser *)this_01;
      }
      goto LAB_00eeb37c;
    }
    iVar10 = *(int *)(pPVar11 + 0x28);
    if (iVar10 - 0x10dU < 7) {
      OVar15 = 0;
      switch(iVar10) {
      case 0x10e:
        OVar15 = 1;
        break;
      case 0x10f:
        OVar15 = 2;
        break;
      case 0x110:
        OVar15 = 3;
        break;
      case 0x111:
        OVar15 = 4;
        break;
      case 0x112:
        OVar15 = 5;
        break;
      case 0x113:
        OVar15 = 6;
      }
      pPVar11 = (Parser *)parseCompoundAssignment(pPVar11,pAVar14,OVar15);
    }
    else if ((iVar10 == 0x3d) || (iVar10 == 0x2c)) {
      pPVar11 = (Parser *)parseAssignment(pPVar11,pAVar14);
    }
    else {
      __s1 = (char *)getIdentifier(pAVar14);
      PVar7 = *pPVar11;
      if (PVar7 == (Parser)0x0) {
LAB_00eeb2b0:
        if (((pPVar11[1] == (Parser)0x0) || (__s1 == (char *)0x0)) ||
           (iVar10 = strcmp(__s1,"continue"), iVar10 != 0)) {
          if (((PVar7 == (Parser)0x0) || (pPVar11[2] == (Parser)0x0)) ||
             ((__s1 == (char *)0x0 || (iVar10 = strcmp(__s1,"declare"), iVar10 != 0))))
          goto LAB_00eeb2f4;
          pPVar11 = (Parser *)parseDeclaration(pPVar11,(Location *)(pAVar14 + 0xc));
        }
        else {
          pPVar11 = (Parser *)parseContinue(pPVar11,(Location *)(pAVar14 + 0xc));
        }
      }
      else {
        if (__s1 == (char *)0x0) {
LAB_00eeb2f4:
          if ((((iVar2 == *(int *)(pPVar11 + 0x30)) && (iVar6 == *(int *)(pPVar11 + 0x2c))) &&
              (iVar3 == *(int *)(pPVar11 + 0x38))) && (iVar1 == *(int *)(pPVar11 + 0x34))) {
            nextLexeme();
          }
          pAStack_80 = pAVar14;
          auStack_a0 = copy<Luau::AstExpr*>(pPVar11,&pAStack_80,1);
          uStack_b8 = 0;
          uStack_b4 = 0;
          iStack_b0 = 0;
          uStack_ac = 0;
          pPVar11 = (Parser *)
                    reportStatError((Location *)pPVar11,(AstArray *)(pAVar14 + 0xc),
                                    (AstArray *)auStack_a0,(char *)&uStack_b8,
                                    "Incomplete statement: expected assignment or a function call");
          if (*(long *)(lVar8 + 0x28) == lStack_78) {
            return pPVar11;
          }
          goto LAB_00eeb37c;
        }
        iVar10 = strcmp(__s1,"type");
        if (iVar10 == 0) {
          pPVar11 = (Parser *)parseTypeAlias(pPVar11,(Location *)(pAVar14 + 0xc),false);
        }
        else {
          iVar10 = strcmp(__s1,"export");
          if ((((iVar10 != 0) || (*(int *)(pPVar11 + 0x28) != 0x117)) ||
              (*(char **)(pPVar11 + 0x40) == (char *)0x0)) ||
             (iVar10 = strcmp(*(char **)(pPVar11 + 0x40),"type"), iVar10 != 0)) goto LAB_00eeb2b0;
          nextLexeme();
          pPVar11 = (Parser *)parseTypeAlias(pPVar11,(Location *)(pAVar14 + 0xc),true);
        }
      }
    }
    break;
  case 0x126:
    puStack_70 = &stack0xfffffffffffffff0;
    pPVar11 = (Parser *)parseFor();
    break;
  case 0x127:
    auStack_a0._8_8_ = *(undefined8 *)(pPVar11 + 0x30);
    auStack_a0._0_8_ = *(undefined8 *)(pPVar11 + 0x28);
    uStack_88 = *(undefined8 *)(pPVar11 + 0x40);
    uStack_90 = *(undefined8 *)(pPVar11 + 0x38);
    uVar16 = *(undefined8 *)(pPVar11 + 0x2c);
    uVar17 = *(undefined8 *)(pPVar11 + 0x34);
    puStack_70 = &stack0xfffffffffffffff0;
    nextLexeme();
    abStack_a4[0] = false;
    pAStack_80 = (AstExpr *)0x0;
    pAVar14 = (AstExpr *)parseFunctionName(pPVar11,uVar16,uVar17,abStack_a4,&pAStack_80);
    *(int *)(*(long *)(pPVar11 + 0x160) + 0x490) = *(int *)(*(long *)(pPVar11 + 0x160) + 0x490) + 1;
    pAVar13 = (AstExprFunction *)
              parseFunctionBody(pPVar11,abStack_a4[0],(Lexeme *)auStack_a0,(AstName *)&pAStack_80,
                                (Name *)0x0);
    *(int *)(*(long *)(pPVar11 + 0x160) + 0x490) = *(int *)(*(long *)(pPVar11 + 0x160) + 0x490) + -1
    ;
    uStack_b8 = (undefined4)uVar16;
    uStack_b4 = (uint)((ulong)uVar16 >> 0x20);
    iStack_b0 = (int)*(undefined8 *)(pAVar13 + 0x14);
    uStack_ac = (undefined4)((ulong)*(undefined8 *)(pAVar13 + 0x14) >> 0x20);
    this_00 = (AstStatFunction *)Allocator::allocate(*(Allocator **)(pPVar11 + 0x80),0x30);
    AstStatFunction::AstStatFunction(this_00,(Location *)&uStack_b8,pAVar14,pAVar13);
    if (*(long *)(lVar8 + 0x28) == lStack_78) {
      return (Parser *)this_00;
    }
    goto LAB_00eeb37c;
  case 0x128:
    puStack_70 = &stack0xfffffffffffffff0;
    pPVar11 = (Parser *)parseIf();
    break;
  case 0x12a:
    puStack_70 = &stack0xfffffffffffffff0;
    pPVar11 = (Parser *)parseLocal();
    break;
  case 0x12e:
    puStack_70 = &stack0xfffffffffffffff0;
    pPVar11 = (Parser *)parseRepeat();
    break;
  case 0x12f:
    puStack_70 = &stack0xfffffffffffffff0;
    pPVar11 = (Parser *)parseReturn();
    break;
  case 0x133:
    puStack_70 = &stack0xfffffffffffffff0;
    pPVar11 = (Parser *)parseWhile();
  }
  if (*(long *)(lVar8 + 0x28) == lStack_78) {
    return pPVar11;
  }
LAB_00eeb37c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


