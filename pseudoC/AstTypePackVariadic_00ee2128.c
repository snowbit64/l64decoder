// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstTypePackVariadic
// Entry Point: 00ee2128
// Size: 64 bytes
// Signature: undefined __thiscall AstTypePackVariadic(AstTypePackVariadic * this, Location * param_1, AstType * param_2)


/* Luau::AstTypePackVariadic::AstTypePackVariadic(Luau::Location const&, Luau::AstType*) */

void __thiscall
Luau::AstTypePackVariadic::AstTypePackVariadic
          (AstTypePackVariadic *this,Location *param_1,AstType *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(this + 8) = AstRtti<Luau::AstTypePackVariadic>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)param_1;
  *(AstType **)(this + 0x20) = param_2;
  *(undefined ***)this = &PTR_visit_01015e98;
  *(undefined8 *)(this + 0x14) = uVar2;
  *(undefined8 *)(this + 0xc) = uVar1;
  return;
}


