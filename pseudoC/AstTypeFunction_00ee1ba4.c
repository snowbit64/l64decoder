// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstTypeFunction
// Entry Point: 00ee1ba4
// Size: 116 bytes
// Signature: undefined __thiscall AstTypeFunction(AstTypeFunction * this, Location * param_1, AstArray * param_2, AstArray * param_3, AstTypeList * param_4, AstArray * param_5, AstTypeList * param_6)


/* Luau::AstTypeFunction::AstTypeFunction(Luau::Location const&,
   Luau::AstArray<Luau::AstGenericType> const&, Luau::AstArray<Luau::AstGenericTypePack> const&,
   Luau::AstTypeList const&, Luau::AstArray<std::__ndk1::optional<std::__ndk1::pair<Luau::AstName,
   Luau::Location> > > const&, Luau::AstTypeList const&) */

void __thiscall
Luau::AstTypeFunction::AstTypeFunction
          (AstTypeFunction *this,Location *param_1,AstArray *param_2,AstArray *param_3,
          AstTypeList *param_4,AstArray *param_5,AstTypeList *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(this + 8) = AstRtti<Luau::AstTypeFunction>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)param_1;
  *(undefined ***)this = &PTR_visit_01015d18;
  *(undefined8 *)(this + 0x14) = uVar2;
  *(undefined8 *)(this + 0xc) = uVar1;
  uVar1 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x20) = uVar1;
  uVar1 = *(undefined8 *)param_3;
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(this + 0x30) = uVar1;
  uVar2 = *(undefined8 *)param_4;
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(this + 0x40) = uVar2;
  *(undefined8 *)(this + 0x50) = uVar1;
  uVar1 = *(undefined8 *)param_5;
  *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_5 + 8);
  *(undefined8 *)(this + 0x58) = uVar1;
  uVar2 = *(undefined8 *)param_6;
  uVar1 = *(undefined8 *)(param_6 + 0x10);
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_6 + 8);
  *(undefined8 *)(this + 0x68) = uVar2;
  *(undefined8 *)(this + 0x78) = uVar1;
  return;
}


