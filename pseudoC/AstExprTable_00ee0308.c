// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstExprTable
// Entry Point: 00ee0308
// Size: 68 bytes
// Signature: undefined __thiscall AstExprTable(AstExprTable * this, Location * param_1, AstArray * param_2)


/* Luau::AstExprTable::AstExprTable(Luau::Location const&, Luau::AstArray<Luau::AstExprTable::Item>
   const&) */

void __thiscall
Luau::AstExprTable::AstExprTable(AstExprTable *this,Location *param_1,AstArray *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = AstRtti<Luau::AstExprTable>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  *(undefined4 *)(this + 8) = uVar1;
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0xc) = uVar2;
  *(undefined ***)this = &PTR_visit_010157a8;
  uVar2 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x20) = uVar2;
  return;
}


