// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseStat
// Entry Point: 00eeaef4
// Size: 1244 bytes
// Signature: undefined parseStat(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::parseStat() */

AstStatFunction * Luau::Parser::parseStat(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  Parser PVar7;
  long lVar8;
  int iVar9;
  Parser *in_x0;
  AstExprFunction *pAVar10;
  AstExpr *pAVar11;
  AstStatExpr *this;
  AstStatFunction *pAVar12;
  char *__s1;
  Op OVar13;
  undefined8 uVar14;
  undefined4 local_a8;
  uint uStack_a4;
  int local_a0;
  undefined4 uStack_9c;
  undefined local_94;
  undefined local_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  AstExpr *local_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  switch(*(undefined4 *)(in_x0 + 0x28)) {
  case 0x120:
    pAVar12 = (AstStatFunction *)parseBreak();
    break;
  case 0x121:
    uVar14 = *(undefined8 *)(in_x0 + 0x2c);
    nextLexeme();
    lVar5 = *(long *)(in_x0 + 0x130);
    lVar6 = *(long *)(in_x0 + 0x138);
    pAVar12 = (AstStatFunction *)parseBlockNoScope();
    restoreLocals(in_x0,(uint)((ulong)(lVar6 - lVar5) >> 3));
    *(undefined8 *)(pAVar12 + 0xc) = uVar14;
    uStack_a4 = (uint)uVar14;
    local_a0 = (int)((ulong)uVar14 >> 0x20);
    local_a8 = 0x121;
    if (*(int *)(in_x0 + 0x28) == 0x124) {
      if (((*(uint *)(in_x0 + 0x2c) != uStack_a4) && (*(int *)(in_x0 + 0x30) != local_a0)) &&
         (*(uint *)(in_x0 + 0xe4) < uStack_a4)) {
        *(ulong *)(in_x0 + 0xe0) = CONCAT44(uStack_a4,0x121);
        *(int *)(in_x0 + 0xe8) = local_a0;
      }
LAB_00eeb178:
      nextLexeme();
    }
    else {
      expectMatchEndAndConsumeFail(in_x0,0x124,(MatchLexeme *)&local_a8);
      Lexer::lookahead();
      if (local_90._0_4_ == 0x124) {
        nextLexeme();
        goto LAB_00eeb178;
      }
    }
    if (*(long *)(lVar8 + 0x28) == local_68) {
      return pAVar12;
    }
    goto LAB_00eeb37c;
  default:
    iVar1 = *(int *)(in_x0 + 0x2c);
    iVar3 = *(int *)(in_x0 + 0x30);
    iVar2 = *(int *)(in_x0 + 0x34);
    iVar4 = *(int *)(in_x0 + 0x38);
    pAVar11 = (AstExpr *)parsePrimaryExpr(in_x0,true);
    if (*(int *)(pAVar11 + 8) == AstRtti<Luau::AstExprCall>::value) {
      this = (AstStatExpr *)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),0x28);
      AstStatExpr::AstStatExpr(this,(Location *)(pAVar11 + 0xc),pAVar11);
      if (*(long *)(lVar8 + 0x28) == local_68) {
        return (AstStatFunction *)this;
      }
      goto LAB_00eeb37c;
    }
    iVar9 = *(int *)(in_x0 + 0x28);
    if (iVar9 - 0x10dU < 7) {
      OVar13 = 0;
      switch(iVar9) {
      case 0x10e:
        OVar13 = 1;
        break;
      case 0x10f:
        OVar13 = 2;
        break;
      case 0x110:
        OVar13 = 3;
        break;
      case 0x111:
        OVar13 = 4;
        break;
      case 0x112:
        OVar13 = 5;
        break;
      case 0x113:
        OVar13 = 6;
      }
      pAVar12 = (AstStatFunction *)parseCompoundAssignment(in_x0,pAVar11,OVar13);
    }
    else if ((iVar9 == 0x3d) || (iVar9 == 0x2c)) {
      pAVar12 = (AstStatFunction *)parseAssignment(in_x0,pAVar11);
    }
    else {
      __s1 = (char *)getIdentifier(pAVar11);
      PVar7 = *in_x0;
      if (PVar7 == (Parser)0x0) {
LAB_00eeb2b0:
        if (((in_x0[1] == (Parser)0x0) || (__s1 == (char *)0x0)) ||
           (iVar9 = strcmp(__s1,"continue"), iVar9 != 0)) {
          if (((PVar7 == (Parser)0x0) || (in_x0[2] == (Parser)0x0)) ||
             ((__s1 == (char *)0x0 || (iVar9 = strcmp(__s1,"declare"), iVar9 != 0))))
          goto LAB_00eeb2f4;
          pAVar12 = (AstStatFunction *)parseDeclaration(in_x0,(Location *)(pAVar11 + 0xc));
        }
        else {
          pAVar12 = (AstStatFunction *)parseContinue(in_x0,(Location *)(pAVar11 + 0xc));
        }
      }
      else {
        if (__s1 == (char *)0x0) {
LAB_00eeb2f4:
          if ((((iVar3 == *(int *)(in_x0 + 0x30)) && (iVar1 == *(int *)(in_x0 + 0x2c))) &&
              (iVar4 == *(int *)(in_x0 + 0x38))) && (iVar2 == *(int *)(in_x0 + 0x34))) {
            nextLexeme();
          }
          local_70 = pAVar11;
          local_90 = copy<Luau::AstExpr*>();
          local_a8 = 0;
          uStack_a4 = 0;
          local_a0 = 0;
          uStack_9c = 0;
          pAVar12 = (AstStatFunction *)
                    reportStatError((Location *)in_x0,(AstArray *)(pAVar11 + 0xc),
                                    (AstArray *)local_90,(char *)&local_a8,
                                    "Incomplete statement: expected assignment or a function call");
          if (*(long *)(lVar8 + 0x28) == local_68) {
            return pAVar12;
          }
          goto LAB_00eeb37c;
        }
        iVar9 = strcmp(__s1,"type");
        if (iVar9 == 0) {
          pAVar12 = (AstStatFunction *)parseTypeAlias(in_x0,(Location *)(pAVar11 + 0xc),false);
        }
        else {
          iVar9 = strcmp(__s1,"export");
          if ((((iVar9 != 0) || (*(int *)(in_x0 + 0x28) != 0x117)) ||
              (*(char **)(in_x0 + 0x40) == (char *)0x0)) ||
             (iVar9 = strcmp(*(char **)(in_x0 + 0x40),"type"), iVar9 != 0)) goto LAB_00eeb2b0;
          nextLexeme();
          pAVar12 = (AstStatFunction *)parseTypeAlias(in_x0,(Location *)(pAVar11 + 0xc),true);
        }
      }
    }
    break;
  case 0x126:
    pAVar12 = (AstStatFunction *)parseFor();
    break;
  case 0x127:
    local_90._8_8_ = *(undefined8 *)(in_x0 + 0x30);
    local_90._0_8_ = *(undefined8 *)(in_x0 + 0x28);
    uStack_78 = *(undefined8 *)(in_x0 + 0x40);
    uStack_80 = *(undefined8 *)(in_x0 + 0x38);
    uVar14 = *(undefined8 *)(in_x0 + 0x2c);
    nextLexeme();
    local_94 = false;
    local_70 = (AstExpr *)0x0;
    pAVar11 = (AstExpr *)parseFunctionName();
    *(int *)(*(long *)(in_x0 + 0x160) + 0x490) = *(int *)(*(long *)(in_x0 + 0x160) + 0x490) + 1;
    pAVar10 = (AstExprFunction *)
              parseFunctionBody(in_x0,(bool)local_94,(Lexeme *)local_90,(AstName *)&local_70,
                                (Name *)0x0);
    *(int *)(*(long *)(in_x0 + 0x160) + 0x490) = *(int *)(*(long *)(in_x0 + 0x160) + 0x490) + -1;
    local_a8 = (undefined4)uVar14;
    uStack_a4 = (uint)((ulong)uVar14 >> 0x20);
    local_a0 = (int)*(undefined8 *)(pAVar10 + 0x14);
    uStack_9c = (undefined4)((ulong)*(undefined8 *)(pAVar10 + 0x14) >> 0x20);
    pAVar12 = (AstStatFunction *)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),0x30);
    AstStatFunction::AstStatFunction(pAVar12,(Location *)&local_a8,pAVar11,pAVar10);
    if (*(long *)(lVar8 + 0x28) == local_68) {
      return pAVar12;
    }
    goto LAB_00eeb37c;
  case 0x128:
    pAVar12 = (AstStatFunction *)parseIf();
    break;
  case 0x12a:
    pAVar12 = (AstStatFunction *)parseLocal();
    break;
  case 0x12e:
    pAVar12 = (AstStatFunction *)parseRepeat();
    break;
  case 0x12f:
    pAVar12 = (AstStatFunction *)parseReturn();
    break;
  case 0x133:
    pAVar12 = (AstStatFunction *)parseWhile();
  }
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return pAVar12;
  }
LAB_00eeb37c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


