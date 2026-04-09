// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstTypeIntersection
// Entry Point: 00ee1e30
// Size: 68 bytes
// Signature: undefined __thiscall AstTypeIntersection(AstTypeIntersection * this, Location * param_1, AstArray * param_2)


/* Luau::AstTypeIntersection::AstTypeIntersection(Luau::Location const&,
   Luau::AstArray<Luau::AstType*> const&) */

void __thiscall
Luau::AstTypeIntersection::AstTypeIntersection
          (AstTypeIntersection *this,Location *param_1,AstArray *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = AstRtti<Luau::AstTypeIntersection>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  *(undefined4 *)(this + 8) = uVar1;
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0xc) = uVar2;
  *(undefined ***)this = &PTR_visit_01015da8;
  uVar2 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x20) = uVar2;
  return;
}


