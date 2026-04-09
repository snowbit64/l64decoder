// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIdentifier
// Entry Point: 00ee2214
// Size: 80 bytes
// Signature: undefined __cdecl getIdentifier(AstExpr * param_1)


/* Luau::getIdentifier(Luau::AstExpr*) */

undefined8 Luau::getIdentifier(AstExpr *param_1)

{
  undefined8 *puVar1;
  
  if ((param_1 == (AstExpr *)0x0) || (*(int *)(param_1 + 8) != AstRtti<Luau::AstExprGlobal>::value))
  {
    if (param_1 == (AstExpr *)0x0) {
      return 0;
    }
    if (*(int *)(param_1 + 8) != AstRtti<Luau::AstExprLocal>::value) {
      return 0;
    }
    puVar1 = *(undefined8 **)(param_1 + 0x20);
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 0x20);
  }
  return *puVar1;
}


