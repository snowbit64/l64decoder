// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstStatContinue
// Entry Point: 00ee0d10
// Size: 64 bytes
// Signature: undefined __thiscall AstStatContinue(AstStatContinue * this, Location * param_1)


/* Luau::AstStatContinue::AstStatContinue(Luau::Location const&) */

void __thiscall Luau::AstStatContinue::AstStatContinue(AstStatContinue *this,Location *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = AstRtti<Luau::AstStatContinue>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  *(undefined4 *)(this + 8) = uVar1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  this[0x1c] = (AstStatContinue)0x0;
  *(undefined8 *)(this + 0x14) = uVar3;
  *(undefined8 *)(this + 0xc) = uVar2;
  *(undefined ***)this = &PTR_visit_010159e8;
  return;
}


