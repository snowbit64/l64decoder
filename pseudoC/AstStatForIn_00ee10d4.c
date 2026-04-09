// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstStatForIn
// Entry Point: 00ee10d4
// Size: 120 bytes
// Signature: undefined __thiscall AstStatForIn(AstStatForIn * this, Location * param_1, AstArray * param_2, AstArray * param_3, AstStatBlock * param_4, bool param_5, Location * param_6, bool param_7, Location * param_8, bool param_9)


/* Luau::AstStatForIn::AstStatForIn(Luau::Location const&, Luau::AstArray<Luau::AstLocal*> const&,
   Luau::AstArray<Luau::AstExpr*> const&, Luau::AstStatBlock*, bool, Luau::Location const&, bool,
   Luau::Location const&, bool) */

void __thiscall
Luau::AstStatForIn::AstStatForIn
          (AstStatForIn *this,Location *param_1,AstArray *param_2,AstArray *param_3,
          AstStatBlock *param_4,bool param_5,Location *param_6,bool param_7,Location *param_8,
          bool param_9)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = AstRtti<Luau::AstStatForIn>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  *(undefined4 *)(this + 8) = uVar1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  this[0x1c] = (AstStatForIn)0x0;
  *(undefined8 *)(this + 0x14) = uVar3;
  *(undefined8 *)(this + 0xc) = uVar2;
  *(undefined ***)this = &PTR_visit_01015ad8;
  uVar2 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x20) = uVar2;
  uVar3 = *(undefined8 *)(param_3 + 8);
  uVar2 = *(undefined8 *)param_3;
  *(AstStatBlock **)(this + 0x40) = param_4;
  this[0x48] = (AstStatForIn)param_5;
  *(undefined8 *)(this + 0x38) = uVar3;
  *(undefined8 *)(this + 0x30) = uVar2;
  uVar3 = *(undefined8 *)(param_6 + 8);
  uVar2 = *(undefined8 *)param_6;
  this[0x5c] = (AstStatForIn)param_7;
  *(undefined8 *)(this + 0x54) = uVar3;
  *(undefined8 *)(this + 0x4c) = uVar2;
  uVar2 = *(undefined8 *)param_8;
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_8 + 8);
  *(undefined8 *)(this + 0x60) = uVar2;
  this[0x70] = (AstStatForIn)param_9;
  return;
}


