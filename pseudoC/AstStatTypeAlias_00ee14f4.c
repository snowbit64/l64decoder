// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstStatTypeAlias
// Entry Point: 00ee14f4
// Size: 96 bytes
// Signature: undefined __thiscall AstStatTypeAlias(AstStatTypeAlias * this, Location * param_1, AstName * param_2, AstArray * param_3, AstArray * param_4, AstType * param_5, bool param_6)


/* Luau::AstStatTypeAlias::AstStatTypeAlias(Luau::Location const&, Luau::AstName const&,
   Luau::AstArray<Luau::AstGenericType> const&, Luau::AstArray<Luau::AstGenericTypePack> const&,
   Luau::AstType*, bool) */

void __thiscall
Luau::AstStatTypeAlias::AstStatTypeAlias
          (AstStatTypeAlias *this,Location *param_1,AstName *param_2,AstArray *param_3,
          AstArray *param_4,AstType *param_5,bool param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = AstRtti<Luau::AstStatTypeAlias>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  *(undefined4 *)(this + 8) = uVar1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  this[0x1c] = (AstStatTypeAlias)0x0;
  *(undefined8 *)(this + 0x14) = uVar3;
  *(undefined8 *)(this + 0xc) = uVar2;
  uVar2 = *(undefined8 *)param_2;
  *(undefined ***)this = &PTR_visit_01015bc8;
  *(undefined8 *)(this + 0x20) = uVar2;
  uVar2 = *(undefined8 *)param_3;
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(this + 0x28) = uVar2;
  uVar3 = *(undefined8 *)(param_4 + 8);
  uVar2 = *(undefined8 *)param_4;
  *(AstType **)(this + 0x48) = param_5;
  this[0x50] = (AstStatTypeAlias)param_6;
  *(undefined8 *)(this + 0x40) = uVar3;
  *(undefined8 *)(this + 0x38) = uVar2;
  return;
}


