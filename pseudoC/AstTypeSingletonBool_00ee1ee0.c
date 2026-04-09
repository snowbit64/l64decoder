// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstTypeSingletonBool
// Entry Point: 00ee1ee0
// Size: 64 bytes
// Signature: undefined __thiscall AstTypeSingletonBool(AstTypeSingletonBool * this, Location * param_1, bool param_2)


/* Luau::AstTypeSingletonBool::AstTypeSingletonBool(Luau::Location const&, bool) */

void __thiscall
Luau::AstTypeSingletonBool::AstTypeSingletonBool
          (AstTypeSingletonBool *this,Location *param_1,bool param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(this + 8) = AstRtti<Luau::AstTypeSingletonBool>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)param_1;
  this[0x1c] = (AstTypeSingletonBool)param_2;
  *(undefined ***)this = &PTR_visit_01015dd8;
  *(undefined8 *)(this + 0x14) = uVar2;
  *(undefined8 *)(this + 0xc) = uVar1;
  return;
}


