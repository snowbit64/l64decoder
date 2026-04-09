// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstStatDeclareFunction
// Entry Point: 00ee16d0
// Size: 128 bytes
// Signature: undefined __thiscall AstStatDeclareFunction(AstStatDeclareFunction * this, Location * param_1, AstName * param_2, AstArray * param_3, AstArray * param_4, AstTypeList * param_5, AstArray * param_6, AstTypeList * param_7)


/* Luau::AstStatDeclareFunction::AstStatDeclareFunction(Luau::Location const&, Luau::AstName const&,
   Luau::AstArray<Luau::AstGenericType> const&, Luau::AstArray<Luau::AstGenericTypePack> const&,
   Luau::AstTypeList const&, Luau::AstArray<std::__ndk1::pair<Luau::AstName, Luau::Location> >
   const&, Luau::AstTypeList const&) */

void __thiscall
Luau::AstStatDeclareFunction::AstStatDeclareFunction
          (AstStatDeclareFunction *this,Location *param_1,AstName *param_2,AstArray *param_3,
          AstArray *param_4,AstTypeList *param_5,AstArray *param_6,AstTypeList *param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = AstRtti<Luau::AstStatDeclareFunction>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  *(undefined4 *)(this + 8) = uVar1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  this[0x1c] = (AstStatDeclareFunction)0x0;
  *(undefined8 *)(this + 0x14) = uVar3;
  *(undefined8 *)(this + 0xc) = uVar2;
  uVar2 = *(undefined8 *)param_2;
  *(undefined ***)this = &PTR_visit_01015c28;
  *(undefined8 *)(this + 0x20) = uVar2;
  uVar2 = *(undefined8 *)param_3;
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(this + 0x28) = uVar2;
  uVar2 = *(undefined8 *)param_4;
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(this + 0x38) = uVar2;
  uVar3 = *(undefined8 *)param_5;
  uVar2 = *(undefined8 *)(param_5 + 0x10);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_5 + 8);
  *(undefined8 *)(this + 0x48) = uVar3;
  *(undefined8 *)(this + 0x58) = uVar2;
  uVar2 = *(undefined8 *)param_6;
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_6 + 8);
  *(undefined8 *)(this + 0x60) = uVar2;
  uVar3 = *(undefined8 *)param_7;
  uVar2 = *(undefined8 *)(param_7 + 0x10);
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(param_7 + 8);
  *(undefined8 *)(this + 0x70) = uVar3;
  *(undefined8 *)(this + 0x80) = uVar2;
  return;
}


