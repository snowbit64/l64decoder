// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstExprConstantBool
// Entry Point: 00edfd0c
// Size: 64 bytes
// Signature: undefined __thiscall AstExprConstantBool(AstExprConstantBool * this, Location * param_1, bool param_2)


/* Luau::AstExprConstantBool::AstExprConstantBool(Luau::Location const&, bool) */

void __thiscall
Luau::AstExprConstantBool::AstExprConstantBool
          (AstExprConstantBool *this,Location *param_1,bool param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(this + 8) = AstRtti<Luau::AstExprConstantBool>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)param_1;
  this[0x1c] = (AstExprConstantBool)param_2;
  *(undefined ***)this = &PTR_visit_010155c8;
  *(undefined8 *)(this + 0x14) = uVar2;
  *(undefined8 *)(this + 0xc) = uVar1;
  return;
}


