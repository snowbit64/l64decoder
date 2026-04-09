// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstExprCall
// Entry Point: 00edff28
// Size: 84 bytes
// Signature: undefined __thiscall AstExprCall(AstExprCall * this, Location * param_1, AstExpr * param_2, AstArray * param_3, bool param_4, Location * param_5)


/* Luau::AstExprCall::AstExprCall(Luau::Location const&, Luau::AstExpr*,
   Luau::AstArray<Luau::AstExpr*> const&, bool, Luau::Location const&) */

void __thiscall
Luau::AstExprCall::AstExprCall
          (AstExprCall *this,Location *param_1,AstExpr *param_2,AstArray *param_3,bool param_4,
          Location *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = AstRtti<Luau::AstExprCall>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  *(undefined4 *)(this + 8) = uVar1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  *(AstExpr **)(this + 0x20) = param_2;
  *(undefined ***)this = &PTR_visit_010156e8;
  *(undefined8 *)(this + 0x14) = uVar3;
  *(undefined8 *)(this + 0xc) = uVar2;
  uVar3 = *(undefined8 *)(param_3 + 8);
  uVar2 = *(undefined8 *)param_3;
  this[0x38] = (AstExprCall)param_4;
  *(undefined8 *)(this + 0x30) = uVar3;
  *(undefined8 *)(this + 0x28) = uVar2;
  uVar2 = *(undefined8 *)param_5;
  *(undefined8 *)(this + 0x44) = *(undefined8 *)(param_5 + 8);
  *(undefined8 *)(this + 0x3c) = uVar2;
  return;
}


