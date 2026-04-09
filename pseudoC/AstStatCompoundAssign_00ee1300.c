// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstStatCompoundAssign
// Entry Point: 00ee1300
// Size: 72 bytes
// Signature: undefined __thiscall AstStatCompoundAssign(AstStatCompoundAssign * this, Location * param_1, Op param_2, AstExpr * param_3, AstExpr * param_4)


/* Luau::AstStatCompoundAssign::AstStatCompoundAssign(Luau::Location const&,
   Luau::AstExprBinary::Op, Luau::AstExpr*, Luau::AstExpr*) */

void __thiscall
Luau::AstStatCompoundAssign::AstStatCompoundAssign
          (AstStatCompoundAssign *this,Location *param_1,Op param_2,AstExpr *param_3,
          AstExpr *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = AstRtti<Luau::AstStatCompoundAssign>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  *(undefined4 *)(this + 8) = uVar1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  this[0x1c] = (AstStatCompoundAssign)0x0;
  *(undefined ***)this = &PTR_visit_01015b38;
  *(Op *)(this + 0x20) = param_2;
  *(undefined8 *)(this + 0x14) = uVar3;
  *(undefined8 *)(this + 0xc) = uVar2;
  *(AstExpr **)(this + 0x28) = param_3;
  *(AstExpr **)(this + 0x30) = param_4;
  return;
}


