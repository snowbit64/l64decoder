// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstExprUnary
// Entry Point: 00ee03e0
// Size: 68 bytes
// Signature: undefined __thiscall AstExprUnary(AstExprUnary * this, Location * param_1, Op param_2, AstExpr * param_3)


/* Luau::AstExprUnary::AstExprUnary(Luau::Location const&, Luau::AstExprUnary::Op, Luau::AstExpr*)
    */

void __thiscall
Luau::AstExprUnary::AstExprUnary(AstExprUnary *this,Location *param_1,Op param_2,AstExpr *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = AstRtti<Luau::AstExprUnary>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  *(undefined4 *)(this + 8) = uVar1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  *(Op *)(this + 0x1c) = param_2;
  *(undefined ***)this = &PTR_visit_010157d8;
  *(AstExpr **)(this + 0x20) = param_3;
  *(undefined8 *)(this + 0x14) = uVar3;
  *(undefined8 *)(this + 0xc) = uVar2;
  return;
}


