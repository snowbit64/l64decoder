// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseTableIndexerAnnotation
// Entry Point: 00ef2b30
// Size: 300 bytes
// Signature: undefined parseTableIndexerAnnotation(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::parseTableIndexerAnnotation() */

void Luau::Parser::parseTableIndexerAnnotation(void)

{
  int iVar1;
  long lVar2;
  Parser *in_x0;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int local_68;
  undefined8 local_64;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(in_x0 + 0x28);
  uVar8 = *(undefined8 *)(in_x0 + 0x2c);
  nextLexeme();
  uVar3 = parseTypeAnnotation();
  local_68 = iVar1;
  local_64 = uVar8;
  if (*(int *)(in_x0 + 0x28) == 0x5d) {
    nextLexeme();
    iVar1 = *(int *)(in_x0 + 0x28);
  }
  else {
    piVar6 = &local_68;
    expectMatchAndConsumeFail(in_x0,0x5d,(MatchLexeme *)piVar6,(char *)0x0);
    expectMatchAndConsumeRecover(in_x0,']',(MatchLexeme *)piVar6,false);
    iVar1 = *(int *)(in_x0 + 0x28);
  }
  if (iVar1 != 0x3a) {
    expectAndConsumeFail(in_x0,0x3a,"table field");
    Lexer::lookahead();
    if (local_68 != 0x3a) goto LAB_00ef2c0c;
    nextLexeme();
  }
  nextLexeme();
LAB_00ef2c0c:
  lVar4 = parseTypeAnnotation();
  uVar7 = *(undefined8 *)(lVar4 + 0x14);
  puVar5 = (undefined8 *)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),0x20);
  *puVar5 = uVar3;
  puVar5[1] = lVar4;
  puVar5[2] = uVar8;
  puVar5[3] = uVar7;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


