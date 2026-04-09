// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstStatFor
// Entry Point: 00ee0fc0
// Size: 100 bytes
// Signature: undefined __thiscall AstStatFor(AstStatFor * this, Location * param_1, AstLocal * param_2, AstExpr * param_3, AstExpr * param_4, AstExpr * param_5, AstStatBlock * param_6, bool param_7, Location * param_8, bool param_9)


/* Luau::AstStatFor::AstStatFor(Luau::Location const&, Luau::AstLocal*, Luau::AstExpr*,
   Luau::AstExpr*, Luau::AstExpr*, Luau::AstStatBlock*, bool, Luau::Location const&, bool) */

void __thiscall
Luau::AstStatFor::AstStatFor
          (AstStatFor *this,Location *param_1,AstLocal *param_2,AstExpr *param_3,AstExpr *param_4,
          AstExpr *param_5,AstStatBlock *param_6,bool param_7,Location *param_8,bool param_9)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = AstRtti<Luau::AstStatFor>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  *(undefined4 *)(this + 8) = uVar1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  this[0x1c] = (AstStatFor)0x0;
  *(AstLocal **)(this + 0x20) = param_2;
  *(AstExpr **)(this + 0x28) = param_3;
  *(AstExpr **)(this + 0x30) = param_4;
  *(undefined8 *)(this + 0x14) = uVar3;
  *(undefined8 *)(this + 0xc) = uVar2;
  *(AstExpr **)(this + 0x38) = param_5;
  *(AstStatBlock **)(this + 0x40) = param_6;
  *(undefined ***)this = &PTR_visit_01015aa8;
  this[0x48] = (AstStatFor)param_7;
  uVar2 = *(undefined8 *)param_8;
  *(undefined8 *)(this + 0x54) = *(undefined8 *)(param_8 + 8);
  *(undefined8 *)(this + 0x4c) = uVar2;
  this[0x5c] = (AstStatFor)param_9;
  return;
}


