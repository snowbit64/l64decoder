// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstTypePackGeneric
// Entry Point: 00ee21bc
// Size: 64 bytes
// Signature: undefined __thiscall AstTypePackGeneric(AstTypePackGeneric * this, Location * param_1, AstName param_2)


/* Luau::AstTypePackGeneric::AstTypePackGeneric(Luau::Location const&, Luau::AstName) */

void __thiscall
Luau::AstTypePackGeneric::AstTypePackGeneric
          (AstTypePackGeneric *this,undefined8 *param_1,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(this + 8) = AstRtti<Luau::AstTypePackGeneric>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  uVar2 = param_1[1];
  uVar1 = *param_1;
  *(undefined8 *)(this + 0x20) = param_3;
  *(undefined ***)this = &PTR_visit_01015ec8;
  *(undefined8 *)(this + 0x14) = uVar2;
  *(undefined8 *)(this + 0xc) = uVar1;
  return;
}


