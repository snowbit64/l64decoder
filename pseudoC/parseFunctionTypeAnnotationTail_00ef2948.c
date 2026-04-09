// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseFunctionTypeAnnotationTail
// Entry Point: 00ef2948
// Size: 488 bytes
// Signature: undefined __cdecl parseFunctionTypeAnnotationTail(Lexeme * param_1, AstArray param_2, AstArray param_3, AstArray * param_4, AstArray * param_5, AstTypePack * param_6, undefined param_7, undefined param_8, undefined param_9, undefined param_10, undefined8 param_11)


/* Luau::Parser::parseFunctionTypeAnnotationTail(Luau::Lexeme const&,
   Luau::AstArray<Luau::AstGenericType>, Luau::AstArray<Luau::AstGenericTypePack>,
   Luau::AstArray<Luau::AstType*>&,
   Luau::AstArray<std::__ndk1::optional<std::__ndk1::pair<Luau::AstName, Luau::Location> > >&,
   Luau::AstTypePack*) */

AstTypeReference *
Luau::Parser::parseFunctionTypeAnnotationTail
          (Parser *param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
          long param_6,undefined8 *param_7,AstArray *param_8,undefined8 param_11)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  AstTypeFunction *this;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  AstTypeList aAStack_90 [24];
  undefined8 local_78;
  long lStack_70;
  undefined8 local_68;
  long lStack_60;
  long local_58;
  
  uVar3 = FInt::LuauRecursionLimit;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(param_1 + 0xbc);
  *(uint *)(param_1 + 0xbc) = iVar1 + 1U;
  local_78 = param_5;
  lStack_70 = param_6;
  local_68 = param_3;
  lStack_60 = param_4;
  if (uVar3 < iVar1 + 1U) {
    ParseError::raise((Location *)(param_1 + 0x2c),
                      "Exceeded allowed recursion depth; simplify your %s to make the code compile",
                      "type annotation");
    goto LAB_00ef2b2c;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 0x3a) {
    report((Location *)param_1,(char *)(param_1 + 0x2c),
           "Return types in function type annotations are written after \'->\' instead of \':\'");
    Lexer::next();
LAB_00ef2a88:
    parseReturnTypeAnnotation();
    uStack_b8 = param_7[1];
    local_c0 = *param_7;
    local_d0 = *(undefined8 *)(param_2 + 4);
    local_b0 = param_11;
    uStack_c8 = local_98;
    this = (AstTypeFunction *)Allocator::allocate(*(Allocator **)(param_1 + 0x80),0x80);
    AstTypeFunction::AstTypeFunction
              (this,(Location *)&local_d0,(AstArray *)&local_68,(AstArray *)&local_78,
               (AstTypeList *)&local_c0,param_8,aAStack_90);
  }
  else {
    if ((((iVar1 == 0x107) || (param_4 != 0)) || (param_6 != 0)) || (param_7[1] != 0)) {
      if (iVar1 != 0x107) {
        expectAndConsumeFail(param_1,0x107,"function type");
        Lexer::lookahead();
        if ((int)local_a0 != 0x107) goto LAB_00ef2a88;
        nextLexeme();
      }
      nextLexeme();
      goto LAB_00ef2a88;
    }
    local_98 = *(undefined8 *)(param_1 + 0x50);
    local_a0 = *(undefined8 *)(param_2 + 4);
    report((Location *)param_1,(char *)&local_a0,
           "Expected \'->\' after \'()\' when parsing function type; did you mean \'nil\'?");
    this = (AstTypeFunction *)Allocator::allocate(*(Allocator **)(param_1 + 0x80),0x48);
    local_a0 = 0;
    local_98 = 0;
    AstTypeReference::AstTypeReference
              ((AstTypeReference *)this,(undefined8 *)(param_2 + 4),0,0,
               *(undefined8 *)(param_1 + 0xd8),0,&local_a0);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return (AstTypeReference *)this;
  }
LAB_00ef2b2c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


