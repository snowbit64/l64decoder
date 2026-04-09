// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstExprIndexName
// Entry Point: 00edfffc
// Size: 92 bytes
// Signature: undefined __thiscall AstExprIndexName(AstExprIndexName * this, Location * param_1, AstExpr * param_2, AstName * param_3, Location * param_4, Position * param_5, char param_6)


/* Luau::AstExprIndexName::AstExprIndexName(Luau::Location const&, Luau::AstExpr*, Luau::AstName
   const&, Luau::Location const&, Luau::Position const&, char) */

void __thiscall
Luau::AstExprIndexName::AstExprIndexName
          (AstExprIndexName *this,Location *param_1,AstExpr *param_2,AstName *param_3,
          Location *param_4,Position *param_5,char param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = AstRtti<Luau::AstExprIndexName>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  *(undefined4 *)(this + 8) = uVar1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  *(AstExpr **)(this + 0x20) = param_2;
  *(undefined8 *)(this + 0x14) = uVar3;
  *(undefined8 *)(this + 0xc) = uVar2;
  uVar2 = *(undefined8 *)param_3;
  *(undefined ***)this = &PTR_visit_01015718;
  *(undefined8 *)(this + 0x28) = uVar2;
  uVar2 = *(undefined8 *)param_4;
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(this + 0x30) = uVar2;
  uVar2 = *(undefined8 *)param_5;
  this[0x48] = (AstExprIndexName)param_6;
  *(undefined8 *)(this + 0x40) = uVar2;
  return;
}


