// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstStatFunction
// Entry Point: 00ee13b0
// Size: 68 bytes
// Signature: undefined __thiscall AstStatFunction(AstStatFunction * this, Location * param_1, AstExpr * param_2, AstExprFunction * param_3)


/* Luau::AstStatFunction::AstStatFunction(Luau::Location const&, Luau::AstExpr*,
   Luau::AstExprFunction*) */

void __thiscall
Luau::AstStatFunction::AstStatFunction
          (AstStatFunction *this,Location *param_1,AstExpr *param_2,AstExprFunction *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(this + 8) = AstRtti<Luau::AstStatFunction>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)param_1;
  this[0x1c] = (AstStatFunction)0x0;
  *(AstExpr **)(this + 0x20) = param_2;
  *(AstExprFunction **)(this + 0x28) = param_3;
  *(undefined ***)this = &PTR_visit_01015b68;
  *(undefined8 *)(this + 0x14) = uVar2;
  *(undefined8 *)(this + 0xc) = uVar1;
  return;
}


