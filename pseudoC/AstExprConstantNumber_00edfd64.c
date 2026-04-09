// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstExprConstantNumber
// Entry Point: 00edfd64
// Size: 68 bytes
// Signature: undefined __thiscall AstExprConstantNumber(AstExprConstantNumber * this, Location * param_1, double param_2, ConstantNumberParseResult param_3)


/* Luau::AstExprConstantNumber::AstExprConstantNumber(Luau::Location const&, double,
   Luau::ConstantNumberParseResult) */

void __thiscall
Luau::AstExprConstantNumber::AstExprConstantNumber
          (AstExprConstantNumber *this,Location *param_1,double param_2,
          ConstantNumberParseResult param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = AstRtti<Luau::AstExprConstantNumber>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  *(undefined4 *)(this + 8) = uVar1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  *(double *)(this + 0x20) = param_2;
  *(undefined ***)this = &PTR_visit_010155f8;
  *(ConstantNumberParseResult *)(this + 0x28) = param_3;
  *(undefined8 *)(this + 0x14) = uVar3;
  *(undefined8 *)(this + 0xc) = uVar2;
  return;
}


