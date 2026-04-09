// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstExprConstantNil
// Entry Point: 00edfcb8
// Size: 60 bytes
// Signature: undefined __thiscall AstExprConstantNil(AstExprConstantNil * this, Location * param_1)


/* Luau::AstExprConstantNil::AstExprConstantNil(Luau::Location const&) */

void __thiscall
Luau::AstExprConstantNil::AstExprConstantNil(AstExprConstantNil *this,Location *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = AstRtti<Luau::AstExprConstantNil>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  *(undefined4 *)(this + 8) = uVar1;
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0xc) = uVar2;
  *(undefined ***)this = &PTR_visit_01015598;
  return;
}


