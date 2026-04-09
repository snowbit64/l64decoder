// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseString
// Entry Point: 00ef5e84
// Size: 172 bytes
// Signature: undefined parseString(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::parseString() */

AstExprConstantString * Luau::Parser::parseString(void)

{
  long lVar1;
  Location *in_x0;
  AstExprConstantString *this;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  AstArray aAStack_40 [16];
  char local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_48 = *(undefined8 *)(in_x0 + 0x34);
  local_50 = *(undefined8 *)(in_x0 + 0x2c);
  parseCharArray();
  if (local_30 == '\0') {
    local_60 = 0;
    uStack_58 = 0;
    this = (AstExprConstantString *)
           reportExprError(in_x0,(AstArray *)&local_50,(char *)&local_60,
                           "String literal contains malformed escape sequence");
    if (*(long *)(lVar1 + 0x28) != local_28) goto LAB_00ef5f2c;
  }
  else {
    this = (AstExprConstantString *)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),0x30);
    AstExprConstantString::AstExprConstantString(this,(Location *)&local_50,aAStack_40);
    if (*(long *)(lVar1 + 0x28) != local_28) {
LAB_00ef5f2c:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return this;
}


