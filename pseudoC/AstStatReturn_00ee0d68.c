// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstStatReturn
// Entry Point: 00ee0d68
// Size: 72 bytes
// Signature: undefined __thiscall AstStatReturn(AstStatReturn * this, Location * param_1, AstArray * param_2)


/* Luau::AstStatReturn::AstStatReturn(Luau::Location const&, Luau::AstArray<Luau::AstExpr*> const&)
    */

void __thiscall
Luau::AstStatReturn::AstStatReturn(AstStatReturn *this,Location *param_1,AstArray *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = AstRtti<Luau::AstStatReturn>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  *(undefined4 *)(this + 8) = uVar1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  this[0x1c] = (AstStatReturn)0x0;
  *(undefined8 *)(this + 0x14) = uVar3;
  *(undefined8 *)(this + 0xc) = uVar2;
  *(undefined ***)this = &PTR_visit_01015a18;
  uVar2 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x20) = uVar2;
  return;
}


