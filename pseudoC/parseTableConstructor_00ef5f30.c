// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseTableConstructor
// Entry Point: 00ef5f30
// Size: 1148 bytes
// Signature: undefined parseTableConstructor(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::parseTableConstructor() */

AstExprTable * Luau::Parser::parseTableConstructor(void)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  Parser *in_x0;
  AstExprConstantString *pAVar4;
  ulong uVar5;
  undefined8 *puVar6;
  AstExprTable *this;
  undefined4 *puVar7;
  int *piVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  Allocator *this_00;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  AstExprConstantString *pAStack_c0;
  int local_b8;
  ulong local_b4;
  long *local_a8;
  long local_a0;
  long local_98;
  undefined8 local_90;
  AstExprConstantString *pAStack_88;
  long lStack_80;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar12 = *(ulong *)(in_x0 + 0x2c);
  plVar1 = (long *)(in_x0 + 0x298);
  local_b8 = *(int *)(in_x0 + 0x28);
  lVar9 = *(long *)(in_x0 + 0x2a0) - *plVar1 >> 3;
  local_a0 = lVar9 * -0x5555555555555555;
  local_98 = 0;
  local_b4 = uVar12;
  local_a8 = plVar1;
  if (local_b8 == 0x7b) {
                    /* try { // try from 00ef5fb4 to 00ef5ffb has its CatchHandler @ 00ef63b0 */
    nextLexeme();
  }
  else {
    expectAndConsumeFail(in_x0,0x7b,"table literal");
    Lexer::lookahead();
    if ((int)local_90 == 0x7b) {
      nextLexeme();
      nextLexeme();
    }
  }
  lVar15 = 0;
LAB_00ef602c:
  iVar2 = *(int *)(in_x0 + 0x28);
  if (iVar2 == 0x5b) {
    local_d0 = 0x5b;
    uStack_cc = (undefined4)*(undefined8 *)(in_x0 + 0x2c);
    local_c8 = (undefined4)((ulong)*(undefined8 *)(in_x0 + 0x2c) >> 0x20);
                    /* try { // try from 00ef60e0 to 00ef60e7 has its CatchHandler @ 00ef63dc */
    nextLexeme();
                    /* try { // try from 00ef60e8 to 00ef610b has its CatchHandler @ 00ef63e8 */
    pAVar4 = (AstExprConstantString *)parseExpr(in_x0,0);
    if (*(int *)(in_x0 + 0x28) == 0x5d) {
      nextLexeme();
    }
    else {
                    /* try { // try from 00ef6134 to 00ef61a7 has its CatchHandler @ 00ef63e8 */
      puVar7 = &local_d0;
      expectMatchAndConsumeFail(in_x0,0x5d,(MatchLexeme *)puVar7,(char *)0x0);
      expectMatchAndConsumeRecover(in_x0,']',(MatchLexeme *)puVar7,false);
    }
    if (*(int *)(in_x0 + 0x28) == 0x3d) {
      nextLexeme();
    }
    else {
      expectAndConsumeFail(in_x0,0x3d,"table field");
      Lexer::lookahead();
      if ((int)local_90 == 0x3d) {
        nextLexeme();
        nextLexeme();
      }
    }
                    /* try { // try from 00ef61a8 to 00ef61b3 has its CatchHandler @ 00ef63e0 */
    lStack_80 = parseExpr(in_x0,0);
    local_90 = CONCAT44(local_90._4_4_,2);
                    /* try { // try from 00ef61bc to 00ef61c7 has its CatchHandler @ 00ef63d8 */
    pAStack_88 = pAVar4;
    FUN_00ef775c(plVar1,&local_90);
  }
  else {
    if (iVar2 == 0x7d) {
      uVar14 = *(undefined8 *)(in_x0 + 0x34);
                    /* try { // try from 00ef629c to 00ef62cf has its CatchHandler @ 00ef63ac */
      nextLexeme();
      goto LAB_00ef62d8;
    }
    if (iVar2 == 0x117) {
                    /* try { // try from 00ef6048 to 00ef6053 has its CatchHandler @ 00ef63c8 */
      Lexer::lookahead();
      if ((int)local_90 == 0x3d) {
        if (*(int *)(in_x0 + 0x28) == 0x117) {
          pAStack_88 = *(AstExprConstantString **)(in_x0 + 0x34);
          local_90 = *(ulong *)(in_x0 + 0x2c);
          uVar14 = *(undefined8 *)(in_x0 + 0x40);
                    /* try { // try from 00ef6078 to 00ef60cf has its CatchHandler @ 00ef63cc */
          nextLexeme();
          local_d0 = (undefined4)uVar14;
          uStack_cc = (undefined4)((ulong)uVar14 >> 0x20);
          pAStack_c0 = pAStack_88;
          local_c8 = (undefined4)local_90;
          uStack_c4 = (undefined4)(local_90 >> 0x20);
          if (*(int *)(in_x0 + 0x28) == 0x3d) goto LAB_00ef6210;
LAB_00ef6098:
          expectAndConsumeFail(in_x0,0x3d,"table field");
          Lexer::lookahead();
          if ((int)local_90 == 0x3d) {
            nextLexeme();
            nextLexeme();
          }
        }
        else {
                    /* try { // try from 00ef61e8 to 00ef6217 has its CatchHandler @ 00ef63cc */
          reportNameError(in_x0,"table field");
          pAStack_c0 = *(AstExprConstantString **)(in_x0 + 0x2c);
          local_d0 = (undefined4)*(undefined8 *)(in_x0 + 0xd0);
          uStack_cc = (undefined4)((ulong)*(undefined8 *)(in_x0 + 0xd0) >> 0x20);
          local_c8 = SUB84(pAStack_c0,0);
          uStack_c4 = (undefined4)((ulong)pAStack_c0 >> 0x20);
          if (*(int *)(in_x0 + 0x28) != 0x3d) goto LAB_00ef6098;
LAB_00ef6210:
          nextLexeme();
        }
        local_e0 = CONCAT44(uStack_cc,local_d0);
                    /* try { // try from 00ef6220 to 00ef6227 has its CatchHandler @ 00ef63c0 */
        local_d8 = __strlen_chk(local_e0,0xffffffffffffffff);
                    /* try { // try from 00ef6230 to 00ef624b has its CatchHandler @ 00ef63c4 */
        pAVar4 = (AstExprConstantString *)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),0x30);
        AstExprConstantString::AstExprConstantString
                  (pAVar4,(Location *)&local_c8,(AstArray *)&local_e0);
                    /* try { // try from 00ef624c to 00ef6257 has its CatchHandler @ 00ef63bc */
        lStack_80 = parseExpr(in_x0,0);
        if ((lStack_80 != 0) && (*(int *)(lStack_80 + 8) == AstRtti<Luau::AstExprFunction>::value))
        {
          *(ulong *)(lStack_80 + 0xa8) = CONCAT44(uStack_cc,local_d0);
        }
        local_90 = CONCAT44(local_90._4_4_,1);
                    /* try { // try from 00ef6288 to 00ef6293 has its CatchHandler @ 00ef63b8 */
        pAStack_88 = pAVar4;
        FUN_00ef775c(plVar1,&local_90);
        goto LAB_00ef61c8;
      }
    }
                    /* try { // try from 00ef6110 to 00ef611b has its CatchHandler @ 00ef63d4 */
    lStack_80 = parseExpr(in_x0,0);
    local_90 = local_90 & 0xffffffff00000000;
    pAStack_88 = (AstExprConstantString *)0x0;
                    /* try { // try from 00ef6124 to 00ef612f has its CatchHandler @ 00ef63d0 */
    FUN_00ef775c(plVar1,&local_90);
  }
LAB_00ef61c8:
  iVar2 = *(int *)(in_x0 + 0x28);
  lVar15 = lVar15 + 1;
  local_98 = lVar15;
  if (iVar2 != 0x2c) goto code_r0x00ef61dc;
  goto LAB_00ef6024;
code_r0x00ef61dc:
  if (iVar2 != 0x7d) {
    if (iVar2 != 0x3b) {
      uVar14 = *(undefined8 *)(in_x0 + 0x34);
      piVar8 = &local_b8;
      expectMatchAndConsumeFail(in_x0,0x7d,(MatchLexeme *)piVar8,(char *)0x0);
      uVar5 = expectMatchAndConsumeRecover(in_x0,'}',(MatchLexeme *)piVar8,false);
      if ((uVar5 & 1) == 0) {
        uVar14 = *(undefined8 *)(in_x0 + 0x50);
      }
LAB_00ef62d8:
      this_00 = *(Allocator **)(in_x0 + 0x80);
      local_90 = uVar12;
      pAStack_88 = (AstExprConstantString *)uVar14;
      if (lVar15 == 0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        lVar13 = *plVar1;
                    /* try { // try from 00ef62f4 to 00ef634f has its CatchHandler @ 00ef63b4 */
        puVar6 = (undefined8 *)Allocator::allocate(this_00,lVar15 * 0x18);
        puVar10 = (undefined8 *)(lVar13 + lVar9 * 8);
        puVar11 = puVar6;
        lVar9 = lVar15;
        do {
          lVar9 = lVar9 + -1;
          uVar16 = puVar10[1];
          uVar14 = *puVar10;
          puVar11[2] = puVar10[2];
          puVar11[1] = uVar16;
          *puVar11 = uVar14;
          puVar10 = puVar10 + 3;
          puVar11 = puVar11 + 3;
        } while (lVar9 != 0);
      }
      local_d0 = SUB84(puVar6,0);
      uStack_cc = (undefined4)((ulong)puVar6 >> 0x20);
      local_c8 = (undefined4)lVar15;
      uStack_c4 = (undefined4)((ulong)lVar15 >> 0x20);
      this = (AstExprTable *)Allocator::allocate(this_00,0x30);
      AstExprTable::AstExprTable(this,(Location *)&local_90,(AstArray *)&local_d0);
      lVar9 = *local_a8 + local_a0 * 0x18;
      if (lVar9 != local_a8[1]) {
        local_a8[1] = lVar9;
      }
      if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return this;
    }
LAB_00ef6024:
                    /* try { // try from 00ef6024 to 00ef602b has its CatchHandler @ 00ef63e4 */
    nextLexeme();
  }
  goto LAB_00ef602c;
}


