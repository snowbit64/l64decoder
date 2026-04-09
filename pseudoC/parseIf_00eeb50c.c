// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseIf
// Entry Point: 00eeb50c
// Size: 756 bytes
// Signature: undefined parseIf(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::parseIf() */

AstStatIf * Luau::Parser::parseIf(void)

{
  uint uVar1;
  AstStat *pAVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  Parser *in_x0;
  AstExpr *pAVar9;
  AstStatBlock *pAVar10;
  AstStat *pAVar11;
  AstStatIf *this;
  AstStat AVar12;
  ulong *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  int local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  ulong local_c0;
  undefined8 uStack_b8;
  ulong local_a0;
  undefined8 uStack_98;
  undefined local_90;
  ulong local_80;
  undefined8 uStack_78;
  undefined local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  puVar13 = (ulong *)(in_x0 + 0x2c);
  uVar15 = *puVar13;
  nextLexeme();
  pAVar9 = (AstExpr *)parseExpr(in_x0,0);
  iVar5 = *(int *)(in_x0 + 0x28);
  uVar14 = *(undefined8 *)(in_x0 + 0x34);
  uVar16 = *puVar13;
  local_80 = local_80 & 0xffffffffffffff00;
  local_70 = 0;
  if (iVar5 == 0x130) {
    nextLexeme();
    local_70 = 1;
    local_80 = uVar16;
    uStack_78 = uVar14;
  }
  else {
    expectAndConsumeFail(in_x0,0x130,"if statement");
    Lexer::lookahead();
    if ((int)local_c0 == 0x130) {
      nextLexeme();
      nextLexeme();
    }
  }
  lVar3 = *(long *)(in_x0 + 0x130);
  lVar4 = *(long *)(in_x0 + 0x138);
  pAVar10 = (AstStatBlock *)parseBlockNoScope();
  restoreLocals(in_x0,(uint)((ulong)(lVar4 - lVar3) >> 3));
  uVar8 = FInt::LuauRecursionLimit;
  iVar6 = *(int *)(in_x0 + 0x28);
  local_a0 = local_a0 & 0xffffffffffffff00;
  local_90 = 0;
  if (iVar6 == 0x122) {
    uStack_98 = *(undefined8 *)(in_x0 + 0x34);
    local_a0 = *puVar13;
    uVar16 = *(ulong *)(in_x0 + 0x2c);
    uVar14 = *(undefined8 *)(in_x0 + 0x34);
    local_90 = 1;
    nextLexeme();
    lVar3 = *(long *)(in_x0 + 0x130);
    lVar4 = *(long *)(in_x0 + 0x138);
    pAVar11 = (AstStat *)parseBlockNoScope();
    restoreLocals(in_x0,(uint)((ulong)(lVar4 - lVar3) >> 3));
    *(undefined8 *)(pAVar11 + 0xc) = uVar14;
    uVar14 = *(undefined8 *)(in_x0 + 0x34);
    local_d0 = 0x122;
    uStack_cc = (undefined4)uVar16;
    uStack_c8 = (undefined4)(uVar16 >> 0x20);
    if (*(int *)(in_x0 + 0x28) != 0x124) goto LAB_00eeb734;
LAB_00eeb6d8:
    if (((*(uint *)(in_x0 + 0x2c) != (uint)uVar16) &&
        (*(int *)(in_x0 + 0x30) != (int)(uVar16 >> 0x20))) &&
       (*(uint *)(in_x0 + 0xe4) < (uint)uVar16)) {
      *(ulong *)(in_x0 + 0xe0) = CONCAT44(uStack_cc,local_d0);
      *(undefined4 *)(in_x0 + 0xe8) = uStack_c8;
    }
LAB_00eeb764:
    nextLexeme();
    AVar12 = (AstStat)0x1;
  }
  else if (iVar6 == 0x123) {
    iVar5 = *(int *)(in_x0 + 0xbc);
    uVar1 = iVar5 + 1;
    *(uint *)(in_x0 + 0xbc) = uVar1;
    if (uVar8 < uVar1) {
      ParseError::raise((Location *)puVar13,
                        "Exceeded allowed recursion depth; simplify your %s to make the code compile"
                        ,"elseif");
      goto LAB_00eeb7fc;
    }
    uStack_98 = *(undefined8 *)(in_x0 + 0x34);
    local_a0 = *puVar13;
    local_90 = 1;
    pAVar11 = (AstStat *)parseIf();
    uVar14 = *(undefined8 *)(pAVar11 + 0x14);
    pAVar2 = pAVar11;
    if (*(int *)(pAVar11 + 8) != AstRtti<Luau::AstStatIf>::value) {
      pAVar2 = (AstStat *)0x0;
    }
    AVar12 = pAVar2[0x60];
    *(int *)(in_x0 + 0xbc) = iVar5;
  }
  else {
    pAVar11 = (AstStat *)0x0;
    uVar14 = *(undefined8 *)(in_x0 + 0x34);
    uStack_cc = (undefined4)uVar16;
    uStack_c8 = (undefined4)(uVar16 >> 0x20);
    local_d0 = iVar5;
    if (iVar6 == 0x124) goto LAB_00eeb6d8;
LAB_00eeb734:
    expectMatchEndAndConsumeFail(in_x0,0x124,(MatchLexeme *)&local_d0);
    Lexer::lookahead();
    if ((int)local_c0 == 0x124) {
      nextLexeme();
      goto LAB_00eeb764;
    }
    AVar12 = (AstStat)0x0;
  }
  local_c0 = uVar15;
  uStack_b8 = uVar14;
  this = (AstStatIf *)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),0x68);
  AstStatIf::AstStatIf
            (this,(Location *)&local_c0,pAVar9,pAVar10,pAVar11,(optional *)&local_80,
             (optional *)&local_a0,AVar12 != (AstStat)0x0);
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return this;
  }
LAB_00eeb7fc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


