// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstStatLocalFunction
// Entry Point: 00ee145c
// Size: 68 bytes
// Signature: undefined __thiscall AstStatLocalFunction(AstStatLocalFunction * this, Location * param_1, AstLocal * param_2, AstExprFunction * param_3)


/* Luau::AstStatLocalFunction::AstStatLocalFunction(Luau::Location const&, Luau::AstLocal*,
   Luau::AstExprFunction*) */

void __thiscall
Luau::AstStatLocalFunction::AstStatLocalFunction
          (AstStatLocalFunction *this,Location *param_1,AstLocal *param_2,AstExprFunction *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(this + 8) = AstRtti<Luau::AstStatLocalFunction>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)param_1;
  this[0x1c] = (AstStatLocalFunction)0x0;
  *(AstLocal **)(this + 0x20) = param_2;
  *(AstExprFunction **)(this + 0x28) = param_3;
  *(undefined ***)this = &PTR_visit_01015b98;
  *(undefined8 *)(this + 0x14) = uVar2;
  *(undefined8 *)(this + 0xc) = uVar1;
  return;
}


