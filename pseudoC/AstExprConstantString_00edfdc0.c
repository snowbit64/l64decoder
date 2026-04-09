// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstExprConstantString
// Entry Point: 00edfdc0
// Size: 68 bytes
// Signature: undefined __thiscall AstExprConstantString(AstExprConstantString * this, Location * param_1, AstArray * param_2)


/* Luau::AstExprConstantString::AstExprConstantString(Luau::Location const&, Luau::AstArray<char>
   const&) */

void __thiscall
Luau::AstExprConstantString::AstExprConstantString
          (AstExprConstantString *this,Location *param_1,AstArray *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = AstRtti<Luau::AstExprConstantString>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  *(undefined4 *)(this + 8) = uVar1;
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0xc) = uVar2;
  *(undefined ***)this = &PTR_visit_01015628;
  uVar2 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x20) = uVar2;
  return;
}


