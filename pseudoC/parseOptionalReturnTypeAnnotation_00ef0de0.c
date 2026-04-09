// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseOptionalReturnTypeAnnotation
// Entry Point: 00ef0de0
// Size: 248 bytes
// Signature: undefined parseOptionalReturnTypeAnnotation(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::parseOptionalReturnTypeAnnotation() */

void Luau::Parser::parseOptionalReturnTypeAnnotation(void)

{
  undefined4 uVar1;
  long lVar2;
  Location *in_x0;
  undefined8 *in_x8;
  long lVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  if (*in_x0 == (Location)0x0) {
LAB_00ef0ea4:
    *(undefined *)in_x8 = 0;
    *(undefined *)(in_x8 + 3) = 0;
  }
  else {
    if (*(int *)(in_x0 + 0x28) != 0x3a) {
      if (*(int *)(in_x0 + 0x28) != 0x107) goto LAB_00ef0ea4;
      report(in_x0,(char *)(in_x0 + 0x2c),
             "Function return type annotations are written after \':\' instead of \'->\'");
    }
    nextLexeme();
    uVar1 = *(undefined4 *)(in_x0 + 0xbc);
    parseReturnTypeAnnotation();
    if (*(int *)(in_x0 + 0x28) == 0x2c) {
      report(in_x0,(char *)(in_x0 + 0x2c),
             "Expected a statement, got \',\'; did you forget to wrap the list of return types in parentheses?"
            );
      nextLexeme();
    }
    *(undefined4 *)(in_x0 + 0xbc) = uVar1;
    in_x8[1] = uStack_58;
    *in_x8 = local_60;
    in_x8[2] = local_50;
    *(undefined *)(in_x8 + 3) = 1;
  }
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


