// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseContinue
// Entry Point: 00eedb60
// Size: 220 bytes
// Signature: undefined __thiscall parseContinue(Parser * this, Location * param_1)


/* Luau::Parser::parseContinue(Luau::Location const&) */

AstStatContinue * __thiscall Luau::Parser::parseContinue(Parser *this,Location *param_1)

{
  long lVar1;
  AstStatContinue *pAVar2;
  AstStatContinue **local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(*(long *)(this + 0xf8) + -4) == 0) {
    local_48 = 0;
    uStack_40 = 0;
    pAVar2 = (AstStatContinue *)Allocator::allocate(*(Allocator **)(this + 0x80),0x20);
    AstStatContinue::AstStatContinue(pAVar2,param_1);
    local_58 = (AstStatContinue **)Allocator::allocate(*(Allocator **)(this + 0x80),8);
    *local_58 = pAVar2;
    uStack_50 = 1;
    pAVar2 = (AstStatContinue *)
             reportStatError((Location *)this,(AstArray *)param_1,(AstArray *)&local_48,
                             (char *)&local_58,"continue statement must be inside a loop");
    if (*(long *)(lVar1 + 0x28) != local_38) goto LAB_00eedc38;
  }
  else {
    pAVar2 = (AstStatContinue *)Allocator::allocate(*(Allocator **)(this + 0x80),0x20);
    AstStatContinue::AstStatContinue(pAVar2,param_1);
    if (*(long *)(lVar1 + 0x28) != local_38) {
LAB_00eedc38:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return pAVar2;
}


