// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseTypeAnnotation
// Entry Point: 00ef0624
// Size: 240 bytes
// Signature: undefined parseTypeAnnotation(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::parseTypeAnnotation() */

void Luau::Parser::parseTypeAnnotation(void)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  Parser *in_x0;
  undefined local_78 [16];
  long *local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  uVar5 = FInt::LuauRecursionLimit;
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  iVar3 = *(int *)(in_x0 + 0xbc);
  uVar1 = iVar3 + 1;
  *(uint *)(in_x0 + 0xbc) = uVar1;
  if (uVar5 < uVar1) {
    ParseError::raise((Location *)(in_x0 + 0x2c),
                      "Exceeded allowed recursion depth; simplify your %s to make the code compile",
                      "type annotation");
  }
  else {
    local_68 = (long *)(in_x0 + 0x250);
    local_58 = 0;
    uStack_48 = *(undefined8 *)(in_x0 + 0x34);
    local_50 = *(undefined8 *)(in_x0 + 0x2c);
    lStack_60 = *(long *)(in_x0 + 600) - *(long *)(in_x0 + 0x250) >> 3;
                    /* try { // try from 00ef068c to 00ef06a7 has its CatchHandler @ 00ef0718 */
    local_78 = parseSimpleTypeAnnotation(in_x0,false);
    TempVector<Luau::AstType*>::push_back
              ((TempVector<Luau::AstType*> *)&local_68,(AstType **)local_78);
    *(int *)(in_x0 + 0xbc) = iVar3;
                    /* try { // try from 00ef06ac to 00ef06bb has its CatchHandler @ 00ef0714 */
    parseTypeAnnotation(in_x0,(TempVector *)&local_68,(Location *)&local_50);
    lVar2 = *local_68 + lStack_60 * 8;
    if (lVar2 != local_68[1]) {
      local_68[1] = lVar2;
    }
    if (*(long *)(lVar4 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


