// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstExprTypeAssertion
// Entry Point: 00ee06cc
// Size: 64 bytes
// Signature: undefined __thiscall AstExprTypeAssertion(AstExprTypeAssertion * this, Location * param_1, AstExpr * param_2, AstType * param_3)


/* Luau::AstExprTypeAssertion::AstExprTypeAssertion(Luau::Location const&, Luau::AstExpr*,
   Luau::AstType*) */

void __thiscall
Luau::AstExprTypeAssertion::AstExprTypeAssertion
          (AstExprTypeAssertion *this,Location *param_1,AstExpr *param_2,AstType *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(this + 8) = AstRtti<Luau::AstExprTypeAssertion>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)param_1;
  *(AstExpr **)(this + 0x20) = param_2;
  *(AstType **)(this + 0x28) = param_3;
  *(undefined ***)this = &PTR_visit_01015838;
  *(undefined8 *)(this + 0x14) = uVar2;
  *(undefined8 *)(this + 0xc) = uVar1;
  return;
}


