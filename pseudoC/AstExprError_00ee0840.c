// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstExprError
// Entry Point: 00ee0840
// Size: 72 bytes
// Signature: undefined __thiscall AstExprError(AstExprError * this, Location * param_1, AstArray * param_2, uint param_3)


/* Luau::AstExprError::AstExprError(Luau::Location const&, Luau::AstArray<Luau::AstExpr*> const&,
   unsigned int) */

void __thiscall
Luau::AstExprError::AstExprError
          (AstExprError *this,Location *param_1,AstArray *param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(this + 8) = AstRtti<Luau::AstExprError>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)param_1;
  *(undefined ***)this = &PTR_visit_01015898;
  *(undefined8 *)(this + 0x14) = uVar2;
  *(undefined8 *)(this + 0xc) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)param_2;
  *(uint *)(this + 0x30) = param_3;
  *(undefined8 *)(this + 0x28) = uVar2;
  *(undefined8 *)(this + 0x20) = uVar1;
  return;
}


