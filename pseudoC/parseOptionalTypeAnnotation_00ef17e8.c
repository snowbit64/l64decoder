// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseOptionalTypeAnnotation
// Entry Point: 00ef17e8
// Size: 76 bytes
// Signature: undefined parseOptionalTypeAnnotation(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::parseOptionalTypeAnnotation() */

undefined8 Luau::Parser::parseOptionalTypeAnnotation(void)

{
  char *in_x0;
  undefined8 uVar1;
  
  if ((*in_x0 != '\0') && (*(int *)(in_x0 + 0x28) == 0x3a)) {
    nextLexeme();
    uVar1 = parseTypeAnnotation();
    return uVar1;
  }
  return 0;
}


