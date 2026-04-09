// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstExprLocal
// Entry Point: 00edfe1c
// Size: 68 bytes
// Signature: undefined __thiscall AstExprLocal(AstExprLocal * this, Location * param_1, AstLocal * param_2, bool param_3)


/* Luau::AstExprLocal::AstExprLocal(Luau::Location const&, Luau::AstLocal*, bool) */

void __thiscall
Luau::AstExprLocal::AstExprLocal
          (AstExprLocal *this,Location *param_1,AstLocal *param_2,bool param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = AstRtti<Luau::AstExprLocal>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  *(undefined4 *)(this + 8) = uVar1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  *(AstLocal **)(this + 0x20) = param_2;
  *(undefined ***)this = &PTR_visit_01015658;
  this[0x28] = (AstExprLocal)param_3;
  *(undefined8 *)(this + 0x14) = uVar3;
  *(undefined8 *)(this + 0xc) = uVar2;
  return;
}


