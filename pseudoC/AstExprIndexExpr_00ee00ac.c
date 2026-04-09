// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstExprIndexExpr
// Entry Point: 00ee00ac
// Size: 64 bytes
// Signature: undefined __thiscall AstExprIndexExpr(AstExprIndexExpr * this, Location * param_1, AstExpr * param_2, AstExpr * param_3)


/* Luau::AstExprIndexExpr::AstExprIndexExpr(Luau::Location const&, Luau::AstExpr*, Luau::AstExpr*)
    */

void __thiscall
Luau::AstExprIndexExpr::AstExprIndexExpr
          (AstExprIndexExpr *this,Location *param_1,AstExpr *param_2,AstExpr *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(this + 8) = AstRtti<Luau::AstExprIndexExpr>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)param_1;
  *(AstExpr **)(this + 0x20) = param_2;
  *(AstExpr **)(this + 0x28) = param_3;
  *(undefined ***)this = &PTR_visit_01015748;
  *(undefined8 *)(this + 0x14) = uVar2;
  *(undefined8 *)(this + 0xc) = uVar1;
  return;
}


