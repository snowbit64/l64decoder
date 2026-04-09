// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseFunctionName
// Entry Point: 00eef70c
// Size: 608 bytes
// Signature: undefined __cdecl parseFunctionName(Location param_1, bool * param_2, AstName * param_3)


/* Luau::Parser::parseFunctionName(Luau::Location, bool&, Luau::AstName&) */

AstExprIndexName *
Luau::Parser::parseFunctionName
          (Parser *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
          undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  AstExpr *this;
  AstExpr *pAVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (*(int *)(param_1 + 0x28) == 0x117) {
    *param_5 = *(undefined8 *)(param_1 + 0x40);
  }
  this = (AstExpr *)parseNameExpr(param_1,"function name");
  iVar6 = *(int *)(param_1 + 0x28);
  uVar2 = *(undefined4 *)(param_1 + 0xbc);
  puVar1 = (undefined8 *)(param_1 + 0x2c);
  if (iVar6 == 0x2e) {
    pAVar5 = this;
    do {
      local_88 = *(undefined8 *)(param_1 + 0x2c);
      nextLexeme();
      if (*(int *)(param_1 + 0x28) == 0x117) {
        uStack_78 = *(undefined8 *)(param_1 + 0x34);
        local_80 = *puVar1;
        uVar7 = *(undefined8 *)(param_1 + 0x40);
        nextLexeme();
        local_98 = local_80;
      }
      else {
        reportNameError(param_1,"field name");
        uVar7 = *(undefined8 *)(param_1 + 0xd0);
        uStack_78 = *(undefined8 *)(param_1 + 0x2c);
        local_98 = uStack_78;
      }
      *param_5 = uVar7;
      local_a0 = uVar7;
      uStack_90 = uStack_78;
      local_80 = param_2;
      this = (AstExpr *)Allocator::allocate(*(Allocator **)(param_1 + 0x80),0x50);
      AstExprIndexName::AstExprIndexName
                ((AstExprIndexName *)this,(Location *)&local_80,pAVar5,(AstName *)&local_a0,
                 (Location *)&local_98,(Position *)&local_88,'.');
      uVar4 = FInt::LuauRecursionLimit;
      iVar6 = *(int *)(param_1 + 0xbc);
      *(uint *)(param_1 + 0xbc) = iVar6 + 1U;
      if (uVar4 < iVar6 + 1U) {
        ParseError::raise((Location *)puVar1,
                          "Exceeded allowed recursion depth; simplify your %s to make the code compile"
                          ,"function name");
        goto LAB_00eef968;
      }
      iVar6 = *(int *)(param_1 + 0x28);
      pAVar5 = this;
    } while (iVar6 == 0x2e);
  }
  *(undefined4 *)(param_1 + 0xbc) = uVar2;
  pAVar5 = this;
  if (iVar6 == 0x3a) {
    local_88 = *(undefined8 *)(param_1 + 0x2c);
    nextLexeme();
    if (*(int *)(param_1 + 0x28) == 0x117) {
      uStack_78 = *(undefined8 *)(param_1 + 0x34);
      local_80 = *puVar1;
      uVar7 = *(undefined8 *)(param_1 + 0x40);
      nextLexeme();
      local_98 = local_80;
    }
    else {
      reportNameError(param_1,"method name");
      uVar7 = *(undefined8 *)(param_1 + 0xd0);
      uStack_78 = *(undefined8 *)(param_1 + 0x2c);
      local_98 = uStack_78;
    }
    *param_5 = uVar7;
    local_a0 = uVar7;
    uStack_90 = uStack_78;
    local_80 = param_2;
    pAVar5 = (AstExpr *)Allocator::allocate(*(Allocator **)(param_1 + 0x80),0x50);
    AstExprIndexName::AstExprIndexName
              ((AstExprIndexName *)pAVar5,(Location *)&local_80,this,(AstName *)&local_a0,
               (Location *)&local_98,(Position *)&local_88,':');
    *param_4 = 1;
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return (AstExprIndexName *)pAVar5;
  }
LAB_00eef968:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


