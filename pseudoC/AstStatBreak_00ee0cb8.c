// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstStatBreak
// Entry Point: 00ee0cb8
// Size: 64 bytes
// Signature: undefined __thiscall AstStatBreak(AstStatBreak * this, Location * param_1)


/* Luau::AstStatBreak::AstStatBreak(Luau::Location const&) */

void __thiscall Luau::AstStatBreak::AstStatBreak(AstStatBreak *this,Location *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = AstRtti<Luau::AstStatBreak>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  *(undefined4 *)(this + 8) = uVar1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  this[0x1c] = (AstStatBreak)0x0;
  *(undefined8 *)(this + 0x14) = uVar3;
  *(undefined8 *)(this + 0xc) = uVar2;
  *(undefined ***)this = &PTR_visit_010159b8;
  return;
}


