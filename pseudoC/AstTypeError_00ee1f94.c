// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstTypeError
// Entry Point: 00ee1f94
// Size: 76 bytes
// Signature: undefined __thiscall AstTypeError(AstTypeError * this, Location * param_1, AstArray * param_2, bool param_3, uint param_4)


/* Luau::AstTypeError::AstTypeError(Luau::Location const&, Luau::AstArray<Luau::AstType*> const&,
   bool, unsigned int) */

void __thiscall
Luau::AstTypeError::AstTypeError
          (AstTypeError *this,Location *param_1,AstArray *param_2,bool param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(this + 8) = AstRtti<Luau::AstTypeError>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)param_1;
  *(undefined ***)this = &PTR_visit_01015e38;
  *(undefined8 *)(this + 0x14) = uVar2;
  *(undefined8 *)(this + 0xc) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)param_2;
  this[0x30] = (AstTypeError)param_3;
  *(uint *)(this + 0x34) = param_4;
  *(undefined8 *)(this + 0x28) = uVar2;
  *(undefined8 *)(this + 0x20) = uVar1;
  return;
}


