// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstStatIf
// Entry Point: 00ee0a60
// Size: 108 bytes
// Signature: undefined __thiscall AstStatIf(AstStatIf * this, Location * param_1, AstExpr * param_2, AstStatBlock * param_3, AstStat * param_4, optional * param_5, optional * param_6, bool param_7)


/* Luau::AstStatIf::AstStatIf(Luau::Location const&, Luau::AstExpr*, Luau::AstStatBlock*,
   Luau::AstStat*, std::__ndk1::optional<Luau::Location> const&,
   std::__ndk1::optional<Luau::Location> const&, bool) */

void __thiscall
Luau::AstStatIf::AstStatIf
          (AstStatIf *this,Location *param_1,AstExpr *param_2,AstStatBlock *param_3,AstStat *param_4
          ,optional *param_5,optional *param_6,bool param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = AstRtti<Luau::AstStatIf>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  *(undefined4 *)(this + 8) = uVar1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  this[0x1c] = (AstStatIf)0x0;
  *(AstExpr **)(this + 0x20) = param_2;
  *(AstStatBlock **)(this + 0x28) = param_3;
  *(AstStat **)(this + 0x30) = param_4;
  *(undefined8 *)(this + 0x14) = uVar3;
  *(undefined8 *)(this + 0xc) = uVar2;
  *(undefined ***)this = &PTR_visit_01015928;
  uVar3 = *(undefined8 *)(param_5 + 8);
  uVar2 = *(undefined8 *)param_5;
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_5 + 0x10);
  *(undefined8 *)(this + 0x40) = uVar3;
  *(undefined8 *)(this + 0x38) = uVar2;
  uVar3 = *(undefined8 *)(param_6 + 8);
  uVar2 = *(undefined8 *)param_6;
  uVar1 = *(undefined4 *)(param_6 + 0x10);
  this[0x60] = (AstStatIf)param_7;
  *(undefined8 *)(this + 0x54) = uVar3;
  *(undefined8 *)(this + 0x4c) = uVar2;
  *(undefined4 *)(this + 0x5c) = uVar1;
  return;
}


