// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstExprGroup
// Entry Point: 00edfc24
// Size: 64 bytes
// Signature: undefined __thiscall AstExprGroup(AstExprGroup * this, Location * param_1, AstExpr * param_2)


/* Luau::AstExprGroup::AstExprGroup(Luau::Location const&, Luau::AstExpr*) */

void __thiscall
Luau::AstExprGroup::AstExprGroup(AstExprGroup *this,Location *param_1,AstExpr *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(this + 8) = AstRtti<Luau::AstExprGroup>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)param_1;
  *(AstExpr **)(this + 0x20) = param_2;
  *(undefined ***)this = &PTR_visit_01015568;
  *(undefined8 *)(this + 0x14) = uVar2;
  *(undefined8 *)(this + 0xc) = uVar1;
  return;
}


