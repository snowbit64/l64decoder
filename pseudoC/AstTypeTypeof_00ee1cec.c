// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstTypeTypeof
// Entry Point: 00ee1cec
// Size: 64 bytes
// Signature: undefined __thiscall AstTypeTypeof(AstTypeTypeof * this, Location * param_1, AstExpr * param_2)


/* Luau::AstTypeTypeof::AstTypeTypeof(Luau::Location const&, Luau::AstExpr*) */

void __thiscall
Luau::AstTypeTypeof::AstTypeTypeof(AstTypeTypeof *this,Location *param_1,AstExpr *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(this + 8) = AstRtti<Luau::AstTypeTypeof>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)param_1;
  *(AstExpr **)(this + 0x20) = param_2;
  *(undefined ***)this = &PTR_visit_01015d48;
  *(undefined8 *)(this + 0x14) = uVar2;
  *(undefined8 *)(this + 0xc) = uVar1;
  return;
}


