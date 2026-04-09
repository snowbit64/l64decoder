// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseTypeAlias
// Entry Point: 00eeda08
// Size: 344 bytes
// Signature: undefined __thiscall parseTypeAlias(Parser * this, Location * param_1, bool param_2)


/* Luau::Parser::parseTypeAlias(Luau::Location const&, bool) */

AstStatTypeAlias * __thiscall
Luau::Parser::parseTypeAlias(Parser *this,Location *param_1,bool param_2)

{
  long lVar1;
  AstType *pAVar2;
  AstStatTypeAlias *this_00;
  undefined8 uVar3;
  AstArray aAStack_a8 [16];
  AstArray aAStack_98 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x28) == 0x117) {
    uStack_58 = *(undefined8 *)(this + 0x34);
    local_60 = *(undefined8 *)(this + 0x2c);
    uVar3 = *(undefined8 *)(this + 0x40);
    nextLexeme();
    local_68 = uVar3;
  }
  else {
    reportNameError(this,"type name");
    uStack_58 = *(undefined8 *)(this + 0x34);
    local_60 = *(undefined8 *)(this + 0x2c);
    local_68 = *(undefined8 *)(this + 0xd0);
  }
  local_50 = 1;
  parseGenericTypeList(SUB81(this,0));
  if (*(int *)(this + 0x28) != 0x3d) {
    expectAndConsumeFail(this,0x3d,"type alias");
    Lexer::lookahead();
    if ((int)local_88 != 0x3d) goto LAB_00eedae4;
    nextLexeme();
  }
  nextLexeme();
LAB_00eedae4:
  pAVar2 = (AstType *)parseTypeAnnotation();
  local_88 = *(undefined8 *)param_1;
  uStack_80 = *(undefined8 *)(pAVar2 + 0x14);
  this_00 = (AstStatTypeAlias *)Allocator::allocate(*(Allocator **)(this + 0x80),0x58);
  AstStatTypeAlias::AstStatTypeAlias
            (this_00,(Location *)&local_88,(AstName *)&local_68,aAStack_a8,aAStack_98,pAVar2,param_2
            );
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


