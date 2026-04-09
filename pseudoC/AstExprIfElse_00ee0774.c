// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstExprIfElse
// Entry Point: 00ee0774
// Size: 80 bytes
// Signature: undefined __thiscall AstExprIfElse(AstExprIfElse * this, Location * param_1, AstExpr * param_2, bool param_3, AstExpr * param_4, bool param_5, AstExpr * param_6)


/* Luau::AstExprIfElse::AstExprIfElse(Luau::Location const&, Luau::AstExpr*, bool, Luau::AstExpr*,
   bool, Luau::AstExpr*) */

void __thiscall
Luau::AstExprIfElse::AstExprIfElse
          (AstExprIfElse *this,Location *param_1,AstExpr *param_2,bool param_3,AstExpr *param_4,
          bool param_5,AstExpr *param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = AstRtti<Luau::AstExprIfElse>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  *(undefined4 *)(this + 8) = uVar1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  *(AstExpr **)(this + 0x20) = param_2;
  *(undefined ***)this = &PTR_visit_01015868;
  this[0x28] = (AstExprIfElse)param_3;
  *(undefined8 *)(this + 0x14) = uVar3;
  *(undefined8 *)(this + 0xc) = uVar2;
  *(AstExpr **)(this + 0x30) = param_4;
  this[0x38] = (AstExprIfElse)param_5;
  *(AstExpr **)(this + 0x40) = param_6;
  return;
}


