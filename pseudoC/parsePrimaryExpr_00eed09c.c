// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parsePrimaryExpr
// Entry Point: 00eed09c
// Size: 916 bytes
// Signature: undefined __thiscall parsePrimaryExpr(Parser * this, bool param_1)


/* Luau::Parser::parsePrimaryExpr(bool) */

AstExpr * __thiscall Luau::Parser::parsePrimaryExpr(Parser *this,bool param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  AstExprIndexName *pAVar9;
  AstExpr *pAVar10;
  AstExprIndexName *pAVar11;
  bool bVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  puVar14 = (undefined8 *)(this + 0x2c);
  uVar16 = *puVar14;
  pAVar9 = (AstExprIndexName *)parsePrefixExpr();
  uVar1 = *(undefined4 *)(this + 0xbc);
  do {
    uVar7 = uStack_7c;
    uVar5 = local_80;
    iVar2 = *(int *)(this + 0x28);
    if (iVar2 < 0x5b) {
      if (iVar2 == 0x28) {
        if ((param_1) || (*(int *)((AstExpr *)pAVar9 + 0x14) == *(int *)(this + 0x2c)))
        goto LAB_00eed10c;
        reportAmbiguousCallError();
LAB_00eed3d4:
        *(undefined4 *)(this + 0xbc) = uVar1;
        if (*(long *)(lVar3 + 0x28) == local_68) {
          return (AstExpr *)pAVar9;
        }
        goto LAB_00eed42c;
      }
      local_80 = (undefined4)uVar16;
      uVar6 = local_80;
      uStack_7c = (undefined4)((ulong)uVar16 >> 0x20);
      uVar8 = uStack_7c;
      if (iVar2 != 0x2e) {
        local_80 = uVar5;
        uStack_7c = uVar7;
        if (iVar2 != 0x3a) goto LAB_00eed3d4;
        local_88 = *(undefined8 *)(this + 0x2c);
        nextLexeme();
        if (*(int *)(this + 0x28) == 0x117) {
          uVar15 = *(undefined8 *)(this + 0x40);
          uStack_78 = (undefined4)*(undefined8 *)(this + 0x34);
          uStack_74 = (undefined4)((ulong)*(undefined8 *)(this + 0x34) >> 0x20);
          local_80 = (undefined4)*puVar14;
          uStack_7c = (undefined4)((ulong)*puVar14 >> 0x20);
          nextLexeme();
          uStack_90 = CONCAT44(uStack_74,uStack_78);
          local_98 = CONCAT44(uStack_7c,local_80);
          local_a0 = uVar15;
        }
        else {
          reportNameError(this,"method name");
          if ((*(int *)(this + 0x28) - 0x11fU < 0x15) && (*(int *)(this + 0x2c) == (int)local_88)) {
            local_a0 = *(undefined8 *)(this + 0x40);
            uStack_90 = *(undefined8 *)(this + 0x34);
            local_98 = *puVar14;
            nextLexeme();
          }
          else {
            local_a0 = *(undefined8 *)(this + 0xd0);
            local_98 = *(undefined8 *)(this + 0x2c);
            uStack_90 = local_98;
          }
        }
        uStack_78 = (undefined4)uStack_90;
        uStack_74 = (undefined4)((ulong)uStack_90 >> 0x20);
        local_80 = uVar6;
        uStack_7c = uVar8;
        pAVar11 = (AstExprIndexName *)Allocator::allocate(*(Allocator **)(this + 0x80),0x50);
        AstExprIndexName::AstExprIndexName
                  (pAVar11,(Location *)&local_80,(AstExpr *)pAVar9,(AstName *)&local_a0,
                   (Location *)&local_98,(Position *)&local_88,':');
        bVar12 = true;
        pAVar9 = pAVar11;
        goto LAB_00eed118;
      }
      local_88 = *(undefined8 *)(this + 0x2c);
      local_80 = uVar5;
      uStack_7c = uVar7;
      nextLexeme();
      if (*(int *)(this + 0x28) == 0x117) {
        uVar15 = *(undefined8 *)(this + 0x40);
        uStack_78 = (undefined4)*(undefined8 *)(this + 0x34);
        uStack_74 = (undefined4)((ulong)*(undefined8 *)(this + 0x34) >> 0x20);
        local_80 = (undefined4)*puVar14;
        uStack_7c = (undefined4)((ulong)*puVar14 >> 0x20);
        nextLexeme();
        uStack_90 = CONCAT44(uStack_74,uStack_78);
        local_98 = CONCAT44(uStack_7c,local_80);
        local_a0 = uVar15;
      }
      else {
        reportNameError(this,(char *)0x0);
        if ((*(int *)(this + 0x28) - 0x11fU < 0x15) && (*(int *)(this + 0x2c) == (int)local_88)) {
          local_a0 = *(undefined8 *)(this + 0x40);
          uStack_90 = *(undefined8 *)(this + 0x34);
          local_98 = *puVar14;
          nextLexeme();
        }
        else {
          local_a0 = *(undefined8 *)(this + 0xd0);
          local_98 = *(undefined8 *)(this + 0x2c);
          uStack_90 = local_98;
        }
      }
      uStack_78 = (undefined4)uStack_90;
      uStack_74 = (undefined4)((ulong)uStack_90 >> 0x20);
      local_80 = uVar6;
      uStack_7c = uVar8;
      pAVar11 = (AstExprIndexName *)Allocator::allocate(*(Allocator **)(this + 0x80),0x50);
      AstExprIndexName::AstExprIndexName
                (pAVar11,(Location *)&local_80,(AstExpr *)pAVar9,(AstName *)&local_a0,
                 (Location *)&local_98,(Position *)&local_88,'.');
    }
    else {
      if (1 < iVar2 - 0x114U) {
        if (iVar2 == 0x5b) {
          local_80 = 0x5b;
          uStack_7c = (undefined4)*(undefined8 *)(this + 0x2c);
          uStack_78 = (undefined4)((ulong)*(undefined8 *)(this + 0x2c) >> 0x20);
          nextLexeme();
          pAVar10 = (AstExpr *)parseExpr(this,0);
          uVar15 = *(undefined8 *)(this + 0x34);
          if (*(int *)(this + 0x28) == 0x5d) {
            nextLexeme();
          }
          else {
            puVar13 = &local_80;
            expectMatchAndConsumeFail(this,0x5d,(MatchLexeme *)puVar13,(char *)0x0);
            expectMatchAndConsumeRecover(this,']',(MatchLexeme *)puVar13,false);
          }
          local_a0 = uVar16;
          local_98 = uVar15;
          pAVar11 = (AstExprIndexName *)Allocator::allocate(*(Allocator **)(this + 0x80),0x30);
          AstExprIndexExpr::AstExprIndexExpr
                    ((AstExprIndexExpr *)pAVar11,(Location *)&local_a0,(AstExpr *)pAVar9,pAVar10);
          goto LAB_00eed120;
        }
        local_80 = uVar5;
        uStack_7c = uVar7;
        if (iVar2 != 0x7b) goto LAB_00eed3d4;
      }
LAB_00eed10c:
      bVar12 = false;
LAB_00eed118:
      pAVar11 = (AstExprIndexName *)parseFunctionArgs(this,(AstExpr *)pAVar9,bVar12);
    }
LAB_00eed120:
    uVar4 = FInt::LuauRecursionLimit;
    iVar2 = *(int *)(this + 0xbc);
    *(uint *)(this + 0xbc) = iVar2 + 1U;
    pAVar9 = pAVar11;
  } while (iVar2 + 1U <= uVar4);
  ParseError::raise((Location *)puVar14,
                    "Exceeded allowed recursion depth; simplify your %s to make the code compile",
                    "expression");
LAB_00eed42c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


