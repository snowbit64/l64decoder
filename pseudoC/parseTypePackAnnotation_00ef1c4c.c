// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseTypePackAnnotation
// Entry Point: 00ef1c4c
// Size: 416 bytes
// Signature: undefined parseTypePackAnnotation(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::parseTypePackAnnotation() */

AstTypePackGeneric * Luau::Parser::parseTypePackAnnotation(void)

{
  long lVar1;
  Parser *in_x0;
  AstType *pAVar2;
  AstTypePackVariadic *this;
  AstTypePackGeneric *pAVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(int *)(in_x0 + 0x28) == 0x106) {
    uVar4 = *(undefined8 *)(in_x0 + 0x2c);
    nextLexeme();
    pAVar2 = (AstType *)parseTypeAnnotation();
    uStack_60 = *(undefined8 *)(pAVar2 + 0x14);
    local_68 = uVar4;
    this = (AstTypePackVariadic *)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),0x28);
    AstTypePackVariadic::AstTypePackVariadic(this,(Location *)&local_68,pAVar2);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return (AstTypePackGeneric *)this;
    }
    goto LAB_00ef1de8;
  }
  if (*(int *)(in_x0 + 0x28) == 0x117) {
    Lexer::lookahead();
    if ((int)local_68 == 0x106) {
      if (*(int *)(in_x0 + 0x28) == 0x117) {
        uVar4 = *(undefined8 *)(in_x0 + 0x40);
        uVar5 = *(undefined8 *)(in_x0 + 0x2c);
        nextLexeme();
        uVar6 = *(undefined8 *)(in_x0 + 0x34);
        if (*(int *)(in_x0 + 0x28) == 0x106) goto LAB_00ef1db0;
LAB_00ef1d7c:
        expectAndConsumeFail(in_x0,0x106,"generic type pack annotation");
        Lexer::lookahead();
        if ((int)local_68 == 0x106) {
          nextLexeme();
          goto LAB_00ef1db0;
        }
      }
      else {
        reportNameError(in_x0,"generic name");
        uVar5 = *(undefined8 *)(in_x0 + 0x2c);
        uVar4 = *(undefined8 *)(in_x0 + 0xd0);
        uVar6 = *(undefined8 *)(in_x0 + 0x34);
        if (*(int *)(in_x0 + 0x28) != 0x106) goto LAB_00ef1d7c;
LAB_00ef1db0:
        nextLexeme();
      }
      local_68 = uVar5;
      uStack_60 = uVar6;
      pAVar3 = (AstTypePackGeneric *)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),0x28);
      AstTypePackGeneric::AstTypePackGeneric(pAVar3,&local_68,uVar4);
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return pAVar3;
      }
      goto LAB_00ef1de8;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return (AstTypePackGeneric *)0x0;
  }
LAB_00ef1de8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


