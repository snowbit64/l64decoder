// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstStatLocal
// Entry Point: 00ee0eb4
// Size: 96 bytes
// Signature: undefined __thiscall AstStatLocal(AstStatLocal * this, Location * param_1, AstArray * param_2, AstArray * param_3, optional * param_4)


/* Luau::AstStatLocal::AstStatLocal(Luau::Location const&, Luau::AstArray<Luau::AstLocal*> const&,
   Luau::AstArray<Luau::AstExpr*> const&, std::__ndk1::optional<Luau::Location> const&) */

void __thiscall
Luau::AstStatLocal::AstStatLocal
          (AstStatLocal *this,Location *param_1,AstArray *param_2,AstArray *param_3,
          optional *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(this + 8) = AstRtti<Luau::AstStatLocal>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  this[0x1c] = (AstStatLocal)0x0;
  *(undefined ***)this = &PTR_visit_01015a78;
  *(undefined8 *)(this + 0x14) = uVar3;
  *(undefined8 *)(this + 0xc) = uVar2;
  uVar2 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x20) = uVar2;
  uVar2 = *(undefined8 *)param_3;
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(this + 0x30) = uVar2;
  uVar2 = *(undefined8 *)param_4;
  uVar1 = *(undefined4 *)(param_4 + 0x10);
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(this + 0x40) = uVar2;
  *(undefined4 *)(this + 0x50) = uVar1;
  return;
}


