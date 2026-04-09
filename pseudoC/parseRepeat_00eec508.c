// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseRepeat
// Entry Point: 00eec508
// Size: 388 bytes
// Signature: undefined parseRepeat(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::parseRepeat() */

AstStatRepeat * Luau::Parser::parseRepeat(void)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  Parser *in_x0;
  AstStatBlock *pAVar6;
  AstExpr *pAVar7;
  AstStatRepeat *this;
  bool bVar8;
  undefined8 uVar9;
  undefined4 local_88;
  uint uStack_84;
  int iStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  uVar9 = *(undefined8 *)(in_x0 + 0x2c);
  uVar3 = *(undefined4 *)(in_x0 + 0x28);
  uVar5 = *(undefined8 *)(in_x0 + 0x28);
  nextLexeme();
  lVar1 = *(long *)(in_x0 + 0x130);
  lVar2 = *(long *)(in_x0 + 0x138);
  *(int *)(*(long *)(in_x0 + 0xf8) + -4) = *(int *)(*(long *)(in_x0 + 0xf8) + -4) + 1;
  pAVar6 = (AstStatBlock *)parseBlockNoScope();
  uStack_84 = (uint)uVar9;
  iStack_80 = (int)((ulong)uVar9 >> 0x20);
  *(int *)(*(long *)(in_x0 + 0xf8) + -4) = *(int *)(*(long *)(in_x0 + 0xf8) + -4) + -1;
  local_88 = uVar3;
  if (*(int *)(in_x0 + 0x28) == 0x132) {
    if (((*(uint *)(in_x0 + 0x2c) != uStack_84) && (*(int *)(in_x0 + 0x30) != iStack_80)) &&
       (*(uint *)(in_x0 + 0xe4) < uStack_84)) {
      *(undefined8 *)(in_x0 + 0xe0) = uVar5;
      *(int *)(in_x0 + 0xe8) = iStack_80;
    }
  }
  else {
    expectMatchEndAndConsumeFail(in_x0,0x132,(MatchLexeme *)&local_88);
    Lexer::lookahead();
    if ((int)local_78 != 0x132) {
      bVar8 = false;
      goto LAB_00eec608;
    }
    nextLexeme();
  }
  nextLexeme();
  bVar8 = true;
LAB_00eec608:
  pAVar7 = (AstExpr *)parseExpr(in_x0,0);
  restoreLocals(in_x0,(uint)((ulong)(lVar2 - lVar1) >> 3));
  uStack_70 = *(undefined8 *)(pAVar7 + 0x14);
  local_78 = uVar9;
  this = (AstStatRepeat *)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),0x38);
  AstStatRepeat::AstStatRepeat(this,(Location *)&local_78,pAVar7,pAVar6,bVar8);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


