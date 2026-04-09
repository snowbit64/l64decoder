// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstStatAssign
// Entry Point: 00ee1218
// Size: 80 bytes
// Signature: undefined __thiscall AstStatAssign(AstStatAssign * this, Location * param_1, AstArray * param_2, AstArray * param_3)


/* Luau::AstStatAssign::AstStatAssign(Luau::Location const&, Luau::AstArray<Luau::AstExpr*> const&,
   Luau::AstArray<Luau::AstExpr*> const&) */

void __thiscall
Luau::AstStatAssign::AstStatAssign
          (AstStatAssign *this,Location *param_1,AstArray *param_2,AstArray *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = AstRtti<Luau::AstStatAssign>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  *(undefined4 *)(this + 8) = uVar1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  this[0x1c] = (AstStatAssign)0x0;
  *(undefined8 *)(this + 0x14) = uVar3;
  *(undefined8 *)(this + 0xc) = uVar2;
  *(undefined ***)this = &PTR_visit_01015b08;
  uVar2 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x20) = uVar2;
  uVar2 = *(undefined8 *)param_3;
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(this + 0x30) = uVar2;
  return;
}


