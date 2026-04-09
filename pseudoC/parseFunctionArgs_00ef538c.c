// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseFunctionArgs
// Entry Point: 00ef538c
// Size: 960 bytes
// Signature: undefined __thiscall parseFunctionArgs(Parser * this, AstExpr * param_1, bool param_2)


/* Luau::Parser::parseFunctionArgs(Luau::AstExpr*, bool) */

AstExprCall * __thiscall Luau::Parser::parseFunctionArgs(Parser *this,AstExpr *param_1,bool param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  AstExprConstantString *pAVar5;
  AstExprCall *pAVar6;
  undefined4 *puVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  Allocator *pAVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  ulong local_a0;
  ulong uStack_98;
  AstExprConstantString **local_90;
  undefined8 uStack_88;
  long *local_80;
  long lStack_78;
  ulong local_70;
  long local_68;
  
  puVar8 = &local_c0;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar2 = *(int *)(this + 0x28);
  if (iVar2 - 0x114U < 2) {
    uStack_b8 = *(undefined8 *)(this + 0x34);
    local_c0 = *(ulong *)(this + 0x2c);
    uStack_88 = *(undefined8 *)(this + 0x34);
    local_90 = *(AstExprConstantString ***)(this + 0x2c);
    parseCharArray();
    if ((char)local_70 == '\0') {
      local_a0 = 0;
      uStack_98 = 0;
      pAVar5 = (AstExprConstantString *)
               reportExprError((Location *)this,(AstArray *)&local_90,(char *)&local_a0,
                               "String literal contains malformed escape sequence");
    }
    else {
      pAVar5 = (AstExprConstantString *)Allocator::allocate(*(Allocator **)(this + 0x80),0x30);
      AstExprConstantString::AstExprConstantString
                (pAVar5,(Location *)&local_90,(AstArray *)&local_80);
    }
    pAVar14 = *(Allocator **)(this + 0x80);
    local_80 = *(long **)(param_1 + 0xc);
    lStack_78 = *(long *)(pAVar5 + 0x14);
    local_90 = (AstExprConstantString **)Allocator::allocate(pAVar14,8);
    *local_90 = pAVar5;
    uStack_88 = 1;
    pAVar6 = (AstExprCall *)Allocator::allocate(pAVar14,0x50);
LAB_00ef5534:
    AstExprCall::AstExprCall
              (pAVar6,(Location *)&local_80,param_1,(AstArray *)&local_90,param_2,(Location *)puVar8
              );
  }
  else {
    if (iVar2 == 0x7b) {
      uVar15 = *(ulong *)(this + 0x34);
      pAVar5 = (AstExprConstantString *)parseTableConstructor();
      uVar17 = *(ulong *)(this + 0x50);
      pAVar14 = *(Allocator **)(this + 0x80);
      local_80 = *(long **)(param_1 + 0xc);
      lStack_78 = *(long *)(pAVar5 + 0x14);
      local_90 = (AstExprConstantString **)Allocator::allocate(pAVar14,8);
      *local_90 = pAVar5;
      uStack_88 = 1;
      local_a0 = uVar15;
      uStack_98 = uVar17;
      pAVar6 = (AstExprCall *)Allocator::allocate(pAVar14,0x50);
      puVar8 = &local_a0;
      goto LAB_00ef5534;
    }
    if (iVar2 != 0x28) {
      pAVar6 = (AstExprCall *)reportFunctionArgsError(this,param_1,param_2);
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return pAVar6;
      }
      goto LAB_00ef5748;
    }
    uVar15 = *(ulong *)(this + 0x34);
    if (*(int *)(param_1 + 0x14) == *(int *)(this + 0x2c)) {
      local_b0 = 0x28;
    }
    else {
      reportAmbiguousCallError();
      local_b0 = *(undefined4 *)(this + 0x28);
    }
    local_ac = *(undefined8 *)(this + 0x2c);
    nextLexeme();
    local_80 = (long *)(this + 0x1a8);
    local_70 = 0;
    lStack_78 = *(long *)(this + 0x1b0) - *(long *)(this + 0x1a8) >> 3;
    if (*(int *)(this + 0x28) == 0x29) {
      uVar16 = *(undefined8 *)(this + 0x34);
LAB_00ef5618:
                    /* try { // try from 00ef5618 to 00ef5647 has its CatchHandler @ 00ef5754 */
      nextLexeme();
    }
    else {
                    /* try { // try from 00ef55bc to 00ef55d7 has its CatchHandler @ 00ef5750 */
      local_90 = (AstExprConstantString **)parseExpr(this,0);
      TempVector<Luau::AstExpr*>::push_back
                ((TempVector<Luau::AstExpr*> *)&local_80,(AstExpr **)&local_90);
      while (*(int *)(this + 0x28) == 0x2c) {
                    /* try { // try from 00ef55e4 to 00ef5607 has its CatchHandler @ 00ef575c */
        nextLexeme();
        local_90 = (AstExprConstantString **)parseExpr(this,0);
        TempVector<Luau::AstExpr*>::push_back
                  ((TempVector<Luau::AstExpr*> *)&local_80,(AstExpr **)&local_90);
      }
      uVar16 = *(undefined8 *)(this + 0x34);
      if (*(int *)(this + 0x28) == 0x29) goto LAB_00ef5618;
      puVar7 = &local_b0;
      expectMatchAndConsumeFail(this,0x29,(MatchLexeme *)puVar7,(char *)0x0);
      expectMatchAndConsumeRecover(this,')',(MatchLexeme *)puVar7,false);
    }
    uVar17 = local_70;
    lVar1 = lStack_78;
    local_90 = *(AstExprConstantString ***)(param_1 + 0xc);
    pAVar14 = *(Allocator **)(this + 0x80);
    uStack_88 = uVar16;
    if (local_70 == 0) {
      local_a0 = 0;
    }
    else {
      lVar18 = *local_80;
                    /* try { // try from 00ef5668 to 00ef566f has its CatchHandler @ 00ef574c */
      local_a0 = Allocator::allocate(pAVar14,local_70 << 3);
      if ((uVar17 < 4) ||
         ((local_a0 < lVar18 + (uVar17 + lVar1) * 8 &&
          ((ulong)(lVar18 + lVar1 * 8) < local_a0 + uVar17 * 8)))) {
        uVar9 = 0;
      }
      else {
        uVar9 = uVar17 & 0xfffffffffffffffc;
        puVar10 = (undefined8 *)(local_a0 + 0x10);
        puVar12 = (undefined8 *)(lVar18 + lVar1 * 8 + 0x10);
        uVar13 = uVar9;
        do {
          puVar4 = puVar12 + -1;
          uVar19 = puVar12[-2];
          uVar21 = puVar12[1];
          uVar20 = *puVar12;
          puVar12 = puVar12 + 4;
          uVar13 = uVar13 - 4;
          puVar10[-1] = *puVar4;
          puVar10[-2] = uVar19;
          puVar10[1] = uVar21;
          *puVar10 = uVar20;
          puVar10 = puVar10 + 4;
        } while (uVar13 != 0);
        if (uVar17 == uVar9) goto LAB_00ef56c4;
      }
      lVar11 = uVar17 - uVar9;
      puVar10 = (undefined8 *)(local_a0 + uVar9 * 8);
      puVar12 = (undefined8 *)(lVar18 + (uVar9 + lVar1) * 8);
      do {
        lVar11 = lVar11 + -1;
        *puVar10 = *puVar12;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      } while (lVar11 != 0);
    }
LAB_00ef56c4:
    uStack_98 = uVar17;
    local_c0 = uVar15;
    uStack_b8 = uVar16;
                    /* try { // try from 00ef56cc to 00ef56f3 has its CatchHandler @ 00ef5758 */
    pAVar6 = (AstExprCall *)Allocator::allocate(pAVar14,0x50);
    AstExprCall::AstExprCall
              (pAVar6,(Location *)&local_90,param_1,(AstArray *)&local_a0,param_2,
               (Location *)&local_c0);
    lVar1 = *local_80 + lStack_78 * 8;
    if (lVar1 != local_80[1]) {
      local_80[1] = lVar1;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return pAVar6;
  }
LAB_00ef5748:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


