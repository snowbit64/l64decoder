// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstExprGlobal
// Entry Point: 00edfe78
// Size: 68 bytes
// Signature: undefined __thiscall AstExprGlobal(AstExprGlobal * this, Location * param_1, AstName * param_2)


/* Luau::AstExprGlobal::AstExprGlobal(Luau::Location const&, Luau::AstName const&) */

void __thiscall
Luau::AstExprGlobal::AstExprGlobal(AstExprGlobal *this,Location *param_1,AstName *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = AstRtti<Luau::AstExprGlobal>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  *(undefined4 *)(this + 8) = uVar1;
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0xc) = uVar2;
  uVar2 = *(undefined8 *)param_2;
  *(undefined ***)this = &PTR_visit_01015688;
  *(undefined8 *)(this + 0x20) = uVar2;
  return;
}


