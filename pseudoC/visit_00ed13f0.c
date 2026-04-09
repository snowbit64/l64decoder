// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00ed13f0
// Size: 12 bytes
// Signature: undefined __cdecl visit(AstStatBreak * param_1)


/* Luau::AstVisitor::visit(Luau::AstStatBreak*) */

void Luau::AstVisitor::visit(AstStatBreak *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ed13f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0xb8))();
  return;
}


