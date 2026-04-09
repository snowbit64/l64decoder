// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstExprInterpString
// Entry Point: 00ee0888
// Size: 76 bytes
// Signature: undefined __thiscall AstExprInterpString(AstExprInterpString * this, Location * param_1, AstArray * param_2, AstArray * param_3)


/* Luau::AstExprInterpString::AstExprInterpString(Luau::Location const&,
   Luau::AstArray<Luau::AstArray<char> > const&, Luau::AstArray<Luau::AstExpr*> const&) */

void __thiscall
Luau::AstExprInterpString::AstExprInterpString
          (AstExprInterpString *this,Location *param_1,AstArray *param_2,AstArray *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = AstRtti<Luau::AstExprInterpString>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  *(undefined4 *)(this + 8) = uVar1;
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0xc) = uVar2;
  *(undefined ***)this = &PTR_visit_010158c8;
  uVar2 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x20) = uVar2;
  uVar2 = *(undefined8 *)param_3;
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(this + 0x30) = uVar2;
  return;
}


