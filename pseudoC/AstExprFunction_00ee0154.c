// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstExprFunction
// Entry Point: 00ee0154
// Size: 176 bytes
// Signature: undefined __thiscall AstExprFunction(AstExprFunction * this, Location * param_1, AstArray * param_2, AstArray * param_3, AstLocal * param_4, AstArray * param_5, bool param_6, Location * param_7, AstStatBlock * param_8, ulong param_9, AstName * param_10, optional * param_11, AstTypePack * param_12, bool param_13, optional * param_14)


/* Luau::AstExprFunction::AstExprFunction(Luau::Location const&,
   Luau::AstArray<Luau::AstGenericType> const&, Luau::AstArray<Luau::AstGenericTypePack> const&,
   Luau::AstLocal*, Luau::AstArray<Luau::AstLocal*> const&, bool, Luau::Location const&,
   Luau::AstStatBlock*, unsigned long, Luau::AstName const&,
   std::__ndk1::optional<Luau::AstTypeList> const&, Luau::AstTypePack*, bool,
   std::__ndk1::optional<Luau::Location> const&) */

void __thiscall
Luau::AstExprFunction::AstExprFunction
          (AstExprFunction *this,Location *param_1,AstArray *param_2,AstArray *param_3,
          AstLocal *param_4,AstArray *param_5,bool param_6,Location *param_7,AstStatBlock *param_8,
          ulong param_9,AstName *param_10,optional *param_11,AstTypePack *param_12,bool param_13,
          optional *param_14)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined4 *)(this + 8) = AstRtti<Luau::AstExprFunction>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)param_1;
  *(undefined ***)this = &PTR_visit_01015778;
  *(undefined8 *)(this + 0x14) = uVar2;
  *(undefined8 *)(this + 0xc) = uVar1;
  uVar1 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x20) = uVar1;
  uVar2 = *(undefined8 *)(param_3 + 8);
  uVar1 = *(undefined8 *)param_3;
  *(AstLocal **)(this + 0x40) = param_4;
  *(undefined8 *)(this + 0x38) = uVar2;
  *(undefined8 *)(this + 0x30) = uVar1;
  uVar1 = *(undefined8 *)param_5;
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_5 + 8);
  *(undefined8 *)(this + 0x48) = uVar1;
  uVar2 = *(undefined8 *)(param_11 + 8);
  uVar1 = *(undefined8 *)param_11;
  uVar4 = *(undefined8 *)(param_11 + 0x18);
  uVar3 = *(undefined8 *)(param_11 + 0x10);
  this[0x78] = (AstExprFunction)param_6;
  *(undefined8 *)(this + 0x60) = uVar2;
  *(undefined8 *)(this + 0x58) = uVar1;
  *(undefined8 *)(this + 0x70) = uVar4;
  *(undefined8 *)(this + 0x68) = uVar3;
  uVar2 = *(undefined8 *)(param_7 + 8);
  uVar1 = *(undefined8 *)param_7;
  *(AstStatBlock **)(this + 0x98) = param_8;
  *(AstTypePack **)(this + 0x90) = param_12;
  *(undefined8 *)(this + 0x84) = uVar2;
  *(undefined8 *)(this + 0x7c) = uVar1;
  uVar1 = *(undefined8 *)param_10;
  this[0xb0] = (AstExprFunction)param_13;
  *(ulong *)(this + 0xa0) = param_9;
  *(undefined8 *)(this + 0xa8) = uVar1;
  uVar2 = *(undefined8 *)(param_14 + 8);
  uVar1 = *(undefined8 *)param_14;
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_14 + 0x10);
  *(undefined8 *)(this + 0xbc) = uVar2;
  *(undefined8 *)(this + 0xb4) = uVar1;
  return;
}


