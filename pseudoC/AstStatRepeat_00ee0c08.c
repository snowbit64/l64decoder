// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstStatRepeat
// Entry Point: 00ee0c08
// Size: 72 bytes
// Signature: undefined __thiscall AstStatRepeat(AstStatRepeat * this, Location * param_1, AstExpr * param_2, AstStatBlock * param_3, bool param_4)


/* Luau::AstStatRepeat::AstStatRepeat(Luau::Location const&, Luau::AstExpr*, Luau::AstStatBlock*,
   bool) */

void __thiscall
Luau::AstStatRepeat::AstStatRepeat
          (AstStatRepeat *this,Location *param_1,AstExpr *param_2,AstStatBlock *param_3,bool param_4
          )

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = AstRtti<Luau::AstStatRepeat>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  *(undefined4 *)(this + 8) = uVar1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  this[0x1c] = (AstStatRepeat)0x0;
  *(undefined ***)this = &PTR_visit_01015988;
  *(AstExpr **)(this + 0x20) = param_2;
  *(AstStatBlock **)(this + 0x28) = param_3;
  *(undefined8 *)(this + 0x14) = uVar3;
  *(undefined8 *)(this + 0xc) = uVar2;
  this[0x30] = (AstStatRepeat)param_4;
  return;
}


