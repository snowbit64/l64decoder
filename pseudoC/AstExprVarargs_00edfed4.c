// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstExprVarargs
// Entry Point: 00edfed4
// Size: 60 bytes
// Signature: undefined __thiscall AstExprVarargs(AstExprVarargs * this, Location * param_1)


/* Luau::AstExprVarargs::AstExprVarargs(Luau::Location const&) */

void __thiscall Luau::AstExprVarargs::AstExprVarargs(AstExprVarargs *this,Location *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = AstRtti<Luau::AstExprVarargs>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  *(undefined4 *)(this + 8) = uVar1;
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0xc) = uVar2;
  *(undefined ***)this = &PTR_visit_010156b8;
  return;
}


