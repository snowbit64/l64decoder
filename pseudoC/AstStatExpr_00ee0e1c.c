// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstStatExpr
// Entry Point: 00ee0e1c
// Size: 68 bytes
// Signature: undefined __thiscall AstStatExpr(AstStatExpr * this, Location * param_1, AstExpr * param_2)


/* Luau::AstStatExpr::AstStatExpr(Luau::Location const&, Luau::AstExpr*) */

void __thiscall Luau::AstStatExpr::AstStatExpr(AstStatExpr *this,Location *param_1,AstExpr *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(this + 8) = AstRtti<Luau::AstStatExpr>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)param_1;
  this[0x1c] = (AstStatExpr)0x0;
  *(AstExpr **)(this + 0x20) = param_2;
  *(undefined ***)this = &PTR_visit_01015a48;
  *(undefined8 *)(this + 0x14) = uVar2;
  *(undefined8 *)(this + 0xc) = uVar1;
  return;
}


