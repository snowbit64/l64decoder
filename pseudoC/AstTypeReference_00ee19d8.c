// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstTypeReference
// Entry Point: 00ee19d8
// Size: 80 bytes
// Signature: undefined __thiscall AstTypeReference(AstTypeReference * this, Location * param_1, optional param_2, AstName param_3, bool param_4, AstArray * param_5)


/* Luau::AstTypeReference::AstTypeReference(Luau::Location const&,
   std::__ndk1::optional<Luau::AstName>, Luau::AstName, bool, Luau::AstArray<Luau::AstTypeOrPack>
   const&) */

void __thiscall
Luau::AstTypeReference::AstTypeReference
          (AstTypeReference *this,undefined8 *param_1,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,AstTypeReference param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = AstRtti<Luau::AstTypeReference>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  *(undefined4 *)(this + 8) = uVar1;
  uVar3 = param_1[1];
  uVar2 = *param_1;
  this[0x1c] = param_6;
  *(undefined ***)this = &PTR_visit_01015cb8;
  *(undefined8 *)(this + 0x20) = param_3;
  *(undefined8 *)(this + 0x28) = param_4;
  *(undefined8 *)(this + 0x14) = uVar3;
  *(undefined8 *)(this + 0xc) = uVar2;
  *(undefined8 *)(this + 0x30) = param_5;
  uVar2 = *param_7;
  *(undefined8 *)(this + 0x40) = param_7[1];
  *(undefined8 *)(this + 0x38) = uVar2;
  return;
}


