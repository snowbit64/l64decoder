// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00ed13fc
// Size: 12 bytes
// Signature: undefined __cdecl visit(AstStatContinue * param_1)


/* Luau::AstVisitor::visit(Luau::AstStatContinue*) */

void Luau::AstVisitor::visit(AstStatContinue *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ed1404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0xb8))();
  return;
}


