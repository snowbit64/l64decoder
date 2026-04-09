// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: validateContinueUntil
// Entry Point: 00ed3704
// Size: 156 bytes
// Signature: undefined __thiscall validateContinueUntil(Compiler * this, AstStat * param_1, AstExpr * param_2)


/* Luau::Compiler::validateContinueUntil(Luau::AstStat*, Luau::AstExpr*) */

void __thiscall
Luau::Compiler::validateContinueUntil(Compiler *this,AstStat *param_1,AstExpr *param_2)

{
  long lVar1;
  undefined **local_50;
  Compiler *pCStack_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = &PTR__AstVisitor_01014d88;
  local_40 = (undefined8 *)0x0;
  pCStack_48 = this;
  (***(code ***)param_2)(param_2,&local_50);
  if (local_40 != (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(param_2 + 0xc),
                        "Local %s used in the repeat..until condition is undefined because continue statement on line %d jumps over it"
                        ,*local_40,(ulong)(*(int *)(param_1 + 0xc) + 1));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


