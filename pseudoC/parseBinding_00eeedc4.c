// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseBinding
// Entry Point: 00eeedc4
// Size: 212 bytes
// Signature: undefined parseBinding(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::parseBinding() */

void Luau::Parser::parseBinding(void)

{
  Parser PVar1;
  long lVar2;
  Parser *in_x0;
  undefined8 uVar3;
  undefined8 *in_x8;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  if (*(int *)(in_x0 + 0x28) == 0x117) {
    uVar7 = *(undefined8 *)(in_x0 + 0x34);
    uVar6 = *(undefined8 *)(in_x0 + 0x2c);
    uVar5 = *(undefined8 *)(in_x0 + 0x40);
    nextLexeme();
    PVar1 = *in_x0;
  }
  else {
    reportNameError(in_x0,"variable name");
    uVar7 = *(undefined8 *)(in_x0 + 0x34);
    uVar6 = *(undefined8 *)(in_x0 + 0x2c);
    uVar5 = *(undefined8 *)(in_x0 + 0xd0);
    PVar1 = *in_x0;
  }
  uVar3 = 0;
  if ((PVar1 != (Parser)0x0) && (uVar3 = 0, *(int *)(in_x0 + 0x28) == 0x3a)) {
    nextLexeme();
    uVar3 = parseTypeAnnotation();
  }
  *in_x8 = uVar5;
  in_x8[3] = uVar3;
  in_x8[2] = uVar7;
  in_x8[1] = uVar6;
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


