// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstStatError
// Entry Point: 00ee18ec
// Size: 84 bytes
// Signature: undefined __thiscall AstStatError(AstStatError * this, Location * param_1, AstArray * param_2, AstArray * param_3, uint param_4)


/* Luau::AstStatError::AstStatError(Luau::Location const&, Luau::AstArray<Luau::AstExpr*> const&,
   Luau::AstArray<Luau::AstStat*> const&, unsigned int) */

void __thiscall
Luau::AstStatError::AstStatError
          (AstStatError *this,Location *param_1,AstArray *param_2,AstArray *param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(this + 8) = AstRtti<Luau::AstStatError>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)param_1;
  this[0x1c] = (AstStatError)0x0;
  *(undefined ***)this = &PTR_visit_01015c88;
  *(undefined8 *)(this + 0x14) = uVar2;
  *(undefined8 *)(this + 0xc) = uVar1;
  uVar1 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x20) = uVar1;
  uVar2 = *(undefined8 *)(param_3 + 8);
  uVar1 = *(undefined8 *)param_3;
  *(uint *)(this + 0x40) = param_4;
  *(undefined8 *)(this + 0x38) = uVar2;
  *(undefined8 *)(this + 0x30) = uVar1;
  return;
}


