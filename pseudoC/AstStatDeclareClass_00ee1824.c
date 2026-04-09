// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstStatDeclareClass
// Entry Point: 00ee1824
// Size: 84 bytes
// Signature: undefined __thiscall AstStatDeclareClass(AstStatDeclareClass * this, Location * param_1, AstName * param_2, optional param_3, AstArray * param_4)


/* Luau::AstStatDeclareClass::AstStatDeclareClass(Luau::Location const&, Luau::AstName const&,
   std::__ndk1::optional<Luau::AstName>, Luau::AstArray<Luau::AstDeclaredClassProp> const&) */

void __thiscall
Luau::AstStatDeclareClass::AstStatDeclareClass
          (AstStatDeclareClass *this,undefined8 *param_1,undefined8 *param_2,undefined8 param_4,
          undefined8 param_5,undefined8 *param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = AstRtti<Luau::AstStatDeclareClass>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  *(undefined4 *)(this + 8) = uVar1;
  uVar3 = param_1[1];
  uVar2 = *param_1;
  this[0x1c] = (AstStatDeclareClass)0x0;
  *(undefined8 *)(this + 0x14) = uVar3;
  *(undefined8 *)(this + 0xc) = uVar2;
  uVar2 = *param_2;
  *(undefined8 *)(this + 0x30) = param_5;
  *(undefined ***)this = &PTR_visit_01015c58;
  *(undefined8 *)(this + 0x20) = uVar2;
  *(undefined8 *)(this + 0x28) = param_4;
  uVar2 = *param_6;
  *(undefined8 *)(this + 0x40) = param_6[1];
  *(undefined8 *)(this + 0x38) = uVar2;
  return;
}


