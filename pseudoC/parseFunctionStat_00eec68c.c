// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseFunctionStat
// Entry Point: 00eec68c
// Size: 248 bytes
// Signature: undefined parseFunctionStat(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::parseFunctionStat() */

AstStatFunction * Luau::Parser::parseFunctionStat(void)

{
  long lVar1;
  Parser *in_x0;
  AstExpr *pAVar2;
  AstExprFunction *pAVar3;
  AstStatFunction *this;
  undefined8 uVar4;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uStack_68 = *(undefined8 *)(in_x0 + 0x30);
  local_70 = *(undefined8 *)(in_x0 + 0x28);
  uStack_58 = *(undefined8 *)(in_x0 + 0x40);
  uStack_60 = *(undefined8 *)(in_x0 + 0x38);
  uVar4 = *(undefined8 *)(in_x0 + 0x2c);
  nextLexeme();
  local_74 = false;
  local_80 = 0;
  pAVar2 = (AstExpr *)parseFunctionName();
  *(int *)(*(long *)(in_x0 + 0x160) + 0x490) = *(int *)(*(long *)(in_x0 + 0x160) + 0x490) + 1;
  pAVar3 = (AstExprFunction *)
           parseFunctionBody(in_x0,(bool)local_74,(Lexeme *)&local_70,(AstName *)&local_80,
                             (Name *)0x0);
  *(int *)(*(long *)(in_x0 + 0x160) + 0x490) = *(int *)(*(long *)(in_x0 + 0x160) + 0x490) + -1;
  uStack_88 = *(undefined8 *)(pAVar3 + 0x14);
  local_90 = uVar4;
  this = (AstStatFunction *)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),0x30);
  AstStatFunction::AstStatFunction(this,(Location *)&local_90,pAVar2,pAVar3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


