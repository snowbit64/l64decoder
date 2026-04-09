// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstStatWhile
// Entry Point: 00ee0b4c
// Size: 84 bytes
// Signature: undefined __thiscall AstStatWhile(AstStatWhile * this, Location * param_1, AstExpr * param_2, AstStatBlock * param_3, bool param_4, Location * param_5, bool param_6)


/* Luau::AstStatWhile::AstStatWhile(Luau::Location const&, Luau::AstExpr*, Luau::AstStatBlock*,
   bool, Luau::Location const&, bool) */

void __thiscall
Luau::AstStatWhile::AstStatWhile
          (AstStatWhile *this,Location *param_1,AstExpr *param_2,AstStatBlock *param_3,bool param_4,
          Location *param_5,bool param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(this + 8) = AstRtti<Luau::AstStatWhile>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)param_1;
  this[0x1c] = (AstStatWhile)0x0;
  *(AstExpr **)(this + 0x20) = param_2;
  *(AstStatBlock **)(this + 0x28) = param_3;
  *(undefined ***)this = &PTR_visit_01015958;
  *(undefined8 *)(this + 0x14) = uVar2;
  *(undefined8 *)(this + 0xc) = uVar1;
  this[0x30] = (AstStatWhile)param_4;
  uVar2 = *(undefined8 *)(param_5 + 8);
  uVar1 = *(undefined8 *)param_5;
  this[0x44] = (AstStatWhile)param_6;
  *(undefined8 *)(this + 0x3c) = uVar2;
  *(undefined8 *)(this + 0x34) = uVar1;
  return;
}


