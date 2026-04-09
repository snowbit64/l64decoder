// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseBreak
// Entry Point: 00eecfb8
// Size: 228 bytes
// Signature: undefined parseBreak(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::parseBreak() */

AstStatBreak * Luau::Parser::parseBreak(void)

{
  long lVar1;
  Location *in_x0;
  AstStatBreak *pAVar2;
  AstStatBreak **local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_48 = *(undefined8 *)(in_x0 + 0x34);
  local_50 = *(undefined8 *)(in_x0 + 0x2c);
  nextLexeme();
  if (*(int *)(*(long *)(in_x0 + 0xf8) + -4) == 0) {
    local_60 = 0;
    uStack_58 = 0;
    pAVar2 = (AstStatBreak *)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),0x20);
    AstStatBreak::AstStatBreak(pAVar2,(Location *)&local_50);
    local_70 = (AstStatBreak **)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),8);
    *local_70 = pAVar2;
    uStack_68 = 1;
    pAVar2 = (AstStatBreak *)
             reportStatError(in_x0,(AstArray *)&local_50,(AstArray *)&local_60,(char *)&local_70,
                             "break statement must be inside a loop");
    if (*(long *)(lVar1 + 0x28) != local_38) goto LAB_00eed098;
  }
  else {
    pAVar2 = (AstStatBreak *)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),0x20);
    AstStatBreak::AstStatBreak(pAVar2,(Location *)&local_50);
    if (*(long *)(lVar1 + 0x28) != local_38) {
LAB_00eed098:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return pAVar2;
}


