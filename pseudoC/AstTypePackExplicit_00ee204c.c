// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstTypePackExplicit
// Entry Point: 00ee204c
// Size: 76 bytes
// Signature: undefined __thiscall AstTypePackExplicit(AstTypePackExplicit * this, Location * param_1, AstTypeList param_2)


/* Luau::AstTypePackExplicit::AstTypePackExplicit(Luau::Location const&, Luau::AstTypeList) */

void __thiscall
Luau::AstTypePackExplicit::AstTypePackExplicit
          (AstTypePackExplicit *this,undefined8 *param_1,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(this + 8) = AstRtti<Luau::AstTypePackExplicit>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  uVar2 = param_1[1];
  uVar1 = *param_1;
  *(undefined ***)this = &PTR_visit_01015e68;
  *(undefined8 *)(this + 0x14) = uVar2;
  *(undefined8 *)(this + 0xc) = uVar1;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(this + 0x30) = param_3[2];
  *(undefined8 *)(this + 0x28) = uVar2;
  *(undefined8 *)(this + 0x20) = uVar1;
  return;
}


