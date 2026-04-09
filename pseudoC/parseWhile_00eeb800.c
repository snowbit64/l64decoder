// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseWhile
// Entry Point: 00eeb800
// Size: 508 bytes
// Signature: undefined parseWhile(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::parseWhile() */

AstStatWhile * Luau::Parser::parseWhile(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  Parser *in_x0;
  AstExpr *pAVar5;
  AstStatBlock *pAVar6;
  AstStatWhile *this;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 local_c0;
  uint uStack_bc;
  int iStack_b8;
  undefined4 local_b0;
  uint uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar8 = *(undefined8 *)(in_x0 + 0x2c);
  nextLexeme();
  pAVar5 = (AstExpr *)parseExpr(in_x0,0);
  iVar3 = *(int *)(in_x0 + 0x28);
  uStack_98 = *(undefined8 *)(in_x0 + 0x40);
  uStack_a0 = *(undefined8 *)(in_x0 + 0x38);
  iStack_a8 = (int)*(undefined8 *)(in_x0 + 0x30);
  uStack_a4 = (undefined4)((ulong)*(undefined8 *)(in_x0 + 0x30) >> 0x20);
  local_b0 = (undefined4)*(undefined8 *)(in_x0 + 0x28);
  uStack_ac = (uint)((ulong)*(undefined8 *)(in_x0 + 0x28) >> 0x20);
  if (iVar3 == 0x121) {
LAB_00eeb898:
    nextLexeme();
  }
  else {
    expectAndConsumeFail(in_x0,0x121,"while loop");
    Lexer::lookahead();
    if ((int)local_88 == 0x121) {
      nextLexeme();
      goto LAB_00eeb898;
    }
  }
  *(int *)(*(long *)(in_x0 + 0xf8) + -4) = *(int *)(*(long *)(in_x0 + 0xf8) + -4) + 1;
  lVar1 = *(long *)(in_x0 + 0x130);
  lVar2 = *(long *)(in_x0 + 0x138);
  pAVar6 = (AstStatBlock *)parseBlockNoScope();
  restoreLocals(in_x0,(uint)((ulong)(lVar2 - lVar1) >> 3));
  *(int *)(*(long *)(in_x0 + 0xf8) + -4) = *(int *)(*(long *)(in_x0 + 0xf8) + -4) + -1;
  uVar9 = *(undefined8 *)(in_x0 + 0x34);
  local_c0 = local_b0;
  uStack_bc = uStack_ac;
  iStack_b8 = iStack_a8;
  if (*(int *)(in_x0 + 0x28) == 0x124) {
    if (((*(uint *)(in_x0 + 0x2c) != uStack_ac) && (*(int *)(in_x0 + 0x30) != iStack_a8)) &&
       (*(uint *)(in_x0 + 0xe4) < uStack_ac)) {
      *(ulong *)(in_x0 + 0xe0) = CONCAT44(uStack_ac,local_b0);
      *(int *)(in_x0 + 0xe8) = iStack_a8;
    }
  }
  else {
    expectMatchEndAndConsumeFail(in_x0,0x124,(MatchLexeme *)&local_c0);
    Lexer::lookahead();
    if ((int)local_88 != 0x124) {
      bVar7 = false;
      goto LAB_00eeb984;
    }
    nextLexeme();
  }
  nextLexeme();
  bVar7 = true;
LAB_00eeb984:
  local_88 = uVar8;
  uStack_80 = uVar9;
  this = (AstStatWhile *)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),0x48);
  AstStatWhile::AstStatWhile
            (this,(Location *)&local_88,pAVar5,pAVar6,iVar3 == 0x121,
             (Location *)((ulong)&local_b0 | 4),bVar7);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


